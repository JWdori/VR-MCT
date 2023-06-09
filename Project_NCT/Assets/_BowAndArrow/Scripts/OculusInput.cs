using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using OVR;

public class OculusInput : MonoBehaviour
{
    public Bow m_bow = null;
    public GameObject m_oppositeController = null;
    public OVRInput.Controller m_controller = OVRInput.Controller.None;

    private void Update()
    {
        if (OVRInput.GetDown(OVRInput.Button.PrimaryIndexTrigger, m_controller))
            m_bow.Pull(m_oppositeController.transform);

        if (OVRInput.GetUp(OVRInput.Button.PrimaryIndexTrigger, m_controller))
            m_bow.Release();
    }
}
