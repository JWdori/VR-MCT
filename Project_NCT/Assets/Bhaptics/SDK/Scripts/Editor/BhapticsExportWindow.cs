using System.Collections.Generic;
using UnityEditor;
using UnityEngine;


namespace Bhaptics.Tact.Unity
{
    public class BhapticsExportWindow : EditorWindow
    {
        public const float CommonSpace = 16;

        public static BhapticsExportWindow Instance { get { return instance; } }
        private static BhapticsExportWindow instance;

        private BhapticsExportFolder rootFolder;
        private List<BhapticsExportFile> totalFileList = new List<BhapticsExportFile>();
        private List<BhapticsExportFile> targetFileList = new List<BhapticsExportFile>();
        private Vector2 scroll;
        private int duplicatedCount;


        [MenuItem("bHaptics/[Migration] Export HapticClips...", priority = 22)]
        public static void ShowWindow()
        {
            BhapticsExportWindow window = (BhapticsExportWindow)EditorWindow.GetWindowWithRect(typeof(BhapticsExportWindow), new Rect(10f, 10f, 500f, 600f), true, "Exporting HapticClips");
            window.Show();
        }

        private void OnEnable()
        {
            instance = this;
            rootFolder = new BhapticsExportFolder("Assets", 0, position, null);
        }

        private void OnDestroy()
        {
            instance = null;
        }

        private void OnGUI()
        {
            GUILayout.BeginVertical();

            var backgroundStyle = new GUIStyle(GUI.skin.GetStyle("TextArea"));
            backgroundStyle.padding = new RectOffset(0, 0, 0, 0);
            backgroundStyle.margin = new RectOffset(0, 0, 0, 0);
            GUI.Label(new Rect(0, 0, 500, 55), "", backgroundStyle);

            GUILayout.BeginHorizontal();
            GUILayout.Space(10);
            var titleStyle = new GUIStyle(EditorStyles.label);
            titleStyle.fontSize = 13;
            titleStyle.fontStyle = FontStyle.Bold;
            GUILayout.Label("Select the HapticClips to Export (" + targetFileList.Count + "/" + totalFileList.Count + ")", titleStyle, GUILayout.Height(50));
            GUILayout.FlexibleSpace();
            GUILayout.EndHorizontal();

            scroll = GUILayout.BeginScrollView(scroll);
            rootFolder.VisualizeFolder();
            GUILayout.EndScrollView();

            GUILayout.Space(10);

            bool isError = duplicatedCount != 0;
            if (isError)
            {
                GUI.Label(new Rect(0, 520, 500, 80), "", backgroundStyle);

                GUILayout.BeginHorizontal();
                GUILayout.Space(12);

                var errorStyle = new GUIStyle(EditorStyles.label);
                errorStyle.richText = true;
                GUILayout.Label("<color=red>Duplicate names(" + duplicatedCount + ") are not allowed. Please change it.</color>", errorStyle, GUILayout.Height(20));

                if (GUILayout.Button(new GUIContent("Add Postfix", "FileName -> FileName_Vest"), GUILayout.Height(20)))
                {
                    ChangeFileName(false);
                }

                if (GUILayout.Button(new GUIContent("Add Prefix", "FileName -> Vest_FileName"), GUILayout.Height(20)))
                {
                    ChangeFileName(true);
                }

                GUILayout.Space(12);
                GUILayout.EndHorizontal();
                
                GUILayout.Space(10);
            }
            else
            {
                GUI.Label(new Rect(0, 550, 500, 50), "", backgroundStyle);
            }

            GUILayout.BeginHorizontal();
            GUILayout.Space(12);

            if (GUILayout.Button("All", GUILayout.Width(60), GUILayout.Height(25)))
            {
                SetIsSelected(true);
            }

            if (GUILayout.Button("None", GUILayout.Width(60), GUILayout.Height(25)))
            {
                SetIsSelected(false);
            }

            GUILayout.FlexibleSpace();
            
            if (isError)
            {
                GUI.enabled = false;
            }
            
            if (GUILayout.Button("  Export...", GUILayout.Width(80), GUILayout.Height(25)))
            {
                var targetFileHapticClipList = new List<FileHapticClip>();

                for (int i = 0; i < targetFileList.Count; ++i)
                {
                    targetFileHapticClipList.Add(targetFileList[i].FileHapticClip);
                }

                HapticClipManager.ExportTactFiles(targetFileHapticClipList.ToArray());
            }

            if (isError)
            {
                GUI.enabled = true;
            }

            GUILayout.Space(12);
            GUILayout.EndHorizontal();
            GUILayout.Space(10);
            GUILayout.EndVertical();
        }






        public void AddToTotalFileList(List<BhapticsExportFile> itemList)
        {
            if (itemList == null || totalFileList == null)
            {
                return;
            }

            for (int i = 0; i < itemList.Count; ++i)
            {
                if (!totalFileList.Contains(itemList[i]))
                {
                    totalFileList.Add(itemList[i]);
                }
            }
        }

        public void AddToTargetFileList(List<BhapticsExportFile> itemList)
        {
            if (itemList == null || targetFileList == null)
            {
                return;
            }

            for (int i = 0; i < itemList.Count; ++i)
            {
                if (itemList[i].IsSelected && !targetFileList.Contains(itemList[i]))
                {
                    targetFileList.Add(itemList[i]);
                }
            }

            CheckDuplicatedName();
        }

        public void AddToTargetFileList(BhapticsExportFile item)
        {
            if (item == null)
            {
                return;
            }

            if (!targetFileList.Contains(item))
            {
                targetFileList.Add(item);
            }

            CheckDuplicatedName();
        }

        public void RemoveFromTargetFileList(BhapticsExportFile item)
        {
            if (item == null)
            {
                return;
            }

            if (targetFileList.Contains(item))
            {
                targetFileList.Remove(item);
            }

            CheckDuplicatedName();
        }

        public void CheckDuplicatedName()
        {
            for (int i = 0; i < totalFileList.Count; ++i)
            {
                totalFileList[i].IsDuplicatedName = false;
            }

            for (int i = 0; i < targetFileList.Count - 1; ++i)
            {
                for (int m = i + 1; m < targetFileList.Count; ++m)
                {
                    if (targetFileList[i].FileName.Equals(targetFileList[m].FileName))
                    {
                        targetFileList[i].IsDuplicatedName = true;
                        targetFileList[m].IsDuplicatedName = true;
                        break;
                    }
                }
            }

            int count = 0;
            for (int i = 0; i < totalFileList.Count; ++i)
            {
                if (totalFileList[i].IsDuplicatedName)
                {
                    ++count;
                }
            }

            duplicatedCount = count;
        }





        private void SetIsSelected(bool value)
        {
            rootFolder.OnClickToggle(value);
        }

        private void ChangeFileName(bool applyPrefix)
        {
            for (int i = 0; i < targetFileList.Count; ++i)
            {
                if (!targetFileList[i].IsDuplicatedName)
                {
                    continue;
                }

                string additionalStr = "";
                switch (targetFileList[i].FileHapticClip.ClipType)
                {
                    case HapticDeviceType.Tactal: additionalStr = "Head"; break;
                    case HapticDeviceType.TactSuit: additionalStr = "Vest"; break;
                    case HapticDeviceType.Tactosy_arms: additionalStr = "Arms"; break;
                    case HapticDeviceType.Tactosy_hands: additionalStr = "Hands"; break;
                    case HapticDeviceType.Tactosy_feet: additionalStr = "Feet"; break;
                    case HapticDeviceType.TactGlove: additionalStr = "Glove"; break;
                }

                targetFileList[i].RenameAsset(applyPrefix ? additionalStr + "_" + targetFileList[i].FileName : targetFileList[i].FileName + "_" + additionalStr);
            }
        }
    }
}