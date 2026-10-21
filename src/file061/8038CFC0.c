#include "common.h"

extern s32 D_801BBCCC;
extern s32 func_8022B640(s32);
extern s32 func_8038D618();
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern void func_800058DC();
extern void func_80229500();
extern void func_80229CE0(void *, void *, s32);
extern void func_8022A834();
extern void func_8022B3E0();
extern void func_8038CFF4();
extern void func_8038D770();



void func_8038CFC0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038CFF4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file061/8038CFC0/func_8038CFF4.s")


typedef struct func_8038D618_StructA {
    u8 pad0[0x9A];
    s16 unk9A;
    u8 pad9C[5];
    u8 unkA1;
    u8 unkA2;
} func_8038D618_StructA;
typedef struct func_8038D618_StructB {
    u8 pad0[0x38];
    u32 f31 : 1;
    u32 rest : 31;
    u8 pad3C[0x2D8 - 0x3C];
    u8 unk2D8;
    u8 unk2D9;
} func_8038D618_StructB;
typedef struct func_8038D618_StructC {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x2C];
    u32 hi : 11;
    u32 f : 2;
    u32 rest : 19;
} func_8038D618_StructC;

s32 func_8038D618(arg0, arg1, arg2)
    func_8038D618_StructA *arg0;
    func_8038D618_StructB *arg1;
    func_8038D618_StructC *arg2;
{
    if (arg2->f != 0) {
        arg1->unk2D8 = 0xB;
        arg1->unk2D9 = 5;
        arg0->unk9A |= 8;
    } else if (arg1->f31 != 0) {
        arg1->unk2D8 = 2;
        arg0->unk9A |= 2;
        if (arg2->unk2 < 0x28) {
            func_80229CE0(arg0, arg1, 2);
        } else {
            func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
        }
    }
    arg0->unkA1 = arg1->unk2D8;
    arg0->unkA2 = arg1->unk2D9;
}


struct func_8038D6E8_Struct {
    u8 pad0[0xC];
    s32 unkC;
};


void func_8038D6E8(struct func_8038D6E8_Struct *arg0, void *arg1) {
    void *var_a1;
    void *var_a2;

    if (D_801BBCCC == arg0->unkC) {
        var_a1 = D_801BC03C;
    } else {
        var_a1 = D_801BC3D8;
    }
    if (D_801BBCCC == arg0->unkC) {
        var_a2 = D_801BC3D8;
    } else {
        var_a2 = D_801BC03C;
    }
    func_80229500(arg0, var_a1, var_a2);
    func_8038D618(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038D770);
}


typedef struct func_8038D770_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x8A];
    s16 unk9A;
    u8 pad2[0xC];
    u8 unkA8;
    u8 padA9[7];
    s32 unkB0;
} func_8038D770_Struct;

typedef struct func_8038D770_StructB {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xF51];
    u8 unk1031;
} func_8038D770_StructB;

typedef struct func_8038D770_StructC {
    u8 pad0[0x30];
    u16 unk30;
    u8 pad1[6];
    u32 f31 : 1;
    u32 f30 : 2;
    u32 f28 : 1;
    u32 rest : 28;
} func_8038D770_StructC;

extern func_8038D770_StructB D_801BBBF0;

void func_8038D770(func_8038D770_Struct *arg0, s32 arg1) {
    func_8038D770_StructC *a1;
    func_8038D770_StructC *a2;
    u32 v;
    u32 t;

    if (D_801BBBF0.unkDC == arg0->unkC) {
        a1 = &D_801BC03C;
    } else {
        a1 = &D_801BC3D8;
    }
    if (D_801BBBF0.unkDC == arg0->unkC) {
        a2 = &D_801BC3D8;
    } else {
        a2 = &D_801BC03C;
    }
    if (arg0->unkA8 == 2) {
        func_8038D618(arg0, a1, a2, &D_801BBBF0);
        arg0->unkA8 = 0;
        return;
    }
    if ((a1->unk30 & 7) || D_801BBBF0.unk1031 == 6) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = (s32)func_8038D770;
        func_800058DC(arg0, func_8022B3E0, a2, &D_801BBBF0);
        return;
    }
    if (((*(u32 *)((u8 *)a2 + 0x30) << 11) >> 30) == 0) {
        if (arg0->unk9A & 8) {
            arg0->unk9A ^= 8;
            func_8038D618(arg0, a1, a2, &D_801BBBF0);
            return;
        }
    }
    if (a1->f31 != 0 && !a1->f28 && !(arg0->unk9A & 2)) {
        func_8038D618(arg0, a1, a2, &D_801BBBF0);
        return;
    }
    if (a1->f31 != 0 && a1->f28 && !(arg0->unk9A & 4)) {
        func_8038D618(arg0, a1, a2, &D_801BBBF0);
        return;
    }
    if (a1->f31 == 0) {
        if (arg0->unk9A & 6) {
            arg0->unk9A &= 0xFFF9;
            func_8038D618(arg0, a1, a2, &D_801BBBF0);
        }
    }
}


struct func_8038D900_StructA {
    u8 pad0[0xA5];
    u8 unkA5;
};

struct func_8038D900_StructB {
    u8 pad0[6];
    s16 unk6;
    u8 pad1[0x333 - 8];
    u8 unk333;
};


void func_8038D900(struct func_8038D900_StructA *arg0, struct func_8038D900_StructB *arg1)
{
  u8 temp_v0;
  temp_v0 = arg1->unk333;
  if (temp_v0 == 0)
  {
    goto case0;
  }
  if (1 == temp_v0)
  {
    goto case1;
  }
  if (temp_v0 == 2)
  {
    goto case2;
    done:
    return;

  }
  goto done;
  case0:
  arg0->unkA5 = 0;

  arg1->unk333 = (u8) (arg1->unk333 + 1);
  return;
  case1:
  func_8022A834();

  arg1->unk333 = (u8) (arg1->unk333 + 1);
  return;
  case2:
  if (arg1->unk6 >= 0x64)
  {
    func_8022A834();
    arg1->unk333 = (u8) (arg1->unk333 + 1);
  }
  else
  {
    arg0->unkA5 = 0;
  }

  arg1->unk333 = 0;
  return;
}

