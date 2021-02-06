using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class building_select : MonoBehaviour
{
    [SerializeField]
    private List<building_type> buildingTypeList;

    [SerializeField]
    private building_manager building_manager;

    public int index = 0;

    private void Awake()
    {
        Transform buildingTemplate = transform.Find("buildingTemplate");
        buildingTemplate.gameObject.SetActive(false);
        
        foreach (building_type building_type in buildingTypeList)
        {
            Transform buildingTransform = Instantiate(buildingTemplate, transform);
            buildingTransform.gameObject.SetActive(true);

            buildingTransform.GetComponent<RectTransform>().anchoredPosition += new Vector2(index * 150, 0);
            buildingTransform.Find("Image").GetComponent<Image>().sprite = building_type.sprite;

            buildingTransform.GetComponent<Button>().onClick.AddListener(() =>
            {
                building_manager.set_active_building_type(building_type);
            });
            index++;
        }
    }
}
