using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEditor;
using UnityEngine;



namespace Bhaptics.Tact.Unity
{
    public class BhapticsExportFolder
    {
        private string folderPath;
        private string folderName;
        private BhapticsExportFolder parentFolder;

        private List<BhapticsExportFile> childFiles;
        private BhapticsExportFile[,] groupedFiles;
        private List<BhapticsExportFolder> childFolders;

        private GUIContent folderContent;

        private Texture2D folderIcon;

        private bool fold = true;
        private int depth;

        private Rect position;
        private int groupFiles = 1;
        private bool noHapticClip;
        private bool isSelected = true;


        #region Property
        public string FolderName { get { return folderName; } }
        public int Depth { get { return depth; } }
        public bool IsSelected { get { return isSelected; } }
        #endregion




        public BhapticsExportFolder(string folderPath, int depth, Rect position, BhapticsExportFolder parentFolder)
        {
            this.folderPath = folderPath;
            this.depth = depth;
            this.position = position;
            this.parentFolder = parentFolder;

            childFolders = FindChildFolders();
            childFiles = FindChildFiles();
            noHapticClip = !CheckExistHapticClips();

            if (BhapticsExportWindow.Instance != null)
            {
                BhapticsExportWindow.Instance.AddToTotalFileList(childFiles);
                BhapticsExportWindow.Instance.AddToTargetFileList(childFiles);
            }

            Object folderobj = AssetDatabase.LoadAssetAtPath(this.folderPath, typeof(Object));
            folderIcon = AssetPreview.GetMiniThumbnail(folderobj);

            string[] splitPath = this.folderPath.Split('\\');
            folderName = splitPath[splitPath.Length - 1];

            folderContent = new GUIContent(folderName, folderIcon, folderPath);

            groupedFiles = GroupChildFiles(childFiles);
        }

        public void VisualizeFolder()
        {
            GUILayout.BeginVertical();

            GUILayout.BeginHorizontal(EditorStyles.toolbarButton);
            GUILayout.Space(BhapticsExportWindow.CommonSpace * depth);

            var newIsSelected = GUILayout.Toggle(isSelected, "", GUILayout.Width(BhapticsExportWindow.CommonSpace));
            if (newIsSelected != isSelected)
            {
                OnClickToggle(newIsSelected);
            }
            fold = EditorGUILayout.Foldout(fold, folderContent, true);

            GUILayout.FlexibleSpace();
            GUILayout.EndHorizontal();

            if (fold)
            {
                VisualizeChildFiles();

                foreach (var cf in childFolders)
                {
                    if (cf.noHapticClip)
                    {
                        continue;
                    }

                    cf.VisualizeFolder();
                }
            }

            GUILayout.EndVertical();
        }

        public void RefreshIsSelected()
        {
            var res = false;

            for (int i = 0; i < childFiles.Count; ++i)
            {
                res |= childFiles[i].IsSelected;
            }

            for (int i = 0; i < childFolders.Count; ++i)
            {
                res |= childFolders[i].IsSelected;
            }

            isSelected = res;

            if (parentFolder != null)
            {
                parentFolder.RefreshIsSelected();
            }
        }

        public void OnClickToggle(bool newIsSelected)
        {
            isSelected = newIsSelected;

            for (int i = 0; i < childFiles.Count; ++i)
            {
                childFiles[i].IsSelected = newIsSelected;

                if (BhapticsExportWindow.Instance != null)
                {
                    if (newIsSelected)
                    {
                        BhapticsExportWindow.Instance.AddToTargetFileList(childFiles[i]);
                    }
                    else
                    {
                        BhapticsExportWindow.Instance.RemoveFromTargetFileList(childFiles[i]);
                    }
                }
            }

            for (int i = 0; i < childFolders.Count; ++i)
            {
                childFolders[i].OnClickToggle(newIsSelected);
            }
        }










        private List<BhapticsExportFolder> FindChildFolders()
        {
            string[] dirs = Directory.GetDirectories(folderPath);
            List<BhapticsExportFolder> folders = new List<BhapticsExportFolder>();
            foreach (var directory in dirs)
            {
                BhapticsExportFolder newfolder = new BhapticsExportFolder(directory, depth + 1, position, this);
                folders.Add(newfolder);
            }
            return folders;
        }

        private List<BhapticsExportFile> FindChildFiles()
        {
            string[] fileNames = Directory.GetFiles(folderPath, "*.asset");
            List<BhapticsExportFile> files = new List<BhapticsExportFile>();

            foreach (var file in fileNames)
            {
                var fileHapticClip = AssetDatabase.LoadAssetAtPath<Bhaptics.Tact.Unity.FileHapticClip>(file);
                if (fileHapticClip == null)
                {
                    continue;
                }

                BhapticsExportFile newfile = new BhapticsExportFile(file, this, fileHapticClip);

                files.Add(newfile);
            }

            return files;
        }

        private bool CheckExistHapticClips()
        {
            string[] fileNames = Directory.GetFiles(folderPath, "*.asset", SearchOption.AllDirectories);

            foreach (var file in fileNames)
            {
                var fileHapticClip = AssetDatabase.LoadAssetAtPath<Bhaptics.Tact.Unity.FileHapticClip>(file);
                if (fileHapticClip != null)
                {
                    return true;
                }
            }

            return false;
        }

        private BhapticsExportFile[,] GroupChildFiles(List<BhapticsExportFile> files)
        {
            int size = files.Count;
            int rows = (size / groupFiles) + 1;
            BhapticsExportFile[,] groupedFiles = new BhapticsExportFile[rows, groupFiles];
            int index = 0;
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < groupFiles; j++)
                {
                    if (i * groupFiles + j <= size - 1)
                    {
                        groupedFiles[i, j] = files[index++];
                    }
                }
            }

            return groupedFiles;
        }

        private void VisualizeChildFiles()
        {
            int size = childFiles.Count;
            int rows = (size / groupFiles) + 1;

            for (int i = 0; i < rows; i++)
            {
                GUILayout.BeginVertical();
                GUILayout.BeginHorizontal();

                for (int j = 0; j < groupFiles; j++)
                {
                    if (i * groupFiles + j <= size - 1)
                    {
                        groupedFiles[i, j].VisualizeFile();
                    }
                }

                GUILayout.EndHorizontal();
                GUILayout.EndVertical();
            }
        }
    }
}