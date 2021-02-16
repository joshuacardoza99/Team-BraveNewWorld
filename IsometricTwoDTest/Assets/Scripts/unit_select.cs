using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class unit_select : MonoBehaviour
{
    [SerializeField]
    private List<unit_type> unitTypeList; // List of SO, connects any unit type being scripted

    [SerializeField]
    private unit_manager unit_manager;   // Makes varible visible in inspector and connect it to building_manager



    private void Awake()
    {
        Transform unitTemplate = transform.Find("unitTemplate");  // Use the template button made in unity for the button creation
        unitTemplate.gameObject.SetActive(false);

        int index = 0;                        // Index used to keep count of buttons

        // Loop processing creating buttons for each SO in unitTypeList
        foreach (unit_type unit_type in unitTypeList)
        {
            Transform unitTransform = Instantiate(unitTemplate, transform); // Instantiate button on the screen
            unitTransform.gameObject.SetActive(true);

            // Set the position of the button adn grab the sprite from the SO and attach it to the button
            unitTransform.GetComponent<RectTransform>().anchoredPosition += new Vector2(index * 180, 0);
            unitTransform.Find("Image").GetComponent<Image>().sprite = unit_type.sprite;

            // Set which ever button clicked on to the active building to use
            unitTransform.GetComponent<Button>().onClick.AddListener(() =>
            {
                unit_manager.set_active_unit_type(unit_type);
            });
            index++;
        }
    }
}
