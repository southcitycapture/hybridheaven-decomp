#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/main/80006AF0/D_8004C460.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80006AF0/_mrg_func_80006AF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80006AF0/func_80007328.s")


struct func_8000736C_Struct4 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct func_8000736C_Struct2 {
    u8 pad0[0xA4];
    struct func_8000736C_Struct4 unkA4;
};

struct func_8000736C_Struct3 {
    u8 pad0[0x2C];
    struct func_8000736C_Struct2 *unk2C;
};

extern void func_80007114(struct func_8000736C_Struct3 **, struct func_8000736C_Struct4);

void func_8000736C(struct func_8000736C_Struct3 **arg0)
{
  struct func_8000736C_Struct2 *temp_t7;
 temp_t7 = (*arg0)->unk2C; func_80007114(arg0, (*(*arg0)->unk2C).unkA4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80006AF0/func_800073AC.s")


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

#pragma GLOBAL_ASM("asm/nonmatchings/main/80006AF0/func_80007618.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80006AF0/func_800076B0.s")

