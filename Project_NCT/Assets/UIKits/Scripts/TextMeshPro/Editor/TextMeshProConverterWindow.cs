using UnityEngine;
using UnityEditor;
using UnityEngine.UI;
#if UIKIT_TMP
using TMPro;
#endif

namespace VRUiKits.Utils
{
    public class TextMeshProConverterWindow : EditorWindow
    {
        static string uikitTMPDefine = "UIKIT_TMP";

#if UIKIT_TMP
        int totalTexts = 0;
        int totalSelectedTexts = 0;
        /*
         * The ability to control the default size of a RectTransform is a feature
         * of Text Mesh Pro.
         */
        bool allowTMPControlRectSize = false;
        TMP_FontAsset fontAsset;
        // If include inactive component in selection
        bool includeInactive = true;
#endif

        [UnityEditor.MenuItem("Window/VR UIKit/TextMeshPro Converter")]
        public static void ShowWindow()
        {
            EditorWindow.GetWindow<TextMeshProConverterWindow>("TextMeshPro Converter");
        }

        void OnGUI()
        {
#if !UIKIT_TMP
            // Helper message
            GUILayout.Label("Please make sure TextMeshPro is in your project", EditorStyles.helpBox);
            if (GUILayout.Button("Enable UIKit TextMeshPro Support"))
            {
                SetUIKitTMPCustomDefine();
            }

            // Insert 16 pixels of space between the 2 section.
            GUILayout.Space(16);
#endif

#if UIKIT_TMP
            // Variables
            GUILayout.Label("Font", EditorStyles.boldLabel);
            fontAsset = EditorGUILayout.ObjectField("Font", fontAsset, typeof(TMP_FontAsset), false) as TMP_FontAsset;

            GUILayout.Space(16);

            // Text to TMP converter
            GUILayout.Label("TextMeshPro Converter", EditorStyles.boldLabel);
            allowTMPControlRectSize = EditorGUILayout.ToggleLeft("Allow TMP Resize Rect", allowTMPControlRectSize);

            Color defaultColor = GUI.backgroundColor;
            GUI.backgroundColor = Color.cyan;
            if (GUILayout.Button("Convert All Text to TMP"))
            {
                totalTexts = TextMeshProConverter.CheckTextsTotalNumber();
                TextMeshProConverter.ConvertAllTexts(allowTMPControlRectSize, fontAsset);
            }
            GUI.backgroundColor = defaultColor;
            GUILayout.Label("Founded " + totalTexts + " Text Component in the scene.");

            if (GUILayout.Button("Convert Selected Text to TMP"))
            {
                var selected  = Selection.GetFiltered(typeof(Text), SelectionMode.Deep);
                totalSelectedTexts = selected.Length;
                TextMeshProConverter.ConvertSelectedTexts(selected, allowTMPControlRectSize, fontAsset);
            }
            GUILayout.Label("Founded " + totalSelectedTexts + " Text Component in selected object.");

            GUILayout.Space(16);

            // Update TMP Font
            GUILayout.Label("Update TextMeshPro Font", EditorStyles.boldLabel);

            if (GUILayout.Button("Update All Active TMP"))
            {
                TextMeshProConverter.UpdateAllTmp(fontAsset);
            }

            // Helper message
            GUILayout.Label("Even though the font has been updated successfully, "
            + "it might not refresh immediately in the scene.", EditorStyles.helpBox);

            // includeInactive = EditorGUILayout.ToggleLeft("Update Inactive Text in Selection", includeInactive);
            if (GUILayout.Button("Update Selected TMP"))
            {
                var selected  = Selection.GetFiltered(typeof(TextMeshProUGUI), SelectionMode.Deep);
                TextMeshProConverter.UpdateSelectedTmp(selected, fontAsset, includeInactive);
            }
#endif
        }

        static void SetUIKitTMPCustomDefine()
        {
            string defines = PlayerSettings.GetScriptingDefineSymbolsForGroup(EditorUserBuildSettings.selectedBuildTargetGroup);

            if (!defines.Contains(uikitTMPDefine))
            {
                defines += ";" + uikitTMPDefine;
            }
            else
            {
                return;
            }
            PlayerSettings.SetScriptingDefineSymbolsForGroup(EditorUserBuildSettings.selectedBuildTargetGroup, defines);
        }
    }
}
