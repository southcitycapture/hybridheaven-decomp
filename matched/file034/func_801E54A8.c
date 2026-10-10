#include "context.h"

extern void func_8038D33C(f32 arg0, f32 arg1, s32 arg2, s32 arg3, f32 arg4, f32 arg5);
extern struct func_801E58F0_StructA *D_801DAB14;
extern s32 func_801CE284();
extern s32 func_801CE2D0(s32 arg0, s32 arg1);
extern f32 D_801E9660;

s32 func_801E54A8(s32 arg0, s32 arg1) {
    u8 *temp_v0;

    if (func_801CE284() != 0) {
        func_801CC470(0, 0x01900027, 0, 0, 1.0f);
        return 0x25;
    }
    if ((func_801CE2D0(0x0190002B, 5) != 0) || (func_801CE2D0(0x0190002B, 9) != 0)) {
        temp_v0 = *(u8 **)(*(u8 **)(*(u8 **)((u8 *)D_801DAB14 + 0x8) + 0x24) + 0x2C);
        func_8038D33C(*(f32 *)(temp_v0 + 0x4), *(f32 *)(temp_v0 + 0x8), *(s32 *)(temp_v0 + 0xC), 0x680, D_801E9660, 1.0f);
    }
    return 0x24;
}
