using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class click_handlers : MonoBehaviour
{
    // External Classes//
    import_manager import_manager;

    public GameObject localGameButton;
    public GameObject canvas;

    private delegate double function_parameter();


    // Start is called before the first frame update
    void Start()
    {
        import_manager = GameObject.Find("network_manager").GetComponent<import_manager>();

        // Load the play local button.
        load_button(localGameButton, canvas, "click_local");
    }

    public void load_button(GameObject button, GameObject cavas, string clickAction)
    {
        GameObject activeButton;

        activeButton = Instantiate(button) as GameObject;
        activeButton.transform.SetParent(canvas.transform, false);
        activeButton.GetComponent<Button>().onClick.AddListener(() => { import_manager.run_function("button_manager", clickAction, new string[0] { }); });
    }

    // Starts a Local game when clicked.
    // Parameters = [];
    public void click_local (string[] parameters)
    {
        import_manager.run_function("network_manager", "start_local_game", new string[0] { });
        detroy_menu();
    }

    // Destroys the menu.
    public void detroy_menu ()
    {
        Destroy(canvas);
    }
}
