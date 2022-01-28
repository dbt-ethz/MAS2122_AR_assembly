using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.UI;

public class ActivateGrabbing : MonoBehaviour
{
    private ObjectManipulator manipulater;

    void Start()
    {
        manipulater = this.GetComponent<ObjectManipulator>();
    }

    // Update is called once per frame
    public void ActivateTrueFalse()
    {
        manipulater.enabled = !manipulater.enabled;
    }
}
