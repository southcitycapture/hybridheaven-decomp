#include "context.h"

extern f32 D_80040930[];
extern f32 D_80044930[];
extern f32 D_80048930[];
extern f32 D_8004C930[];

f32 func_8001EAD0(s16 arg0) {
    arg0 = arg0 & 0x1FFF;
    if (arg0 < 0x800) {
        return D_80044930[arg0];
    }
    if (arg0 < 0x1000) {
        return *(f32 *)((u8 *)D_80048930 + -(arg0 * 4));
    }
    if (arg0 < 0x1800) {
        return -D_80040930[arg0];
    }
    return -*(f32 *)((u8 *)D_8004C930 + -(arg0 * 4));
}
