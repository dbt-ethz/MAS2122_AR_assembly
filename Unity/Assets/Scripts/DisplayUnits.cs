using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DisplayUnits : MonoBehaviour
{
    private int currentIndex = 0;

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

            //get new current unit
            string currentName = currentIndex.ToString();

            currentUnit = this.transform.Find("units").Find(currentName).gameObject;

            currentUnit.SetActive(true);

        }

    }

    public void GoPrevious()
    {
        if (currentIndex <= 1) Debug.Log("It is already the first unit!");
        else
        {
            currentUnit.SetActive(false);
            currentIndex -= 1;

            if (currentIndex > 1)
            {
                string previousName = (currentIndex - 1).ToString();

                previousUnit = this.transform.Find("units").Find(previousName).gameObject;
            }

        }

    }

}
