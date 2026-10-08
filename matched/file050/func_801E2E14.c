#include "context.h"

extern s32 D_801E3D90[];
extern u8 *D_8038D8D0;

void func_801E2E14(s32 arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    s32 temp_v0;

    temp_v0 = arg0 * 4;
    D_801E3D90[arg0] = arg1;
    if (arg1 != 0) {
        *(u8 *)(*(s32 *)(D_8038D8D0 + temp_v0 + 0x20) + 0x22) = 1;
    } else {
        *(u8 *)(*(s32 *)(D_8038D8D0 + temp_v0 + 0x20) + 0x22) = 0;
    }
    *(f32 *)(*(s32 *)(*(s32 *)(D_8038D8D0 + temp_v0 + 0x20) + 0x30) + 4) = arg2;
    *(f32 *)(*(s32 *)(*(s32 *)(D_8038D8D0 + temp_v0 + 0x20) + 0x30) + 8) = arg3;
    *(f32 *)(*(s32 *)(*(s32 *)(D_8038D8D0 + temp_v0 + 0x20) + 0x30) + 0xC) = arg4;
}
