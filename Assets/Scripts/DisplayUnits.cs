using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DisplayUnits : MonoBehaviour
{
    private int currentIndex = 0;
    //public Material currentMats;
    //public Material previousMats;

    private GameObject currentUnit;
    private GameObject previousUnit;
    private GameObject parent;

    private int listLength = 0;

    private void Start()
    {
        foreach (Transform child in transform.Find("units"))
        {
            listLength += 1;
        }
        parent = GameObject.Find("units");

    }

    public void displayOnOff()
    {
        parent.SetActive(!parent.activeSelf);
    }

    public void GoNext()
    {
        if (currentIndex >= listLength) Debug.Log("It is already the last unit!");
        else
        {
            currentIndex += 1;

            // set current unit as previous unit, change its material
            if (currentIndex > 1)
            {
                previousUnit = currentUnit;
                //previousUnit.transform.Find((currentIndex-1).ToString() + "0").gameObject.GetComponent<Renderer>().material = previousMats;
            }

            //get new current unit
            string currentName = currentIndex.ToString();

            currentUnit = this.transform.Find("units").Find(currentName).gameObject;

            currentUnit.SetActive(true);
            //currentUnit.transform.Find(currentIndex.ToString() + "0").gameObject.GetComponent<Renderer>().material = currentMats;

        }

    }

    public void GoPrevious()
    {
        if (currentIndex <= 1) Debug.Log("It is already the first unit!");
        else
        {
            currentUnit.SetActive(false);
            currentIndex -= 1;

            currentUnit = previousUnit;
            //currentUnit.transform.Find(currentIndex.ToString() + "0").gameObject.GetComponent<Renderer>().material = currentMats;

            if (currentIndex > 1)
            {
                string previousName = (currentIndex - 1).ToString();

                previousUnit = this.transform.Find("units").Find(previousName).gameObject;
            }

            
        }
        
    
    }

}
