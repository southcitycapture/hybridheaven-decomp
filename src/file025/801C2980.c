#include "common.h"


typedef struct func_801C2980_Struct {
    u8 pad[0x90];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 pad93;
    u8 unk94;
    u8 unk95;
    u8 unk96;
    u8 unk97;
    s32 unk98;
    u16 unk9C;
    u8 pad9E[2];
    u16 unkA0;
} func_801C2980_Struct;

extern void *func_80005670(void *, void *);
extern void *D_8038D8CC;
extern u8 D_801DA23C[];

s32 func_801C2980(u8 arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4, u8 arg5, u8 arg6, s32 arg7, u16 arg8) {
    func_801C2980_Struct *temp_v0;

    temp_v0 = func_80005670(D_8038D8CC, D_801DA23C);
    if (temp_v0 == NULL) {
        return 0;
    }
    temp_v0->unk90 = arg0;
    temp_v0->unk91 = arg1;
    temp_v0->unk92 = arg2;
    temp_v0->unk94 = arg3;
    temp_v0->unk95 = arg4;
    temp_v0->unk96 = arg5;
    temp_v0->unk97 = arg6;
    temp_v0->unk98 = arg7;
    temp_v0->unk9C = 0;
    temp_v0->unkA0 = arg8;
    return 1;
}


extern void func_801C2BC4();
extern void func_8012CF8C(void *arg0, u8 *arg1, s32 arg2, s32 arg3);
extern void func_800058DC(void *, void *);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern u8 D_8038D89C[];

typedef struct func_801C2A1C_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
} func_801C2A1C_Struct3;
typedef struct func_801C2A1C_Struct2 {
    u8 pad0[0x30];
    func_801C2A1C_Struct3 *unk30;
} func_801C2A1C_Struct2;

void func_801C2A1C(func_801C2980_Struct *arg0, func_801C2A1C_Struct2 **arg1) {
    func_80005E44(arg0, D_8038D89C);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0xA7, 0);
    func_8012CF8C(arg0, (u8 *)(*arg1)->unk30 + 0x40, 0xA8, 0);
    (*arg1)->unk30->unk4 = arg0->unk90;
    (*arg1)->unk30->unk8 = arg0->unk91;
    (*arg1)->unk30->unkC = arg0->unk92;
    (*arg1)->unk30->unk12 = 0;
    (*arg1)->unk30->unk48 = arg0->unk94;
    (*arg1)->unk30->unk49 = arg0->unk95;
    (*arg1)->unk30->unk4A = arg0->unk96;
    (*arg1)->unk30->unk4B = arg0->unk97;
    (*arg1)->unk30->unk24 |= 0x100;
    (*arg1)->unk30->unk18 = 1.0f;
    (*arg1)->unk30->unk1C = 1.0f;
    (*arg1)->unk30->unk20 = 1.0f;
    (*arg1)->unk30->unk30 = arg0->unk98 | 0x40000000;
    func_800058DC(arg0, func_801C2BC4);
}

struct func_801C2E9C_Struct {
    u8 pad0[0x30];
    u8 *unk30;
};
extern void func_80005700();

extern s32 D_801DA250[];
extern f32 D_801DD214;

void func_801C2BC4(func_801C2980_Struct *arg0, struct func_801C2E9C_Struct **arg1) {
    s32 index;

    index = (s32)(((f32)(u32)arg0->unk9C / (f32)(u32)arg0->unkA0) * D_801DD214);
    func_8012CF8C(arg0, (*arg1)->unk30 + 0x40, 0xA8, D_801DA250[index]);
    arg0->unk9C++;
    if (arg0->unkA0 < arg0->unk9C) {
        func_80005700(arg0);
    }
}


extern u8 D_801DA270[];
extern f32 D_801DEF80;
extern f32 D_801DEF84;
extern f32 D_801DEF88;

s32 func_801C2C90(f32 arg0, f32 arg1, f32 arg2, u8 arg3, u8 arg4, u8 arg5, u8 arg6, s32 arg7, u16 arg8) {
    func_801C2980_Struct *temp_v0;

    temp_v0 = func_80005670(D_8038D8CC, D_801DA270);
    if (temp_v0 == NULL) {
        return 0;
    }
    D_801DEF80 = arg0;
    D_801DEF84 = arg1;
    D_801DEF88 = arg2;
    temp_v0->unk94 = arg3;
    temp_v0->unk95 = arg4;
    temp_v0->unk96 = arg5;
    temp_v0->unk97 = arg6;
    temp_v0->unk98 = arg7;
    temp_v0->unk9C = 0;
    temp_v0->unkA0 = arg8;
    return 1;
}

struct func_801C2E9C_Struct2 {
    u8 pad0[0x9C];
    u16 unk9C;
};
void func_801C2E9C(struct func_801C2E9C_Struct2 *arg0, struct func_801C2E9C_Struct **arg1);

typedef struct func_801C2D38_Struct {
    u8 pad0[0x94];
    u8 unk94;
    u8 unk95;
    u8 unk96;
    u8 unk97;
    s32 unk98;
} func_801C2D38_Struct;

typedef struct func_801C2D38_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
} func_801C2D38_Struct3;

typedef struct func_801C2D38_Struct2 {
    u8 pad0[0x30];
    func_801C2D38_Struct3 *unk30;
} func_801C2D38_Struct2;


void func_801C2D38(func_801C2D38_Struct *arg0, func_801C2D38_Struct2 **arg1) {
    func_801C2D38_Struct3 *temp_v0;

    func_80005E44(arg0, D_8038D89C);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0xA9, 0);
    func_8012CF8C(arg0, (u8 *) (*arg1)->unk30 + 0x40, 0xAA, 0);
    (*arg1)->unk30->unk4 = D_801DEF80;
    (*arg1)->unk30->unk8 = D_801DEF84;
    (*arg1)->unk30->unkC = D_801DEF88;
    (*arg1)->unk30->unk12 = 0x1000;
    (*arg1)->unk30->unk48 = arg0->unk94;
    (*arg1)->unk30->unk49 = arg0->unk95;
    (*arg1)->unk30->unk4A = arg0->unk96;
    (*arg1)->unk30->unk4B = arg0->unk97;
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk24 = temp_v0->unk24 | 0x100;
    (*arg1)->unk30->unk18 = 1.0f;
    (*arg1)->unk30->unk1C = 1.0f;
    (*arg1)->unk30->unk20 = 1.0f;
    (*arg1)->unk30->unk30 = arg0->unk98 | 0x40000000;
    func_800058DC(arg0, func_801C2E9C);
}





void func_801C2E9C(struct func_801C2E9C_Struct2 *arg0, struct func_801C2E9C_Struct **arg1)
{
  u16 *temp_t8;
  s32 temp_t9;
  int new_var;
  s32 temp_t0;
  func_8012CF8C(arg0, (*arg1)->unk30 + 0x40, 0xAA, 0);
  temp_t8 = &arg0->unk9C;
  temp_t9 = (((((((((((*temp_t8) + 1) & 0xFFFFFFFFu) & 0xFFFFFFFFu) & 0xFFFFFFFFu) & 0xFFFFFFFFu) & 0xFFFFFFFFu) & 0xFFFFFFFFu) & (0xFFFFFFFFu & 0xFFFFFFFFFFFFFFFFu)) & 0xFFFFFFFFu) & 0xFFFFFFFFu) & 0xFFFFFFFFu;
  new_var = 0xFFFF;
  temp_t0 = temp_t9 & new_var;
  *((0, temp_t8)) = temp_t9;
  if (temp_t0 >= 4)
  {
    func_80005700(arg0);
  }
}


extern void func_801C0D04(s32, s32);
extern s32 D_801DA288;

void func_801C2EF8(void) {
    func_801C0D04(3, 0x1F40);
    D_801DA288 = 0xFC84;
}


extern void func_801C0EB0(s32, s32);

void func_801C2F24(void) {
    func_801C0EB0(3, 0x1F40);
    D_801DA288 = 0;
}



s32 func_801C2F4C(void) {
    return D_801DA288 == 0xFC84;
}


extern f64 func_80034C24();
extern s32 func_801C0DE4();
u64 func_801C0F18(s32, s32);
extern f32 D_801DA284;
extern f64 D_801DD218;
extern f32 D_801DD220;

void func_801C2F60(f32 *arg0) {
    u64 temp_ret;

    temp_ret = func_801C0F18(3, 0x1F40);
    D_801DA284 = (f32) (func_80034C24(temp_ret) / D_801DD218);
    *arg0 = D_801DD220 * D_801DA284 * D_801DA284;
    func_801C0DE4(3, 0x1F40, 0x40A00000);
}


typedef struct func_801C2FE0_Struct {
    u8 pad0[0x90];
    s8 unk90;
    s8 unk91;
    s8 unk92;
    u8 pad93;
    u8 unk94;
    u8 unk95;
    u8 unk96;
    u8 unk97;
    s32 unk98;
    s16 unk9C;
    u8 pad9E[2];
    u16 unkA0;
    u8 padA2[2];
    u8 unkA4;
    u8 unkA5;
    u8 unkA6;
    u8 unkA7;
    s32 unkA8;
} func_801C2FE0_Struct;

extern u8 D_801DA28C[];

s32 func_801C2FE0(s32 arg0, s8 arg1, s8 arg2, s8 arg3, u8 arg4, u8 arg5, u8 arg6, u8 arg7, u8 arg8, u8 arg9, u8 arg10, u8 arg11, s32 arg12, u16 arg13) {
    func_801C2FE0_Struct *temp_v0;
    func_801C2FE0_Struct *temp_v1;

    temp_v0 = func_80005670(D_8038D8CC, D_801DA28C);
    temp_v1 = temp_v0;
    if (temp_v0 == NULL) {
        return 0;
    }
    temp_v0->unk90 = arg1;
    temp_v0->unk91 = arg2;
    temp_v0->unk92 = arg3;
    temp_v0->unk94 = arg4;
    temp_v0->unk95 = arg5;
    temp_v0->unk96 = arg6;
    temp_v0->unk97 = arg7;
    temp_v0->unkA4 = arg8;
    temp_v0->unkA5 = arg9;
    temp_v0->unkA6 = arg10;
    temp_v1->unkA7 = arg11;
    temp_v1->unk98 = arg12;
    temp_v1->unk9C = 0;
    temp_v1->unkA0 = arg13;
    temp_v1->unkA8 = arg0;
    return 1;
}


typedef struct func_801C30A4_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_801C30A4_StructB;

typedef struct func_801C30A4_StructA {
    u8 pad0[0x30];
    func_801C30A4_StructB *unk30;
} func_801C30A4_StructA;

extern void func_801C3260();

void func_801C30A4(func_801C2FE0_Struct *arg0, func_801C30A4_StructA **arg1) {
    func_80005E44(arg0, D_8038D89C);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0xA7, 0);
    func_8012CF8C(arg0, (u8 *)(*arg1)->unk30 + 0x40, 0x2DC, 0);
    (*arg1)->unk30->unk4 = arg0->unk90;
    (*arg1)->unk30->unk8 = arg0->unk91;
    (*arg1)->unk30->unkC = arg0->unk92;
    (*arg1)->unk30->unk12 = 0;
    (*arg1)->unk30->unk48 = arg0->unk94;
    (*arg1)->unk30->unk49 = arg0->unk95;
    (*arg1)->unk30->unk4A = arg0->unk96;
    (*arg1)->unk30->unk4B = arg0->unk97;
    (*arg1)->unk30->unk4C = arg0->unkA4;
    (*arg1)->unk30->unk4D = arg0->unkA5;
    (*arg1)->unk30->unk4E = arg0->unkA6;
    (*arg1)->unk30->unk4F = arg0->unkA7;
    (*arg1)->unk30->unk24 |= 0x300;
    (*arg1)->unk30->unk18 = 0.5f;
    (*arg1)->unk30->unk1C = 2.0f;
    (*arg1)->unk30->unk20 = 1.0f;
    (*arg1)->unk30->unk30 = arg0->unk98 | 0x40000000;
    func_800058DC(arg0, func_801C3260);
}

#define func_801C3260 func_801C3260_decl
#undef func_801C3260

typedef struct func_801C3260_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801C3260_Struct3;

typedef struct func_801C3260_Struct2 {
    u8 pad0[0x30];
    func_801C3260_Struct3 *unk30;
} func_801C3260_Struct2;

typedef struct func_801C3260_Struct {
    u8 pad0[0x90];
    s8 unk90;
    s8 unk91;
    s8 unk92;
    u8 pad93[9];
    u16 unk9C;
    u8 pad9E[10];
    func_801C3260_Struct2 *unkA8;
} func_801C3260_Struct;

extern s32 D_801DA2A0[];

void func_801C3260(func_801C3260_Struct *arg0, func_801C3260_Struct2 **arg1) {
    s8 temp_v1;
    s8 temp_a1;
    s8 temp_a2;
    func_801C3260_Struct2 *temp_v0;
    u32 temp_idx;

    temp_idx = arg0->unk9C % 3U;
    func_8012CF8C(arg0, (u8 *)arg1[0]->unk30 + 0x40, 0x2DC, D_801DA2A0[temp_idx]);
    temp_v1 = arg0->unk90;
    temp_v0 = arg0->unkA8;
    temp_a1 = arg0->unk91;
    temp_a2 = arg0->unk92;
    arg1[0]->unk30->unk4 = temp_v0->unk30->unk4 + (f32)temp_v1;
    arg1[0]->unk30->unk8 = temp_v0->unk30->unk8 + (f32)temp_a1;
    arg1[0]->unk30->unkC = temp_v0->unk30->unkC + (f32)temp_a2;
    if (arg1[0]->unk30->unk8 < 0.0f) {
        func_80005700(arg0, temp_a1, temp_a2);
    }
    arg0->unk9C = arg0->unk9C + 1;
    arg0->unk9C = arg0->unk9C & 3;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C3370.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C354C.s")


extern s32 D_801DA2B0;
extern s32 D_801DA2B4;
extern s32 D_801DA2B8;
extern u8 D_801DA2BC[];
extern u8 D_801DF790;
extern u8 D_801DF791;
extern u8 D_801DF792;
extern u8 D_801DF793;
extern u8 D_801DF794;
extern u8 D_801DF795;
extern u8 D_801DF796;
extern u8 D_801DF797;
extern s16 D_801DF798;
extern u16 D_801DF79A;

s32 func_801C3718(u8 arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4, u8 arg5, u8 arg6, u8 arg7, u16 arg8) {
    if (func_80005670(D_8038D8CC, D_801DA2BC) == 0) {
        return 0;
    }
    D_801DF790 = arg0;
    D_801DF791 = arg1;
    D_801DF792 = arg2;
    D_801DF793 = arg3;
    D_801DF794 = arg4;
    D_801DF795 = arg5;
    D_801DF796 = arg6;
    D_801DF797 = arg7;
    D_801DF798 = 0;
    D_801DF79A = arg8;
    D_801DA2B0 = 1;
    D_801DA2B4 = 1;
    D_801DA2B8 = 0;
    return 1;
}


void func_801C37F0(void) {
    D_801DA2B0 = 0;
}



s32 func_801C37FC(void) {
    return D_801DA2B4;
}


s32 func_801C3808(u8 arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4, u8 arg5, u8 arg6, u8 arg7, u16 arg8) {
    if (D_801DA2B0 == 0) {
        return 0;
    }
    D_801DF790 = arg0;
    D_801DF791 = arg1;
    D_801DF792 = arg2;
    D_801DF793 = arg3;
    D_801DF794 = arg4;
    D_801DF795 = arg5;
    D_801DF796 = arg6;
    D_801DF797 = arg7;
    D_801DF798 = 0;
    D_801DF79A = arg8;
    D_801DA2B4 = 1;
    D_801DA2B8 = 1;
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C38BC.s")


typedef struct func_801C3940_Struct {
    u8 pad[0x90];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 unk93;
    u8 unk94;
    u8 unk95;
    u8 unk96;
    u8 unk97;
    u16 unk98;
    u8 pad9A[2];
    u16 unk9C;
} func_801C3940_Struct;

extern void func_801C39E0();

void func_801C3940(func_801C3940_Struct *arg0, s32 arg1) {
    arg0->unk90 = D_801DF790;
    arg0->unk91 = D_801DF791;
    arg0->unk92 = D_801DF792;
    arg0->unk93 = D_801DF793;
    arg0->unk94 = D_801DF794;
    arg0->unk95 = D_801DF795;
    arg0->unk96 = D_801DF796;
    arg0->unk97 = D_801DF797;
    arg0->unk98 = *(u16 *) &D_801DF798;
    arg0->unk9C = D_801DF79A;
    func_800058DC(arg0, func_801C39E0);
}


typedef struct func_801C39E0_StructGfx {
    u32 w0;
    u32 w1;
} func_801C39E0_StructGfx;

typedef struct func_801C39E0_Struct {
    u8 pad[0x90];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 unk93;
    u8 unk94;
    u8 unk95;
    u8 unk96;
    u8 unk97;
    u16 unk98;
    u8 pad9A[2];
    u16 unk9C;
} func_801C39E0_Struct;

extern s32 func_80001060(f32);
extern s32 func_801302CC(f32);
extern func_801C39E0_StructGfx *D_801DA2AC;
extern func_801C39E0_StructGfx D_801DEF90[];

#define GFX10(c0, c1) { func_801C39E0_StructGfx *_g = D_801DA2AC++; _g->w0 = (c0); _g->w1 = (c1); }
#define GFX01(c0, c1) { func_801C39E0_StructGfx *_g = D_801DA2AC++; _g->w0 = (c0); _g->w1 = (c1); }

void func_801C39E0(func_801C39E0_Struct *arg0, s32 arg1) {
    f32 cur;
    f32 max;
    f32 r;
    f32 gg;
    f32 b;
    f32 a;

    if (D_801DA2B0 == 0) {
        D_801DA2B0 = 0;
        D_801DA2B4 = 0;
        D_801DA2B8 = 0;
        func_80005700();
        return;
    }
    if (D_801DA2B8 != 0) {
        D_801DA2B8 = 0;
        func_800058DC(arg0, func_801C3940);
        return;
    }
    if (arg0->unk9C >= arg0->unk98) {
        cur = (u32)arg0->unk98;
        max = (u32)arg0->unk9C;
        D_801DA2AC = D_801DEF90;
        GFX01(0xE3000C00, 0);
        GFX10(0xE3000F00, 0);
        GFX10(0xE3001201, 0);
        GFX01(0xE3001402, 0xC00);
        GFX10(0xE3001001, 0);
        if (func_80001060(max) != 0) {
            if (func_801302CC(max) != 0) {
                GFX01(0xED080168, 0x980618);
            } else {
                GFX01(0xED080040, 0x980740);
            }
        } else {
            GFX01(0xED040020, 0x4C03A0);
        }
        GFX10(0xE7000000, 0);
        GFX01(0xFCFFFFFF, 0xFFFDF6FB);
        GFX10(0xE200001C, 0x504240);
        r = (f32)(arg0->unk94 - arg0->unk90) * cur / max + (u32)arg0->unk90;
        gg = (f32)(arg0->unk95 - arg0->unk91) * cur / max + (u32)arg0->unk91;
        b = (f32)(arg0->unk96 - arg0->unk92) * cur / max + (u32)arg0->unk92;
        a = (f32)(arg0->unk97 - arg0->unk93) * cur / max + (u32)arg0->unk93;
        GFX01(0xFA000000, (((u8)(u32)r & 0xFF) << 24) | (((u8)(u32)gg & 0xFF) << 16) | (((u8)(u32)b & 0xFF) << 8) | ((u8)(u32)a & 0xFF));
        if (func_80001060(max) != 0) {
            GFX10(0xF6A00780, 0);
        } else {
            GFX10(0xF65003C0, 0);
        }
        GFX10(0xDF000000, 0);
        arg0->unk98++;
        return;
    }
    D_801DA2B4 = 0;
}

extern u8 D_801DA2E0[];
extern void func_8038C4D8(s32, s32);
typedef struct func_801C4028_Struct {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    u16 unk9C;
    u16 unk9E;
    u8 unkA0;
    u8 unkA1;
    u8 unkA2;
    u8 unkA3;
    u8 unkA4;
    u8 unkA5;
    u8 unkA6;
    u8 unkA7;
    u16 unkA8;
    u8 padAA[2];
    u16 unkAC;
    u8 padAE[2];
    u16 unkB0;
    u16 unkB2;
} func_801C4028_Struct;
s32 func_801C4028(s32 arg0, f32 arg1, f32 arg2, f32 arg3, u16 arg4, u16 arg5, u16 arg6, f32 arg7, f32 arg8, u8 arg9, u8 arg10, u8 arg11, u8 arg12, u8 arg13, u8 arg14, u16 arg15) {
    func_801C4028_Struct *p;
    p = func_80005670(D_8038D8CC, D_801DA2E0);
    if (p == NULL) {
        return 0;
    }
    p->unk90 = arg1;
    p->unk94 = arg2;
    p->unk98 = arg3;
    p->unk9C = arg6;
    p->unk9E = arg4;
    p->unkAC = arg5;
    p->unkA0 = arg9;
    p->unkA1 = arg10;
    p->unkA2 = arg11;
    p->unkA4 = arg12;
    p->unkA5 = arg13;
    p->unkA6 = arg14;
    p->unkA3 = (u32)(arg7 * 16.0f);
    p->unkA7 = (u32)(arg8 * 16.0f);
    p->unkB0 = 0;
    p->unkB2 = arg0;
    p->unkA8 = arg15;
    func_8038C4D8(2, 0);
    return 1;
}

void func_801C44F4(u8 *arg0, struct func_801C2E9C_Struct **arg1);

typedef struct func_801C4220_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_801C4220_Struct3;
typedef struct func_801C4220_Struct2 {
    u8 pad0[0x30];
    func_801C4220_Struct3 *unk30;
} func_801C4220_Struct2;
typedef struct func_801C4220_Struct {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    u16 unk9C;
    u16 unk9E;
    u8 unkA0;
    u8 unkA1;
    u8 unkA2;
    u8 unkA3;
    u8 unkA4;
    u8 unkA5;
    u8 unkA6;
    u8 unkA7;
    u8 padA8[4];
    u16 unkAC;
    u8 padAE[4];
    u16 unkB2;
} func_801C4220_Struct;

extern u8 D_801D8FA0[];
extern s32 D_801DA234[];
extern u8 D_801DA2F4[];
extern s32 D_801DA2F8;

void func_801C4220(func_801C4220_Struct *arg0, func_801C4220_Struct2 **arg1)
{
  u16 new_var;
  new_var = arg0->unkB2;
  D_801DA2F8 = D_801DA234[new_var];
  func_80005E44(arg0, D_801DA2F4);
  func_80006214(arg0);
  func_8012C89C(arg0, 0, 0xA7, 0);
  func_8012CF8C(arg0, ((u8 *) (*arg1)->unk30) + 0x40, 0x2DD, 0);
  (*arg1)->unk30->unk4 = arg0->unk90;
  (*arg1)->unk30->unk8 = arg0->unk94;
  (*arg1)->unk30->unkC = arg0->unk98;
  (*arg1)->unk30->unk10 = (arg0->unk9E * 2048.0f) / 90.0f;
  (*arg1)->unk30->unk12 = (arg0->unkAC * 2048.0f) / 90.0f;
  (*arg1)->unk30->unk14 = (arg0->unk9C * 2048.0f) / 90.0f;
  (*arg1)->unk30->unk48 = arg0->unkA0;
  (*arg1)->unk30->unk49 = arg0->unkA1;
  (*arg1)->unk30->unk4A = arg0->unkA2;
  (*arg1)->unk30->unk4B = 0xFF;
  (*arg1)->unk30->unk4C = arg0->unkA4;
  (*arg1)->unk30->unk4D = arg0->unkA5;
  (*arg1)->unk30->unk4E = arg0->unkA6;
  (*arg1)->unk30->unk4F = 0xFF;
  (*arg1)->unk30->unk24 |= 0x300;
  (*arg1)->unk30->unk18 = (arg0->unkA3 * 0.0625f) * 1.5f;
  (*arg1)->unk30->unk1C = (arg0->unkA7 * 0.0625f) * 1.5f;
  (*arg1)->unk30->unk20 = 1.0f;
  (*arg1)->unk30->unk30 = ((s32) D_801D8FA0) | 0x40000000;
  func_800058DC(arg0, (void *) func_801C44F4);
}


extern s32 D_801DA304[];

void func_801C44F4(u8 *arg0, struct func_801C2E9C_Struct **arg1) {
    u32 idx;
    struct func_801C2E9C_Struct **p = arg1;
    idx = (u32)(((f32)*(u16 *)(arg0 + 0xB0) / (f32)*(u16 *)(arg0 + 0xA8)) * 20.0f) % 20U;
    func_8012CF8C(arg0, (*p)->unk30 + 0x40, 0x2DD, D_801DA304[idx]);
    *(u16 *)(arg0 + 0xB0) += 1;
    if (*(u16 *)(arg0 + 0xB0) >= *(u16 *)(arg0 + 0xA8)) {
        func_80005700(arg0);
    }
}


extern u8 D_801DA354[];

typedef struct func_801C4644_Struct {
    u8 pad0[0x90];
    f32 f90;
    f32 f94;
    f32 f98;
    f32 f9C;
    f32 fA0;
    f32 fA4;
    u16 uA8;
    u16 uAA;
    u16 uAC;
} func_801C4644_Struct;

s32 func_801C4644(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, u16 arg6) {
    func_801C4644_Struct *temp_v0;

    temp_v0 = func_80005670(D_8038D8CC, D_801DA354);
    if (temp_v0 == NULL) {
        return 0;
    }
    temp_v0->f90 = arg0;
    temp_v0->f94 = arg1;
    temp_v0->f98 = arg2;
    temp_v0->f9C = arg3;
    temp_v0->fA0 = arg4;
    temp_v0->fA4 = arg5;
    temp_v0->uA8 = 0;
    temp_v0->uAC = arg6;
    return 1;
}


typedef struct func_801C46D0_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_801C46D0_StructB;
typedef struct func_801C46D0_StructA {
    u8 pad0[0x30];
    func_801C46D0_StructB *unk30;
} func_801C46D0_StructA;
typedef struct func_801C46D0_Struct {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    f32 unkA0;
    f32 unkA4;
} func_801C46D0_Struct;
extern f32 D_801DD230;
extern void func_801C480C(func_801C4644_Struct *arg0, func_801C2A1C_Struct2 **arg1);
extern u8 func_8038D830[];

void func_801C46D0(func_801C46D0_Struct *arg0, func_801C46D0_StructA **arg1)
{
  f32 k;
  func_80005E44(arg0, func_8038D830 + 0x5C);
  func_80006214(arg0);
  func_8012C89C(arg0, 0, 0x2D9, 8);
  k = D_801DD230;
  (*arg1)->unk30->unk4 = arg0->unk90;
  (*arg1)->unk30->unk8 = arg0->unk94;
  (*arg1)->unk30->unkC = arg0->unk98;
  (*arg1)->unk30->unk10 = (s32) ((arg0->unk9C * 2048.0f) / 90.0f);
  (*arg1)->unk30->unk12 = (s32) ((arg0->unkA0 * 2048.0f) / 90.0f);
  (*arg1)->unk30->unk14 = (s32) ((arg0->unkA4 * 2048.0f) / 90.0f);
  (*arg1)->unk30->unk18 = k;
 if (1) { } if (1) { } if (1) { } if (1) { }
  (*arg1)->unk30->unk1C = k;
  (*arg1)->unk30->unk20 = k;
  func_800058DC(arg0, func_801C480C);
}


void func_801C480C(func_801C4644_Struct *arg0, func_801C2A1C_Struct2 **arg1) {
    f32 value;
    f32 numerator;
    f32 denominator;

    numerator = (f32)(u32)arg0->uA8;
    denominator = (f32)(u32)arg0->uAC;
    value = arg0->f94;
    (*arg1)->unk30->unk8 = value - ((value * numerator) / denominator);
    arg0->uA8++;
    if (arg0->uAC < arg0->uA8) {
        func_80005700();
    }
}


typedef struct func_801C48A4_Struct {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    u16 unk9C;
    u16 unk9E;
    u8 unkA0;
    u8 unkA1;
    u8 unkA2;
    u8 unkA3;
    u8 unkA4;
    u8 unkA5;
    u8 unkA6;
    u8 unkA7;
    s32 unkA8;
    u16 unkAC;
    u16 unkAE;
    u16 unkB0;
    u16 unkB2;
} func_801C48A4_Struct;

extern u8 D_801DA368[];

s32 func_801C48A4(f32 arg0, f32 arg1, f32 arg2, u16 arg3, u16 arg4, u16 arg5, f32 arg6, f32 arg7, u8 arg8, u8 arg9, u8 arg10, u8 arg11, u8 arg12, u8 arg13, s32 arg14, u16 arg15) {
    func_801C48A4_Struct *p;

    p = func_80005670(D_8038D8CC, D_801DA368);
    if (p == NULL) {
        return 0;
    }
    p->unk90 = arg0;
    p->unk94 = arg1;
    p->unk98 = arg2;
    p->unk9C = arg5;
    p->unk9E = arg3;
    p->unkA0 = arg8;
    p->unkA1 = arg9;
    p->unkA2 = arg10;
    p->unkA4 = arg11;
    p->unkA5 = arg12;
    p->unkA6 = arg13;
    p->unkA3 = (u32) (arg6 * 16.0f);
    p->unkA7 = (u32) (arg7 * 16.0f);
    p->unkA8 = arg14;
    p->unkAC = arg4;
    p->unkB0 = 0;
    p->unkB2 = arg15;
    p->unkAE = 1;
    return 1;
}


typedef struct func_801C4A98_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0xC];
    u8 unk40[8];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_801C4A98_StructB;
typedef struct func_801C4A98_StructA {
    u8 pad0[0x30];
    func_801C4A98_StructB *unk30;
} func_801C4A98_StructA;
typedef struct func_801C4A98_Struct {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    u16 unk9C;
    u16 unk9E;
    u8 unkA0;
    u8 unkA1;
    u8 unkA2;
    u8 unkA3;
    u8 unkA4;
    u8 unkA5;
    u8 unkA6;
    u8 unkA7;
    s32 unkA8;
    u16 unkAC;
} func_801C4A98_Struct;

struct func_801C4D3C_Struct;
struct func_801C4D3C_Struct2;
void func_801C4D3C(struct func_801C4D3C_Struct2 *arg0, struct func_801C4D3C_Struct **arg1);

void func_801C4A98(func_801C4A98_Struct *arg0, func_801C4A98_StructA **arg1) {
    func_80005E44(arg0, D_8038D89C);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0xA7, 0);
    func_8012CF8C(arg0, (u8 *)(*arg1)->unk30 + 0x40, 0x2DD, 0x14);
    (*arg1)->unk30->unk4 = arg0->unk90;
    (*arg1)->unk30->unk8 = arg0->unk94;
    (*arg1)->unk30->unkC = arg0->unk98;
    (*arg1)->unk30->unk10 = (u32)arg0->unk9E * 2048.0f / 90.0f;
    (*arg1)->unk30->unk12 = (u32)arg0->unkAC * 2048.0f / 90.0f;
    (*arg1)->unk30->unk14 = (u32)arg0->unk9C * 2048.0f / 90.0f;
    (*arg1)->unk30->unk48 = arg0->unkA0;
    (*arg1)->unk30->unk49 = arg0->unkA1;
    (*arg1)->unk30->unk4A = arg0->unkA2;
    (*arg1)->unk30->unk4B = 0xFF;
    (*arg1)->unk30->unk4C = arg0->unkA4;
    (*arg1)->unk30->unk4D = arg0->unkA5;
    (*arg1)->unk30->unk4E = arg0->unkA6;
    (*arg1)->unk30->unk4F = 0xFF;
    (*arg1)->unk30->unk24 |= 0x300;
    (*arg1)->unk30->unk18 = (u32)arg0->unkA3 * 0.0625f;
    (*arg1)->unk30->unk1C = (u32)arg0->unkA7 * 0.0625f;
    (*arg1)->unk30->unk20 = 1.0f;
    (*arg1)->unk30->unk30 = arg0->unkA8 | 0x40000000;
    func_800058DC(arg0, (void *)func_801C4D3C);
}


struct func_801C4D3C_Struct {
    u8 pad0[0x30];
    u8 *unk30;
};

struct func_801C4D3C_Struct2 {
    u8 pad0[0xB0];
    u16 unkB0;
    u16 unkB2;
};

extern s32 D_801DA37C[];

void func_801C4D3C(struct func_801C4D3C_Struct2 *arg0, struct func_801C4D3C_Struct **arg1) {
    s32 temp_v0;
    s32 idx;

    temp_v0 = arg0->unkB0;
    idx = (temp_v0 / (s32) arg0->unkB2) & 7;
    arg0->unkB0 = temp_v0 + 1;
    func_8012CF8C(arg0, (*arg1)->unk30 + 0x40, 0x2DD, D_801DA37C[idx]);
    arg0->unkB0 = arg0->unkB0 + 1;
}


typedef struct func_801C4DD4_Struct {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    s16 unkA0;
    s32 unkA4;
    s32 unkA8;
    s32 unkAC;
    s32 unkB0;
} func_801C4DD4_Struct;

extern u8 D_801DA4C0[];

s32 func_801C4DD4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8) {
    func_801C4DD4_Struct *temp_v0;

    temp_v0 = func_80005670(D_8038D8CC, D_801DA4C0);
    if (temp_v0 == NULL) {
        return 0;
    }
    temp_v0->unk90 = arg5;
    temp_v0->unk94 = arg6;
    temp_v0->unk98 = arg7;
    temp_v0->unk9C = arg8;
    temp_v0->unkA0 = arg0;
    temp_v0->unkA4 = arg1;
    temp_v0->unkA8 = arg2;
    temp_v0->unkAC = arg3;
    temp_v0->unkB0 = arg4;
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C4E6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C51A0.s")


extern f32 D_801DA4F8;
extern f32 D_801DA4FC;
extern f32 D_801DA500;
extern s32 D_801DA504;

void func_801C53E0(f32 arg0, f32 arg1, f32 arg2) {
    D_801DA4F8 = arg0;
    D_801DA4FC = arg1;
    D_801DA500 = arg2;
    D_801DA504 = 0x77543897;
}

typedef struct func_801C5414_Struct {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    u16 unk9C;
    u16 unk9E;
    u8 unkA0;
    u8 unkA1;
    u8 unkA2;
    u8 unkA3;
    u8 unkA4;
    u8 unkA5;
    u8 unkA6;
    u8 unkA7;
    u8 unkA8;
    u8 unkA9;
    u8 unkAA;
    u8 padAB;
    u16 unkAC;
    u8 padAE[2];
    u16 unkB0;
    u16 unkB2;
} func_801C5414_Struct;
extern u8 D_801DA4E4[];
s32 func_801C5414(s32 arg0, f32 arg1, f32 arg2, f32 arg3, u16 arg4, u16 arg5, u16 arg6, f32 arg7, f32 arg8, u8 arg9, u8 arg10, u8 arg11, u8 arg12, u8 arg13, u8 arg14, u16 arg15, s32 arg16) {
    func_801C5414_Struct *p;
    p = func_80005670(D_8038D8CC, D_801DA4E4);
    if (p == NULL) {
        return 0;
    }
    p->unk90 = ((arg1 - D_801DA4F8) * D_801DA500) + D_801DA4F8;
    p->unk94 = arg2;
    p->unk98 = ((arg3 - D_801DA4FC) * D_801DA500) + D_801DA4FC;
    p->unk9C = arg6;
    p->unk9E = arg4;
    p->unkAC = arg5;
    p->unkA0 = arg9;
    p->unkA1 = arg10;
    p->unkA2 = arg11;
    p->unkA4 = arg12;
    p->unkA5 = arg13;
    p->unkA6 = arg14;
    p->unkA3 = (u32)(arg7 * 16.0f);
    p->unkA7 = (u32)(arg8 * 16.0f);
    p->unkA8 = arg0;
    p->unkA9 = 0;
    p->unkAA = arg16;
    p->unkB0 = 0;
    p->unkB2 = arg15;
    return 1;
}


typedef struct func_801C5644_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_801C5644_StructB;
typedef struct func_801C5644_StructA {
    u8 pad0[0x30];
    func_801C5644_StructB *unk30;
} func_801C5644_StructA;
typedef struct func_801C5644_Struct {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    u16 unk9C;
    u16 unk9E;
    u8 unkA0;
    u8 unkA1;
    u8 unkA2;
    u8 unkA3;
    u8 unkA4;
    u8 unkA5;
    u8 unkA6;
    u8 unkA7;
    u8 unkA8;
    u8 padA9[3];
    u16 unkAC;
} func_801C5644_Struct;

extern u8 func_801C595C[];

void func_801C5644(func_801C5644_Struct *arg0, func_801C5644_StructA **arg1) {
    func_80005E44(arg0, D_8038D89C);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0xA7, 0);
    if (arg0->unkA8 == 0) goto c0;
    if (arg0->unkA8 == 1) goto c1;
    if (arg0->unkA8 != 2) goto end;
    goto c2;
c0:
    func_8012CF8C(arg0, (u8 *)(*arg1)->unk30 + 0x40, 0x43C, 0);
    goto end;
c1:
    func_8012CF8C(arg0, (u8 *)(*arg1)->unk30 + 0x40, 0x43C, 3);
    goto end;
c2:
    func_8012CF8C(arg0, (u8 *)(*arg1)->unk30 + 0x40, 0x43D, 0);
end:
    (*arg1)->unk30->unk4 = arg0->unk90;
    (*arg1)->unk30->unk8 = arg0->unk94;
    (*arg1)->unk30->unkC = arg0->unk98;
    (*arg1)->unk30->unk10 = (s32)((f32)(u32)arg0->unk9E * 2048.0f / 90.0f);
    (*arg1)->unk30->unk12 = (s32)((f32)(u32)arg0->unkAC * 2048.0f / 90.0f);
    (*arg1)->unk30->unk14 = (s32)((f32)(u32)arg0->unk9C * 2048.0f / 90.0f);
    (*arg1)->unk30->unk48 = arg0->unkA0;
    (*arg1)->unk30->unk49 = arg0->unkA1;
    (*arg1)->unk30->unk4A = arg0->unkA2;
    (*arg1)->unk30->unk4B = 0xFF;
    (*arg1)->unk30->unk4C = arg0->unkA4;
    (*arg1)->unk30->unk4D = arg0->unkA5;
    (*arg1)->unk30->unk4E = arg0->unkA6;
    (*arg1)->unk30->unk4F = 0xFF;
    (*arg1)->unk30->unk24 |= 0x300;
    (*arg1)->unk30->unk18 = (f32)(u32)arg0->unkA3 * 0.0625f;
    (*arg1)->unk30->unk1C = (f32)(u32)arg0->unkA7 * 0.0625f;
    (*arg1)->unk30->unk20 = 1.0f;
    (*arg1)->unk30->unk30 = (s32)D_801D8FA0 | 0x40000000;
    func_800058DC(arg0, func_801C595C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C595C.s")


typedef struct func_801C5B2C_Struct {
    u8 pad0[0xA4];
    u16 unkA4;
    u16 unkA6;
} func_801C5B2C_Struct;

typedef struct func_801C5B2C_Struct5 {
    s32 w0;
    s32 w4;
    s32 w8;
    s32 wC;
    s32 w10;
} func_801C5B2C_Struct5;

extern u8 D_8005C4B0[];
extern func_801C5B2C_Struct D_800892B0;
extern func_801C5B2C_Struct5 D_801DA518;
extern s32 D_801DA514;

s32 func_801C5B2C(void) {
    func_801C5B2C_Struct5 sp1C;
    void *temp_v0;

    if (*(s32 *) (D_8005C4B0 + 0x898) == 0) {
        D_800892B0.unkA6 = 1;
        D_800892B0.unkA4 = 2;
        sp1C = D_801DA518;
        temp_v0 = func_80005670(D_8038D8CC, &sp1C);
        if (temp_v0 == NULL) {
            return 0;
        }
        *(u16 *) ((u8 *) temp_v0 + 0x90) = 0;
        D_801DA514 = 1;
        return 1;
    }
    return 0;
}



s32 func_801C5BD4(void) {
    return D_801DA514 == 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C5BE4.s")

#define D_800892B0 D_800892B0__func_801C61C4
#define func_800058DC func_800058DC__func_801C61C4
#define func_80005E44 func_80005E44__func_801C61C4
#define func_80006214 func_80006214__func_801C61C4
#define func_801C6294 func_801C6294__func_801C61C4

typedef struct func_801C61C4_StructB {
    s16 unk0;
    u8 pad0[0x22];
    s32 unk24;
    s32 unk28;
    s16 unk2C;
    u8 pad1[2];
    s32 unk30;
} func_801C61C4_StructB;

typedef struct func_801C61C4_StructA {
    u8 pad0[0x30];
    func_801C61C4_StructB *unk30;
} func_801C61C4_StructA;

extern s32 func_80005E44(s32, void *);
extern void func_80006214(s32);
extern void func_800058DC(s32, void *, void **);
extern u8 D_800892B0[];
extern f32 D_801DA508;
extern s32 D_801DA50C;
extern u8 D_801DA52C[];
extern void func_801C6294(void);

void func_801C61C4(s32 arg0, void **arg1)
{
  long long new_var;
  u8 *p;
  if (func_80005E44(arg0, D_801DA52C) != 0)
  {
    func_80006214(arg0);
    p = D_800892B0;
    new_var = 0;
    ((func_801C61C4_StructA *) (*arg1))->unk30->unk30 = new_var;
    ((func_801C61C4_StructA *) (*arg1))->unk30->unk28 = new_var;
    ((func_801C61C4_StructA *) (*arg1))->unk30->unk0 = new_var;
    ((func_801C61C4_StructA *) (*arg1))->unk30->unk2C = new_var;
    ((func_801C61C4_StructA *) (*arg1))->unk30->unk28 = D_801DA50C;
    ((func_801C61C4_StructA *) (*arg1))->unk30->unk24 = 0x100;
    *((s16 *) (p + 0xA4)) = 0;
    *((s16 *) (p + 0xA6)) = 1;
    D_801DA508 = 127.0f;
    func_800058DC(arg0, func_801C6294, arg1);
  }
}
#undef D_800892B0
#undef func_800058DC
#undef func_80005E44
#undef func_80006214
#undef func_801C6294

typedef struct func_801C6294_S3 {
    u8 pad[0x4B];
    u8 unk4B;
} func_801C6294_S3;
typedef struct func_801C6294_S2 {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0x0D];
    func_801C6294_S3 *unk30;
} func_801C6294_S2;
typedef struct func_801C6294_S1 {
    u8 pad[0x90];
    u16 unk90;
} func_801C6294_S1;
struct func_801C63B4_Struct;
extern void func_801C63B4();
extern f32 D_801DA508;
extern f32 D_801DD238;

void func_801C6294(func_801C6294_S1 *arg0, func_801C6294_S2 **arg1) {
    func_80006214(arg0);
    (*arg1)->unk30->unk4B = (u32)(2.0f * D_801DA508);
    D_801DA508 -= D_801DD238;
    if (D_801DA508 <= 1.5f) {
        (*arg1)->unk22 = 0;
        D_800892B0.unkA6 = 0;
        D_800892B0.unkA4 = 0;
        arg0->unk90 = 0;
        func_800058DC(arg0, func_801C63B4);
    }
}


typedef struct func_801C63B4_Struct {
    u8 pad[0x90];
    u16 unk90;
} func_801C63B4_Struct;

extern void func_8001F540();
extern s32 D_801DA50C;
extern void func_801C640C(s32 arg0, s32 arg1);

void func_801C63B4(func_801C63B4_Struct *arg0, void *arg1) {
    if (arg0->unk90++ >= 7) {
        func_8001F540(D_801DA50C);
        func_800058DC(arg0, func_801C640C);
    }
}



void func_801C640C(s32 arg0, s32 arg1) {
    D_801DA514 = arg0 * 0;
    func_80005700();
}


extern void func_801C78C0();
extern s32 D_801DA230;

void func_801C6434(void) {
    func_801C78C0();
    D_801DA230 = 1;
}


typedef struct func_801C645C_Struct {
    f32 f0;
    f32 f4;
    s32 w8;
    s32 wC;
    f32 f10;
    f32 f14;
    s32 w18;
} func_801C645C_Struct;

extern void func_801C64F4(f32, f32, s32, s32, f32, f32, s32);

void func_801C645C(u32 arg0, void *arg1) {
    u32 var_s1;
    func_801C645C_Struct *var_s0;
    func_801C645C_Struct *var_s2;

    if (arg0 != 0) {
        var_s1 = 0;
        if (arg0 != 0) {
            var_s0 = arg1;
            var_s2 = arg1;
            do {
                func_801C64F4(var_s0->f0, var_s0->f4, var_s0->w8, var_s0->wC, var_s0->f10, var_s0->f14, var_s2->w18);
                var_s1 += 1;
                var_s0++;
                var_s2++;
            } while (var_s1 < arg0);
        }
    }
}


void func_801C64E8(void) {
    D_801DA230 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C64F4.s")


typedef struct func_801C6580_Struct3 {
    s16 unk0;
    u8 pad2[2];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    void *unk28;
    s16 unk2C;
    u8 pad2E[2];
    s32 unk30;
    u8 pad34[0xC];
    u8 unk40[8];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_801C6580_Struct3;

typedef struct func_801C6580_Struct2 {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_801C6580_Struct3 *unk30;
} func_801C6580_Struct2;

typedef struct func_801C6580_Struct {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    f32 unkA0;
    f32 unkA4;
} func_801C6580_Struct;

typedef struct func_801C6580_Struct4 {
    u8 pad0[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_801C6580_Struct4;

typedef struct func_801C6580_Struct5 {
    u8 pad0[0x2C];
    func_801C6580_Struct4 *unk2C;
} func_801C6580_Struct5;

extern s32 func_8001EF38(f32, f32);
extern f32 func_8002FC20(f32);
extern f32 func_801C78F8(void);
extern func_801C6580_Struct5 *D_801BBCD8;
extern u8 D_801D9908[];
extern u8 D_801DA550[];
extern void func_801C699C();

void func_801C6580(func_801C6580_Struct *arg0, func_801C6580_Struct2 **arg1) {
    func_801C6580_Struct4 *p;
    f32 dx;
    f32 dz;

    func_80005E44(arg0, D_801DA550);
    func_80006214(arg0);
    (*arg1)->unk30->unk30 = 0;
    (*arg1)->unk30->unk28 = D_801D9908;
    (*arg1)->unk30->unk0 = 0;
    (*arg1)->unk30->unk2C = 0;
    func_8012CF8C(arg0, (*arg1)->unk30->unk40, 0x473, 0);
    (*arg1)->unk30->unk4 = arg0->unk90;
    (*arg1)->unk30->unk8 = arg0->unk94;
    (*arg1)->unk30->unkC = arg0->unk98;
    p = D_801BBCD8->unk2C;
    dx = p->unk3C - p->unk30;
    dz = p->unk44 - p->unk38;
    (*arg1)->unk30->unk10 = func_8001EF38(D_801BBCD8->unk2C->unk40 - D_801BBCD8->unk2C->unk34, func_8002FC20(dx * dx + dz * dz)) & 0x1FFF;
    (*arg1)->unk30->unk12 = (s16)(func_8001EF38(dx, dz) + 0x1000) & 0x1FFF;
    (*arg1)->unk30->unk18 = arg0->unk9C * 0.5f;
    (*arg1)->unk30->unk1C = arg0->unkA0 * 0.5f;
    (*arg1)->unk30->unk20 = arg0->unkA4 * 0.5f;
    (*arg1)->unk30->unk24 = 0x300;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4B = 0xFF;
    (*arg1)->unk30->unk4C = 0xFF;
    (*arg1)->unk30->unk4D = 0xFF;
    (*arg1)->unk30->unk4E = 0xFF;
    (*arg1)->unk30->unk4F = 0xFF;
    (*arg1)->unk22 = 0;
    arg0->unk90 = func_801C78F8() * 255.0f;
    arg0->unk94 = func_801C78F8() * 255.0f;
    arg0->unk98 = func_801C78F8() * 255.0f;
    (*arg1)->unk30->unk4C = (u32)arg0->unk90;
    (*arg1)->unk30->unk4D = (u32)arg0->unk94;
    (*arg1)->unk30->unk4E = (u32)arg0->unk98;
    arg0->unk9C = 0.0f;
    func_800058DC(arg0, func_801C699C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C699C.s")


typedef struct func_801C6C30_Struct {
    f32 f0;
    f32 f4;
    s32 w8;
    s32 wC;
    f32 f10;
    f32 f14;
    s32 w18;
    s32 w1C;
} func_801C6C30_Struct;

#define func_801C6CC4 func_801C6CC4__decl1572
extern void func_801C6CC4(f32, f32, s32, s32, f32, f32, s32, s32);

void func_801C6C30(u32 arg0, void *arg1) {
    u32 var_s2;
    func_801C6C30_Struct *var_s0;
    func_801C6C30_Struct *var_s1;

    if (arg0 != 0) {
        var_s2 = 0;
        if (arg0 != 0) {
            var_s0 = arg1;
            var_s1 = arg1;
            do {
                func_801C6CC4(var_s0->f0, var_s0->f4, var_s0->w8, var_s0->wC, var_s0->f10, var_s0->f14, var_s1->w18, var_s1->w1C);
                var_s2 += 1;
                var_s0++;
                var_s1++;
            } while (var_s2 < arg0);
        }
    }
}
#undef func_801C6CC4


extern u8 D_801DA580[];
extern u8 func_8038D8B8[];

typedef struct func_801C6CC4_Struct {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    f32 unkA0;
    f32 unkA4;
    s16 unkA8;
    s16 unkAA;
    s16 unkAC;
    s16 unkAE;
    s16 unkB0;
    s16 unkB2;
} func_801C6CC4_Struct;

s32 func_801C6CC4(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6, s32 arg7)
{
  func_801C6CC4_Struct *temp_v0;
  f32 temp_f0;
  func_801C6CC4_Struct *new_var;
  temp_v0 = func_80005670(*((s32 *) (func_8038D8B8 + 0x14)), D_801DA580);
  if (0 == temp_v0)
  {
    return 0;
  }
  new_var = temp_v0;
  temp_v0->unk90 = arg0;
  temp_v0->unk94 = arg1;
  temp_v0->unk98 = arg2;
  temp_v0->unk9C = arg3;
  temp_v0->unkA0 = arg4;
  temp_v0->unkA4 = (temp_f0 = arg5);
  new_var->unkA8 = 0;
  temp_v0->unkAA = (s16) arg6;
  temp_v0->unkB0 = 0;
  temp_v0->unkB2 = (s16) arg7;
  return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C6D5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C70A0.s")


void func_801C72B0(s32 arg0, struct func_801C78C0_Struct *arg1) {
    func_801C78C0(arg0, arg1);
}


typedef struct func_801C72D0_Struct {
    f32 f0;
    f32 f4;
    s32 w8;
    s32 wC;
    f32 f10;
    f32 f14;
    s32 w18;
    s32 w1C;
} func_801C72D0_Struct;

extern void func_801C7364(f32, f32, s32, s32, f32, f32, s32, s32);

void func_801C72D0(u32 arg0, void *arg1) {
    u32 var_s2;
    func_801C72D0_Struct *var_s0;
    func_801C72D0_Struct *var_s1;

    if (arg0 != 0) {
        var_s2 = 0;
        if (arg0 != 0) {
            var_s0 = arg1;
            var_s1 = arg1;
            do {
                func_801C7364(var_s0->f0, var_s0->f4, var_s0->w8, var_s0->wC, var_s0->f10, var_s0->f14, var_s1->w18, var_s1->w1C);
                var_s2 += 1;
                var_s0++;
                var_s1++;
            } while (var_s2 < arg0);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C7364.s")


extern u8 D_801D9B60[];
extern u8 D_801DA5D8[];
extern u8 func_801C7634[];
extern void D_800058DC(void *, void *, u32);

void func_801C7424(func_801C6580_Struct *arg0, func_801C6580_Struct2 **arg1) {
    u8 pad[4];
    f32 sp28;
    f32 sp24;
    s32 c;

    func_80005E44(arg0, D_801DA5D8);
    func_80006214(arg0);
    (*arg1)->unk30->unk30 = 0;
    (*arg1)->unk30->unk28 = D_801D9B60;
    (*arg1)->unk30->unk0 = 0;
    (*arg1)->unk30->unk2C = 0;
    func_8012CF8C(arg0, (*arg1)->unk30->unk40, 0x475, 0);
    (*arg1)->unk30->unk4 = arg0->unk90;
    (*arg1)->unk30->unk8 = arg0->unk94;
    (*arg1)->unk30->unkC = arg0->unk98;
    sp28 = D_801BBCD8->unk2C->unk3C - D_801BBCD8->unk2C->unk30;
    sp24 = D_801BBCD8->unk2C->unk44 - D_801BBCD8->unk2C->unk38;
    (*arg1)->unk30->unk10 = func_8001EF38(D_801BBCD8->unk2C->unk40 - D_801BBCD8->unk2C->unk34, func_8002FC20(sp28 * sp28 + sp24 * sp24)) & 0x1FFF;
    (*arg1)->unk30->unk12 = (s16)(func_8001EF38(sp28, sp24) + 0x1000) & 0x1FFF;
    (*arg1)->unk30->unk18 = arg0->unk9C;
    (*arg1)->unk30->unk1C = arg0->unkA0;
    (*arg1)->unk30->unk20 = arg0->unkA4;
    (*arg1)->unk30->unk24 = 0x300;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4B = 0xFF;
    (*arg1)->unk30->unk4C = 0xF0;
    (*arg1)->unk30->unk4D = 0xF0;
    (*arg1)->unk30->unk4E = 0;
    (*arg1)->unk30->unk4F = 0xFF;
    (*arg1)->unk22 = 0;
    D_800058DC(arg0, func_801C7634, 0xF0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C7634.s")

