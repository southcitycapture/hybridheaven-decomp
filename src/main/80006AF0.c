#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/main/80006AF0/D_8004C460.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80006AF0/_mrg_func_80006AF0.s")


struct func_80007328_StructVec {
    s32 x;
    s32 y;
    s32 z;
};

struct func_80007328_StructData {
    u8 pad[0x98];
    struct func_80007328_StructVec vec;
};

struct func_80007328_StructObject {
    u8 pad[0x2C];
    struct func_80007328_StructData *data;
};

extern void func_80007114();

void func_80007328(s32 arg0, struct func_80007328_StructObject **arg1) {
    func_80007114(arg0, (*arg1)->data->vec);
}


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


struct func_80007618_Struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
};

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);

void func_80007618(struct func_80007618_Struct *arg0, s16 arg1) {
    f32 sp24;
    f32 sp20;

    sp20 = func_8001EB64(arg1);
    sp24 = (arg0->unk4 * sp20) - (func_8001EAD0(arg1) * arg0->unk8);
    sp20 = func_8001EAD0(arg1);
    arg0->unk8 = (func_8001EB64(arg1) * arg0->unk8) + (arg0->unk4 * sp20);
    arg0->unk4 = sp24;
}


struct func_800076B0_Struct {
    f32 unk0;
    f32 unk4;
};


void func_800076B0(struct func_800076B0_Struct *arg0, s16 arg1) {
    f32 sp24;
    f32 sp20;

    sp20 = func_8001EB64(arg1);
    sp24 = (arg0->unk0 * sp20) - (func_8001EAD0(arg1) * arg0->unk4);
    sp20 = func_8001EAD0(arg1);
    arg0->unk4 = (func_8001EB64(arg1) * arg0->unk4) + (arg0->unk0 * sp20);
    arg0->unk0 = sp24;
}

