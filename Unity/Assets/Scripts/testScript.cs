using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class testScript : MonoBehaviour
{
    public string newLines;
    public GameObject testGO;

    void Start()
    {
        Debug.Log("test starts");
        writeNewLines(newLines);
        Instantiate(testGO, Vector3.zero, Quaternion.identity);
    }

    private void writeNewLines(string newLines)
    {
        Debug.Log(newLines);
    }

}
