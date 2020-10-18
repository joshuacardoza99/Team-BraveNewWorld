using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ChangeScene : MonoBehaviour
{
    // External Classes//
    import_manager import_manager;

    void Start()
    {
        import_manager = GameObject.Find("network_manager").GetComponent<import_manager>();
        DontDestroyOnLoad(transform.gameObject);
    }

    public void buttonChangeScene(string sceneName)
    {
        SceneManager.LoadScene(sceneName);

        if (sceneName == "Game")
        {
            import_manager.run_function_all("MapGenerator", "generate_map", new string[0] { });
        }
        
    }
}
