#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80375560/func_80375560.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80375560/func_80375634.s")


typedef struct func_80375688_StructData {
    u8 pad[0xC];
    u16 count;
} func_80375688_StructData;

typedef struct func_80375688_Struct {
    u8 pad[0x5C];
    func_80375688_StructData *data;
} func_80375688_Struct;

extern s32 func_80375634(void *, s32);
extern u8 D_8038CCC0[];

void func_80375688(func_80375688_Struct *arg0, u8 arg1, u16 arg2, u16 arg3)
{
  s32 limit;
  func_80375688_StructData *new_var;
  s32 i;
  new_var = arg0->data;
  limit = new_var->count - 1;
  if (limit < arg2)
  {
    arg2 = limit;
  }
  i = (limit + 1) <= arg3;
  if (i)
  {
    arg3 = limit;
  }
  for (i = arg2; i <= arg3; i++)
  {
    D_8038CCC0[func_80375634(arg0, i & 0xFF)] = arg1;
  }

}


typedef struct func_8037573C_Struct {
    u8 pad[0x2C];
    void *unk2C;
    u8 unk30;
    u8 unk31;
} func_8037573C_Struct;
extern func_8037573C_Struct *func_80005670(void *, void *);
extern void *D_801BBCCC;
extern u8 D_803883E0[];
extern void func_801479A8(s32);

void func_8037573C(func_80375688_Struct *arg0, s32 arg1) {
    u8 pad[4];
    func_80375688_StructData *sp20;
    u8 pad2[4];
    u8 sp1B;
    func_8037573C_Struct *t;

    sp20 = arg0->data;
    if ((void *)arg0 == D_801BBCCC) {
        sp1B = 0;
    } else {
        sp1B = 1;
    }
    func_801479A8(arg0);
    t = func_80005670(arg0, D_803883E0);
    t->unk30 = sp1B;
    t->unk2C = arg0;
    t->unk31 = sp20->count;
}


extern void func_800058DC(void *, void *);
extern void func_803758FC();

typedef struct func_803757B0_Struct {
    u8 pad[0x33];
    u8 unk33;
    u8 unk34;
    u8 pad2[0x3];
    u8 unk38;
} func_803757B0_Struct;

void func_803757B0(func_803757B0_Struct *arg0, s32 arg1) {
    arg0->unk34 = 0;
    arg0->unk33 = 0;
    arg0->unk38 = 0;
    func_800058DC(arg0, func_803758FC);
}


u8 func_803757E4(u8 arg0, u8 arg1, f32 arg2) {
    return (f32)(u8)((arg0 + arg1) / 2) + (f32)(s8)((arg0 - arg1) / 2) * arg2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80375560/func_803758FC.s")


extern void func_80005700(void *);

typedef struct func_803762CC_Struct {
    u8 pad[0x2C];
    s32 unk2C;
} func_803762CC_Struct;

void func_803762CC(func_803762CC_Struct *arg0, s32 arg1) {
    func_801479A8(arg0->unk2C);
    func_80005700(arg0);
}

