using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;


namespace Bhaptics.Tact.Unity
{
    public class BhapticsExportFile
    {
        private string path;
        private string extension;
        private string fileName;


        private BhapticsExportFolder parentFolder;
        private Texture2D fileIcon;
        private GUIContent fileContent;
        private FileHapticClip fileHapticClip;
        private string newFileName;
        private bool isDuplicatedName;
        private bool isSelected = true;


        #region Property
        public string Path { get { return path; } }
        public string Extension { get { return extension; } }
        public string FileName { get { return fileName; } }
        public FileHapticClip FileHapticClip { get { return fileHapticClip; } }
        public bool IsDuplicatedName
        {
            get
            {
                return isDuplicatedName;
            }
            set
            {
                isDuplicatedName = value;
            }
        }
        public bool IsSelected
        {
            get
            {
                return isSelected;
            }
            set
            {
                isSelected = value;
            }
        }
        #endregion




        public BhapticsExportFile(string path, BhapticsExportFolder parentFolder, FileHapticClip fileHapticClip)
        {
            this.path = path;
            this.parentFolder = parentFolder;
            this.fileHapticClip = fileHapticClip;

            extension = FindExtension(path);
            fileName = FindFileName(path);
            newFileName = fileName;

            Object fileobj = AssetDatabase.LoadAssetAtPath(this.path, typeof(Object));
            fileIcon = AssetPreview.GetMiniThumbnail(fileobj);

            fileContent = new GUIContent(fileName, fileIcon, path);
        }

        private string FindExtension(string path)
        {
            string[] splitPath = path.Split('.');
            string ext = splitPath[splitPath.Length - 1];
            return ext;
        }

        private string FindFileName(string path)
        {
            string[] splitPath = path.Split('\\');
            string fullName = splitPath[splitPath.Length - 1];
            string splitExt = fullName.Split('.')[0];

            return splitExt;
        }

        public void VisualizeFile()
        {
            GUILayout.BeginHorizontal(EditorStyles.toolbarButton);
            GUILayout.Space(BhapticsExportWindow.CommonSpace * (parentFolder.Depth + 1));

            var newIsSelected = GUILayout.Toggle(isSelected, "", GUILayout.Width(BhapticsExportWindow.CommonSpace));
            if (newIsSelected != isSelected)
            {
                isSelected = newIsSelected;
                parentFolder.RefreshIsSelected();

                if (BhapticsExportWindow.Instance != null)
                {
                    if (isSelected)
                    {
                        BhapticsExportWindow.Instance.AddToTargetFileList(this);
                    }
                    else
                    {
                        BhapticsExportWindow.Instance.RemoveFromTargetFileList(this);
                    }
                }
            }

            if (!isDuplicatedName)
            {
                GUILayout.Label(fileContent, GUILayout.Height(BhapticsExportWindow.CommonSpace));
            }
            else
            {
                var tempStyle = new GUIStyle(GUI.skin.label);
                tempStyle.richText = true;
                var tempContent = new GUIContent(fileContent);
                tempContent.text = "<color=red>" + tempContent.text + "</color>";
                GUILayout.Label(tempContent, tempStyle, GUILayout.Width(Mathf.Clamp(fileName.Length * 9, 100, 170)), GUILayout.Height(BhapticsExportWindow.CommonSpace));
                var tfStyle = new GUIStyle(EditorStyles.textField);
                tfStyle.padding = new RectOffset(2, 0, 0, 0);
                tfStyle.margin = new RectOffset(0, 0, 4, 0);

                newFileName = EditorGUILayout.TextField(newFileName, tfStyle, GUILayout.Width(150), GUILayout.Height(BhapticsExportWindow.CommonSpace));

                if (newFileName == fileName)
                {
                    GUI.enabled = false;
                }

                if (GUILayout.Button("√", GUILayout.Width(20)))
                {
                    RenameAsset(newFileName);
                }

                if (newFileName == fileName)
                {
                    GUI.enabled = true;
                }
            }
            GUILayout.Space(BhapticsExportWindow.CommonSpace);
            GUILayout.EndHorizontal();
        }

        public void RenameAsset(string newValue)
        {
            var oldFileName = fileName;
            var oldPath = path;

            newFileName = newValue;

            path = path.Replace(oldFileName, newValue);
            fileName = newValue;
            fileContent = new GUIContent(fileName, fileIcon, path);

            Debug.LogFormat("[bHaptics] Rename file: {0} -> {1}", oldFileName, newValue);
            AssetDatabase.RenameAsset(oldPath, newValue);
            AssetDatabase.SaveAssets();

            if (BhapticsExportWindow.Instance != null)
            {
                BhapticsExportWindow.Instance.CheckDuplicatedName();
            }
        }
    }
}