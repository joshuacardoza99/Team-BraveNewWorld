using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class civ_description : MonoBehaviour
{
    public Text descriptionText = null;
    public int selectedCiv;

    void Update()
    {
        switch (selectedCiv)
        {
            case 1:
                descriptionText.text = "Viking";
                break;
            case 2:
                descriptionText.text = "Greece";
                break;
            default:
                descriptionText.text = "Asian";
                break;
        }
    }
}
