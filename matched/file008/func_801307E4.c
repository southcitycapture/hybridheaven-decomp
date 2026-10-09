#include "context.h"

extern f32 D_801753A4[];
extern f32 D_801763A4[];
extern f32 D_801773A4[];
extern f32 D_801783A4[];

f32 func_801307E4(u16 arg0) {
    u16 temp_v0;

    arg0 = arg0 & 0x3FF;
    arg0 = (arg0 * 2) & 0xFFFF;
    temp_v0 = arg0;
    if (arg0 < 0x200) {
        return D_801763A4[arg0];
    }
    if (temp_v0 < 0x400) {
        return -*(f32 *)((u8 *)D_801773A4 + (-(temp_v0 * 4)));
    }
    if (temp_v0 < 0x600) {
        return -*(f32 *)((u8 *)D_801753A4 + temp_v0 * 4);
    }
    return *(f32 *)((u8 *)D_801783A4 + (-(temp_v0 * 4)));
}
