using System.Collections;
using System.Collections.Generic;
using System.Dynamic;
using UnityEngine;

public class MapGenerator : MonoBehaviour
{
    // External Classes//
    import_manager import_manager;

    // Public Global Vairables
    public GameObject ground;
    public int width = 10;
    public string baseName = "ground";
    public float xScale = 30;
    public float yScale = 1;
    public float zScale = 30;
    public string currentSelected; // stores what tile is currently selected

    // Get the name of the current selected tile
    public string get_current()
    {
        return currentSelected;
    }
    // Set current selected tile
    // parameters = setcurrent(this.name)
    public void set_current(string[] input)
    {
        this.currentSelected = input[0];
    }

    //Unselect previously selected tile
    // string parameter = empty (not used)
    public void unselect_tile(string[] parameter)
    {
        import_manager.run_function(get_current(), "unselect", new string[0] { });
    }


    void Start()
    {
        import_manager = GameObject.Find("network_manager").GetComponent<import_manager>();

        
        //find_nearby(new string[2]{transform.GameObject.name, "1"})
        //find_nearby(new string[2] { "ground_1_0_1", "1" });
    }


  /*  public string[][] make_map_plan(string[] parameter)
    {
        return new string[1] {new string[0]{}};
    }*/
    // Create a new map for a game.
    // Parameters = []
    public void generate_map(string[] parameters)
    {
        import_manager.run_function_all("Map", "create_ground_area", new string[4] {"0", "0", width.ToString(), width.ToString()});
    }
    
    // Loads an existing map for a game.
    // Parameters = []
    public void load_map(string[] parameters)
    {
        create_ground_area(new string[4] {"0", "0", width.ToString(), width.ToString()});
    }

    // Create a strip of ground objects.
    // parameters = [float x start position, flaot z start posistion, int length, int width]
    public void create_ground_area(string[] parameters)
    {
        float xAxis = float.Parse(parameters[0]);
        float zAxis = float.Parse(parameters[1]);
        int length = int.Parse(parameters[2]);
        int width = int.Parse(parameters[3]);

        for (int i = 0; i < width; i++)
        {
            zAxis++;

            create_ground_strip(new string[3] { xAxis.ToString(), zAxis.ToString(), length.ToString() });
        }
    }

    // Create a strip of ground objects.
    // parameters = [float x start position, float z start posistion, int length]
    public void create_ground_strip(string[] parameters)
    {
        float xAxis = float.Parse(parameters[0]);
        float zAxis = float.Parse(parameters[1]);
        int length = int.Parse(parameters[2]);

        for (int i = 0; i < length; i++)
        {
            xAxis++;

            create_ground(new string[2] { xAxis.ToString(), zAxis.ToString() });
        }
    }

    // Creates one ground object
    // parameters = [float x position, float z position]
    public void create_ground(string[] parameters)
    {
        float xAxis = float.Parse(parameters[0]);
        float zAxis = float.Parse(parameters[1]);
        ground.name = baseName + "_" + xAxis.ToString() + "_0_" + zAxis.ToString();
        Instantiate(ground, new Vector3(xAxis * xScale, 0, zAxis * zScale), Quaternion.identity); // create the tile
        
    }

    // Find near by objects
    // parameters = [string groundName, int radius, string function, string[] parameters]
    /*public void find_nearby(string[] parameters)
    {
        string[] groundName = parameters[0].Split('_');
        float xAxis = float.Parse(groundName[1]);
        float yAxis = float.Parse(groundName[2]);
        float zAxis = float.Parse(groundName[3]);
        int radius = int.Parse(parameters[1]);
        string newName = baseName;

        try
        {
            for (float currentX = (xAxis - radius); currentX <= (xAxis + radius); currentX++)
            {
                for (float currentZ = (zAxis - radius); currentZ <= (zAxis + radius); currentZ++)
                {
                   if(currentX != xAxis || currentZ != zAxis)
                   {
                      newName = baseName + "_" + currentX.ToString() + "_" + yAxis.ToString() + "_" + currentZ.ToString();
                      //import_manager.run_function(newName, parameters[2], parameters[3]);
                   }
                }
            }
        }
        catch
        { }
    }*/
}