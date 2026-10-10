#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file020/80243260/func_80243260.s")


extern void func_800058DC(void *, void *);
extern void func_80020718(s32);
extern s32 func_801C3D20(f32, f32, f32);
extern void func_8024332C(void);

void func_802432C0(void *arg0, void *arg1) {
    if (func_801C3D20(410.0f, 660.0f, 40.0f) != 0) {
        ((s16 *)arg0)[0x3C / 2] = 0;
        ((s16 *)arg0)[0x90 / 2] = 1;
        ((s16 *)arg0)[0x92 / 2] = 8;
        func_80020718(0x155);
        func_800058DC(arg0, func_8024332C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file020/80243260/func_8024332C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file020/80243260/func_802435AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file020/80243260/func_802435B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file020/80243260/func_8024363C.s")


struct func_802436C0_Struct {
    u8 pad[0x3C];
    s16 unk3C;
};

extern s32 func_80150584(void);
extern void func_80133A24(s32);
extern f32 D_80246BE8;
extern void func_80243724(void);

void func_802436C0(struct func_802436C0_Struct *arg0, s32 arg1) {
    if (func_80150584() == 0) {
        if (func_801C3D20(-200.0f, D_80246BE8, 40.0f) != 0) {
            func_80133A24(0x170);
            arg0->unk3C = 0;
            func_800058DC(arg0, func_80243724);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file020/80243260/func_80243724.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file020/80243260/func_802437F0.s")


typedef struct func_802438F8_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_802438F8_Struct;

extern s32 func_800178E8(void);
extern s32 func_80017910(void);
extern void func_8015115C(s32, void *);
extern void func_8015122C(s32, void *, s32);
extern s32 func_80151790(s32);
extern u8 D_80244430[];
extern u8 D_8024443C[];
extern u8 D_80244448[];
extern s32 D_80246C70;
extern void func_802439B4(void);

void func_802438F8(func_802438F8_Struct *arg0, s32 arg1) {
    s32 temp_v0;

    if (func_80151790(D_80246C70) == 0) {
        temp_v0 = arg0->unk3C;
        arg0->unk3C = temp_v0 + 1;
        if (temp_v0 == 0) {
            func_8015115C(D_80246C70, D_8024443C);
        }
    }
    if (func_80017910() != 0) {
        func_8015115C(D_80246C70, D_80244430);
        arg0->unk3C = 0;
    }
    if (func_800178E8() != 0) {
        func_8015122C(D_80246C70, D_80244448, 5);
        arg0->unk3C = 0;
        func_800058DC(arg0, func_802439B4);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file020/80243260/func_802439B4.s")


extern u8 D_801BBF90[];
extern struct func_80243D1C_Struct D_801BBBF0;
extern void func_80243B04(void);
extern void func_80126968(void);
extern void func_801268CC(s32);
extern s32 func_80020744(s32);
extern s32 func_801270C0(s32);

typedef struct func_80243A74_Sub {
    u8 pad0[0x4];
    f32 unk4;
} func_80243A74_Sub;

void func_80243A74(s32 arg0, s32 arg1)
{
  func_80243A74_Sub *temp_v0;
  if (func_801270C0(D_80246C70) != 0)
  {
    func_80126968();
    *((s16 *) (D_801BBF90 + 4)) = 0x170;
    func_801268CC(0);
    if (1)
    {
      func_80020744(10);
      ;
    }
    (*((func_80243A74_Sub **) (*((u8 **) ((u8 *) &D_801BBBF0 + 0xE0)) + 0x2C)))->unk4 = (*((func_80243A74_Sub **) (*((u8 **) ((u8 *) &D_801BBBF0 + 0xE0)) + 0x2C)))->unk4 - 40.0f;
    *((u8 *) &D_801BBBF0 + 0xBA2) = 0;
    func_800058DC((void *) arg0, (void *) func_80243B04);
  }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file020/80243260/func_80243B04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file020/80243260/func_80243B10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file020/80243260/func_80243B3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file020/80243260/func_80243B88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file020/80243260/func_80243C84.s")


typedef struct func_80243D1C_Struct {
    u8 pad0[4];
    u16 unk4;
    u8 pad6[0x434 - 6];
    u8 unk434;
} func_80243D1C_Struct;

extern s32 func_801C3044(void);
extern s32 func_8012FE50(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern void func_80243D88(void);

void func_80243D1C(s32 arg0, s32 arg1) {
    if (func_801C3044() == 0) {
        D_801BBBF0.unk434 = 4;
        D_801BBBF0.unk4 = 0x48;
        func_8012FE50(9, D_801BBBF0.unk4, 1, 1, 1);
        func_800058DC(arg0, func_80243D88);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file020/80243260/func_80243D88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file020/80243260/func_80243D94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file020/80243260/func_80243F38.s")


extern void func_801C2F0C(s32, s16 *);
extern s32 func_801C2FF8(void);
extern void func_802440D8(void);

typedef struct func_80244074_Struct {
    s16 unk0;
    u8 pad2[2];
    s32 unk4;
    f32 unk8;
} func_80244074_Struct;

void func_80244074(s32 arg0, s32 arg1) {
    u8 pad2[0x8];
    u8 pad[0xC];
    func_80244074_Struct sp18;

    if (func_801C2FF8() != 0) {
        sp18.unk0 = 0x1100;
        sp18.unk4 = 0x01680041;
        sp18.unk8 = 2.0f;
        func_801C2F0C(4, &sp18.unk0);
        func_800058DC(arg0, func_802440D8);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file020/80243260/func_802440D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file020/80243260/func_80244248.s")

