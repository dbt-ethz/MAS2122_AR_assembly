using System;
using System.Collections.Generic;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.XR.Management;
using LegacyMeshId = UnityEngine.XR.MeshId;

namespace UnityEngine.XR.ARFoundation
{
    /// <summary>
    /// A manager for triangle meshes generated by an AR device.
    /// Creates, updates, and removes [`GameObject`](https://docs.unity3d.com/ScriptReference/GameObject.html)s in
    /// response to the environment. For each mesh, a <see cref="meshPrefab"/> is instantiated which must contain at
    /// least a [`MeshFilter`](https://docs.unity3d.com/ScriptReference/MeshFilter.html). If the
    /// <see cref="meshPrefab"/>'s `GameObject` also has a
    /// [`MeshCollider`](https://docs.unity3d.com/ScriptReference/MeshCollider.html), then a physics mesh is generated
    /// asynchronously, without blocking the main thread.
    /// </summary>
    [DefaultExecutionOrder(ARUpdateOrder.k_MeshManager)]
    [DisallowMultipleComponent]
    [HelpURL(HelpUrls.ApiWithNamespace + nameof(ARMeshManager) + ".html")]
    public class ARMeshManager : MonoBehaviour
    {
        [SerializeField]
        [Tooltip("The prefab to be instantiated for each generated mesh. MeshColliders are processed asynchronously and do not block the main thread.")]
        MeshFilter m_MeshPrefab;

        /// <summary>
        /// A prefab to be instantiated for each generated mesh. The prefab must have at least a
        /// [`MeshFilter`](https://docs.unity3d.com/ScriptReference/MeshFilter.html) component on it.
        /// If it also has a [`MeshCollider`](https://docs.unity3d.com/ScriptReference/MeshCollider.html)
        /// component, the physics bounding volume data will be generated asynchronously. This does not block the
        /// main thread, but may take longer to process.
        /// </summary>
        public MeshFilter meshPrefab
        {
            get => m_MeshPrefab;
            set => m_MeshPrefab = value;
        }

        [SerializeField]
        [Tooltip("The density of the generated mesh [0..1]. 1 will be highly tessellated while 0 will be very low.\n\nThis feature may not be implemented on all platforms. See the platform-specific package documentation for your platform.")]
        [Range(0, 1)]
        float m_Density = 0.5f;

        /// <summary>
        /// The density of the generated mesh [0..1]. 1 will be densely tessellated,
        /// while 0 will have the lowest supported tessellation.
        /// </summary>
        public float density
        {
            get => m_Density;
            set
            {
                if (value < 0f || value > 1f)
                    throw new ArgumentOutOfRangeException(nameof(value), value, "Mesh density must be between 0 and 1, inclusive.");

                m_Density = value;
                if (m_Subsystem != null)
                    m_Subsystem.meshDensity = m_Density;
            }
        }

        [SerializeField]
        [Tooltip("If enabled, a normal is requested for each vertex.\n\nThis feature may not be implemented on all platforms. See the platform-specific package documentation for your platform.")]
        bool m_Normals = true;

        /// <summary>
        /// If `true`, requests a normal for each vertex in generated meshes.
        /// </summary>
        public bool normals
        {
            get => m_Normals;
            set => m_Normals = value;
        }

        [SerializeField]
        [Tooltip("If enabled, a tangent is requested for each vertex.\n\nThis feature may not be implemented on all platforms. See the platform-specific package documentation for your platform.")]
        bool m_Tangents;

        /// <summary>
        /// If `true`, requests a tangent for each vertex in generated meshes.
        /// </summary>
        public bool tangents
        {
            get => m_Tangents;
            set => m_Tangents = value;
        }

        [SerializeField]
        [Tooltip("If enabled, a UV texture coordinate is requested for each vertex.\n\nThis feature may not be implemented on all platforms. See the platform-specific package documentation for your platform.")]
        bool m_TextureCoordinates;

        /// <summary>
        /// If `true`, requests a texture coordinate for each vertex in generated meshes.
        /// </summary>
        public bool textureCoordinates
        {
            get => m_TextureCoordinates;
            set => m_TextureCoordinates = value;
        }

        [SerializeField]
        [Tooltip("If enabled, a color value is requested for each vertex.\n\nThis feature may not be implemented on all platforms. See the platform-specific package documentation for your platform.")]
        bool m_Colors;

        /// <summary>
        /// If `true`, requests a color value for each vertex in generated meshes.
        /// </summary>
        public bool colors
        {
            get => m_Colors;
            set => m_Colors = value;
        }

        [SerializeField]
        [Tooltip("The number of meshes to process concurrently. Higher values require more CPU time.")]
        int m_ConcurrentQueueSize = 4;

        /// <summary>
        /// The number of meshes to process concurrently. Meshes are processed on a background
        /// thread. Higher numbers will require additional CPU time.
        /// </summary>
        public int concurrentQueueSize
        {
            get => m_ConcurrentQueueSize;
            set => m_ConcurrentQueueSize = value;
        }

        /// <summary>
        /// Invoked whenever meshes have changed (been added, updated, or removed).
        /// </summary>
        public event Action<ARMeshesChangedEventArgs> meshesChanged;

        /// <summary>
        /// The [`XRMeshSubsystem`](https://docs.unity3d.com/ScriptReference/XR.XRMeshSubsystem.html)
        /// used by this component to generate meshes.
        /// </summary>
        public XRMeshSubsystem subsystem => m_Subsystem;

        /// <summary>
        /// Returns a collection of [`MeshFilter`](https://docs.unity3d.com/ScriptReference/MeshFilter.html)s
        /// representing meshes generated by this component.
        /// </summary>
        public IList<MeshFilter> meshes => m_Meshes.Values;

        /// <summary>
        /// Destroys all generated meshes and ignores any pending meshes.
        /// </summary>
        public void DestroyAllMeshes()
        {
            m_Pending.Clear();
            m_Generating.Clear();
            foreach (var meshFilter in meshes)
            {
                if (meshFilter != null)
                    Destroy(meshFilter.gameObject);
            }
            m_Meshes.Clear();
        }

        internal ARSessionOrigin GetSessionOrigin() => transform.GetComponentInParent<ARSessionOrigin>();

#if UNITY_EDITOR
        void Reset()
        {
            if (GetSessionOrigin() != null)
                transform.localScale = Vector3.one * 10f;
        }

        void OnValidate()
        {
            if (GetSessionOrigin() == null)
            {
                UnityEditor.EditorUtility.DisplayDialog(
                    "Hierarchy not allowed",
                    $"An {nameof(ARMeshManager)} must be a child of an {nameof(ARSessionOrigin)}.",
                    "Remove Component");
                UnityEditor.EditorApplication.delayCall += ()=>
                {
                    DestroyImmediate(this);
                };
            }
        }
#endif

        void SetBoundingVolume()
        {
            m_Subsystem.SetBoundingVolume(transform.localPosition, transform.localScale);
            transform.hasChanged = false;
        }

        void OnEnable()
        {
            if (GetSessionOrigin() == null)
            {
                enabled = false;
                throw new InvalidOperationException($"An {nameof(ARMeshManager)} must be a child of an {nameof(ARSessionOrigin)}.");
            }

            if (m_Subsystem == null)
                m_Subsystem = GetActiveSubsystemInstance();

            if (m_Subsystem != null)
            {
                m_Subsystem.meshDensity = m_Density;
                SetBoundingVolume();
                m_Subsystem.Start();
            }
            else
            {
                enabled = false;
            }
        }

        static XRMeshSubsystem GetActiveSubsystemInstance()
        {
            XRMeshSubsystem activeSubsystem = null;

            // Query the currently active loader for the created subsystem, if one exists.
            if (XRGeneralSettings.Instance != null && XRGeneralSettings.Instance.Manager != null)
            {
                var loader = XRGeneralSettings.Instance.Manager.activeLoader;
                if (loader != null)
                {
                    activeSubsystem = loader.GetLoadedSubsystem<XRMeshSubsystem>();
                }
            }

            if (activeSubsystem == null)
            {
                Debug.LogWarning($"No active {typeof(XRMeshSubsystem).FullName} is available. Please ensure that a valid loader configuration exists in the XR project settings and that meshing is supported.");
            }

            return activeSubsystem;
        }

        void OnDrawGizmosSelected()
        {
            Gizmos.color = new Color(0, .5f, 0, .35f);
            Gizmos.matrix = transform.localToWorldMatrix;
            Gizmos.DrawCube(Vector3.zero, Vector3.one);
        }

        void Update()
        {
            if (m_Subsystem != null)
            {
                if (transform.hasChanged)
                    SetBoundingVolume();

                UpdateMeshInfos();

                if (m_MeshPrefab != null)
                    Generate();
            }

            // Invoke user callbacks
            try
            {
                if (meshesChanged != null && (m_Added.Count + m_Updated.Count + m_Removed.Count > 0))
                {
                    meshesChanged(new ARMeshesChangedEventArgs(m_Added, m_Updated, m_Removed));
                }
            }
            finally
            {
                // Make sure we clear the internal lists if user code throws an exception
                m_Added.Clear();
                m_Updated.Clear();

                foreach (var meshFilter in m_Removed)
                {
                    if (meshFilter != null)
                        Destroy(meshFilter.gameObject);
                }

                m_Removed.Clear();
            }
        }

        void Generate()
        {
            var vertexAttributes = MeshVertexAttributes.None;
            if (m_Normals)
                vertexAttributes |= MeshVertexAttributes.Normals;
            if (m_Tangents)
                vertexAttributes |= MeshVertexAttributes.Tangents;
            if (m_TextureCoordinates)
                vertexAttributes |= MeshVertexAttributes.UVs;
            if (m_Colors)
                vertexAttributes |= MeshVertexAttributes.Colors;

            while ((m_Generating.Count < m_ConcurrentQueueSize) &&
                   m_Pending.TryDequeue(m_Generating, out MeshInfo meshInfo))
            {
                var meshId = meshInfo.MeshId;
                var meshFilter = GetOrCreateMeshFilter(GetTrackableId(meshId));
                var meshCollider = meshFilter.GetComponent<MeshCollider>();
                var mesh = (meshFilter.sharedMesh != null) ? meshFilter.sharedMesh : meshFilter.mesh;

                m_Generating.Add(meshId, meshInfo);
                m_Subsystem.GenerateMeshAsync(
                    meshInfo.MeshId,
                    mesh,
                    meshCollider,
                    vertexAttributes,
                    m_OnMeshGeneratedDelegate);
            }
        }

        void OnMeshGenerated(MeshGenerationResult result)
        {
            if (!m_Generating.TryGetValue(result.MeshId, out MeshInfo meshInfo))
                return;

            m_Generating.Remove(result.MeshId);

            if (result.Status != MeshGenerationStatus.Success)
                return;

            if (!m_Meshes.TryGetValue(GetTrackableId(result.MeshId), out MeshFilter meshFilter) || (meshFilter == null))
                return;

            meshFilter.gameObject.SetActive(true);

            switch (meshInfo.ChangeState)
            {
                case MeshChangeState.Added:
                    m_Added.Add(meshFilter);
                    break;
                case MeshChangeState.Updated:
                    m_Updated.Add(meshFilter);
                    break;

                // Removed/unchanged meshes don't get generated.
                default:
                    break;
            }
        }

        void UpdateMeshInfos()
        {
            if (m_Subsystem.TryGetMeshInfos(s_MeshInfos))
            {
                foreach (var meshInfo in s_MeshInfos)
                {
                    switch (meshInfo.ChangeState)
                    {
                        case MeshChangeState.Added:
                        case MeshChangeState.Updated:
                            m_Pending.EnqueueUnique(meshInfo);
                            break;

                        case MeshChangeState.Removed:
                            // Remove from processing queues
                            m_Pending.Remove(meshInfo.MeshId);
                            m_Generating.Remove(meshInfo.MeshId);

                            // Add to list of removed meshes
                            var trackableId = GetTrackableId(meshInfo.MeshId);
                            if (m_Meshes.TryGetValue(trackableId, out MeshFilter meshFilter))
                            {
                                m_Meshes.Remove(trackableId);
                                if (meshFilter != null)
                                    m_Removed.Add(meshFilter);
                            }

                            break;

                        default:
                            break;
                    }
                }
            }
        }

        void OnDisable()
        {
            if (m_Subsystem != null)
                m_Subsystem.Stop();
        }

        void OnDestroy()
        {
            m_Subsystem = null;
        }

        MeshFilter GetOrCreateMeshFilter(TrackableId trackableId)
        {
            // If the mesh filter is Destroyed by user code, then meshFilter will compare
            // equal with null. In that case, we want to recreate it.
            if (m_Meshes.TryGetValue(trackableId, out MeshFilter meshFilter) && (meshFilter != null))
                return meshFilter;

            var sessionOrigin = GetSessionOrigin();
            meshFilter = (sessionOrigin == null) ?
                Instantiate(m_MeshPrefab) :
                Instantiate(m_MeshPrefab, sessionOrigin.trackablesParent);

            meshFilter.gameObject.name = $"Mesh {trackableId.ToString()}";

            // The GameObject should start life inactive until we've populated it
            meshFilter.gameObject.SetActive(false);

            m_Meshes[trackableId] = meshFilter;

            return meshFilter;
        }

        internal static unsafe TrackableId GetTrackableId(LegacyMeshId trackableId)
        {
            return *(TrackableId*)&trackableId;
        }

        internal static unsafe LegacyMeshId GetLegacyMeshId(TrackableId trackableId)
        {
            return *(LegacyMeshId*)&trackableId;
        }

        void Awake()
        {
            m_Added = new List<MeshFilter>();
            m_Updated = new List<MeshFilter>();
            m_Removed = new List<MeshFilter>();
            m_Pending = new MeshQueue();
            m_Generating = new Dictionary<LegacyMeshId, MeshInfo>();
            m_Meshes = new SortedList<TrackableId, MeshFilter>(s_TrackableIdComparer);
            m_OnMeshGeneratedDelegate = new Action<MeshGenerationResult>(OnMeshGenerated);
        }

        class TrackableIdComparer : IComparer<TrackableId>
        {
            public int Compare(TrackableId trackableIdA, TrackableId trackableIdB)
            {
                if (trackableIdA.subId1 == trackableIdB.subId1)
                {
                    return trackableIdA.subId2.CompareTo(trackableIdB.subId2);
                }
                else
                {
                    return trackableIdA.subId1.CompareTo(trackableIdB.subId1);
                }
            }
        }

        List<MeshFilter> m_Added;

        List<MeshFilter> m_Updated;

        List<MeshFilter> m_Removed;

        MeshQueue m_Pending;

        Dictionary<LegacyMeshId, MeshInfo> m_Generating;

        SortedList<TrackableId, MeshFilter> m_Meshes;

        Action<MeshGenerationResult> m_OnMeshGeneratedDelegate;

        XRMeshSubsystem m_Subsystem;

        static TrackableIdComparer s_TrackableIdComparer = new TrackableIdComparer();

        static List<MeshInfo> s_MeshInfos = new List<MeshInfo>();

        static List<XRMeshSubsystemDescriptor> s_SubsystemDescriptors =
            new List<XRMeshSubsystemDescriptor>();
    }
}
