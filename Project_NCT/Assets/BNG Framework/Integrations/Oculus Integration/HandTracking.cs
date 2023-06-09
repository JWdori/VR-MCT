using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using Bhaptics.SDK2;


using static OVRHand;

namespace BNG {
    public class HandTracking : MonoBehaviour {


        [Header("Hand Tracking Setup")]
        public OVRHand LeftHand;
        public OVRHand RightHand;

        public TrackingConfidence LeftHandConfidence;
        public TrackingConfidence RightHandConfidence;

        OVRSkeleton leftSkele;
        OVRSkeleton rightSkele;
        OVRBone leftIndexBone;
        OVRBone rightIndexBone;

        bool wasHandTracking = false; 
        public Grabber LeftGrabber;
        public Grabber RightGrabber;

        public Transform LeftModelHolder;
        public Transform RightModelHolder;

        [Header("Pinch to Grab")]
        /// <summary>
        /// Pinching will activate Grabber attached to Index Finger
        /// </summary>
        public bool DoPinchToGrab = true;

        /// <summary>
        /// Are we currently doing hand tracking?
        /// </summary>      
        [Header("Shown for Debug :")]
        public bool IsHandTracking = false;

        public bool IsLeftIndexPinching = false;
        public float LeftIndexPinchStrength;

        public bool IsRightIndexPinching = false;
        public float RightIndexPinchStrength;
        public Vector3 RightIndexPosition;
        public Vector3 LeftIndexPosition;
       

 

        void Awake() {

            if (LeftHand == null) {
                LeftHand = GameObject.Find("OVRHandPrefabLeft").GetComponent<OVRHand>();
            }
            if (RightHand == null) {
                RightHand = GameObject.Find("OVRHandPrefabRight").GetComponent<OVRHand>();
            }

            leftSkele = LeftHand.GetComponent<OVRSkeleton>();
            rightSkele = RightHand.GetComponent<OVRSkeleton>();
        }

        void Update() {

            updateHandTracking();
            if (IsHandTracking) {
                LeftHandConfidence = LeftHand.GetFingerConfidence(HandFinger.Index);
                RightHandConfidence = RightHand.GetFingerConfidence(HandFinger.Index);

                if(leftSkele != null && leftSkele.Bones != null) {
                    leftIndexBone = leftSkele.Bones.FirstOrDefault(x => x.Id == OVRSkeleton.BoneId.Hand_IndexTip);
                    if (leftIndexBone != null) {
                        LeftIndexPosition = leftIndexBone.Transform.position;
                    }
                }
                
                IsLeftIndexPinching = LeftHand.GetFingerIsPinching(HandFinger.Index) && LeftHandConfidence == TrackingConfidence.High;
                LeftIndexPinchStrength = LeftHand.GetFingerPinchStrength(HandFinger.Index);

                if(rightSkele && rightSkele.Bones != null) {
                    rightIndexBone = rightSkele.Bones.FirstOrDefault(x => x.Id == OVRSkeleton.BoneId.Hand_IndexTip);
                    if (rightIndexBone != null) {
                        RightIndexPosition = rightIndexBone.Transform.position;
                    }
                }

                IsRightIndexPinching = RightHand.GetFingerIsPinching(HandFinger.Index) && RightHandConfidence == TrackingConfidence.High;
                RightIndexPinchStrength = RightHand.GetFingerPinchStrength(HandFinger.Index);
                
                if (IsLeftIndexPinching)
                {
                    BhapticsLibrary.Play(BhapticsEvent.DART_LEFT);
                }
                else if (IsRightIndexPinching)
                {
                    BhapticsLibrary.Play(BhapticsEvent.DART_RIGHT);
                }
            }

            updateGrabbers();
        }

        void updateHandTracking() {
            
            IsHandTracking = OVRInput.GetActiveController() == OVRInput.Controller.Hands || OVRPlugin.GetHandTrackingEnabled();

            if(IsHandTracking != wasHandTracking) {
                onHandTrackingChange(IsHandTracking);
            }

            wasHandTracking = IsHandTracking;
        }

        void onHandTrackingChange(bool handTrackingEnabled) {
            // We'll consider a controller active for anything but Hands
            LeftModelHolder.gameObject.SetActive(!handTrackingEnabled);
            RightModelHolder.gameObject.SetActive(!handTrackingEnabled);
        }

        void updateGrabbers() {

            if(LeftGrabber) {
                LeftGrabber.gameObject.SetActive(IsHandTracking);

                if (IsHandTracking) {
                    //BhapticsLibrary.Play(BhapticsEvent.DART_LEFT);
                    LeftGrabber.transform.position = LeftIndexPosition;
                    LeftGrabber.ForceGrab = DoPinchToGrab && IsLeftIndexPinching;
                    LeftGrabber.ForceRelease = DoPinchToGrab && IsLeftIndexPinching == false;
                }
            }

            if (RightGrabber) {
                RightGrabber.gameObject.SetActive(IsHandTracking);

                if (IsHandTracking) {
                    //BhapticsLibrary.Play(BhapticsEvent.DART_RIGHT);
                    RightGrabber.transform.position = RightIndexPosition;
                    RightGrabber.ForceGrab = DoPinchToGrab && IsRightIndexPinching;
                    RightGrabber.ForceRelease = DoPinchToGrab && IsRightIndexPinching == false;
                }
            }
        }


        void Start() {
            Debug.LogWarning("Oculus Integration not enabled in Window -> VRIF Integrations.");
        }

    }
}

