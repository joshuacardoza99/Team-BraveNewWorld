using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class building_select : MonoBehaviour
{
    [SerializeField]
    private List<building_type> buildingTypeSOList;

    private void Awake()
    {
        Transform buildingTemplate = transform.Find("buildingTemplate");
        buildingTemplate.gameObject.SetActive(false);

        int index = 0;
        foreach (building_type building_type in buildingTypeSOList)
        {
            Transform buildingTransform = Instantiate(buildingTemplate, transform);
            buildingTemplate.gameObject.SetActive(true);

            buildingTemplate.GetComponent<RectTransform>().anchoredPosition += new Vector2(index * 60, 0);
            buildingTemplate.Find("image").GetComponent<Image>().sprite = building_type.sprite;

            index++;
        }
    }
}
