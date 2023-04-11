using UnityEngine;
using UnityEditor;

namespace VRUiKits.Utils
{
    public class DeviceControl : MonoBehaviour
    {
        static string[] uikitPlatformDefines = new string[] {
            "UIKIT_OCULUS", "UIKIT_VIVE", "UIKIT_VIVE_STEAM_2", "UIKIT_XR_INTERACTION"
        };


        [UnityEditor.MenuItem("Window/VR UIKit/Set XR Interaction Tookit")]
        static void SetupXRInteractionTookit()
        {
            SetPlatformCustomDefine("UIKIT_XR_INTERACTION");
        }


        public static void SetPlatformCustomDefine(string define)
        {
            string defines = PlayerSettings.GetScriptingDefineSymbolsForGroup(EditorUserBuildSettings.selectedBuildTargetGroup);

            // Remove uikit platform defines
            foreach (string item in uikitPlatformDefines)
            {
                if (defines.Contains(item))
                {
                    if (defines.Contains((";" + item)))
                    {
                        defines = defines.Replace((";" + item), "");
                    }
                    else
                    {
                        defines = defines.Replace(item, "");
                    }
                }
            }

            if (define != "" && !defines.Contains(define))
            {
                defines += ";" + define;
            }
            PlayerSettings.SetScriptingDefineSymbolsForGroup(EditorUserBuildSettings.selectedBuildTargetGroup, defines);
        }
    }
}
