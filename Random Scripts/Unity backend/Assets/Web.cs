using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

// Unity Web Request
public class Web : MonoBehaviour
{
    void Start()  
    {
       StartCoroutine(GetDate());
       StartCoroutine(GetUsers());
       StartCoroutine(Login("testuser", "123456"));
       StartCoroutine(RegisterUser("testuser3", "123456"));
    }

    IEnumerator GetDate()
    {
        using (UnityWebRequest www = UnityWebRequest.Get("http://localhost/unitybackend/GetDate.php"))
        {
            // Request and wait for the desired page.
            yield return www.Send();

            if (www.isNetworkError || www.isHttpError)
            {
                Debug.Log(www.error);
            }

            else
            {
                Debug.Log(www.downloadHandler.text);       // Retrieve results as text
                byte[] results = www.downloadHandler.data; // Retrieve results as binary data
            }
        }
    }

    IEnumerator GetUsers()
    {
        using (UnityWebRequest www = UnityWebRequest.Get("http://localhost/unitybackend/GetUsers.php"))
        {
            // Request and wait for the desired page.

            if (www.isNetworkError || www.isHttpError)
            {
                Debug.Log(www.error);
            }

            else
            {
                Debug.Log(www.downloadHandler.text);       // Retrieve results as text
                byte[] results = www.downloadHandler.data; // Retrieve results as binary data
            }
        }
    }

   // Creates a UnityWebRequest configured to send form data to a server via HTTP POST.
   IEnumerator Login(string username, string password)
   {
      WWWForm form = new WWWForm();
      form.AddField("loginUser", "username");
      form.AddField("loginPassword", "password");

      using (UnityWebRequest www = UnityWebRequest.Post("http://localhost/unitybackend/Login.php", form))
      {
         yield return www.SendWebRequest();

         if (www.isNetworkError || www.isHttpError)
         {
            Debug.Log(www.error);
         }
         else
         {
            Debug.Log(www.downloadHandler.text);
         }
      }
   }

IEnumerator RegisterUser(string username, string password)
   {
      WWWForm form = new WWWForm();
      form.AddField("loginUser", "username");
      form.AddField("loginPassword", "password");

      using (UnityWebRequest www = UnityWebRequest.Post("http://localhost/unitybackend/RegisterUser.php", form))
      {
         yield return www.SendWebRequest();

         if (www.isNetworkError || www.isHttpError)
         {
            Debug.Log(www.error);
         }
         else
         {
            Debug.Log(www.downloadHandler.text);
         }
      }
   }
}