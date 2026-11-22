#include "common.h"

s32 func_801CEDE4();
s32 func_801CEE30(s32 a0, s32 a1);
extern u8 func_801DAAF0[];
extern void func_8038D33C(f32, f32, s32, s32, f32, f32);
s32 func_801E5458(s32 arg0, s32 arg1) {
    u8 *temp_v0;

    if (func_801CEDE4() != 0) {
        return 0xA;
    }
    if ((func_801CEE30(0x02A80057, 0x12) != 0) || (func_801CEE30(0x02A80057, 0x33) != 0) || (func_801CEE30(0x02A80057, 0x3F) != 0) || (func_801CEE30(0x02A80057, 0x48) != 0)) {
        temp_v0 = *(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x8) + 0x24) + 0x2C);
        func_8038D33C(*(f32 *)(temp_v0 + 0x4), *(f32 *)(temp_v0 + 0x8), *(s32 *)(temp_v0 + 0xC), 0x67A, 1.20000005f, 1.0f);
    }
    return 9;
}
