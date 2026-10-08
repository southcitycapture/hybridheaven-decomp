#include "common.h"


struct func_801CBDC0_Struct2 {
    u8 pad[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
};

struct func_801CBDC0_Struct1 {
    u8 pad[0x30];
    struct func_801CBDC0_Struct2 *unk30;
};

extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern void func_8012636C(s32, s32);
extern void func_8012C89C(s32, s32, s32, s32);
extern void func_800062F8(void *, u32);
extern void func_800058DC(s32, void *);
extern u8 D_80164F40[];
extern s16 D_801CFE00;
extern s8 D_801CFE02;
extern s8 D_801CFE03;
extern void func_801CBE88(void);

void func_801CBDC0(s32 arg0, struct func_801CBDC0_Struct1 **arg1) {
    func_80005E44(arg0, D_80164F40);
    func_80006214(arg0);
    func_8012636C(arg0, 0);
    func_8012C89C(arg0, 0, 0xE8, 0);
    func_800062F8(*arg1, 0x80000C00);
    (*arg1)->unk30->unk18 = 1.0f;
    (*arg1)->unk30->unk1C = 1.0f;
    (*arg1)->unk30->unk20 = 1.0f;
    D_801CFE03 = 0;
    D_801CFE00 = 0;
    D_801CFE02 = 0;
    func_800058DC(arg0, func_801CBE88);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801CBDC0/func_801CBE88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801CBDC0/func_801CC294.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801CBDC0/func_801CC2CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801CBDC0/func_801CC344.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801CBDC0/func_801CC3DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801CBDC0/func_801CC484.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801CBDC0/func_801CC574.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801CBDC0/func_801CC618.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801CBDC0/func_801CC6B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801CBDC0/func_801CC748.s")

