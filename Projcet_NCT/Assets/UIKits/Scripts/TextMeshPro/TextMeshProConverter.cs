using System.Collections;
using System.Collections.Generic;
using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
#endif
using UnityEngine.UI;
#if UIKIT_TMP
using TMPro;
#endif

namespace VRUiKits.Utils
{
    public class TextMeshProConverter : MonoBehaviour
    {
        // Check total number of Text component in the scene
        public static int CheckTextsTotalNumber()
        {
            return GetAllObjectsInScene<Text>().Count;
        }

#if UIKIT_TMP
        public static void ConvertAllTexts(bool allowTMPControlRectSize, TMP_FontAsset fontAsset)
        {
            ConvertTextToTMP(GetAllObjectsInScene<Text>(), allowTMPControlRectSize, fontAsset);
        }

        public static void ConvertSelectedTexts(Object[] selected, bool allowTMPControlRectSize, TMP_FontAsset fontAsset)
        {
            List<Text> foundedTexts = new List<Text>();
            foreach (Text text in selected)
            {
                if (null == text) continue;
                foundedTexts.Add(text);
            }
            Debug.Log("Found " + foundedTexts.Count + " gameobject with Text Component in selected object");

            // Covert list to array
            ConvertTextToTMP(foundedTexts, allowTMPControlRectSize, fontAsset);
        }

        private static void ConvertTextToTMP(List<Text> foundedTexts, bool allowTMPControlRectSize, TMP_FontAsset fontAsset)
        {
            int ignoredTexts = 0;
            foreach (Text text in foundedTexts)
            {
                if (0 != text.GetComponentsInParent(typeof(InputField), true).Length ||
                0 != text.GetComponentsInParent(typeof(Dropdown), true).Length)
                // if (text.GetComponentInParent<InputField>() || text.GetComponentInParent<Dropdown>())
                {
                    ignoredTexts += 1;
                    continue;
                }

                GameObject go = text.gameObject;
                Vector2 size = text.GetComponent<RectTransform>().sizeDelta;

                // Text
                string content = text.text;
                // Character
                FontStyle fontstyle = text.fontStyle;
                int fontsize = text.fontSize;
                float lineSpacing = text.lineSpacing;
                // Paragraph
                TextAnchor anchor = text.alignment;
                bool resizeTextForBestFit = text.resizeTextForBestFit;
                int resizeTextMaxSize = text.resizeTextMaxSize;
                int resizeTextMinSize = text.resizeTextMinSize;
                Color color = text.color;
                bool raycastTarget = text.raycastTarget;

                DestroyImmediate(text);

                TextMeshProUGUI textMesh = go.AddComponent<TextMeshProUGUI>();
                textMesh.text = content;
                if (null != fontAsset)
                {
                    textMesh.font = fontAsset;
                }
                textMesh.fontSize = fontsize;
                textMesh.fontStyle = ConvertFontStyle(fontstyle);
                textMesh.lineSpacing = lineSpacing;
                textMesh.color = color;
                textMesh.enableAutoSizing = resizeTextForBestFit;
                textMesh.alignment = ConvertTextAlignment(anchor);
                textMesh.enableWordWrapping = IsWordWrappingEnabled(text.horizontalOverflow);
                textMesh.overflowMode = ConvertTextOverflow(text.verticalOverflow);

                if (resizeTextForBestFit)
                {
                    textMesh.fontSizeMin = resizeTextMinSize;
                    textMesh.fontSizeMax = resizeTextMaxSize;
                }
                textMesh.raycastTarget = raycastTarget;
                if (!allowTMPControlRectSize)
                {
                    go.GetComponent<RectTransform>().sizeDelta = size;
                }
            }

            if (0 != ignoredTexts)
            {
                Debug.Log("Ignoring " + ignoredTexts + " Text Component under Dropdown or InputField.");
            }
        }

        public static void UpdateAllTmp(TMP_FontAsset fontAsset)
        {
            List<TextMeshProUGUI> foundedTexts = GetAllObjectsInScene<TextMeshProUGUI>();
            foreach (TextMeshProUGUI text in foundedTexts)
            {
                text.font = fontAsset;
            }
            Debug.Log("Updated " + foundedTexts.Count + " gameobject with TextMeshPro Component");
        }

        public static void UpdateSelectedTmp(Object[] selected, TMP_FontAsset fontAsset, bool includeInactive)
        {
            int counter = 0;
            foreach (TextMeshProUGUI text in selected)
            {
                if (null == text) continue;
                if (!includeInactive && !text.gameObject.activeInHierarchy) continue;
                text.font = fontAsset;
                counter += 1;
            }
            Debug.Log("Updated " + counter + " gameobject with TextMeshPro Component in selected object");
        }

        private static TMPro.FontStyles ConvertFontStyle(FontStyle style)
        {
            switch (style)
            {
                case FontStyle.Normal:
                    return TMPro.FontStyles.Normal;
                case FontStyle.Bold:
                    return TMPro.FontStyles.Bold;
                case FontStyle.Italic:
                    return TMPro.FontStyles.Italic;
                case FontStyle.BoldAndItalic: // TODO: Multiple style selection
                    return TMPro.FontStyles.Italic;
                default:
                    return TMPro.FontStyles.Normal;

            }
        }

        private static TextAlignmentOptions ConvertTextAlignment(TextAnchor anchor)
        {
            switch (anchor)
            {
                case TextAnchor.UpperLeft:
                    return TextAlignmentOptions.TopLeft;
                case TextAnchor.UpperCenter:
                    return TextAlignmentOptions.Top;
                case TextAnchor.UpperRight:
                    return TextAlignmentOptions.TopRight;
                case TextAnchor.MiddleLeft:
                    return TextAlignmentOptions.Left;
                case TextAnchor.MiddleCenter:
                    return TextAlignmentOptions.Center;
                case TextAnchor.MiddleRight:
                    return TextAlignmentOptions.Right;
                case TextAnchor.LowerLeft:
                    return TextAlignmentOptions.BottomLeft;
                case TextAnchor.LowerCenter:
                    return TextAlignmentOptions.Bottom;
                case TextAnchor.LowerRight:
                    return TextAlignmentOptions.BottomRight;
                default:
                    return TextAlignmentOptions.Left;
            }
        }

        private static TextOverflowModes ConvertTextOverflow(VerticalWrapMode wrapMode)
        {
            switch (wrapMode)
            {
                case VerticalWrapMode.Truncate:
                    return TextOverflowModes.Truncate;
                case VerticalWrapMode.Overflow:
                    return TextOverflowModes.Overflow;
                default:
                    return TextOverflowModes.Overflow;
            }
        }

        private static bool IsWordWrappingEnabled(HorizontalWrapMode wrapMode)
        {
            switch (wrapMode)
            {
                case HorizontalWrapMode.Wrap:
                    return true;
                case HorizontalWrapMode.Overflow:
                    return false;
                default:
                    return true;
            }
        }
#endif

        // Inspired by https://docs.unity3d.com/ScriptReference/Resources.FindObjectsOfTypeAll.html?_ga=2.156805426.88661407.1607426696-679916671.1545041887
        private static List<T> GetAllObjectsInScene<T>() where T : Component
        {
            List<T> objectsInScene = new List<T>();

            foreach (T go in Resources.FindObjectsOfTypeAll(typeof(T)) as T[])
            {
#if UNITY_EDITOR
                if (!EditorUtility.IsPersistent(go.transform.root.gameObject) && !(go.hideFlags == HideFlags.NotEditable || go.hideFlags == HideFlags.HideAndDontSave))
                    objectsInScene.Add(go);
#endif
            }

            return objectsInScene;
        }
    }
}
