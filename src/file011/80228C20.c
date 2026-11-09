#include "common.h"

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

void func_8001EF38(f32, f32);

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

#define D_801BBE22 D_801BBE22__func_80228E5C
#define D_80228C20 D_80228C20__func_80228E5C
#define func_8001EAD0 func_8001EAD0__func_80228E5C
#define func_8001EB64 func_8001EB64__func_80228E5C
#define func_80228C20_StructArg func_80228C20_StructArg__func_80228E5C
#define func_80228C20_StructArgC func_80228C20_StructArgC__func_80228E5C
typedef struct func_80228C20_StructArgC {
    u8 pad0[0xC];
    s32 unkC;
} func_80228C20_StructArgC;
typedef struct func_80228C20_StructArg {
    u8 pad0[0xC];
    func_80228C20_StructArgC *unkC;
} func_80228C20_StructArg;

typedef struct func_80228E5C_Struct {
    u8 pad0[0xA4];
    u8 unkA4;
} func_80228E5C_Struct;

typedef struct func_80228E5C_StructArg1 {
    u8 pad0[0x6];
    s16 unk6;
    s16 unk8;
} func_80228E5C_StructArg1;

f32 func_8001EAD0(s32);
f32 func_8001EB64(s32);
extern s16 D_801BBE22;
extern s32 D_80228C20(func_80228C20_StructArg *);

void func_80228E5C(arg0, arg1, arg2)
func_80228E5C_Struct *arg0;
func_80228E5C_StructArg1 *arg1;
u8 arg2;
{
    s16 sp1E;
    s16 a3;
    s32 v0;

    a3 = (s16)(0x2800 - D_801BBE22) & 0x1FFF;
    v0 = arg0->unkA4;
    if (v0 < arg2) {
        sp1E = D_80228C20((func_80228C20_StructArg *)arg0) + a3 + 0x1000;
        sp1E = sp1E & 0x1FFF;
        arg1->unk6 = -func_8001EB64(sp1E) * 40.0f;
        arg1->unk8 = func_8001EAD0(sp1E) * 40.0f;
        return;
    }
    if ((v0 < arg2) || (v0 >= arg2 * 3)) {
        if (v0 < arg2 * 4) {
            sp1E = D_80228C20((func_80228C20_StructArg *)arg0) + a3;
            sp1E = sp1E & 0x1FFF;
            arg1->unk6 = -func_8001EB64(sp1E) * 40.0f;
            arg1->unk8 = func_8001EAD0(sp1E) * 40.0f;
            return;
        }
        arg0->unkA4 = 0;
    }
}
#undef D_801BBE22
#undef D_80228C20
#undef func_8001EAD0
#undef func_8001EB64
#undef func_80228C20_StructArg
#undef func_80228C20_StructArgC

#define func_80228C20 func_80228C20__func_80228FD0

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
#undef func_80228C20


extern s32 D_80228C20(func_80228C20_StructArg *);

typedef struct func_802290C8_Struct {
    u8 pad0[0x9C];
    s32 unk9C;
} func_802290C8_Struct;
typedef struct func_802290C8_StructOut {
    u8 pad0[6];
    s16 unk6;
    s16 unk8;
} func_802290C8_StructOut;
typedef struct func_802290C8_StructG {
    u8 pad0[0x232];
    s16 unk232;
    u8 pad1[0xB94 - 0x234];
    f32 unkB94;
} func_802290C8_StructG;

void func_802290C8(func_802290C8_Struct *arg0, func_802290C8_StructOut *arg1, u8 arg2, f32 arg3) {
    s16 a0;
    s16 a3;
    s16 v1;

    a3 = (s16)(0x2800 - ((func_802290C8_StructG *)&D_801BBBF0)->unk232) & 0x1FFF;
    if (((func_802290C8_StructG *)&D_801BBBF0)->unkB94 < arg3) {
        v1 = 0x1000;
    } else {
        v1 = 0;
    }
    if (arg0->unk9C & arg2) {
        a0 = (s16)(D_80228C20((func_80228C20_StructArg *)arg0) + v1 + a3 + 0x800) & 0x1FFF;
    } else {
        a0 = (s16)(D_80228C20((func_80228C20_StructArg *)arg0) + v1 + a3 - 0x800) & 0x1FFF;
    }
    arg1->unk6 = -func_8001EB64(a0) * 40.0f;
    arg1->unk8 = func_8001EAD0(a0) * 40.0f;
}


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

s32 func_80376300();
void func_80376BE4(void *);

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

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80228C20/D_8023F0A0.s")

#define D_8023E2E0 D_8023E2E0__func_80229524
#define D_8038D8E0 D_8038D8E0__func_80229524
#define D_8038D8F4 D_8038D8F4__func_80229524
#define D_8038D980 D_8038D980__func_80229524
#define D_8038D984 D_8038D984__func_80229524
#define D_8038D994 D_8038D994__func_80229524
#define D_8038D9B0 D_8038D9B0__func_80229524
#define D_8038D9C4 D_8038D9C4__func_80229524
#define D_8038D9D0 D_8038D9D0__func_80229524
#define D_8038DA20 D_8038DA20__func_80229524
#define D_8038DA30 D_8038DA30__func_80229524
#define D_8038DA34 D_8038DA34__func_80229524
#define D_8038DA70 D_8038DA70__func_80229524
#define D_8038DA84 D_8038DA84__func_80229524
#define D_8038DA90 D_8038DA90__func_80229524
#define D_8038DAA4 D_8038DAA4__func_80229524
#define D_8038DAC0 D_8038DAC0__func_80229524
#define D_8038DAD0 D_8038DAD0__func_80229524
#define D_8038DAD4 D_8038DAD4__func_80229524
#define D_8038DAE4 D_8038DAE4__func_80229524
#define D_8038DB20 D_8038DB20__func_80229524
#define D_8038DB40 D_8038DB40__func_80229524
#define D_8038DBC0 D_8038DBC0__func_80229524
#define D_8038DBD4 D_8038DBD4__func_80229524
#define D_8038DBF0 D_8038DBF0__func_80229524
#define D_8038DC10 D_8038DC10__func_80229524
#define D_8038DC30 D_8038DC30__func_80229524
#define D_8038DC70 D_8038DC70__func_80229524
#define D_8038DC84 D_8038DC84__func_80229524
#define D_8038DCB0 D_8038DCB0__func_80229524
#define D_8038DCC0 D_8038DCC0__func_80229524
#define D_8038DCD4 D_8038DCD4__func_80229524
#define D_8038DD30 D_8038DD30__func_80229524
#define D_8038DD90 D_8038DD90__func_80229524
#define D_8038DE20 D_8038DE20__func_80229524
#define D_8038E030 D_8038E030__func_80229524
#define D_8038E044 D_8038E044__func_80229524
#define D_8038E070 D_8038E070__func_80229524
#define D_8038E090 D_8038E090__func_80229524
#define D_8038E120 D_8038E120__func_80229524
#define D_8038E134 D_8038E134__func_80229524
#define func_80005670 func_80005670__func_80229524
#define func_80248E18 func_80248E18__func_80229524
#define func_8038D660 func_8038D660__func_80229524
#define func_8038D6FC func_8038D6FC__func_80229524
#define func_8038D704 func_8038D704__func_80229524
#define func_8038D7B8 func_8038D7B8__func_80229524
#define func_8038D7D4 func_8038D7D4__func_80229524
#define func_8038D7F0 func_8038D7F0__func_80229524
#define func_8038D94C func_8038D94C__func_80229524
#define func_8038D9DC func_8038D9DC__func_80229524
#define func_8038DA40 func_8038DA40__func_80229524
#define func_8038DA84 func_8038DA84__func_80229524
#define func_8038DAFC func_8038DAFC__func_80229524
#define func_8038DBF4 func_8038DBF4__func_80229524
#define func_8038DC20 func_8038DC20__func_80229524
#define func_8038DC98 func_8038DC98__func_80229524
#define func_8038DD10 func_8038DD10__func_80229524


typedef struct func_80229524_Struct {
    u8 pad0[0x36];
    u16 unk36;
} func_80229524_Struct;

void *func_80005670();

extern u8 func_80248E18[];
extern u8 func_8038D660[];
extern u8 func_8038D6FC[];
extern u8 func_8038D704[];
extern u8 func_8038D7B8[];
extern u8 func_8038D7D4[];
extern u8 func_8038D7F0[];
extern u8 func_8038D94C[];
extern u8 func_8038D9DC[];
extern u8 func_8038DA40[];
extern u8 func_8038DA84[];
extern u8 func_8038DAFC[];
extern u8 func_8038DBF4[];
extern u8 func_8038DC20[];
extern u8 func_8038DC98[];
extern u8 func_8038DD10[];
extern u8 D_8023E2E0[];
extern u8 D_8038D8F4[];
extern u8 D_8038D8E0[];
extern u8 D_8038D994[];
extern u8 D_8038D984[];
extern u8 D_8038D980[];
extern u8 D_8038D9C4[];
extern u8 D_8038D9B0[];
extern u8 D_8038DA30[];
extern u8 D_8038DA34[];
extern u8 D_8038DA70[];
extern u8 D_8038DA84[];
extern u8 D_8038DAA4[];
extern u8 D_8038DAC0[];
extern u8 D_8038DAD4[];
extern u8 D_8038DAE4[];
extern u8 D_8038DAD0[];
extern u8 D_8038DB20[];
extern u8 D_8038DC10[];
extern u8 D_8038DC70[];
extern u8 D_8038DC84[];
extern u8 D_8038DCD4[];
extern u8 D_8038E044[];
extern u8 D_8038D9D0[];
extern u8 D_8038DA20[];
extern u8 D_8038DA90[];
extern u8 D_8038DB40[];
extern u8 D_8038DBC0[];
extern u8 D_8038DBD4[];
extern u8 D_8038DBF0[];
extern u8 D_8038DC30[];
extern u8 D_8038DCB0[];
extern u8 D_8038DCC0[];
extern u8 D_8038DD30[];
extern u8 D_8038DE20[];
extern u8 D_8038E030[];
extern u8 D_8038DD90[];
extern u8 D_8038E070[];
extern u8 D_8038E090[];
extern u8 D_8038E120[];
extern u8 D_8038E134[];

#define PAIR(a, b) func_80005670(func_80005670(arg0, a), b)

void func_80229524(func_80229524_Struct *arg0) {
    switch (arg0->unk36) {
    case 0x50:
        func_80005670(func_80005670(arg0, func_8038DC20 + 0x24), D_8038DC30);
        func_80005670(arg0, D_8023E2E0);
        break;
    case 0x51:
        PAIR(func_8038D94C + 0x28, func_8038D94C + 0x14);
        break;
    case 0x52:
        PAIR(func_8038D7F0 + 0x24, func_8038D7D4 + 0x2C);
        break;
    case 0x53:
        PAIR(D_8038D9C4, D_8038D9B0);
        break;
    case 0x143:
        PAIR(D_8038DD90 + 0xA4, D_8038DE20);
        break;
    case 0x58:
        PAIR(func_8038DC98 + 0x2C, D_8038DCB0);
        break;
    case 0x11A:
        PAIR(func_8038DAFC + 0x58, D_8038DB40);
        break;
    case 0x144:
        PAIR(D_8038D994, D_8038D980);
        break;
    case 0x119:
        PAIR(func_8038DC20 + 0x4, D_8038DC10);
        break;
    case 0x55:
        PAIR(func_8038D9DC + 0x8, D_8038D9D0);
        break;
    case 0x59:
        PAIR(D_8038DCD4, D_8038DCC0);
        break;
    case 0x54:
        PAIR(D_8038DAE4, D_8038DAD0);
        break;
    case 0x145:
        PAIR(func_8038DD10 + 0x34, D_8038DD30);
        break;
    case 0x57:
        PAIR(func_8038DAFC + 0x38, D_8038DB20);
        break;
    case 0x146:
        PAIR(D_8038D984, func_8038D94C + 0x24);
        break;
    case 0x149:
        PAIR(D_8038E044, D_8038E030);
        break;
    case 0xF9:
        PAIR(D_8038DA84, D_8038DA70);
        break;
    case 0xF4:
        PAIR(D_8038DAA4, D_8038DA90);
        break;
    case 0xF5:
        PAIR(func_8038D7F0 + 0x24, func_8038D7D4 + 0x2C);
        break;
    case 0xF6:
        PAIR(func_8038D704 + 0x30, func_8038D6FC + 0x24);
        break;
    case 0x5A:
        PAIR(func_8038DA40 + 0x4, D_8038DA30);
        break;
    case 0x5B:
        PAIR(D_8038DC84, D_8038DC70);
        break;
    case 0x5D:
        PAIR(func_8038DA40 + 0x4, D_8038DA30);
        break;
    case 0xF3:
        PAIR(D_8038DA34, D_8038DA20);
        break;
    case 0xFA:
        PAIR(func_8038D7D4 + 0x10, func_8038D7B8 + 0x18);
        break;
    case 0xFB:
        PAIR(func_8038D7D4 + 0x30, func_8038D7D4 + 0x1C);
        break;
    case 0x147:
        PAIR(D_8038DAD4, D_8038DAC0);
        break;
    case 0xF0:
        PAIR(func_8038DC20 + 0x24, D_8038DC30);
        break;
    case 0xF1:
        PAIR(D_8038DBD4, D_8038DBC0);
        break;
    case 0x56:
        PAIR(func_8038DBF4 + 0x10, D_8038DBF0);
        break;
    case 0x5C:
        PAIR(D_8038DA34, D_8038DA20);
        break;
    case 0xF2:
        PAIR(func_8038D9DC + 0x28, func_8038D9DC + 0x14);
        break;
    case 0xFC:
        PAIR(D_8038D984, func_8038D94C + 0x24);
        break;
    case 0xFD:
        PAIR(D_8038D8F4, D_8038D8E0);
        break;
    case 0x2E:
        PAIR(D_8038E070 + 0x34, D_8038E090);
        break;
    case 0x29:
        PAIR(func_80248E18 + 0xDC, func_80248E18 + 0xC8);
        break;
    case 0x32:
        PAIR(D_8038DBD4, D_8038DBC0);
        break;
    case 0x31:
        PAIR(D_8038E134, D_8038E120);
        break;
    case 0x148:
        PAIR(func_8038D94C + 0x18, func_8038D94C + 0x4);
        break;
    case 0x11B:
        PAIR(func_8038DC20 + 0x14, func_8038DC20);
        break;
    case 0x11D:
        PAIR(func_8038D660 + 0x24, func_8038D660 + 0x10);
        break;
    case 0x11E:
        PAIR(D_8038DC84, D_8038DC70);
        break;
    case 0xF7:
    case 0xF8:
    case 0x11C:
    default:
        PAIR(func_8038DAFC + 0x58, D_8038DB40);
        break;
    }
}
#undef PAIR
#undef D_8023E2E0
#undef D_8038D8E0
#undef D_8038D8F4
#undef D_8038D980
#undef D_8038D984
#undef D_8038D994
#undef D_8038D9B0
#undef D_8038D9C4
#undef D_8038D9D0
#undef D_8038DA20
#undef D_8038DA30
#undef D_8038DA34
#undef D_8038DA70
#undef D_8038DA84
#undef D_8038DA90
#undef D_8038DAA4
#undef D_8038DAC0
#undef D_8038DAD0
#undef D_8038DAD4
#undef D_8038DAE4
#undef D_8038DB20
#undef D_8038DB40
#undef D_8038DBC0
#undef D_8038DBD4
#undef D_8038DBF0
#undef D_8038DC10
#undef D_8038DC30
#undef D_8038DC70
#undef D_8038DC84
#undef D_8038DCB0
#undef D_8038DCC0
#undef D_8038DCD4
#undef D_8038DD30
#undef D_8038DD90
#undef D_8038DE20
#undef D_8038E030
#undef D_8038E044
#undef D_8038E070
#undef D_8038E090
#undef D_8038E120
#undef D_8038E134
#undef func_80005670
#undef func_80248E18
#undef func_8038D660
#undef func_8038D6FC
#undef func_8038D704
#undef func_8038D7B8
#undef func_8038D7D4
#undef func_8038D7F0
#undef func_8038D94C
#undef func_8038D9DC
#undef func_8038DA40
#undef func_8038DA84
#undef func_8038DAFC
#undef func_8038DBF4
#undef func_8038DC20
#undef func_8038DC98
#undef func_8038DD10

#define D_801842AA D_801842AA__func_80229CE0
#define D_80184432 D_80184432__func_80229CE0
#define D_801846D2 D_801846D2__func_80229CE0
#define D_801BBBF0 D_801BBBF0__func_80229CE0
#define D_801BC03C D_801BC03C__func_80229CE0
#define D_801BC3D8 D_801BC3D8__func_80229CE0
#define func_8022B4A4_StructBase func_8022B4A4_StructBase__func_80229CE0
#define func_8022B4A4_StructEntry func_8022B4A4_StructEntry__func_80229CE0
typedef struct func_8022B4A4_StructBase {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0x1031 - 0xE0];
    u8 unk1031;
} func_8022B4A4_StructBase;
extern struct func_8022B4A4_StructBase D_801BBBF0;
typedef struct func_8022B4A4_StructEntry {
    u8 pad0[0x30];
    u32 unk30;
} func_8022B4A4_StructEntry;
extern struct func_8022B4A4_StructEntry D_801BC03C;
extern struct func_8022B4A4_StructEntry D_801BC3D8;


extern u8 D_801842AA[];
extern u8 D_80184432[];
extern u8 D_801846D2[];
typedef struct func_80229CE0_Struct {
    u8 pad0[0x30];
    struct { u32 padbits:9; u32 mode:2; u32 rest:21; } b30;
    u8 pad34[4];
    u32 flag:1;
    u32 skip:2;
    u32 flag2:1;
    u32 rest38:28;
    u8 pad3c[0x86-0x3c];
    u16 a,b,c,d;
    u8 pad8e[0x2bc-0x8e];
    s16 limb0,limb1,limb2,limb3;
    u8 pad2c4[0x2d8-0x2c4];
    u8 state,choice;
    u8 pad2da[0x2fc-0x2da];
    u8 flags;
    u8 pad2fd[0x334-0x2fd];
    u8 *data;
    u8 pad338[0x385-0x338];
    u8 n0,n1,n2,n3,n4,n5,n6,n7,n8,n9;
} func_80229CE0_Struct;
#define RAND(x) func_8022B640(x, arg1)
void func_80229CE0(s16 *arg0, func_80229CE0_Struct *arg1, u8 arg2)
{
    s16 *stats;
    u8 *list;
    u8 count;
    u8 roll;
    u8 side;
    u8 bad;
    s32 idx;

    stats = (arg1 == (func_80229CE0_Struct *)((u8 *)&D_801BBBF0 + 0x44c)) ? (s16 *)&D_801BC3D8 : (s16 *)&D_801BC03C;
    count = 0;
    bad = 0;
    if (arg1->state == 2 && arg1->flag && arg1->flag2) {
        idx = RAND(arg1->n9);
        arg1->choice = arg1->data[idx + 0x7d];
        arg0[0x4d] |= 4;
        return;
    }
    if (arg1->state != 2) {
        if (arg1->limb0 < 0 && arg1->limb1 < 0) arg1->state = 1;
        if (arg1->limb2 < 0 && arg1->limb3 < 0) arg1->state = 0;
        if (arg1->state == 0) {
            if ((stats[1] < stats[0]/5 && arg1->n2) || arg2 == 2) { count=arg1->n2; list=arg1->data+0x6c; }
            else if (arg2 == 1 && arg1->n1) { count=arg1->n1; list=arg1->data+0x69; }
            else if (!arg2 && arg1->n0) { count=arg1->n0; list=arg1->data+0x66; }
            else if (arg1->n1) { count=arg1->n1; list=arg1->data+0x69; }
            else if (arg1->n0) { count=arg1->n0; list=arg1->data+0x66; }
            else { count=1; list=D_801842AA; }
        } else if (arg1->state == 1) {
            if ((stats[1] < stats[0]/5 && arg1->n5) || arg2 == 2) { count=arg1->n5; list=arg1->data+0x76; }
            else if (arg2 == 1 && arg1->n4) { count=arg1->n4; list=arg1->data+0x72; }
            else if (!arg2 && arg1->n3) { count=arg1->n3; list=arg1->data+0x6d; }
            else if (arg1->n4) { count=arg1->n4; list=arg1->data+0x72; }
            else if (arg1->n3) { count=arg1->n3; list=arg1->data+0x6d; }
            else { count=1; list=D_80184432; }
        }
    } else {
        if ((stats[1] < stats[0]/5 && arg1->n8) || arg2 == 2) { count=arg1->n8; list=arg1->data+0x7c; }
        else if (arg2 == 1 && arg1->n7) { count=arg1->n7; list=arg1->data+0x7a; }
        else if (!arg2 && arg1->n6) { count=arg1->n6; list=arg1->data+0x77; }
        else if (arg1->n7) { count=arg1->n7; list=arg1->data+0x7a; }
        else if (arg1->n6) { count=arg1->n6; list=arg1->data+0x77; }
        else { count=1; list=D_801846D2; }
    }
    roll = RAND(100);
    switch (count) {
    case 1:
        arg1->choice = list[0];
        break;
    case 2:
        if (roll < 67) arg1->choice = list[0];
        else arg1->choice = list[1];
        break;
    case 3:
        if (roll < 50) arg1->choice = list[0];
        else if (roll < 84) arg1->choice = list[1];
        else arg1->choice = list[2];
        break;
    case 4:
        if (roll < 40) arg1->choice = list[0];
        else if (roll < 70) arg1->choice = list[1];
        else if (roll < 90) arg1->choice = list[2];
        else arg1->choice = list[3];
        break;
    case 5:
        if (roll < 33) arg1->choice = list[0];
        else if (roll < 60) arg1->choice = list[1];
        else if (roll < 80) arg1->choice = list[2];
        else if (roll < 93) arg1->choice = list[3];
        else arg1->choice = list[4];
        break;
    case 6:
        if (roll < 50) arg1->choice = list[0];
        else if (roll < 70) arg1->choice = list[1];
        else if (roll < 80) arg1->choice = list[2];
        else if (roll < 88) arg1->choice = list[3];
        else if (roll < 95) arg1->choice = list[4];
        else arg1->choice = list[5];
        break;
    case 7:
        if (roll < 25) arg1->choice = list[0];
        else if (roll < 46) arg1->choice = list[1];
        else if (roll < 64) arg1->choice = list[2];
        else if (roll < 78) arg1->choice = list[3];
        else if (roll < 89) arg1->choice = list[4];
        else if (roll < 96) arg1->choice = list[5];
        else arg1->choice = list[6];
        break;
    case 8:
        if (roll < 22) arg1->choice = list[0];
        else if (roll < 41) arg1->choice = list[1];
        else if (roll < 58) arg1->choice = list[2];
        else if (roll < 72) arg1->choice = list[3];
        else if (roll < 83) arg1->choice = list[4];
        else if (roll < 91) arg1->choice = list[5];
        else if (roll < 97) arg1->choice = list[6];
        else arg1->choice = list[7];
        break;
    case 9:
        if (roll < 20) arg1->choice = list[0];
        else if (roll < 38) arg1->choice = list[1];
        else if (roll < 54) arg1->choice = list[2];
        else if (roll < 67) arg1->choice = list[3];
        else if (roll < 78) arg1->choice = list[4];
        else if (roll < 87) arg1->choice = list[5];
        else if (roll < 94) arg1->choice = list[6];
        else if (roll < 98) arg1->choice = list[7];
        else arg1->choice = list[8];
        break;
    case 10:
        if (roll < 18) arg1->choice = list[0];
        else if (roll < 34) arg1->choice = list[1];
        else if (roll < 49) arg1->choice = list[2];
        else if (roll < 62) arg1->choice = list[3];
        else if (roll < 73) arg1->choice = list[4];
        else if (roll < 82) arg1->choice = list[5];
        else if (roll < 89) arg1->choice = list[6];
        else if (roll < 94) arg1->choice = list[7];
        else if (roll < 98) arg1->choice = list[8];
        else arg1->choice = list[9];
        break;
    }
    if (arg1->state == 0 || arg1->state == 1) {
        if (arg1->state == 0) {
            if (arg1->limb0 < 0) bad = 1;
            else if (arg1->limb1 < 0) bad = 2;
            else if (arg1->a >= arg1->b) side = 0;
            else side = 1;
        } else {
            if (arg1->limb2 < 0) bad = 1;
            else if (arg1->limb3 < 0) bad = 2;
            else if (arg1->c >= arg1->d) side = 0;
            else side = 1;
        }
        if (bad) {
            if (bad == 1) {
                arg1->choice++;
            }
        } else {
            switch (arg1->data[0x4c]) {
            case 0:
                arg1->choice += side;
                break;
            case 1:
                if (RAND(4) < 3) arg1->choice += side;
                else arg1->choice += side ^ 1;
                break;
            case 2:
                if (RAND(5) < 3) arg1->choice += side;
                else arg1->choice += side ^ 1;
                break;
            case 3:
                if (RAND(5) < 4) arg1->choice += side;
                else arg1->choice += side ^ 1;
                break;
            case 4:
                if (arg1->flags & 1) arg1->choice++;
                break;
            case 5:
                if (RAND(2)) arg1->choice++;
                break;
            case 6:
                if (arg1->b30.mode == 2) {
                    arg1->choice |= 1;
                    bad = 0;
                }
                if (3 == arg1->b30.mode) {
                    arg1->choice &= 0xffe;
                }
                break;
            }
        }
    }
}
#undef RAND
#undef D_801842AA
#undef D_80184432
#undef D_801846D2
#undef D_801BBBF0
#undef D_801BC03C
#undef D_801BC3D8
#undef func_8022B4A4_StructBase
#undef func_8022B4A4_StructEntry


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
extern s32 D_8022B640(s32);
extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);

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


typedef struct func_8022AAA8_StructStats {
    u8 pad[0x86];
    u16 unk86;
    u16 unk88;
} func_8022AAA8_StructStats;

typedef struct func_8022AAA8_StructArg0 {
    u8 pad[0xA5];
    u8 unkA5;
} func_8022AAA8_StructArg0;

typedef struct func_8022AAA8_StructArg1 {
    u8 pad[0x2D9];
    u8 unk2D9;
} func_8022AAA8_StructArg1;

void func_8022AAA8(func_8022AAA8_StructArg0 *arg0, func_8022AAA8_StructArg1 *arg1) {
    func_8022AAA8_StructStats *var_v0;

    if ((s32)arg1 == (s32)&D_801BBBF0 + 0x44C) {
        var_v0 = (func_8022AAA8_StructStats *)&D_801BC3D8;
    } else {
        var_v0 = (func_8022AAA8_StructStats *)&D_801BC03C;
    }
    arg0->unkA5 = 2;
    if (var_v0->unk88 < var_v0->unk86) {
        arg1->unk2D9 = D_8022B640(3) + 1;
        return;
    }
    if (var_v0->unk86 < var_v0->unk88) {
        arg1->unk2D9 = D_8022B640(3) + 5;
        return;
    }
    arg1->unk2D9 = D_8022B640(8);
}


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

#define D_801BBBF0 D_801BBBF0__func_8022ABD8
#define D_8038D8E0 D_8038D8E0__func_8022ABD8
#define D_8038DBA4 D_8038DBA4__func_8022ABD8
#define D_8038DBC4 D_8038DBC4__func_8022ABD8
#define func_8022B4A4_StructBase func_8022B4A4_StructBase__func_8022ABD8
#define func_80242B2C func_80242B2C__func_8022ABD8
#define func_8038D584 func_8038D584__func_8022ABD8
#define func_8038D6F4 func_8038D6F4__func_8022ABD8
#define func_8038D7A4 func_8038D7A4__func_8022ABD8
#define func_8038D7B4 func_8038D7B4__func_8022ABD8
#define func_8038D7B8 func_8038D7B8__func_8022ABD8
#define func_8038D7D4 func_8038D7D4__func_8022ABD8
#define func_8038D8BC func_8038D8BC__func_8022ABD8
#define func_8038D8EC func_8038D8EC__func_8022ABD8
#define func_8038D900 func_8038D900__func_8022ABD8
#define func_8038D92C func_8038D92C__func_8022ABD8
#define func_8038D93C func_8038D93C__func_8022ABD8
#define func_8038D940 func_8038D940__func_8022ABD8
#define func_8038D950 func_8038D950__func_8022ABD8
#define func_8038D9D8 func_8038D9D8__func_8022ABD8
#define func_8038D9E4 func_8038D9E4__func_8022ABD8
#define func_8038D9F0 func_8038D9F0__func_8022ABD8
#define func_8038D9FC func_8038D9FC__func_8022ABD8
#define func_8038DA40 func_8038DA40__func_8022ABD8
#define func_8038DA4C func_8038DA4C__func_8022ABD8
#define func_8038DA6C func_8038DA6C__func_8022ABD8
#define func_8038DA80 func_8038DA80__func_8022ABD8
#define func_8038DA84 func_8038DA84__func_8022ABD8
#define func_8038DAAC func_8038DAAC__func_8022ABD8
#define func_8038DB74 func_8038DB74__func_8022ABD8
#define func_8038DBA0 func_8038DBA0__func_8022ABD8
#define func_8038DBF4 func_8038DBF4__func_8022ABD8
#define func_8038DC0C func_8038DC0C__func_8022ABD8
#define func_8038DC20 func_8038DC20__func_8022ABD8
#define func_8038DC28 func_8038DC28__func_8022ABD8
#define func_8038DC2C func_8038DC2C__func_8022ABD8
#define func_8038DC3C func_8038DC3C__func_8022ABD8
#define func_8038DC98 func_8038DC98__func_8022ABD8
#define func_8038DDD4 func_8038DDD4__func_8022ABD8
#define func_8038DFA0 func_8038DFA0__func_8022ABD8
#define func_8038DFDC func_8038DFDC__func_8022ABD8
#define func_8038E100 func_8038E100__func_8022ABD8
typedef struct func_8022B4A4_StructBase {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0x1031 - 0xE0];
    u8 unk1031;
} func_8022B4A4_StructBase;
extern struct func_8022B4A4_StructBase D_801BBBF0;


typedef struct func_8022ABD8_StructT {
    u8 pad0[0x36];
    u16 unk36;
} func_8022ABD8_StructT;

extern void D_8038D8E0(s32);
extern void D_8038DBA4(s32);
extern void D_8038DBC4(s32);
extern void func_80242B2C(s32);
extern void func_8038D584(s32);
extern void func_8038D6F4(s32);
extern void func_8038D7A4(s32);
extern void func_8038D7B4(s32);
extern void func_8038D7B8(s32);
extern void func_8038D7D4(s32);
extern void func_8038D8BC(s32);
extern void func_8038D8EC(s32);
extern void func_8038D900(s32);
extern void func_8038D92C(s32);
extern void func_8038D93C(s32);
extern void func_8038D940(s32);
extern void func_8038D950(s32);
extern void func_8038D9D8(s32);
extern void func_8038D9E4(s32);
extern void func_8038D9F0(s32);
extern void func_8038D9FC(s32);
extern void func_8038DA40(s32);
extern void func_8038DA4C(s32);
extern void func_8038DA6C(s32);
extern void func_8038DA80(s32);
extern void func_8038DA84(s32);
extern void func_8038DAAC(s32);
extern void func_8038DB74(s32);
extern void func_8038DBA0(s32);
extern void func_8038DBF4(s32);
extern void func_8038DC0C(s32);
extern void func_8038DC20(s32);
extern void func_8038DC28(s32);
extern void func_8038DC2C(s32);
extern void func_8038DC3C(s32);
extern void func_8038DC98(s32);
extern void func_8038DDD4(s32);
extern void func_8038DFA0(s32);
extern void func_8038DFDC(s32);
extern void func_8038E100(s32);

void func_8022ABD8(arg0, arg1)
s32 arg1;
{
    s32 var_v0;
    func_8022ABD8_StructT *var_v1;
    s32 temp_v0;

    var_v0 = (s32)&D_801BBBF0;
    if (arg1 == var_v0 + 0x44C) {
        var_v1 = *(func_8022ABD8_StructT **)(var_v0 + 0xDC);
    } else {
        var_v1 = *(func_8022ABD8_StructT **)(var_v0 + 0xEC);
    }
    temp_v0 = var_v1->unk36;
    switch (temp_v0) {
    case 0x50:
        D_8038DBA4(arg0);
        return;
    case 0x51:
        func_8038D93C(arg0);
        return;
    case 0x52:
        func_8038D7B8(arg0);
        return;
    case 0x53:
        func_8038D900(arg0);
        return;
    case 0x143:
        func_8038DDD4(arg0);
        return;
    case 0x58:
        func_8038DC20(arg0);
        return;
    case 0x11A:
        func_8038DAAC(arg0);
        return;
    case 0x144:
        func_8038D8EC(arg0);
        return;
    case 0x119:
        func_8038DB74(arg0);
        return;
    case 0x55:
        func_8038D940(arg0);
        return;
    case 0x59:
        func_8038DC28(arg0);
        return;
    case 0x54:
        func_8038DA40(arg0);
        return;
    case 0x145:
        func_8038DC98(arg0);
        return;
    case 0x57:
        func_8038DA84(arg0);
        return;
    case 0x146:
        D_8038D8E0(arg0);
        return;
    case 0x149:
        func_8038DFA0(arg0);
        return;
    case 0xF9:
        func_8038DA4C(arg0);
        return;
    case 0xF4:
        func_8038DA6C(arg0);
        return;
    case 0xF5:
        func_8038D7D4(arg0);
        return;
    case 0xF6:
        func_8038D6F4(arg0);
        return;
    case 0x5A:
        func_8038D9D8(arg0);
        return;
    case 0x5B:
        func_8038DC2C(arg0);
        return;
    case 0x5D:
        func_8038D9F0(arg0);
        return;
    case 0xF3:
        func_8038D9FC(arg0);
        return;
    case 0xFA:
        func_8038D7A4(arg0);
        return;
    case 0xFB:
        func_8038D7B4(arg0);
        return;
    case 0x147:
        func_8038DA80(arg0);
        return;
    case 0xF0:
        func_8038DC0C(arg0);
        return;
    case 0xF1:
        func_8038DBA0(arg0);
        return;
    case 0x56:
        D_8038DBC4(arg0);
        return;
    case 0x5C:
        func_8038D9D8(arg0);
        return;
    case 0xF2:
        func_8038D9E4(arg0);
        return;
    case 0xFC:
        func_8038D950(arg0);
        return;
    case 0xFD:
        func_8038D8BC(arg0);
        return;
    case 0x2E:
        func_8038DFDC(arg0);
        return;
    case 0x29:
        func_80242B2C(arg0);
        return;
    case 0x32:
        func_8038DBA0(arg0);
        return;
    case 0x31:
        func_8038E100(arg0);
        return;
    case 0x148:
        func_8038D92C(arg0);
        return;
    case 0x11B:
        func_8038DBF4(arg0);
        return;
    case 0x11D:
        func_8038D584(arg0);
        return;
    case 0x11E:
        func_8038DC3C(arg0);
        return;
    default:
        func_8038D93C(arg0);
        return;
    }
}
#undef D_801BBBF0
#undef D_8038D8E0
#undef D_8038DBA4
#undef D_8038DBC4
#undef func_8022B4A4_StructBase
#undef func_80242B2C
#undef func_8038D584
#undef func_8038D6F4
#undef func_8038D7A4
#undef func_8038D7B4
#undef func_8038D7B8
#undef func_8038D7D4
#undef func_8038D8BC
#undef func_8038D8EC
#undef func_8038D900
#undef func_8038D92C
#undef func_8038D93C
#undef func_8038D940
#undef func_8038D950
#undef func_8038D9D8
#undef func_8038D9E4
#undef func_8038D9F0
#undef func_8038D9FC
#undef func_8038DA40
#undef func_8038DA4C
#undef func_8038DA6C
#undef func_8038DA80
#undef func_8038DA84
#undef func_8038DAAC
#undef func_8038DB74
#undef func_8038DBA0
#undef func_8038DBF4
#undef func_8038DC0C
#undef func_8038DC20
#undef func_8038DC28
#undef func_8038DC2C
#undef func_8038DC3C
#undef func_8038DC98
#undef func_8038DDD4
#undef func_8038DFA0
#undef func_8038DFDC
#undef func_8038E100

#define D_80037C5C D_80037C5C__func_8022AF94
#define D_801BBC10 D_801BBC10__func_8022AF94
#define func_8000469C func_8000469C__func_8022AF94


typedef struct func_8022AF94_StructArg {
    u8 pad0[0x36];
    u16 unk36;
} func_8022AF94_StructArg;

typedef struct func_8022AF94_StructG {
    u8 pad0[0x1C0];
    s32 unk1C0;
    s32 unk1C4;
} func_8022AF94_StructG;

extern func_8022AF94_StructG D_80037C5C;
extern s32 D_801BBC10;
extern void func_8000469C(s32 arg0, s32 arg1);

void func_8022AF94(func_8022AF94_StructArg *arg0) {
    s32 temp_a1;
    s32 temp_v0;

    temp_a1 = D_80037C5C.unk1C4 - D_80037C5C.unk1C0 + D_801BBC10;
    temp_v0 = arg0->unk36;
    switch (temp_v0) {
    case 0x50:
        func_8000469C(0x3A, temp_a1);
        break;
    case 0x51:
        func_8000469C(0x3B, temp_a1);
        break;
    case 0x52:
        func_8000469C(0x3C, temp_a1);
        break;
    case 0x53:
        func_8000469C(0x3D, temp_a1);
        break;
    case 0x143:
        func_8000469C(0x57, temp_a1);
        break;
    case 0x58:
        func_8000469C(0x43, temp_a1);
        break;
    case 0x11A:
        func_8000469C(0x55, temp_a1);
        break;
    case 0x144:
        func_8000469C(0x58, temp_a1);
        break;
    case 0x119:
        func_8000469C(0x54, temp_a1);
        break;
    case 0x55:
        func_8000469C(0x3F, temp_a1);
        break;
    case 0x59:
        func_8000469C(0x44, temp_a1);
        break;
    case 0x54:
        func_8000469C(0x3E, temp_a1);
        break;
    case 0x145:
        func_8000469C(0x59, temp_a1);
        break;
    case 0x57:
        func_8000469C(0x42, temp_a1);
        break;
    case 0x146:
        func_8000469C(0x5A, temp_a1);
        break;
    case 0x149:
        func_8000469C(0x5D, temp_a1);
        break;
    case 0xF9:
        func_8000469C(0x4F, temp_a1);
        break;
    case 0xF4:
        func_8000469C(0x4D, temp_a1);
        break;
    case 0xF5:
        func_8000469C(0x4E, temp_a1);
        break;
    case 0xF6:
        func_8000469C(0x41, temp_a1);
        break;
    case 0x5A:
        func_8000469C(0x45, temp_a1);
        break;
    case 0x5B:
        func_8000469C(0x46, temp_a1);
        break;
    case 0x5D:
        func_8000469C(0x48, temp_a1);
        break;
    case 0xF3:
        func_8000469C(0x4C, temp_a1);
        break;
    case 0xFA:
        func_8000469C(0x50, temp_a1);
        break;
    case 0xFB:
        func_8000469C(0x51, temp_a1);
        break;
    case 0x147:
        func_8000469C(0x5B, temp_a1);
        break;
    case 0xF0:
        func_8000469C(0x49, temp_a1);
        break;
    case 0xF1:
        func_8000469C(0x4A, temp_a1);
        break;
    case 0x56:
        func_8000469C(0x40, temp_a1);
        break;
    case 0x5C:
        func_8000469C(0x47, temp_a1);
        break;
    case 0xF2:
        func_8000469C(0x4B, temp_a1);
        break;
    case 0xFC:
        func_8000469C(0x52, temp_a1);
        break;
    case 0xFD:
        func_8000469C(0x53, temp_a1);
        break;
    case 0x2E:
        func_8000469C(0x5E, temp_a1);
        break;
    case 0x32:
        func_8000469C(0x60, temp_a1);
        break;
    case 0x31:
        func_8000469C(0x5F, temp_a1);
        break;
    case 0x148:
        func_8000469C(0x5C, temp_a1);
        break;
    case 0x11B:
        func_8000469C(0x56, temp_a1);
        break;
    case 0x11D:
        func_8000469C(0x61, temp_a1);
        break;
    case 0x11E:
        func_8000469C(0x62, temp_a1);
        break;
    default:
        func_8000469C(0x3A, temp_a1);
        break;
    }
}
#undef D_80037C5C
#undef D_801BBC10
#undef func_8000469C


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


extern void func_80005700(s32 arg0, s32 arg1);

void func_8022B3C0(s32 arg0, s32 arg1) {
    s32 *p;
    p = &arg1;
    func_80005700(arg0, *p);
}

#define func_800058DC func_800058DC__func_8022B3E0

typedef struct func_8022B3E0_StructG {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0x1030 - 0xE0];
    u8 unk1030;
    u8 unk1031;
} func_8022B3E0_StructG;

typedef struct func_8022B3E0_StructE {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
    u8 pad1[3];
    u8 unk2DD;
} func_8022B3E0_StructE;

typedef struct func_8022B3E0_StructArg {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x9A - 0x10];
    s16 unk9A;
    u8 pad2[0xA1 - 0x9C];
    u8 unkA1;
    u8 unkA2;
    u8 pad3[0xA8 - 0xA3];
    u8 unkA8;
    u8 pad4[0xB0 - 0xA9];
    void *unkB0;
} func_8022B3E0_StructArg;
extern void func_800058DC(void *arg0, void *arg1);

#define GG ((func_8022B3E0_StructG *)&D_801BBBF0)

void func_8022B3E0(func_8022B3E0_StructArg *arg0, s32 arg1) {
    func_8022B3E0_StructE *a;
    func_8022B3E0_StructE *b;
    s32 c;
    s32 d;

    c = arg0->unkC;
    d = GG->unkDC;
    a = (d == c) ? (func_8022B3E0_StructE *)&D_801BC03C : (func_8022B3E0_StructE *)&D_801BC3D8;
    b = (d == c) ? (func_8022B3E0_StructE *)&D_801BC3D8 : (func_8022B3E0_StructE *)&D_801BC03C;
    d = (d == c) ? 0 : 1;
    if (GG->unk1031 == 5) {
        if (d != GG->unk1030 && b->unk2DD == 0) {
            a->unk2D8 = arg0->unkA1;
            a->unk2D9 = arg0->unkA2;
            arg0->unkA8 = 0;
        } else {
            arg0->unkA8 = 2;
            arg0->unk9A = 0;
        }
        func_800058DC(arg0, arg0->unkB0);
    }
}
#undef GG
#undef func_800058DC

#define D_801BBBF0 D_801BBBF0__func_8022B4A4
#define D_801BC03C D_801BC03C__func_8022B4A4
#define D_801BC3D8 D_801BC3D8__func_8022B4A4
#define func_80005700 func_80005700__func_8022B4A4

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

extern void func_80005700();
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
#undef D_801BBBF0
#undef D_801BC03C
#undef D_801BC3D8
#undef func_80005700

#define func_8022B544 func_8022B544__func_8022B518

typedef struct func_8022B518_Struct {
    u8 pad[0x90];
    u8 unk90;
} func_8022B518_Struct;

void func_800058DC(void *arg0, void *arg1);
extern void func_8022B544();

void func_8022B518(func_8022B518_Struct *arg0, s32 arg1) {
    arg0->unk90 = 0;
    func_800058DC(arg0, func_8022B544);
}
#undef func_8022B544

typedef struct func_8022B544_Struct {
    u8 pad0[0x448];
    func_80228C20_StructMid **unk448;
    s16 unk44C;
    u8 pad1[0x818 - 0x44E];
    u32 unk818_0 : 1;
    u32 unk818_1 : 2;
    u32 unk818_3 : 29;
    u8 pad2[0xAE0 - 0x81C];
    u8 unkAE0;
    u8 pad3[0x1030 - 0xAE1];
    u8 unk1030;
    u8 unk1031;
} func_8022B544_Struct;
typedef struct func_8022B544_Obj {
    u8 pad0[0x90];
    u8 unk90;
} func_8022B544_Obj;
typedef struct func_8022B544_P {
    u8 pad0[4]; f32 unk4; f32 unk8; s32 unkC; u8 pad1[2]; s16 unk12;
} func_8022B544_P;
extern s32 func_8014ADB4(f32, f32, s32, s16, s32, s32, s32);
extern s32 func_8014B36C(s32);
#define GS ((func_8022B544_Struct *)&D_801BBBF0)

void func_8022B544(func_8022B544_Obj *arg0, s32 arg1)
{
    s32 v;
    func_8022B544_P *p;
    extern void func_80005700();
    if (GS->unk1030 == 0 && GS->unkAE0 >= 3 && GS->unk1031 == 9 && arg0->unk90 < 3) {
        v = ((GS->unk44C >= 0x259) + 1) ? 1 : 0;
        p = (func_8022B544_P *)GS->unk448[0]->unk24->unk2C;
        func_8014B36C(func_8014ADB4(p->unk4, p->unk8, p->unkC, p->unk12, 0, v, 0) & 0xFF);
        arg0->unk90 = arg0->unk90 + 1;
    }
    if (GS->unk818_1 != 0) {
        func_80005700(arg0, GS);
    }
}

