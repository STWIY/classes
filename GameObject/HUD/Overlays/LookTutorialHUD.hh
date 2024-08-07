//  Size:           0x2C
//  Total Size:     0x90

class LookTutorialHUD : public HUDElement2
{
public:
    enum ELookTutorialState
    {
        ELookTutorialState_BEGIN = -2,
        ELookTutorialState_PRESS_X,
        ELookTutorialState_CARD_PROFILE_CHECK,
        ELookTutorialState_LOOK_UP,
        ELookTutorialState_LOOK_DOWN,
        ELookTutorialState_LOOK_LEFT,
        ELookTutorialState_LOOK_RIGHT,
        ELookTutorialState_L1,
        ELookTutorialState_R1,
        ELookTutorialState_VIBRATION,
        ELookTutorialState_CONFIRM,
        ELookTutorialState_COMBAT,
        ELookTutorialState_MAX
    };

    SystemDialogBox* mDialogBox;           // 0x64
    ELookTutorialState mCurrentState;      // 0x68
    ActionMap* mActionMap;                 // 0x6C
    float mElapsedTime;                    // 0x70
    float mIdleTime;                       // 0x74
    SLookResults mResults[4];              // 0x78
    GenericCharacterCamera* mCharacterCam; // 0x80
    uint32_t mOrigCamMapID;                // 0x84
    bool mIdleNISRequested;                // 0x88
    FELayerObject* mTutorialLayer;         // 0x8C
};