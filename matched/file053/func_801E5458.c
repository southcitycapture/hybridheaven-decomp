#include "common.h"

s32 func_801CEDE4(void);
s32 func_801CEE30(s32 a0, s32 a1);
void func_8038D33C(f32 fa0, f32 fa1, s32 a2, s32 a3, f32 f14, f32 f16);
extern f32 D_801E9980;
extern u8 func_801DAAF0[];

s32 func_801E5458(s32 arg0, s32 arg1) {
    u8 *temp_v0;

    if (func_801CEDE4() != 0) {
        return 0xA;
    }
    if ((func_801CEE30(0x02A80057, 0x12) != 0) || (func_801CEE30(0x02A80057, 0x33) != 0) || (func_801CEE30(0x02A80057, 0x3F) != 0) || (func_801CEE30(0x02A80057, 0x48) != 0)) {
        temp_v0 = *(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x8) + 0x24) + 0x2C);
        func_8038D33C(*(f32 *)(temp_v0 + 0x4), *(f32 *)(temp_v0 + 0x8), *(s32 *)(temp_v0 + 0xC), 0x67A, D_801E9980, 1.0f);
    }
    return 9;
}
