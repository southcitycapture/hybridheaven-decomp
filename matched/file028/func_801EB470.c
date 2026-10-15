#include "context.h"

extern f64 D_802089A0;

s32 func_801EB470(s32 arg0, s32 arg1) {
    if (D_802061E8 == 0) {
        goto case0;
    }
    if (D_802061E8 == 1) {
        goto case1;
    }
    return 3;
case0:
    func_801C0D04(3, 1);
    D_802061E8 = 1;
    goto end;
case1:
    if (func_801C0DE4(3, 1, 0x40400000) != 0) {
        func_801C0EB0(3, 1);
        return 4;
    }
    *(s16 *)(*(u8 **)(*(u8 **)((u8 *)D_8038D8D0 + 4) + 0x30) + 0x12) = (s16)(s32)((((f32)(func_80034C24(func_801C0F18(3, 1)) / D_802089A0) / 3.0f) * 180.0f * 2048.0f) / 90.0f);
end:
    return 3;
}
