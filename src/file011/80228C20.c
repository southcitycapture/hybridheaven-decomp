#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80228C20/func_80228C20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80228C20/func_80228CC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80228C20/func_80228D90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80228C20/func_80228E5C.s")


typedef struct func_80228FD0_Struct {
    u8 pad0[0x9C];
    s32 unk9C;
} func_80228FD0_Struct;

typedef struct func_80228FD0_StructArg1 {
    u8 pad0[0x6];
    s16 unk6;
    s16 unk8;
} func_80228FD0_StructArg1;

f32 func_8001EAD0(s32);                             /* extern */
f32 func_8001EB64(s32);                             /* extern */
s32 func_80228C20();                                /* extern */
extern s16 D_801BBE22;

void func_80228FD0(func_80228FD0_Struct *arg0, func_80228FD0_StructArg1 *arg1, u8 arg2) {
    s16 sp1E;
    s16 sp1C;

    arg2 = arg2 & 0xFF;
    sp1C = (s16) (0x2800 - D_801BBE22) & 0x1FFF;
    if (arg0->unk9C & arg2) {
        sp1E = (s16) (func_80228C20() + sp1C + 0x800) & 0x1FFF;
    } else {
        sp1E = (s16) ((func_80228C20() + sp1C) - 0x800) & 0x1FFF;
    }
    arg1->unk6 = (s16) (s32) (-func_8001EB64(sp1E) * 40.0f);
    arg1->unk8 = (s16) (s32) (func_8001EAD0(sp1E) * 40.0f);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80228C20/func_802290C8.s")


typedef struct func_802291FC_Struct0 {
    u8 pad[0x94];
    u8 unk94;
} func_802291FC_Struct0;

typedef struct func_802291FC_Struct1 {
    u8 pad[0x38];
    u32 unk38;
} func_802291FC_Struct1;

typedef struct func_802291FC_Struct2 {
    u8 pad[0x4];
    s16 unk4;
} func_802291FC_Struct2;

s32 func_802291FC(void *arg0, void *arg1, void *arg2, u8 arg3)
{
  func_802291FC_Struct0 *s0 = arg0;
  int new_var;
  func_802291FC_Struct1 *s1 = arg1;
  func_802291FC_Struct2 *s2 = arg2;
  u32 temp_v0;
  u8 temp_v1;
  temp_v0 = s1->unk38;
  if (((temp_v0 >> 0x1F) != 0) && ((((u32) (temp_v0 * 2)) >> 0x1E) == 0))
  {
    temp_v1 = s0->unk94;
    new_var = arg3 < s0->unk94;
    s0->unk94 = (u8) (temp_v1 + 1);
    if (new_var)
    {
      s2->unk4 = 0x10;
      s0->unk94 = 0;
      return 2;
    }
    return 1;
  }
  s0->unk94 = 0;
  return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80228C20/func_80229260.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80228C20/func_802292D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80228C20/func_80229404.s")


typedef struct func_802294BC_Struct {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
    u8 pad1[0x334 - 0x2DA];
    s32 unk334;
    u8 pad2[0x38F - 0x338];
    u8 unk38F;
} func_802294BC_Struct;

s32 func_8022B640(u8, void *);                      /* extern */

void func_802294BC(func_802294BC_Struct *arg0) {
    s32 idx;

    arg0->unk2D8 = 8;
    idx = func_8022B640(arg0->unk38F, arg0);
    arg0->unk2D9 = *(u8 *)(arg0->unk334 + idx + 0x7F);
}


void func_80229500(u8 *arg0) {
    *(u8 *)(arg0 + 0x95) = 0;
    *(u8 *)(arg0 + 0x92) = 0;
    *(u16 *)(arg0 + 0x96) = 0;
    *(u32 *)(arg0 + 0x9C) = 0;
    *(u16 *)(arg0 + 0x9A) = 0;
    *(u16 *)(arg0 + 0x98) = 0;
    *(u8 *)(arg0 + 0x94) = 0;
    *(u8 *)(arg0 + 0x93) = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80228C20/func_80229524.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80228C20/func_80229CE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80228C20/func_8022A824.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80228C20/func_8022A834.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80228C20/func_8022AAA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80228C20/func_8022AB58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80228C20/func_8022ABD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80228C20/func_8022AF94.s")


typedef struct func_8022B350_Entry {
    u8 pad0[2];
    s16 unk2;
    s16 unk4;
    s16 unk6;
    s16 unk8;
} func_8022B350_Entry;

typedef struct func_8022B350_StructInner {
    u8 pad0[0xC];
    s32 unkC;
} func_8022B350_StructInner;

typedef struct func_8022B350_StructOuter {
    u8 pad0[0xC];
    func_8022B350_StructInner *unkC;
} func_8022B350_StructOuter;

extern func_8022B350_Entry D_801BBC8C;
extern func_8022B350_Entry D_801BBCAC;
extern s32 D_801BBCCC;

void func_8022B350(func_8022B350_StructOuter *arg0, s32 arg1) {
    func_8022B350_Entry *var_v0;

    if (D_801BBCCC == arg0->unkC->unkC) {
        var_v0 = &D_801BBC8C;
    } else {
        var_v0 = &D_801BBCAC;
    }
    var_v0->unk6 = 0;
    var_v0->unk8 = 0;
    var_v0->unk4 = 0;
    var_v0->unk2 = 0;
}


extern u8 D_801BCC21[];

typedef struct func_8022B394_Struct {
    u8 pad[0x9C];
    s32 unk9C;
} func_8022B394_Struct;

void func_8022B394(func_8022B394_Struct *arg0, s32 arg1) {
    if (D_801BCC21[0] == 5) {
        arg0->unk9C = arg0->unk9C + 1;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80228C20/func_8022B3C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80228C20/func_8022B3E0.s")


typedef struct func_8022B4A4_StructArg {
    u8 pad0[0xC];
    s32 unkC;
} func_8022B4A4_StructArg;

typedef struct func_8022B4A4_StructBase {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0x1031 - 0xE0];
    u8 unk1031;
} func_8022B4A4_StructBase;

typedef struct func_8022B4A4_StructEntry {
    u8 pad0[0x30];
    u32 unk30;
} func_8022B4A4_StructEntry;

void func_80005700(void);
extern func_8022B4A4_StructBase D_801BBBF0;
extern func_8022B4A4_StructEntry D_801BC03C;
extern func_8022B4A4_StructEntry D_801BC3D8;

void func_8022B4A4(func_8022B4A4_StructArg *arg0, s32 arg1) {
    func_8022B4A4_StructEntry *var_v0;

    if (D_801BBBF0.unkDC == arg0->unkC) {
        var_v0 = &D_801BC03C;
    } else {
        var_v0 = &D_801BC3D8;
    }
    if ((((var_v0->unk30 * 2) >> 0x1E) != 0) || (D_801BBBF0.unk1031 == 0xE)) {
        func_80005700();
    }
}


typedef struct func_8022B518_Struct {
    u8 pad[0x90];
    u8 unk90;
} func_8022B518_Struct;

void func_800058DC(void *arg0, void *arg1);
void func_8022B544(void);

void func_8022B518(func_8022B518_Struct *arg0, s32 arg1) {
    arg0->unk90 = 0;
    func_800058DC(arg0, func_8022B544);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80228C20/func_8022B544.s")

