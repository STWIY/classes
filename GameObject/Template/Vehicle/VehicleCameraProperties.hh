//  Size:           0x20
//  Total Size:     0x40

class VehicleCameraProperties : public ScriptObject
{
public:
    float mCameraDistanceScale;                                                // 0x20
    float mCameraYOffsetScale;                                                 // 0x24
    float mCameraFOVScale;                                                     // 0x28
    float mCameraPitchAdjust;                                                  // 0x2C
    float mCameraPivotShift;                                                   // 0x30
    float mCameraRollFactor;                                                   // 0x34
    StringTableEntry mCategoryPropertiesName;                                  // 0x38
    ScriptObjectPointer<VehicleCameraCategoryProperties*> mCategoryProperties; // 0x3C
};
