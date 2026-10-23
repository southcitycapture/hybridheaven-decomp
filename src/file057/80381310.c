#include "common.h"

extern f32 func_8001EAD0(s16);
extern s32 func_80126A0C(s32, s32, s32);
extern s32 func_80236788(void);
extern s32 func_80378E3C();
extern s8 func_80376D48(void);
extern u16 D_80089474[];
extern u32 D_8008DA88[];
extern u8 D_800892B0[];
extern u8 D_801BC03C[];
extern u8 D_801BC338;
extern u8 D_801BC339;
extern u8 D_801BC33A;
extern u8 D_801BC3D8[];
extern u8 D_80240730[];
extern u8 D_803898E0[];
extern u8 D_80389AD8[];
extern u8 D_80389B14[];
extern u8 D_80389B50[];
extern u8 D_80389B64[];
extern u8 D_80389B78[];
extern u8 D_8038C9B0[];
extern u8 D_8038C9B8[];
extern u8 D_8038C9C0[];
extern u8 D_8038C9C8[];
extern u8 D_8038C9DC[];
extern u8 D_8038C9E0[];
extern u8 D_8038C9E4[];
extern u8 D_8038C9E8[];
extern u8 D_8038CA30[];
extern u8 D_8038CA64[];
extern u8 D_8038CA6C[];
extern u8 D_8038CA74[];
extern u8 D_8038CA7C[];
extern u8 D_8038CA80[];
extern u8 D_8038CA84[];
extern u8 D_8038CA88[];
extern u8 D_8038CA8C[];
extern u8 D_8038CAE0[];
extern u8 D_8038CB00[];
extern u8 D_8038CB10[];
extern u8 D_8038CB14[];
extern u8 D_8038CB1C[];
extern u8 D_8038CB2C[];
extern u8 D_8038CB30[];
extern u8 D_8038CB40[];
extern u8 D_8038CB50[];
extern u8 D_8038CB5C[];
extern u8 D_8038CB68[];
extern u8 D_8038CB74[];
extern u8 D_8038CB80[];
extern u8 D_8038CB8C[];
extern u8 D_8038CB90[];
extern u8 D_8038CB94[];
extern u8 D_8038CB98[];
extern u8 func_8021BF74[];
extern u8 func_8021C198[];
extern u8 func_8022B640(s32);
extern u8 func_80378D84();
extern void *func_800058DC(void *, void *);
extern void func_80002364();
extern void func_800023EC(void);
extern void func_80002BAC(s32);
extern void func_80005670(void *, void *, void *);
extern void func_80005700(void *);
extern void func_80006088(s32);
extern void func_80006214(void *);
extern void func_8001B204();
extern void func_8001F6E4(void);
extern void func_8001F6FC(void);
extern void func_80020718(s32);
extern void func_80116E80(s32);
extern void func_80126E88(s32, void *);
extern void func_80146088(void *, void *, s8 *);
extern void func_801460C8(void *, s8 *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_80381310(void *, s8 *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_8038150C();
extern void func_80381D48();
extern void func_803821B0(void *, s32, s32, s32, s32, s32, s32, s8 *);
extern void func_803822F0(void *, s32, s32, s32, s32, s32, s32, s8 *);
extern void func_80382744();
extern void func_80382A24();
extern void func_80382A78();
extern void func_80384228(void *, s32);
extern void func_80384268();
extern void func_80384514();
extern void func_803847DC();
extern void func_8038481C();
extern void func_80384948();
extern void func_80384AB4();
extern void func_80384BF8(s32 arg1, s32 arg2);
extern void func_80384F24();
extern void func_80385060();
extern void func_8038540C();



struct func_80381310_Struct {
    s16 s1C; s16 s1E; s16 s20; s16 s22; u8 b24; u8 b25; u8 b26; u8 b27;
    u8 pad[4]; s16 s2C; u16 s2E; u8 b30; u8 b31; u8 b32; u8 b33; u8 tail[0x24];
};

void func_80381310(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14)
void *a0; s8 *a1; s16 a2; s16 a3; s16 a4; s16 a5; u8 a6; u8 a7; u8 a8; u8 a9; u16 a10; u8 a11; u8 a12; u8 a13; u8 a14;
{
    struct func_80381310_Struct s;
    s.s1C = a2;
    s.s1E = a3;
    s.s20 = a4;
    s.s22 = a5;
    s.b24 = a6;
    s.b25 = a7;
    s.b26 = a8;
    s.b27 = a9;
    s.b30 = a11;
    s.b31 = a12;
    s.b32 = a13, s.b33 = a14;
    s.s2C = 0xB;
    s.s2E = a10;
    *(void **)(D_80389AD8 + 0xC) = &s;
    func_80146088(a0, D_80389AD8, a1);
}


struct func_803813C0_Struct {
    u8 pad0[0x90];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 unk93;
    u8 unk94;
};


void func_803813C0(struct func_803813C0_Struct *arg0, s32 arg1) {
    s8 sp54[4];
    s32 i;

    sp54[3] = 0;
    i = (s32)((arg0->unk90 == 0) ? D_801BC03C : D_801BC3D8);
    func_8001F6E4();
    func_80116E80(0x80);
    func_80381310(arg0, &sp54[3], 0, 0, 0x140, 0x100, 0x20, 0x20, 0x20, 0x80, 0, 0, 0, 0, 0);
    func_80006214(arg0);
    if (*(s16 *)(i + 4) < 0x65) {
        arg0->unk92 = func_8022B640(6);
    } else {
        arg0->unk92 = func_8022B640(7);
    }
    arg0->unk93 = func_8022B640(3);
    arg0->unk91 = 0;
    i = 0;
    do {
        func_80002BAC(i & 0xFF);
        i = (i + 1) & 0xFF;
    } while (i < 4);
    if (arg0->unk94 == 0) {
        func_800058DC(arg0, func_8038150C);
        return;
    }
    func_800058DC(arg0, func_80381D48);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_8038150C.s")

struct func_80381E78_Struct {
    u8 pad0[0x94];
    u8 unk94;
    u8 pad95[0xF];
    void *unkA4;
};
typedef struct func_80385208_Gfx {
    u8 pad0[0xA];
    u16 unkA;
} func_80385208_Gfx;
extern func_80385208_Gfx D_801BBC8E;

struct func_80381E78_Struct;
void func_80381E78(struct func_80381E78_Struct *arg0, s32 arg1);

void func_80381D48(s32 arg0, s32 arg1) {
    u8 *sp24;
    u8 var_v1;

    var_v1 = func_80236788();
    if ((*(u32 *)(D_801BC03C + 0x38) >> 0x1F) != 0 && var_v1 == 1) {
        var_v1 = 0x16;
    }
    sp24 = D_803898E0 + var_v1 * 0xC;
    func_8001B204(0x10, 0x1C, 0x9E, D_8038C9B0, 4, *(s32 *)(sp24 + 0xE4));
    func_8001B204(0x11, 0x1C, 0xAC, D_8038C9B8, 4, *(s32 *)(sp24 + 0xE8));
    func_8001B204(0x12, 0x1C, 0xBA, D_8038C9C0, 4, *(s32 *)(sp24 + 0xEC));
    func_8001B204(0x13, 0xAA, 0xC8, D_8038C9C8, 2, 0);
    if (*(u16 *)((u8 *)&D_801BBC8E + 2) & 0x4000) {
        func_800058DC((void *)arg0, (void *)func_80381E78);
    }
}




void func_80381E78(struct func_80381E78_Struct *arg0, s32 arg1) {
    func_8001B204(0x10, 0x1C, 0x9E, D_8038C9DC);
    func_8001B204(0x11, 0x1C, 0xAC, D_8038C9E0);
    func_8001B204(0x12, 0x1C, 0xAC, D_8038C9E4);
    func_8001B204(0x13, 0x1C, 0xAC, D_8038C9E8);
    if (arg0->unk94 == 0) {
        func_800058DC(arg0->unkA4, func_8021BF74);
    } else {
        func_800058DC(arg0->unkA4, func_8021C198);
    }
    func_8001F6FC();
    func_80005700(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_80381F40.s")



void func_80382140(u8 arg0, u8 arg1, u8 arg2) {
    func_8001B204((arg1 + 1) & 0xFF, 0x75, (s16) ((arg1 * 0xE) + 0x64), D_8038CA30, 1, (s32) arg2, (s32) arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_803821B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_803822F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_803823D8.s")


extern struct func_80385208_Globals D_801BBBF0;

typedef struct func_803825CC_Struct {
    u8 pad0[0xB0];
    s16 unkB0;
} func_803825CC_Struct;

void func_803825CC(func_803825CC_Struct *arg0, s32 arg1) {
    s8 sp3F;
    u8 var_v0;
    u8 var_v1;
    s16 v;

    sp3F = 0;
    v = arg0->unkB0;
    arg0->unkB0 = v - 1;
    if ((v < 0) || (D_80089474[2] & 0x8000) || (D_80089474[2] & 0x2000)) {
        func_803821B0(arg0, 0x2E, 0x74, 0x50, 0x50, 0xFF, 1, &sp3F);
        func_803821B0(arg0, 0x6E, 0x74, 0xC0, 0xC0, 0, 4, &sp3F);
        func_803821B0(arg0, 0xAA, 0x74, 0xC0, 0, 0, 5, &sp3F);
        var_v0 = ((u8 *) &D_801BBBF0)[0x748];
        var_v1 = ((u8 *) &D_801BBBF0)[0xAE4];
        if (var_v0 >= 0x100) {
            var_v0 = 0xFF;
        }
        if (var_v1 >= 0x100) {
            var_v1 = 0xFF;
        }
        func_8001B204(3, 0x8C, 0x76, D_8038CA64, 4, var_v0);
        func_8001B204(4, 0xD0, 0x76, D_8038CA6C, 4, var_v1);
        arg0->unkB0 = 0x14;
        func_800058DC(arg0, func_80382744);
    }
}


void func_80382744(func_803825CC_Struct *arg0, s32 arg1) {
    s8 sp3F;
    s16 v;
    u8 r;
    extern void func_803828F0();

    sp3F = 0;
    v = arg0->unkB0;
    arg0->unkB0 = v - 1;
    if (v < 0 || (D_80089474[2] & 0x8000) || (D_80089474[2] & 0x2000)) {
        func_803821B0(arg0, 0x2E, 0x88, 0x50, 0x50, 0xFF, 2, &sp3F);
        r = (u32)(((f32)D_801BC339 / (f32)D_801BC338) * 100.0f);
        D_801BC33A = r;
        func_8001B204(5, 0x74, 0x8B, D_8038CA74, 4, r);
        arg0->unkB0 = 0x14;
        func_800058DC(arg0, func_803828F0);
    }
}


typedef struct func_803828F0_Struct {
    u8 unk[7];
} func_803828F0_Struct;

typedef struct func_803828F0_Obj {
    u8 pad0[0xB0];
    s16 unkB0;
} func_803828F0_Obj;

extern func_803828F0_Struct D_80389BC4;
extern func_803828F0_Struct D_80389BCC;
extern func_803828F0_Struct D_80389BD4;


void func_803828F0(void *arg0, void *arg1) {
    s8 sp4F;
    u8 sp4E;
    func_803828F0_Struct sp44;
    func_803828F0_Struct sp3C;
    func_803828F0_Struct sp34;
    s16 temp_v0;

    sp4F = 0;
    sp44 = D_80389BC4;
    sp3C = D_80389BCC;
    sp34 = D_80389BD4;
    temp_v0 = ((func_803828F0_Obj *) arg0)->unkB0;
    ((func_803828F0_Obj *) arg0)->unkB0 = temp_v0 - 1;
    if (temp_v0 < 0 || (D_80089474[2] & 0x8000) || (D_80089474[2] & 0x2000)) {
        sp4E = D_801BC03C[0x2FF];
        func_803821B0(arg0, 0x2E, 0x9C, 0x50, 0x50, 0xFF, 3, &sp4F);
        func_803822F0(arg0, 0x7C, 0x9E, ((u8 *) &sp44)[sp4E], ((u8 *) &sp3C)[sp4E], ((u8 *) &sp34)[sp4E], sp4E, &sp4F);
        ((func_803828F0_Obj *) arg0)->unkB0 = 0x40;
        func_800058DC(arg0, func_80382A24);
    }
}


typedef struct func_80382A24_Struct {
    u8 pad0[0xB0];
    s16 unkB0;
} func_80382A24_Struct;


void func_80382A24(func_80382A24_Struct *arg0, s32 arg1) {
    s16 temp_v0;

    temp_v0 = arg0->unkB0;
    arg0->unkB0 = temp_v0 - 1;
    if ((temp_v0 < 0) || (D_80089474[2] & 0x8000) || (D_80089474[2] & 0x2000)) {
        func_800058DC(arg0, func_80382A78);
    }
}



struct func_80382A78_Struct {
    u8 pad0[0xC];
    void *unkC;
};

void func_80382A78(struct func_80382A78_Struct *arg0, s32 arg1) {
    extern void func_80005670();

    func_8001B204(2, 0, 0, D_8038CA7C);
    func_8001B204(3, 0, 0, D_8038CA80);
    func_8001B204(4, 0, 0, D_8038CA84);
    func_8001B204(5, 0, 0, D_8038CA88);
    func_8001B204(6, 0, 0, D_8038CA8C);
    func_80005670(arg0->unkC, D_80389B14);
    func_80005700(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_80382B2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_80382DA0.s")


struct func_803831B8_Struct {
    u8 pad0[0x9C];
    u8 unk9C;
};

u8 func_803831B8(struct func_803831B8_Struct *arg0, u8 *arg1)
{
  s32 temp_t6;
  if (arg0->unk9C < 6)
  {
    do
    {
      ;
      if ((*arg1) == 0)
      {
        arg0->unk9C = arg0->unk9C + 1;
        arg1++;
      }
      else
      {
        *arg1 = (*arg1) - 1;
        return arg0->unk9C;
      }
    }
    while (arg0->unk9C < 6);
  }
  return 6;
}

#define D_80240730 D_80240730__func_80383210
#define func_80005670 func_80005670__func_80383210
#define func_800058DC func_800058DC__func_80383210
#define func_803831B8 func_803831B8__func_80383210
#define func_803833A8 func_803833A8__func_80383210

typedef struct func_80383210_Struct {
    u8 pad0[0x9C];
    u8 unk9C;
    u8 pad9D[0xA9 - 0x9D];
    u8 unkA9;
    u8 padAA[0xB0 - 0xAA];
    s16 unkB0;
} func_80383210_Struct;

typedef struct func_80383210_StructGlobal {
    u8 pad0[0x21];
    u8 unk21;
    u8 unk22;
} func_80383210_StructGlobal;

extern void *func_80005670(void *, void *);
extern void func_800058DC(void *, void *);
extern s8 func_803831B8(void *, void *);
extern func_80383210_StructGlobal D_80240730;
extern u8 D_80389B28;
extern void func_803832F4();
extern void func_803833A8();

void func_80383210(func_80383210_Struct *arg0, void *arg1)
{
  func_80383210_Struct *sp24;
  arg0->unkB0 = (s16) (arg0->unkB0 - 1);
  if (arg0->unkB0 < 0)
  {
    sp24 = func_80005670(arg0, &D_80389B28);
    sp24->unkA9 = func_803831B8(arg0, (((u8 *) (&D_80240730)) + arg0->unk9C) + 0x14);
    sp24->unkB0 = 0;
    arg0->unkA9 = arg0->unkA9 + 1;
    if (arg0->unkA9 >= D_80240730.unk21)
    {
      arg0->unkA9 = 0;
      arg0->unk9C = 0;
      if (D_80240730.unk22 != 0)
      {
        func_800058DC(arg0, func_803832F4);
      }
      else
      {
        func_800058DC(arg0, func_803833A8);
        if (!arg0)
        {
        }
      }
    }
    arg0->unkB0 = 0x1F;
  }
}
#undef D_80240730
#undef func_80005670
#undef func_800058DC
#undef func_803831B8
#undef func_803833A8

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_803832F4.s")


struct func_803833A8_Struct {
    u8 pad0[0xC];
    void *unkC;
    u8 pad1[0xA0];
    s16 unkB0;
};


void func_803833A8(struct func_803833A8_Struct *arg0, s32 arg1) {
    if ((arg0->unkB0-- == 0) || (D_80089474[2] & 0x8000) || (D_80089474[2] & 0x2000)) {
        func_80005670(arg0->unkC, D_80389B50, arg0);
        func_80005700(arg0);
    }
}


typedef struct func_80383414_StructB { u8 pad0[0x30]; u8 *unk30; } func_80383414_StructB;
typedef struct func_80383414_Struct { u8 pad0[0xC]; void *unkC; u8 pad10[0x99]; u8 unkA9; u8 pad1[0xB0 - 0xAA]; s16 unkB0; } func_80383414_Struct;

void func_80383414(func_80383414_Struct *arg0, s32 arg1) {
    f32 v;
    u32 t;
    void func_80005700();
    f32 func_8001EAD0(s16);

    if (arg0->unkA9 == 6) {
        func_80005700();
    }
    func_80006214(arg0->unkC);
    if (arg0->unkB0 < 0x21) {
        ((func_80383414_StructB *)D_8008DA88[1 + arg0->unkA9])->unk30[8] = 0xFF;
        if (func_8001EAD0((s16)(arg0->unkB0 << 7)) < 0.0f) { v = -func_8001EAD0((s16)(arg0->unkB0 << 7)); } else { v = func_8001EAD0((s16)(arg0->unkB0 << 7)); }
        ((func_80383414_StructB *)D_8008DA88[1 + arg0->unkA9])->unk30[9] = (u32)(255.0f - v * 128.0f);
        if (func_8001EAD0((s16)(arg0->unkB0 << 7)) < 0.0f) { v = -func_8001EAD0((s16)(arg0->unkB0 << 7)); } else { v = func_8001EAD0((s16)(arg0->unkB0 << 7)); }
        ((func_80383414_StructB *)D_8008DA88[1 + arg0->unkA9])->unk30[10] = (u32)(255.0f - v * 255.0f);
    }
    if (arg0->unkB0 < 0x11) {
        if (func_8001EAD0((s16)(arg0->unkB0 << 7)) < 0.0f) { v = -func_8001EAD0((s16)(arg0->unkB0 << 7)); } else { v = func_8001EAD0((s16)(arg0->unkB0 << 7)); }
        ((func_80383414_StructB *)D_8008DA88[7 + arg0->unkA9 * 2])->unk30[8] = (u32)(v * 191.0f + 63.0f);
        if (func_8001EAD0((s16)(arg0->unkB0 << 7)) < 0.0f) { v = -func_8001EAD0((s16)(arg0->unkB0 << 7)); } else { v = func_8001EAD0((s16)(arg0->unkB0 << 7)); }
        ((func_80383414_StructB *)D_8008DA88[7 + arg0->unkA9 * 2])->unk30[9] = (u32)(v * 96.0f + 32.0f);
        if (func_8001EAD0((s16)(arg0->unkB0 << 7)) < 0.0f) { v = -func_8001EAD0((s16)(arg0->unkB0 << 7)); } else { v = func_8001EAD0((s16)(arg0->unkB0 << 7)); }
        t = (u32)(v * 191.0f + 63.0f);
        ((func_80383414_StructB *)D_8008DA88[8 + arg0->unkA9 * 2])->unk30[10] = t;
        ((func_80383414_StructB *)D_8008DA88[8 + arg0->unkA9 * 2])->unk30[9] = t;
        ((func_80383414_StructB *)D_8008DA88[8 + arg0->unkA9 * 2])->unk30[8] = t;
    }
    arg0->unkB0 = arg0->unkB0 + 1;
    if (arg0->unkB0 >= 0x21) {
        func_80005700(arg0);
    }
}



struct func_80383A60_Struct2 {
    u8 pad0[8];
    u8 unk8;
    u8 unk9;
    u8 unkA;
};
struct func_80383A60_Struct1 {
    u8 pad0[0x30];
    struct func_80383A60_Struct2 *unk30;
};
struct func_80383A60_Struct {
    u8 pad0[0xC];
    void *unkC;
    u8 pad10[0x99];
    u8 unkA9;
    u8 padAA[6];
    s16 unkB0;
};

#define ABSSIN(v, o) \
    if (func_8001EAD0((s16)(o->unkB0 << 7)) < 0.0f) { \
        v = -func_8001EAD0((s16)(o->unkB0 << 7)); \
    } else { \
        v = func_8001EAD0((s16)(o->unkB0 << 7)); \
    }
#define TBL ((struct func_80383A60_Struct1 **)D_8008DA88)
#define E1(o) TBL[1 + o->unkA9]->unk30
#define E2(o) TBL[19 + o->unkA9 * 2]->unk30
#define E3(o) TBL[20 + o->unkA9 * 2]->unk30

void func_80383A60(struct func_80383A60_Struct *arg0, s32 arg1) {
    f32 v;
    u32 t;

    if (arg0->unkA9 == 6) {
        func_80005700(arg0);
    }
    func_80006214(arg0->unkC);
    if (arg0->unkB0 < 0x21) {
        ABSSIN(v, arg0);
        E1(arg0)->unk8 = (u32)(255.0f - v * 255.0f);
        ABSSIN(v, arg0);
        E1(arg0)->unk9 = (u32)(255.0f - v * 80.0f);
        E1(arg0)->unkA = 0xFF;
    }
    if (arg0->unkB0 < 0x11) {
        ABSSIN(v, arg0);
        E2(arg0)->unk9 = (u32)(v * 120.0f + 40.0f);
        ABSSIN(v, arg0);
        E2(arg0)->unkA = (u32)(v * 191.0f + 63.0f);
        ABSSIN(v, arg0);
        t = (u32)(v * 191.0f + 63.0f);
        E3(arg0)->unkA = t;
        E3(arg0)->unk9 = t;
        E3(arg0)->unk8 = t;
    }
    arg0->unkB0 = arg0->unkB0 + 1;
    if (arg0->unkB0 >= 0x21) {
        func_80005700(arg0);
    }
}


typedef struct func_803840A4_Globals {
    u16 unk0;
    u8 pad2[6];
    u16 unk8;
    u8 pad10[0x36];
    u16 unk40;
    u16 unk42;
    u16 unk44;
    u16 unk46;
} func_803840A4_Globals;

typedef struct func_803840A4_Obj {
    u8 pad0[0x90];
    u16 unk90;
    u16 unk92;
    u16 unk94;
    u16 unk96;
    u16 unk98;
    u16 unk9A;
    u8 pad9C[4];
    s8 unkA0;
    u8 padA1[8];
    u8 unkA9;
    u8 padAA[6];
    s16 unkB0;
} func_803840A4_Obj;

extern func_803840A4_Globals D_8017DC40;
extern void func_80381F40(void *a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, u8 *a7);

void func_803840A4(func_803840A4_Obj *arg0, s32 arg1) {
    s8 sp57;
    s8 temp_v0;

    arg0->unk90 = D_8017DC40.unk0;
    arg0->unk92 = D_8017DC40.unk8;
    arg0->unk94 = D_8017DC40.unk40;
    arg0->unk96 = D_8017DC40.unk42;
    arg0->unk98 = D_8017DC40.unk46;
    arg0->unk9A = D_8017DC40.unk44;
    temp_v0 = func_80376D48();
    arg0->unkA0 = temp_v0;
    if (!(temp_v0 & 0xFF)) {
        arg0->unkB0 = 0;
        func_800058DC(arg0, func_80384514);
        return;
    }
    arg0->unkA9 = 0;
    func_801460C8(arg0, &sp57, 0x24, 0x56, 0xF0, 0x64, 0xB, 0x20, 0x20, 0x20, 0x80, 2, 0x20, 0x20, 0x20, 0x40);
    func_80381F40(arg0, 0xA6, 0x58, 0xFF, 0xFF, 0xFF, 0x18, &sp57);
    func_80381F40(arg0, 0x73, 0x58, 0xC0, 0xC0, 0xC0, 0xC, &sp57);
    arg0->unkB0 = 0xA;
    func_800058DC(arg0, func_80384228);
}



void func_80384228(void *arg0, s32 arg1) {
    func_803828F0_Obj *obj = arg0;

    obj->unkB0 = obj->unkB0 - 1;
    if (obj->unkB0 < 0) {
        func_800058DC(arg0, func_80384268);
    }
}

typedef struct func_80384268_Struct {
    u8 pad0[0x90];
    u16 unk90[6];
    u8 pad9C[4];
    u8 unkA0;
    u8 padA1[8];
    u8 unkA9;
    u8 padAA[6];
    s16 unkB0;
} func_80384268_Struct;
extern func_80384268_Struct *D_80005670(void *, void *);
struct func_80384484_Struct;
void func_80384484(struct func_80384484_Struct *arg0, s32 arg1);

void func_80384268(func_80384268_Struct *arg0, s32 arg1) {
    u8 sp67;
    u16 sp58[6];
    s32 v;
    u8 pad;
    u8 sp52;
    s32 w;
    func_80384268_Struct *p;

    sp58[0] = arg0->unk90[0];
    sp58[1] = arg0->unk90[1];
    sp58[2] = arg0->unk90[2];
    sp58[3] = arg0->unk90[3];
    sp58[4] = arg0->unk90[4];
    sp58[5] = arg0->unk90[5];
    v = arg0->unkA9;
    if ((1 << v) & arg0->unkA0) {
        func_80381F40(arg0, 0x2E, (s16)(v * 14 + 0x64), 0xC0, 0xC0, 0xC0, v + 6, &sp67);
        sp52 = func_80378D84(arg0->unkA9);
        arg1 = func_80378E3C(arg0->unkA9);
        w = arg0->unkA9;
        func_8001B204(w, 0x75, (s16)(w * 14 + 0x64), D_8038CAE0, 1, 2, sp52, 0, 0, sp58[w], 1, 2, arg1);
        p = D_80005670(arg0, D_80389B64);
        p->unkA9 = arg0->unkA9 + 3;
        p->unkB0 = 2;
    } else {
        func_80381F40(arg0, 0x2E, (s16)(v * 14 + 0x64), 0x60, 0x60, 0x60, v + 6, &sp67);
        sp52 = func_80378D84(arg0->unkA9);
        arg1 = func_80378E3C(arg0->unkA9);
        w = arg0->unkA9;
        func_8001B204(w, 0x75, (s16)(w * 14 + 0x64), D_8038CB00, 1, 0, sp52, 0, arg1);
    }
    arg0->unkB0 = 0xA;
    func_800058DC(arg0, func_80384484);
}


typedef struct func_80384484_Struct {
    u8 pad0[0xA9];
    u8 unkA9;
    u8 padAA[6];
    s16 unkB0;
} func_80384484_Struct;

void func_80384484(func_80384484_Struct *arg0, s32 arg1) {
    arg0->unkB0 = arg0->unkB0 - 1;
    if ((arg0->unkB0 < 0) || (D_80089474[2] & 0x8000) || (D_80089474[2] & 0x2000)) {
        arg0->unkA9 = arg0->unkA9 + 1;
        if (arg0->unkA9 >= 6) {
            arg0->unkB0 = 0xC8;
            func_800058DC(arg0, func_80384514);
            return;
        }
        func_800058DC(arg0, func_80384268);
    }
}



struct func_80384514_Struct {
    u8 pad0[0xC];
    void *unkC;
    u8 pad10[0xA0];
    s16 unkB0;
};

void func_80384514(struct func_80384514_Struct *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_s0;
    extern void func_80005670();

    temp_v0 = arg0->unkB0-- == 0;
    var_s0 = 0;
    if (!temp_v0 && !(D_80089474[2] & 0x8000)) {
        if (D_80089474[2] & 0x2000) {
            goto block_5;
        }
        return;
    }
block_5:
    do {
        func_8001B204(var_s0 & 0xFF, 0, 0, D_8038CB10);
        var_s0 = (var_s0 + 1) & 0xFF;
    } while (var_s0 < 6);
    func_80005670(arg0->unkC, D_80389B78);
    func_80005700(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_803845BC.s")


typedef struct func_80384718_Struct {
    u8 pad0[0xA9];
    u8 unkA9;
    u8 pad1[0xB0 - 0xAA];
    s16 unkB0;
} func_80384718_Struct;


void func_80384718(func_80384718_Struct *arg0, s32 arg1) {
    u8 sp2F;

    arg0->unkA9 = 0;
    if (D_80240730[0x20] != 0) {
        func_80381F40(arg0, 0, 0x48, 0xA0, 0xA0, 0xA0, 0x17, &sp2F);
        func_80381F40(arg0, 0x2E, 0x48, 0xFF, 0xFF, 0xFF, 0x19, &sp2F);
        arg0->unkB0 = 0xA;
        func_800058DC(arg0, func_803847DC);
        return;
    }
    arg0->unkB0 = 0;
    func_800058DC(arg0, func_80384AB4);
}



void func_803847DC(void *arg0, s32 arg1) {
    func_803828F0_Obj *obj = arg0;

    obj->unkB0 = obj->unkB0 - 1;
    if (obj->unkB0 < 0) {
        func_800058DC(arg0, func_8038481C);
    }
}


typedef struct func_8038481C_Struct {
    u8 pad[0xA9];
    u8 unkA9;
    u8 padAA[6];
    s16 unkB0;
} func_8038481C_Struct;

typedef struct func_8038481C_Struct2 {
    s32 *ptr;
    u8 pad[24];
} func_8038481C_Struct2;

extern func_8038481C_Struct2 D_801842A0[];

void func_8038481C(func_8038481C_Struct *arg0, s32 arg1) {
    u8 sp37;

    func_80381F40(arg0, 0x28, (s16) (((arg0->unkA9 % 5) * 0x14) + 0x5A), 0xA0, 0xA0, 0xA0, 0x17, &sp37);
    func_8001B204((arg0->unkA9 % 5) & 0xFF, 0x5C, (s16) (((arg0->unkA9 % 5) * 0x14) + 0x5D), D_8038CB14, 4, *D_801842A0[D_80240730[arg0->unkA9]].ptr);
    if ((arg0->unkA9 % 5) == 4) {
        arg0->unkB0 = 0x32;
    } else {
        arg0->unkB0 = 0xA;
    }
    func_800058DC(arg0, func_80384948);
}


typedef struct func_80384948_Struct {
    u8 pad0[0xA9];
    u8 unkA9;
    u8 padAA[6];
    s16 unkB0;
} func_80384948_Struct;

void func_80384948(func_80384948_Struct *arg0, s32 arg1) {
    s8 i;
    s32 t;

    if (arg0->unkB0-- == 0 ||
        (((*(u16 *)(D_800892B0 + 0x1C6) & 0x8000) || (*(u16 *)(D_800892B0 + 0x1C6) & 0x2000)) && (arg0->unkA9 % 4)) ||
        (((*(u16 *)(D_800892B0 + 0x1C8) & 0x8000) || (*(u16 *)(D_800892B0 + 0x1C8) & 0x2000)) && !(arg0->unkA9 % 4))) {
        arg0->unkA9 += 1;
        t = arg0->unkA9;
        if (t < D_80240730[0x20]) {
            i = 4;
            if ((t % 5) == 0) {
                do {
                    func_8001B204((u8)i, 0, 0, D_8038CB1C);
                    func_80006088(((s32 *)arg1)[i + 2]);
                    i--;
                } while (i >= 0);
            }
            func_800058DC(arg0, func_8038481C);
            return;
        }
        arg0->unkB0 = 0xC8;
        func_800058DC(arg0, func_80384AB4);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80381310/func_80384AB4.s")



void func_80384BB8(s32 arg0, void *arg1) {
    if (func_80126A0C(arg0, 0xC1, 0) != 0) {
        func_800058DC(arg0, &func_80384BF8);
    }
}

#define func_80384E4C func_80384E4C__func_80384BF8
#define func_80384E4C_Struct func_80384E4C_Struct__func_80384BF8
typedef struct func_80384E4C_Struct {
    u8 pad0[0xB0];
    s16 unkB0;
} func_80384E4C_Struct;
extern void func_80384E4C(func_80384E4C_Struct *arg0, s32 arg1);

extern void func_802169AC();
extern s32 D_80006214(void *);
extern u8 D_8038CB24[];
typedef struct func_80384BF8_Struct {
    u8 pad0[8];
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 padB;
    u8 unkC;
    u8 unkD;
    u8 unkE;
} func_80384BF8_Struct;
typedef struct func_80384BF8_Obj {
    u8 pad0[0x30];
    func_80384BF8_Struct *unk30;
} func_80384BF8_Obj;
typedef struct func_80384BF8_Arg {
    u8 pad0[0xA1];
    u8 unkA1;
    u8 padA2[0xE];
    s16 unkB0;
} func_80384BF8_Arg;

#define G(i) (((func_80384BF8_Obj **)D_8008DA88)[i])
void func_80384BF8(s32 a0, s32 a1) {
    u8 sp4F;
    s32 c;

    func_8001B204(0, 0x486, 0xB0, D_8038CB24, 4, 0, func_8013D5F4(((func_80384BF8_Arg *)a0)->unkA1));
    func_802169AC(a0, &sp4F, 0x66, 0x50, 0xA6, 0x10, 0x20, 0, 0, 0xFF, 0xCB, 0);
    func_802169AC(a0, &sp4F, 0x76, 0x60, 0xA6, 0x80, 0x20, 0, 0, 0xFF, 0xCB, 1);
    func_802169AC(a0, &sp4F, 0x66, 0xE0, 0xA6, 0x10, 0x20, 0, 0, 0xFF, 0xCB, 2);
    D_80006214(a0);
    c = 0xC0;
    G(0)->unk30->unk8 = c;
    G(0)->unk30->unk9 = G(0)->unk30->unkA = G(0)->unk30->unk8;
    G(1)->unk30->unk8 = c;
    G(1)->unk30->unk9 = G(1)->unk30->unkA = G(1)->unk30->unk8;
    G(2)->unk30->unk8 = c;
    G(2)->unk30->unk9 = G(2)->unk30->unkA = G(2)->unk30->unk8;
    G(0)->unk30->unkC = 0;
    G(0)->unk30->unkD = G(0)->unk30->unkE = G(0)->unk30->unkC;
    G(1)->unk30->unkC = 0;
    G(1)->unk30->unkD = G(1)->unk30->unkE = G(1)->unk30->unkC;
    G(2)->unk30->unkC = 0;
    G(2)->unk30->unkD = G(2)->unk30->unkE = G(2)->unk30->unkC;
    ((func_80384BF8_Arg *)a0)->unkB0 = 0x3C;
    func_800058DC(a0, func_80384E4C);
}
#undef G
#undef func_80384E4C
#undef func_80384E4C_Struct

void func_80384ED0(struct func_803833A8_Struct *arg0, s32 arg1);

typedef struct func_80384E4C_Struct {
    u8 pad0[0xB0];
    s16 unkB0;
} func_80384E4C_Struct;


void func_80384E4C(func_80384E4C_Struct *arg0, s32 arg1) {
    s16 temp_v0;

    temp_v0 = arg0->unkB0;
    arg0->unkB0 = temp_v0 - 1;
    if (temp_v0 < 0) {
        func_8001B204(0, 0, 0, D_8038CB2C);
        func_80006088(D_8008DA88[2]);
        func_80006088(D_8008DA88[1]);
        func_80006088(D_8008DA88[0]);
        arg0->unkB0 = 5;
        func_800058DC(arg0, (void *) func_80384ED0);
    }
}



void func_80384ED0(struct func_803833A8_Struct *arg0, s32 arg1) {
    s16 temp_v0;

    temp_v0 = arg0->unkB0;
    arg0->unkB0 = temp_v0 - 1;
    if (temp_v0 < 0) {
        ((u8 *) arg0->unkC)[0xB3] = 1;
        func_80126E88(0xC1, arg0);
        func_80005700(arg0);
    }
}


struct func_80384F24_Struct { u16 *unk0; s32 *unk4; };
struct func_80384F24_Local {
    s16 x24, y26, w28, h2A;
    u8 c2C, c2D, c2E, c2F, c30, c31, c32, c33;
    s16 s34, s36;
    u8 pad38[4];
    u16 s3C;
    u8 pad3E[2];
    s32 w40;
    u8 pad44[8];
    s16 s4C, s4E, s50, s52, s54, s56;
};
extern struct func_80384F24_Struct *D_80172594;
extern u8 D_80389BB4[];

void func_80384F24(arg0, arg1, arg2, arg3, arg4)
    void *arg0; s16 arg1; s16 arg2; u8 arg3; s8 *arg4;
{
    s32 pad[2];
    struct func_80384F24_Local l;
    s32 pad2[2];

    l.x24 = arg1;
    l.y26 = arg2;
    l.w28 = 0x10;
    l.h2A = 0x30;
    l.s54 = l.s4C = 0x10;
    l.s56 = l.s4E = 0x30;
    l.c2C = l.c2D = l.c2E = 0xA0;
    l.c2F = 0xFF;
    l.c32 = 0;
    l.c31 = 0;
    l.c30 = 0;
    l.c33 = 0xFF;
    l.s34 = 0x66;
    l.s36 = 0;
    l.s3C = *D_80172594->unk0;
    l.w40 = D_80172594->unk4[arg3 & 0xFFFF];
    l.s52 = 0;
    l.s50 = 0;
    *(void **)(D_80389BB4 + 0xC) = &l;
    func_80146088(arg0, D_80389BB4, arg4);
}



void func_80385018(func_803828F0_Obj *arg0, s32 arg1) {
    arg0->unkB0 = arg0->unkB0 + 1;
    if (arg0->unkB0 >= 0x65) {
        arg0->unkB0 = 0;
        func_800058DC(arg0, func_80385060);
    }
}

struct func_80385208_Arg;
void func_80385208(struct func_80385208_Arg *arg0, void *arg1);

void func_80385060(s32 arg0, s32 arg1) {
    s8 sp37;

    sp37 = 0;
    if (func_80126A0C(arg0, 0x12F, 0) != 0) {
        func_80384F24(arg0, 0x64, 0x7C, 0, &sp37);
        func_80384F24(arg0, 0x74, 0x7C, 1, &sp37);
        func_80384F24(arg0, 0x84, 0x7C, 1, &sp37);
        func_80384F24(arg0, 0x94, 0x7C, 1, &sp37);
        func_80384F24(arg0, 0xA4, 0x7C, 1, &sp37);
        func_80384F24(arg0, 0xB4, 0x7C, 2, &sp37);
        func_80006214(arg0);
        func_8001B204(0xA, 0x76, 0x80, D_8038CB30, 1);
        func_8001B204(0xB, 0x76, 0x8C, D_8038CB40, 1);
        func_8001B204(0xC, 0x76, 0x98, D_8038CB50, 1);
        func_8001B204(0xD, 0x6A, 0x80, D_8038CB5C, 1, 1, 8);
        func_80002364(0x0C000000, 0xA, 3, 0);
        func_80002364(0x0C000000, 0xA, 3, 1);
        func_800058DC(arg0, (void *)func_80385208);
    }
}


typedef struct func_80385208_Obj {
    u8 pad0[0xA4];
    s16 unkA4;
} func_80385208_Obj;

typedef struct func_80385208_Arg {
    u8 pad0[0xC];
    func_80385208_Obj *unkC;
    u8 pad1[0xA0];
    s16 unkB0;
} func_80385208_Arg;

typedef struct func_80385208_Globals {
    u8 pad0[0xA0];
    u16 unkA0;
    u8 pad1[6];
    u16 unkA8;
    u8 pad2[0x16];
    u16 unkC0;
    u8 pad3[6];
    u16 unkC8;
} func_80385208_Globals;



void func_80385208(func_80385208_Arg *arg0, void *arg1) {
    s16 var_v1;
    u32 var_v0;

    var_v0 = D_801BBBF0.unkA8;
    if ((var_v0 & 0x800) || (D_801BBBF0.unkC8 & 0x800)) {
        func_80020718(0x300);
        arg0->unkC->unkA4 -= 1;
        var_v1 = arg0->unkC->unkA4;
        if (var_v1 < 0) {
            arg0->unkC->unkA4 = 2;
            var_v1 = arg0->unkC->unkA4;
        }
        func_8001B204(0xD, 0x6A, (s16) ((var_v1 * 0xC) + 0x80), D_8038CB68, 1, 1, 8);
        var_v0 = D_801BBC8E.unkA;
    }
    if ((var_v0 & 0x400) || (D_801BBBF0.unkC8 & 0x400)) {
        func_80020718(0x300);
        arg0->unkC->unkA4 += 1;
        var_v1 = arg0->unkC->unkA4;
        if (var_v1 >= 3) {
            arg0->unkC->unkA4 = 0;
            var_v1 = arg0->unkC->unkA4;
        }
        func_8001B204(0xD, 0x6A, (s16) ((var_v1 * 0xC) + 0x80), D_8038CB74, 1, 1, 8);
    }
    if ((D_801BBBF0.unkA0 & 0x8000) || (D_801BBBF0.unkC0 & 0x8000)) {
        func_8001B204(0xD, 0x6A, (s16) ((arg0->unkC->unkA4 * 0xC) + 0x80), D_8038CB80, 1, 1, 4);
        func_80020718(0x104);
        arg0->unkB0 = 0x14;
        func_800058DC(arg0, (void *) func_8038540C);
    }
}



struct func_8038540C_Struct {
    u8 pad0[0xB0];
    s16 unkB0;
};

struct func_8038540C_Child {
    u8 pad0[0xA4];
    s16 unkA4;
};

struct func_8038540C_Parent {
    u8 pad0[0xC];
    struct func_8038540C_Child *unkC;
};

void func_8038540C(struct func_8038540C_Struct *arg0, s32 arg1) {
    s16 temp_v0;
    struct func_8038540C_Child *temp_v0_2;
    extern void func_80126E88();

    temp_v0 = arg0->unkB0;
    arg0->unkB0 = temp_v0 - 1;
    if (temp_v0 < 0) {
        temp_v0_2 = ((struct func_8038540C_Parent *) arg0)->unkC;
        temp_v0_2->unkA4 = temp_v0_2->unkA4 | 0x80;
        func_8001B204(0xA, 0, 0, D_8038CB8C);
        func_8001B204(0xB, 0, 0, D_8038CB90);
        func_8001B204(0xC, 0, 0, D_8038CB94);
        func_8001B204(0xD, 0, 0, D_8038CB98);
        func_80126E88(0x12F);
        func_800023EC();
        func_80005700(arg0);
    }
}

