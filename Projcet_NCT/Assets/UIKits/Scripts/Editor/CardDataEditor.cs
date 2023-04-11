using UnityEngine;
using UnityEditor;
using UnityEditorInternal;

namespace VRUiKits.Utils
{
    [CustomEditor(typeof(CardListManager))]
    public class CardDataEditor : Editor
    {
        ReorderableList list;
        float lineHeight;
        float lineHeightSpace;

        void OnEnable()
        {
            lineHeight = EditorGUIUtility.singleLineHeight;
            lineHeightSpace = lineHeight + 10;

            list = new ReorderableList(serializedObject,
                    serializedObject.FindProperty("cardList"),
                    true, true, true, true);

            list.drawElementCallback = (Rect rect, int index, bool isActive, bool isFocused) =>
            {
                var element = list.serializedProperty.GetArrayElementAtIndex(index);
                int i = 0;
                EditorGUIUtility.labelWidth = 55f; // Replace this with any width
                EditorGUI.PropertyField(
                    new Rect(rect.x, rect.y + i * lineHeightSpace, rect.width / 2, lineHeight),
                    element.FindPropertyRelative("title"));
                EditorGUI.PropertyField(
                    new Rect(rect.x + rect.width / 2, rect.y + i * lineHeightSpace, rect.width / 2, lineHeight),
                    element.FindPropertyRelative("image"));
                i++;
                EditorGUI.PropertyField(
                    new Rect(rect.x, rect.y + i * lineHeightSpace, rect.width, lineHeight),
                    element.FindPropertyRelative("subtitle"));
                i++;
                element.FindPropertyRelative("description").stringValue = EditorGUI.TextArea(
                    new Rect(rect.x, rect.y + i * lineHeightSpace, rect.width, lineHeight * 3),
                     element.FindPropertyRelative("description").stringValue == string.Empty ? "Description" :
                     element.FindPropertyRelative("description").stringValue);
            };

            list.elementHeightCallback = (int index) =>
            {
                int i = 4; // In total there are four properties;
                return lineHeightSpace * i + 3;

            };

            list.drawHeaderCallback = (Rect rect) =>
            {
                EditorGUI.LabelField(rect, "Cards List");
            };
        }

        public override void OnInspectorGUI()
        {
            base.OnInspectorGUI();
            serializedObject.Update();
            list.DoLayoutList();
            serializedObject.ApplyModifiedProperties();
        }
    }
}
