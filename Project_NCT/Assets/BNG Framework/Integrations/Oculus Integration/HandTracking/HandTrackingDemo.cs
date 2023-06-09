using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace BNG {
    public class HandTrackingDemo : MonoBehaviour {

        public HandTracking HandTrackingController;

        Transform lastDrawPointLeft;
        Transform lastDrawPointRight;

        /// <summary>
        /// Optional output Debug text to a UI element
        /// </summary>
        public Text DebugText;
        public Text PinchTypeText;

        public bool DrawMode = false;

        float MinDrawDistance = 0.02f;
        float LineWidth = 0.02f;

        public Material DrawMaterial;

        Transform root;

        bool handTrackingEverDetected = false;

        // Start is called before the first frame update
        void Start() {
            root = new GameObject().transform;
        }

        void Update() {

            if(OVRPlugin.GetHandTrackingEnabled()) {
                handTrackingEverDetected = true;
            }

            if (DrawMode) {
                doDrawMode();                
            }

            updateDebugText();
            updatePinchButtonText();
        }

        void doDrawMode() {
            // Should be drawing if pinching

            // Right Hand
            if (HandTrackingController.IsRightIndexPinching) {
                // Just beginning to Draw
                if (lastDrawPointRight == null) {
                    lastDrawPointRight = new GameObject().transform;
                    lastDrawPointRight.position = HandTrackingController.RightIndexPosition;
                }
                // Already started drawing, connect lines
                else {
                    float dist = Vector3.Distance(lastDrawPointRight.position, HandTrackingController.RightIndexPosition);
                    if (dist > MinDrawDistance) {
                        lastDrawPointRight = drawPoint(lastDrawPointRight, HandTrackingController.RightIndexPosition, LineWidth, Color.cyan);
                    }
                }
            }
            else {
                // No longer pinching, disconnect point
                lastDrawPointRight = null;
            }

            // Left Hand
            if (HandTrackingController.IsLeftIndexPinching) {
                // Just beginning to Draw
                if (lastDrawPointLeft == null) {
                    lastDrawPointLeft = new GameObject().transform;
                    lastDrawPointLeft.position = HandTrackingController.LeftIndexPosition;
                }
                // Already started drawing, connect lines
                else {
                    float dist = Vector3.Distance(lastDrawPointLeft.position, HandTrackingController.LeftIndexPosition);
                    if (dist > MinDrawDistance) {
                        lastDrawPointLeft = drawPoint(lastDrawPointLeft, HandTrackingController.LeftIndexPosition, LineWidth, Color.red);
                    }
                }
            }
            else {
                // No longer pinching, disconnect point
                lastDrawPointLeft = null;
            }
        }

        Transform drawPoint(Transform lastDrawPoint, Vector3 endPosition, float lineWidth, Color lineColor) {
            if(lastDrawPoint) {
                Transform newPoint = new GameObject().transform;
                newPoint.parent = root;
                newPoint.position = endPosition;

                LineRenderer lr = newPoint.gameObject.AddComponent<LineRenderer>();
                lr.startColor = lineColor;
                lr.endColor = lineColor;
                lr.startWidth = lineWidth;
                lr.endWidth = lineWidth;
                if(DrawMaterial) {
                    lr.material = DrawMaterial;
                }
                //lr.positionCount = 1;
                lr.numCapVertices = 5;
                lr.useWorldSpace = true;
                lr.SetPosition(0, lastDrawPoint.position);
                lr.SetPosition(1, endPosition);

                return newPoint;
            }

            return null;
        }

        /// <summary>
        /// Toggle between drawing and grabbing
        /// </summary>
        public void TogglePinchMode () {
            DrawMode = !DrawMode;
            HandTrackingController.DoPinchToGrab = !DrawMode;
            
            updatePinchButtonText();
        }

        public void ClearDrawing() {
            var renderers = root.GetComponentsInChildren<LineRenderer>();
            foreach(var r in renderers) {
                GameObject.Destroy(r.gameObject);
            }
        }

        void updateDebugText() {
            if (DebugText != null && HandTrackingController != null) {
                DebugText.text = "Tracking Hands : " + HandTrackingController.IsHandTracking;

                if(!handTrackingEverDetected) {
                    DebugText.text += "\n\n<i>Make sure OVRManager is set to <b>'Controllers and Hands'</b> if you hand tracking does not appear to be working.</i>";
                    return;
                }

#if !OCULUS_INTEGRATION
    DebugText.text += "\n\n<i>Make sure Oculus Integration has been enabled under VRIF -> VRIF Integrations</i>";
    return;
#endif


#if OCULUS_INTEGRATION
                DebugText.text += "\nPinch Action : " + (DrawMode ? "Draw" : "Grab");
                DebugText.text += "\nLeft Pinch Strength : " + HandTrackingController.LeftIndexPinchStrength;
                DebugText.text += "\nRight Pinch Strength : " + HandTrackingController.RightIndexPinchStrength;

                DebugText.text += "\nLeft Tracked : " + HandTrackingController.LeftHand.IsTracked;
                DebugText.text += "\nRight Tracked : " + HandTrackingController.RightHand.IsTracked;
                DebugText.text += "\nConnected Controller Type : " + OVRInput.GetActiveController();
#endif
            }
        }

        void updatePinchButtonText() {
            if(DrawMode) {
                PinchTypeText.text = "Pinch Draw";
            }
            else {
                PinchTypeText.text = "Pinch Grab";
            }
        }
    }
}