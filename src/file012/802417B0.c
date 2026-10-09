#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file012/802417B0/func_802417B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file012/802417B0/func_802417E4.s")


struct func_80242328_Struct {
    u8 pad0[0x92];
    u8 unk92;
    u8 unk93;
    u8 pad94[0x9A - 0x94];
    u16 unk9A;
    u8 pad9C[0xA0 - 0x9C];
    u8 unkA0;
};

extern void func_800058DC(void *arg0, void *arg1);
extern void func_80242364(void);

void func_80242328(struct func_80242328_Struct *arg0, s32 arg1) {
    arg0->unk92 = 3;
    arg0->unk93 = 0;
    arg0->unk9A = 0;
    arg0->unkA0 = 3;
    func_800058DC(arg0, func_80242364);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file012/802417B0/func_80242364.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file012/802417B0/func_80242874.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file012/802417B0/func_80242B2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file012/802417B0/func_80242D80.s")


struct func_80242E30_Struct {
    u8 pad0[0x34];
    s16 *unk34;
};

void func_80242E30(struct func_80242E30_Struct *arg0, s32 arg1)
{
  s16 *temp_v0;
  s16 temp_t8;
  temp_v0 = arg0->unk34;
  temp_v0[4] = 0;
  temp_t8 = temp_v0[4];
  temp_v0[1] = 0;
  temp_v0[2] = 0;
  temp_v0[5] = 0;
  temp_v0[6] = 0;
  temp_v0[3] = ((temp_t8 & 0xFFFFu) & 0xFFFFu) & 0xFFFFu;
}


struct func_80242E58_Struct {
    u8 pad0[0x30];
    void *unk30;
    s32 unk34;
    void *unk38;
    s16 unk3C;
    s16 unk3E;
};

struct func_80242E58_Arg {
    u8 pad0[0x68];
    s32 unk68;
};

struct func_80242E58_Table {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
};

extern void *func_80005670(void *, void *);
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 D_80248F20[];

void *func_80242E58(void *arg0) {
    struct func_80242E58_Table *var_v1;
    struct func_80242E58_Struct *temp_v0;

    temp_v0 = func_80005670(arg0, D_80248F20);
    if (temp_v0 != NULL) {
        if ((s32) arg0 == D_801BBCCC) {
            var_v1 = (struct func_80242E58_Table *) D_801BC03C;
        } else {
            var_v1 = (struct func_80242E58_Table *) D_801BC3D8;
        }
        temp_v0->unk30 = arg0;
        temp_v0->unk34 = ((struct func_80242E58_Arg *) arg0)->unk68;
        temp_v0->unk38 = var_v1;
        temp_v0->unk3C = var_v1->unk2D8;
        temp_v0->unk3E = var_v1->unk2D9;
    }
    return temp_v0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file012/802417B0/func_80242ED4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file012/802417B0/func_8024308C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file012/802417B0/func_80243174.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file012/802417B0/func_802432F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file012/802417B0/func_8024334C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file012/802417B0/func_80243454.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file012/802417B0/func_802434C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file012/802417B0/func_80243538.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file012/802417B0/func_80243588.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file012/802417B0/func_802436A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file012/802417B0/func_802438A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file012/802417B0/func_80243920.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file012/802417B0/func_80243A48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file012/802417B0/func_80243B4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file012/802417B0/func_80243C3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file012/802417B0/func_80243CA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file012/802417B0/func_80243CF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file012/802417B0/func_80243D8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file012/802417B0/func_80243DDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file012/802417B0/func_80243E2C.s")

