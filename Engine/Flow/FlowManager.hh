//  Size:           0x150
//  Total Size:     0x178

class FlowManager
{
public:
    FlowTime m_FlowTime;                        // 0x0
    uint32_t m_TimeInMiliseconds;               // 0x28
    uint32_t m_GameTimeInMiliseconds;           // 0x2C
    uint32_t m_RawTimeInMiliseconds;            // 0x30
    uint32_t m_FrameCount;                      // 0x34
    uint32_t m_TimeInMicrosecond;               // 0x38
    uint32_t m_Unknown5;                        // 0x3C
    uint32_t m_Unknown6;                        // 0x40
    EFlowState m_State;                         // 0x44
    EFlowState m_NextState;                     // 0x48
    float m_TimeScale;                          // 0x4C
    uint32_t m_SubState;                        // 0x50
    float m_TimeScaleValues[5];                 // 0x54
    int m_TimeScaleIndex;                       // 0x68
    char Pad0x6C[8];                            // 0x6C
    char m_PauseGameReason[256];                // 0x74
    char Pad0x174[3];                           // 0x174
    bool m_PauseGame;                           // 0x177
};