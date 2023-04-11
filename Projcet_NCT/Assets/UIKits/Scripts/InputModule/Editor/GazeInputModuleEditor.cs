using UnityEngine;
using UnityEditor;

namespace VRUiKits.Utils
{
    [CustomEditor(typeof(GazeInputModule))]
    public class GazeInputModuleEditor : Editor
    {
        public override void OnInspectorGUI()
        {
            base.OnInspectorGUI();
            GazeInputModule _target = (GazeInputModule)target;

            _target.gazeTimeInSeconds = EditorGUILayout.FloatField("Gaze Time In Seconds", _target.gazeTimeInSeconds);
            _target.delayTimeInSeconds = EditorGUILayout.FloatField("Delay Time In Seconds", _target.delayTimeInSeconds);
        }
    }
}
