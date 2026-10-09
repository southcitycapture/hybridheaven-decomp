#include "common.h"


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


extern f32 D_8003E930[];
extern f32 D_80042930[];
extern f32 D_80046930[];
extern f32 D_8004A930[];

f32 func_8001EB64(s16 arg0) {
    s32 idx;

    arg0 = arg0 & 0x1FFF;
    if (arg0 < 0x800) {
        idx = -(arg0 * 4);
        return *(f32 *)((u8 *)D_80046930 + idx);
    }
    if (arg0 < 0x1000) {
        return -D_80042930[arg0];
    }
    if (arg0 < 0x1800) {
        idx = -(arg0 * 4);
        return -*(f32 *)((u8 *)D_8004A930 + idx);
    }
    return D_8003E930[arg0];
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001EAD0/func_8001EBF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001EAD0/func_8001ED68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001EAD0/func_8001EF38.s")

