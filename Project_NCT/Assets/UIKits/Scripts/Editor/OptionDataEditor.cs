using UnityEngine;
using UnityEditor;
using UnityEditorInternal;

namespace VRUiKits.Utils
{
	[CustomEditor(typeof(OptionsManager))]
	public class OptionDataEditor : Editor {
		ReorderableList list;
		void OnEnable () {

			list = new ReorderableList(serializedObject,
					serializedObject.FindProperty("optionsList"),
					true, true, true, true);

			list.drawElementCallback =
				(Rect rect, int index, bool isActive, bool isFocused) => {
				var element = list.serializedProperty.GetArrayElementAtIndex(index);
				rect.y += 2;
				EditorGUI.PropertyField(
					new Rect(rect.x, rect.y, rect.width, EditorGUIUtility.singleLineHeight),
					element.FindPropertyRelative("value"), GUIContent.none);
			};

			list.drawHeaderCallback = (Rect rect) => {
				EditorGUI.LabelField(rect, "Options List");
			};
		}

		public override void OnInspectorGUI()  {
			base.OnInspectorGUI();
			serializedObject.Update();
			list.DoLayoutList();
			serializedObject.ApplyModifiedProperties();
		}
	}
}
