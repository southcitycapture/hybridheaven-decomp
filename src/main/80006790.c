#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/main/80006790/func_80006790.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80006790/func_800068C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80006790/func_800069A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80006790/func_80006AB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80006790/func_80006AF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80006790/func_80006F8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80006790/func_80007114.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80006790/func_80007328.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80006790/func_8000736C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80006790/func_800073AC.s")


extern f32 func_8002FC20(f32, f32);

void func_800075B4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4, f32 arg5) {
    f32 dx;
    f32 dy;
    f32 dz;

    dx = *(f32 *)&arg0 - *(f32 *)&arg3;
    dy = *(f32 *)&arg1 - arg4;
    dz = *(f32 *)&arg2 - arg5;
    func_8002FC20((dx * dx) + (dy * dy) + (dz * dz), dz);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80006790/func_80007618.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80006790/func_800076B0.s")

