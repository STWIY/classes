//  Size:           0x24
//  Total Size:     0x54

class SniperState : public GameSetObject
{
public:
    enum SniperZoom
    {
        SNIPERSTATE_None = 0x0,
        SNIPERSTATE_1,
        SNIPERSTATE_Count
    };

    ScriptObjectPointer mCharacterCamera;       // 0x30
    SniperZoom mSniperState;                    // 0x34
    float mTune_FOV;                            // 0x38
    float mTune_MinFOV;                         // 0x3C
    float mTune_MaxFOV;                         // 0x40
    float mTune_FOVSpeed;                       // 0x44
    float mZoomFactor;                          // 0x48
    float mTune_CameraSpeedXZ;                  // 0x4C
    float mTune_CameraSpeedY;                   // 0x50
};