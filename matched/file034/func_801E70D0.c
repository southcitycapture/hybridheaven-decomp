#include "common.h"

s32 func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
s32 func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
s32 func_801D03F8(void);
extern s32 D_801E8E98;

s32 func_801E70D0(s32 arg0, s32 arg1) {
    if (D_801E8E98 == 0) {
        goto case0;
    }
    if (D_801E8E98 == 1) {
        goto case1;
    }
    return 0x17;
case0:
    func_801CC4D8(2, 0x02A80026, 0, 0x1000, 12.0f);
    D_801E8E98 = 1;
    goto end;
case1:
    if (func_801D03F8() != 0) {
        goto end;
    }
    func_801CC470(2, 0x02A80026, 0, 0x1000, 1.5f);
    return 0x18;
end:
    return 0x17;
}
