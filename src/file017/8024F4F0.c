#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024F4F0/func_8024F4F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024F4F0/func_8024FB5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024F4F0/func_8024FC74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024F4F0/func_8024FEC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024F4F0/func_8025006C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024F4F0/func_8025022C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024F4F0/func_802502F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024F4F0/func_802503CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024F4F0/func_802504AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024F4F0/func_80250730.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024F4F0/func_802508F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024F4F0/func_80250A98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024F4F0/func_80250AE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024F4F0/func_80250B54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024F4F0/func_80250C9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024F4F0/func_80250F04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024F4F0/func_80251350.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024F4F0/func_802514F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024F4F0/func_8025153C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024F4F0/func_80251574.s")


typedef struct func_80251750_StructA {
    u8 pad[0x90];
    u16 unk90;
    u16 unk92;
} func_80251750_StructA;

typedef struct func_80251750_StructB {
    u8 pad[0x22];
    u8 unk22;
} func_80251750_StructB;

typedef struct func_80251750_StructC {
    u8 pad[0x4C];
    u8 unk4C;
} func_80251750_StructC;

typedef struct func_80251750_StructD {
    u8 pad[0x30];
    func_80251750_StructC *unk30;
} func_80251750_StructD;

typedef struct func_80251750_StructE {
    u8 pad[0x10];
    func_80251750_StructD *unk10;
    func_80251750_StructB *unk14;
} func_80251750_StructE;

extern void func_8012C89C(void *, s32, s32, u16);
extern u16 D_80259488[];

void func_80251750(func_80251750_StructA *arg0, func_80251750_StructE *arg1) {
    s32 temp_hi;
    func_80251750_StructC *temp_v0;

    func_8012C89C(arg0, 5, 0x302, D_80259488[(s32) ((s32) arg0->unk90 / 15) % 5]);
    temp_hi = (s32) arg0->unk90 % 15;
    if (temp_hi == 0) {
        arg1->unk14->unk22 = 1;
    } else if (temp_hi == 1) {
        arg1->unk14->unk22 = 0;
    }
    temp_v0 = arg1->unk10->unk30;
    temp_v0->unk4C = (u8) (temp_v0->unk4C + 2);
    arg0->unk90 = (u16) (arg0->unk90 + 1);
    arg0->unk92 = (u16) (arg0->unk92 - 1);
}

