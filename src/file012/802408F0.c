#include "common.h"


extern void func_80011198(s32 a0, void *a1, s32 a2);
extern void func_800058DC(void *a0, void *a1);
extern void func_8024092C(void);

typedef struct func_802408F0_Struct {
    u8 pad[0x5C];
    void *unk5C;
} func_802408F0_Struct;

void func_802408F0(func_802408F0_Struct *arg0, s32 arg1) {
    void *temp = arg0->unk5C;

    func_80011198(arg1, temp, arg1);
    func_800058DC(arg0, func_8024092C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file012/802408F0/func_8024092C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file012/802408F0/func_80240BD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file012/802408F0/func_80240D98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file012/802408F0/func_80240DA4.s")


extern void func_8037488C(s32 arg0, void *arg1);
extern u8 D_801BBBF0[];
extern void func_80240FA0(void);

void func_80240F44(s32 arg0, s32 arg1) {
    u16 *temp_v0;

    temp_v0 = *(u16 **) (*(u8 **) (D_801BBBF0 + 0x1118) + 0x58);
    *(u16 *) (*(u8 **) (D_801BBBF0 + 0x1118) + 0x30) = temp_v0[0];
    *(u16 *) (*(u8 **) (D_801BBBF0 + 0x1118) + 0x32) = temp_v0[1];
    func_8037488C(arg0, D_801BBBF0);
    func_800058DC(arg0, func_80240FA0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file012/802408F0/func_80240FA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file012/802408F0/func_80240FE4.s")

