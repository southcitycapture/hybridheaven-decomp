#include "context.h"
extern void func_801CC4D8(s32, s32, s32, s32, f32);
extern u8 func_801DAAF0[];
extern void func_8038D33C(f32, f32, s32, s32, f32, f32);

extern f32 D_801E7718;

s32 func_801E459C(s32 arg0, s32 arg1) {
    u8 *temp_v0;

    temp_v0 = *(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x24) + 0x2C);
    func_8038D33C(*(f32 *)(temp_v0 + 0x4), *(f32 *)(temp_v0 + 0x8), *(s32 *)(temp_v0 + 0xC), 0x67D, D_801E7718, 1.0f);
    func_801CC4D8(0, 0x04100034, 0, 0, 20.0f);
    return 0x12;
}
