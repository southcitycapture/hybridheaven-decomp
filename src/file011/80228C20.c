#include "common.h"

extern f32 func_8001EAD0(s32);                             /* extern */
extern f32 func_8001EB64(s32);                             /* extern */
extern s16 D_801BBE22;
extern s32 D_801BBCCC;
extern s32 D_8022B640(s32);
extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);
extern s32 func_80228C20();                                /* extern */
extern s32 func_8022B640(u8, void *);                      /* extern */
extern s32 func_80376300();
extern u8 D_801BCC21[];
extern void func_80005700();
extern void func_800058DC(void *arg0, void *arg1);
extern void func_8001EF38(f32, f32);
extern void func_8022B544();
extern void func_80376BE4(void *);

extern struct func_8022B4A4_StructBase D_801BBBF0;

typedef struct func_80228C20_StructPos {
    u8 pad0[4];
    f32 unk4;
    u8 pad1[4];
    f32 unkC;
} func_80228C20_StructPos;

typedef struct func_80228C20_StructObj {
    u8 pad0[0x2C];
    func_80228C20_StructPos *unk2C;
} func_80228C20_StructObj;

typedef struct func_80228C20_StructMid {
    u8 pad0[0x24];
    func_80228C20_StructObj *unk24;
} func_80228C20_StructMid;

typedef struct func_80228C20_StructGlobal {
    u8 pad0[0xDC];
    s32 unkDC;
    func_80228C20_StructObj *unkE0;
    u8 pad1[0x448 - 0xE4];
    func_80228C20_StructMid **unk448;
} func_80228C20_StructGlobal;

typedef struct func_80228C20_StructArgC {
    u8 pad0[0xC];
    s32 unkC;
} func_80228C20_StructArgC;

typedef struct func_80228C20_StructArg {
    u8 pad0[0xC];
    func_80228C20_StructArgC *unkC;
} func_80228C20_StructArg;


s32 func_80228C20(arg0)
func_80228C20_StructArg *arg0;
{
    func_80228C20_StructPos *temp_v0;
    func_80228C20_StructPos *temp_v1;

    if (arg0->unkC->unkC == ((func_80228C20_StructGlobal *)&D_801BBBF0)->unkDC) {
        temp_v0 = (*((func_80228C20_StructGlobal *)&D_801BBBF0)->unk448)->unk24->unk2C;
        temp_v1 = ((func_80228C20_StructGlobal *)&D_801BBBF0)->unkE0->unk2C;
        func_8001EF38(temp_v0->unkC - temp_v1->unkC, temp_v0->unk4 - temp_v1->unk4);
    } else {
        temp_v1 = ((func_80228C20_StructGlobal *)&D_801BBBF0)->unkE0->unk2C;
        temp_v0 = (*((func_80228C20_StructGlobal *)&D_801BBBF0)->unk448)->unk24->unk2C;
        func_8001EF38(temp_v1->unkC - temp_v0->unkC, temp_v1->unk4 - temp_v0->unk4);
    }
}


void func_80228CC4(func_80228C20_StructArg *arg0, f32 arg1, f32 arg2)
{
  func_80228C20_StructPos *v0;
  func_80228C20_StructPos *v1;
  if (arg0->unkC->unkC == ((func_80228C20_StructGlobal *) (&D_801BBBF0))->unkDC)
  {
    ;
    v0 = (*((func_80228C20_StructGlobal *) (&D_801BBBF0))->unk448)->unk24->unk2C;
    func_8001EF38((v0->unkC - ((func_80228C20_StructGlobal *) (&D_801BBBF0))->unkE0->unk2C->unkC) + arg2, (v0->unk4 - ((func_80228C20_StructGlobal *) (&D_801BBBF0))->unkE0->unk2C->unk4) + arg1);
  }
  else
  {
    v1 = ((func_80228C20_StructGlobal *) (&D_801BBBF0))->unkE0->unk2C;
    v0 = (*((func_80228C20_StructGlobal *) (&D_801BBBF0))->unk448)->unk24->unk2C;
    func_8001EF38((v1->unkC - v0->unkC) + arg2, (v1->unk4 - v0->unk4) + arg1);
  }
}


typedef struct func_80228D90_StructAngle {
    u8 pad[0x12];
    s16 angle;
} func_80228D90_StructAngle;
typedef struct func_80228D90_StructObj {
    u8 pad[0x2C];
    func_80228D90_StructAngle *unk2C;
} func_80228D90_StructObj;
typedef struct func_80228D90_StructMid {
    u8 pad[0x24];
    func_80228D90_StructObj *unk24;
} func_80228D90_StructMid;
typedef struct func_80228D90_StructInner {
    u8 pad[0xC];
    func_80228D90_StructMid *unkC;
} func_80228D90_StructInner;
typedef struct func_80228D90_StructArg {
    u8 pad[0xC];
    func_80228D90_StructInner *unkC;
} func_80228D90_StructArg;
typedef struct func_80228D90_StructGlobal {
    u8 pad[0xDC];
    func_80228D90_StructMid *unkDC;
    u8 pad1[0x75C - 0xE0];
    s16 unk75C;
    u8 pad2[0xAF8 - 0x75E];
    s16 unkAF8;
    u8 pad3[0xB98 - 0xAFA];
    s16 unkB98;
} func_80228D90_StructGlobal;

s32 func_80228D90(func_80228D90_StructArg *arg0) {
    s16 temp_a1;
    s16 var_a0;
    s16 var_v1;
    s16 angle;
    s32 temp_a2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1_2;
    s32 var_v1_3;
    func_80228D90_StructMid *temp_v1;

    angle = arg0->unkC->unkC->unk24->unk2C->angle;
    var_a0 = (arg0->unkC->unkC == ((func_80228D90_StructGlobal *)&D_801BBBF0)->unkDC) ? ((func_80228D90_StructGlobal *)&D_801BBBF0)->unk75C : ((func_80228D90_StructGlobal *)&D_801BBBF0)->unkAF8;
    var_v1 = (arg0->unkC->unkC == ((func_80228D90_StructGlobal *)&D_801BBBF0)->unkDC) ? ((func_80228D90_StructGlobal *)&D_801BBBF0)->unkB98 : ((func_80228D90_StructGlobal *)&D_801BBBF0)->unkB98 + 0x1000;
    temp_a1 = var_v1 - angle;
#define ANGLE_DIFF(x) (((x) & 0x1000) ? (((x) & 0x1FFF) - 0x2000) : ((x) & 0x1FFF))
    var_v1_3 = ANGLE_DIFF(temp_a1) < 0 ? -ANGLE_DIFF(temp_a1) : ANGLE_DIFF(temp_a1);
    if (var_v1_3 < var_a0) {
        return 1;
    }
    return 0;
}

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


typedef struct func_80229260_StructB {
    u8 pad0[0x38];
    u32 a : 1;
    u32 pad : 2;
    u32 b : 1;
    u32 c : 2;
} func_80229260_StructB;

s32 func_80229260(arg0, arg1, arg2, arg3)
u8 *arg0;
func_80229260_StructB *arg1;
s16 *arg2;
u8 arg3;
{
    if (arg1->a && arg1->b && arg1->c == 2) {
        if (arg3 < arg0[0xA8]) {
            arg2[2] = 0x10;
            arg0[0xA8] = 0;
        } else {
            arg0[0xA8]++;
        }
        return 1;
    }
    arg0[0xA8] = 0;
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80228C20/func_802292D0.s")


/* Forward tags and externs matching context.h (no typedef copies, so no redeclaration). */
struct func_8022B4A4_StructBase;
struct func_8022B4A4_StructEntry;
extern struct func_8022B4A4_StructEntry D_801BC03C;
extern struct func_8022B4A4_StructEntry D_801BC3D8;

typedef struct func_80229404_StructSub {
    u8 pad0[0x7F];
    u8 unk7F;
    u8 unk80;
    u8 unk81;
    u8 unk82;
} func_80229404_StructSub;

typedef struct func_80229404_Struct {
    u8 pad0[0x2D9];
    u8 unk2D9;
    u8 pad1[0x334 - 0x2DA];
    func_80229404_StructSub *unk334;
} func_80229404_Struct;


void func_80229404(func_80229404_Struct *arg0) {
    u8 *var_v0;

    if (arg0 == (func_80229404_Struct *) ((u8 *) &D_801BBBF0 + 0x44C)) {
        var_v0 = (u8 *) &D_801BC3D8;
    } else {
        var_v0 = (u8 *) &D_801BC03C;
    }
    if ((((*(u32 *) (var_v0 + 0x30)) << 0xB) >> 0x1E) == 1) {
        if (func_80376300() != 0) {
            arg0->unk2D9 = arg0->unk334->unk81;
        } else {
            arg0->unk2D9 = arg0->unk334->unk7F;
        }
    } else if (func_80376300() != 0) {
        arg0->unk2D9 = arg0->unk334->unk80;
    } else {
        arg0->unk2D9 = arg0->unk334->unk82;
    }
    func_80376BE4(arg0);
}


typedef struct func_802294BC_Struct {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
    u8 pad1[0x334 - 0x2DA];
    s32 unk334;
    u8 pad2[0x38F - 0x338];
    u8 unk38F;
} func_802294BC_Struct;


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


typedef struct func_8022A824_Struct {
    u8 pad[0xA5];
    u8 unkA5;
} func_8022A824_Struct;

void func_8022A824(func_8022A824_Struct *arg0, s32 arg1) {
    arg0->unkA5 = 1;
}


typedef struct func_8022A834_StructPos {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_8022A834_StructPos;
typedef struct func_8022A834_StructObj {
    u8 pad0[0x2C];
    func_8022A834_StructPos *unk2C;
} func_8022A834_StructObj;
typedef struct func_8022A834_StructMid {
    u8 pad0[0x24];
    func_8022A834_StructObj *unk24;
} func_8022A834_StructMid;
typedef struct func_8022A834_StructG {
    u8 pad0[0x448];
    func_8022A834_StructMid **unk448;
} func_8022A834_StructG;
typedef struct func_8022A834_StructA0 {
    u8 pad0[0xA5];
    u8 unkA5;
} func_8022A834_StructA0;
typedef struct func_8022A834_StructA1 {
    u8 pad0[0x2D9];
    u8 unk2D9;
} func_8022A834_StructA1;

#define G ((func_8022A834_StructG *)&D_801BBBF0)
#define P (*G->unk448)->unk24->unk2C

void func_8022A834(func_8022A834_StructA0 *arg0, func_8022A834_StructA1 *arg1) {
    f32 s, c;
    func_8022A834_StructPos *p;

    arg0->unkA5 = 2;
    s = func_8001EB64((s16)((s16)(P->unk12 + 0x1000) & 0x1FFF));
    c = func_8001EAD0((s16)((s16)(P->unk12 + 0x1000) & 0x1FFF));
    p = P;
    if (func_8010843C(p->unk4, p->unk8, p->unkC, s * 20.0f + p->unk4, p->unk8, c * 20.0f + p->unkC)) {
        s = func_8001EB64((s16)((s16)(P->unk12 + 0x800) & 0x1FFF));
        c = func_8001EAD0((s16)((s16)(P->unk12 + 0x800) & 0x1FFF));
        p = P;
        if (!func_8010843C(p->unk4, p->unk8, p->unkC, s * 20.0f + p->unk4, p->unk8, c * 20.0f + p->unkC)) {
            arg1->unk2D9 = 2;
        } else {
            s = func_8001EB64((s16)((s16)(P->unk12 + 0x1800) & 0x1FFF));
            c = func_8001EAD0((s16)((s16)(P->unk12 + 0x1800) & 0x1FFF));
            p = P;
            if (!func_8010843C(p->unk4, p->unk8, p->unkC, s * 20.0f + p->unk4, p->unk8, c * 20.0f + p->unkC)) {
                arg1->unk2D9 = 6;
            }
        }
    } else {
        arg1->unk2D9 = D_8022B640(8);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80228C20/func_8022AAA8.s")


typedef struct func_8022AB58_Struct0 {
    u8 pad[0xA3];
    u8 unkA3;
} func_8022AB58_Struct0;

typedef struct func_8022AB58_Struct1 {
    u8 pad[0x2BC];
    s16 unk2BC;
    s16 unk2BE;
    s16 unk2C0;
    s16 unk2C2;
} func_8022AB58_Struct1;

s32 func_8022AB58(func_8022AB58_Struct0 *arg0, func_8022AB58_Struct1 *arg1) {
    s32 var_v1;
    s32 result;

    var_v1 = 0;
    result = 0;
    if (arg1->unk2BC < 0) {
        var_v1 = 1;
    }
    if (arg1->unk2BE < 0) {
        var_v1 = (var_v1 | 2) & 0xFF;
    }
    if (arg1->unk2C0 < 0) {
        var_v1 = (var_v1 | 4) & 0xFF;
    }
    if (arg1->unk2C2 < 0) {
        var_v1 = (var_v1 | 8) & 0xFF;
    }
    if ((var_v1 == arg0->unkA3) || (var_v1 == 0)) {
        arg0->unkA3 = var_v1;
        return result;
    }
    arg0->unkA3 = var_v1;
    return 1;
}

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



typedef struct func_8022B394_Struct {
    u8 pad[0x9C];
    s32 unk9C;
} func_8022B394_Struct;

void func_8022B394(func_8022B394_Struct *arg0, s32 arg1) {
    if (D_801BCC21[0] == 5) {
        arg0->unk9C = arg0->unk9C + 1;
    }
}



void func_8022B3C0(s32 arg0, s32 arg1) {
    s32 *p;
    p = &arg1;
    func_80005700(arg0, *p);
}

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


void func_8022B518(func_8022B518_Struct *arg0, s32 arg1) {
    arg0->unk90 = 0;
    func_800058DC(arg0, func_8022B544);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80228C20/func_8022B544.s")

