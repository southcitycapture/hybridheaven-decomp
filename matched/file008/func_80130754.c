#include "context.h"

extern f32 D_801753A0[];
extern f32 D_801763A0[];
extern f32 D_801773A0[];
extern f32 D_801783A0[];

f32 func_80130754(u16 arg0) {
    u16 temp_v0;

    arg0 = arg0 & 0x3FF;
    arg0 = (arg0 * 2) & 0xFFFF;
    temp_v0 = arg0;
    if (arg0 < 0x200) {
        return D_801763A0[arg0];
    }
    if (temp_v0 < 0x400) {
        return *(f32 *)((u8 *)D_801773A0 + (-(temp_v0 * 4)));
    }
    if (temp_v0 < 0x600) {
        return -*(f32 *)((u8 *)D_801753A0 + temp_v0 * 4);
    }
    return -*(f32 *)((u8 *)D_801783A0 + (-(temp_v0 * 4)));
}
