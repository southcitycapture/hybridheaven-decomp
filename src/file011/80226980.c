#include "common.h"


extern u8 D_802407DC[];

s32 func_80226980(s32 arg0) {
    s32 *p;

    p = &arg0;
    arg0 &= 0xFF;
    if (D_802407DC[arg0] != 0) {
        return 1;
    }
    return 0;
}


extern s8 D_8023C920;

void func_802269B0(s32 arg0) {
    s32 *p = &arg0;
    D_8023C920 = arg0;
}



u8 func_802269C0(void) {
    return D_8023C920;
}


extern u8 D_802407DA;

u8 func_802269CC(void) {
    return D_802407DA;
}


s32 func_80126944();                                /* extern */
extern u16 D_801BBC1C;

void func_802269D8(void) {
    if (func_80126944() == 1) {
        D_802407DA = 0;
    }
    if ((D_801BBC1C == 0xA) || (D_801BBC1C == 0xB)) {
        D_802407DA = 1;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80226980/func_80226A2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80226980/func_80226AA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80226980/func_80227484.s")


struct func_80227750_Inner {
    u8 pad[8];
    u8 unk8;
    u8 unk9;
    u8 unkA;
};

struct func_80227750_Outer {
    u8 pad[0x30];
    struct func_80227750_Inner *unk30;
};

extern s8 func_8012C6B4(s32 arg0);

void func_80227750(struct func_80227750_Outer *arg0) {
    struct func_80227750_Inner *sp1C;

    sp1C = arg0->unk30;
    sp1C->unk8 = func_8012C6B4(0xFF);
    sp1C->unk9 = func_8012C6B4(0xFF);
    sp1C->unkA = func_8012C6B4(0xFF);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80226980/func_802277A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80226980/func_80227A80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80226980/func_80227D44.s")


struct func_8022811C_Inner {
    s16 unk0;
    s16 unk2;
    s16 unk4;
};

struct func_8022811C_Outer {
    u8 pad[0x30];
    struct func_8022811C_Inner *unk30;
};

struct func_8022811C_Glob {
    u8 pad[0xE];
    u8 unkE;
    u8 unkF;
};

extern void func_80227D44(void *arg0, void *arg1, void *arg2);
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern struct func_8022811C_Glob D_801BEC68;

void func_8022811C(void *arg0, struct func_8022811C_Outer **arg1) {
    struct func_8022811C_Inner *temp_v0;
    struct func_8022811C_Inner *sp18;

    temp_v0 = arg1[D_801BEC68.unkE]->unk30;
    sp18 = arg1[D_801BEC68.unkF]->unk30;
    func_80227D44(arg0, arg1, D_801BC03C);
    func_80227D44(arg0, arg1, D_801BC3D8);
    temp_v0->unk0 = 0x100 - temp_v0->unk4;
    sp18->unk0 = temp_v0->unk0 - sp18->unk4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80226980/func_802281BC.s")

extern u8 D_801BBBF0[];

extern u8 D_802407C8[];

void func_80228298(void *arg0) {
    u8 i;
    s32 k;

    if (arg0 == D_801BBBF0 + 0x44C) {
        k = 0;
    } else {
        k = 1;
    }
    for (i = 0; i < 4; i++) {
        if (i * 100 + 100 < *(s16 *)((u8 *)arg0 + 6)) {
            (D_802407C8 + k * 4)[i] = 1;
        } else {
            (D_802407C8 + k * 4)[i] = 0;
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80226980/func_80228320.s")


struct func_80228484_Struct { f32 f0; f32 f4; u8 pad[0xB]; u8 u13; u8 pad2[0xC]; u8 u20; };
extern struct func_80228484_Struct D_801BEC60;
extern void func_80002364(s32, s32, s32, s32);
extern void func_80005700(void *);
extern void func_800058DC(void *, void *);
extern void func_80116E80(s32);
extern void func_801170DC(s32);
extern void func_80146AE4(s32);
extern void func_80146AF4(s32);
extern void func_80146BE0(s16, s32);
extern void func_80146CD4(s16, s32);
extern s32 func_80147598();
extern void func_80226A2C(s32);
extern u8 func_80226AA4(void *, s32, s8 *);
extern u8 func_802286D0[];

#define H(o) (*(s16 *)(D_801BBBF0 + (o)))

void func_80228484(u8 *arg0, s32 arg1)
{
  u8 sp2F;
  s8 sp2E;
  s16 sp2C;
  u8 pad[8];
  sp2E = 0;
  func_80002364(0x0F000000, 8, 2, 3);
  *((u16 *) (arg0 + 0x94)) = (*((u16 *) (arg0 + 0x96)) = 0);
  arg0[0x98] = (arg0[0x99] = 0);
  arg0[0x9A] = (arg0[0x9B] = 0);
  func_80228298(D_801BC03C);
  func_80228298(D_801BC3D8);
  arg0[0x90] = 0;
  D_801BEC60.f0 = (f32) (*((s16 *) (D_801BBBF0 + 0x492)));
  D_801BEC60.f4 = (f32) (*((s16 *) (D_801BBBF0 + 0x82E)));
  func_802269B0(0);
  func_802269D8();
  func_80146AF4(0);
  func_80146AE4(0);
  func_80116E80(0x200);
  func_80116E80(0x400);
  func_80116E80(0x800);
  sp2F = func_80226AA4(arg0, arg1, &sp2E);
  func_80226A2C(arg1);
  if (func_80147598() != 0)
  {
    if ((*((s16 *) (D_801BBBF0 + 0x44C))) != 0)
    {
      sp2C = (s16) ((s32) ((((f32) (*((s16 *) (D_801BBBF0 + 0x44E)))) / ((f32) (*((s16 *) (D_801BBBF0 + 0x44C))))) * 8192.0f));
    }
    func_80146CD4(sp2C, 0);
    func_80146BE0(sp2C, ((s32 *) arg1)[D_801BEC60.u13]);
  }
  if ((*((s16 *) (D_801BBBF0 + 0x7E8))) != 0)
  {
    sp2C = (s16) ((s32) ((((f32) (*((s16 *) (D_801BBBF0 + 0x7EA)))) / ((f32) (*((s16 *) (D_801BBBF0 + 0x7E8))))) * 8192.0f));
  }
  func_80146CD4(sp2C, 1);
  func_80146BE0(sp2C, ((s32 *) arg1)[D_801BEC60.u20]);
  *((s16 *) (D_801BBBF0 + 0x494)) = *((s16 *) (D_801BBBF0 + 0x456));
  *((s16 *) (D_801BBBF0 + 0x496)) = *((s16 *) (D_801BBBF0 + 0x494));
  *((s16 *) (D_801BBBF0 + 0x830)) = *((s16 *) (D_801BBBF0 + 0x7F2));
  *((s16 *) (D_801BBBF0 + 0x832)) = *((s16 *) (D_801BBBF0 + 0x830));
  *((s16 *) (D_801BBBF0 + 0x498)) = *((s16 *) (D_801BBBF0 + 0x452));
  *((s16 *) (D_801BBBF0 + 0x834)) = *((s16 *) (D_801BBBF0 + 0x7EE));
  if (sp2F != 0)
  {
    func_80005700(arg0);
    func_801170DC(0x200);
    func_801170DC(0x400);
    return;
  }
  *((s16 *) (arg0 + 0x3C)) = 0;
  func_800058DC(arg0, func_802286D0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80226980/func_802286D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80226980/func_80228710.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80226980/func_80228884.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80226980/func_80228ABC.s")

