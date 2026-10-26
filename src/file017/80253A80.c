#include "common.h"

extern f32 D_8025DC70;
extern f64 D_8025DC60;
extern f64 D_8025DC68;
extern f64 D_8025DC78;
extern f64 D_8025DC98;
extern f64 D_8025DCA0;
extern s32 func_80005670();
extern s32 func_800178E8(void);
extern s32 func_80126CC0(void *, void *);
extern s32 func_8012C97C(s32, s32);
extern s32 func_80133A24(s32);
extern s32 func_801C2FF8(void);
extern s32 func_801C3044(void);
extern u8 *D_8025DE20;
extern u8 D_8017AF90[];
extern u8 D_8017B5A8[];
extern u8 D_801BBBF0[];
extern u8 D_802596E4[];
extern u8 D_8025970C[];
extern u8 D_80259720[];
extern u8 D_80259770[];
extern u8 D_80259828[];
extern u8 D_802599D0[];
extern u8 func_80254470[];
extern void func_80005700(s32, void **);
extern void func_800058DC(void *, void *);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8001F74C(void *);
extern void func_80020718(s32);
extern void func_80126EAC();
extern void func_8012C89C(void *, s32, s32, s32);
extern void func_8012CF8C(void *, void *, s32, s32);
extern void func_8012D814(void *, s32, s32, s32, s32);
extern void func_801518D4(s32, s32, s32);
extern void func_801C2F0C(s32, void *);
extern void func_801FBB30(void);
extern void func_802551A0();
extern void func_80255278(void *arg0);
extern void func_802552E4();
extern void func_80256590(s32 arg0, void **arg1);
extern void func_80256EA8(s32 arg0, void **arg1);
#define func_802577B4 func_802577B4__decl
extern void func_802577B4(void *, void *);
extern void func_8025799C();


typedef struct {
    u8 pad[0x4C];
    u8 unk4C;
} func_80253A80_Inner;

typedef struct {
    u8 pad[0x30];
    func_80253A80_Inner *unk30;
} func_80253A80_Mid;

typedef struct {
    u8 pad[0x10];
    func_80253A80_Mid *unk10;
    func_80253A80_Mid *unk14;
} func_80253A80_Arg1;

typedef struct {
    u8 pad[0x90];
    u16 unk90;
    u16 unk92;
} func_80253A80_Arg0;

void func_80253A80(func_80253A80_Arg0 *arg0, func_80253A80_Arg1 *arg1) {
    arg1->unk10->unk30->unk4C = (u32)arg0->unk90 * 0.5;
    arg1->unk14->unk30->unk4C = (u32)arg0->unk92 * 0.5;
    arg0->unk90++;
    arg0->unk92--;
}

#define func_802543F8 func_802543F8__func_80253C20
typedef struct func_802543F8_Struct_Inner {
    u8 pad[0x22];
    u8 unk22;
} func_802543F8_Struct_Inner;
typedef struct func_802543F8_Struct {
    u8 pad[0x14];
    func_802543F8_Struct_Inner *unk14;
} func_802543F8_Struct;
typedef struct func_802543F8_Obj {
    u8 pad[0x90];
    s16 unk90;
    s16 unk92;
} func_802543F8_Obj;
void func_802543F8(func_802543F8_Obj *arg0, func_802543F8_Struct *arg1);
typedef struct { u8 pad0[4]; s32 b; u8 pad1[8]; } func_80257B10_V;

typedef struct func_80253C20_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x14];
    u32 unk24;
    u8 pad1[0x8];
    u32 unk30;
    u8 pad2[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_80253C20_Inner;

typedef struct func_80253C20_Node {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_80253C20_Inner *unk30;
} func_80253C20_Node;

typedef struct func_80253C20_Args {
    func_80253C20_Node *unk0;
    func_80253C20_Node *unk4;
    func_80253C20_Node *unk8;
    func_80253C20_Node *unkC;
    func_80253C20_Node *unk10;
    func_80253C20_Node *unk14;
    func_80253C20_Node *unk18;
    func_80253C20_Node *unk1C;
    func_80253C20_Node *unk20;
    func_80253C20_Node *unk24;
} func_80253C20_Args;

typedef struct func_80253C20_Ctx {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x44];
    s32 unk74;
    u8 pad78[0x18];
    u16 unk90;
    u16 unk92;
    u16 unk94;
    u16 unk96;
} func_80253C20_Ctx;

extern func_80257B10_V D_80164F40;

void func_80253C20(func_80253C20_Ctx *arg0, func_80253C20_Args *arg1) {
    s32 sp30[4];

    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        *(func_80257B10_V *) sp30 = D_80164F40;
        sp30[1] = 0x80000900;
        func_80005E44(arg0, sp30);
        sp30[1] = 0x80000900;
        func_80005E44(arg0, sp30);
        sp30[1] = 0x80000900;
        func_80005E44(arg0, sp30);
        sp30[1] = 0x80000900;
        func_80005E44(arg0, sp30);
        sp30[1] = 0x80000900;
        func_80005E44(arg0, sp30);
        sp30[1] = 0x80000600;
        func_80005E44(arg0, sp30);
        sp30[1] = 0x80000600;
        func_80005E44(arg0, sp30);
        sp30[1] = 0x80000600;
        func_80005E44(arg0, sp30);
        sp30[1] = 0x80000900;
        func_80005E44(arg0, sp30);
        sp30[1] = 0x80000300;
        func_80005E44(arg0, sp30);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x303, 0);
        arg1->unk0->unk30->unk24 = arg1->unk0->unk30->unk24 | 0x400;
        arg1->unk0->unk30->unk30 = (s32) D_8017AF90 | 0x40000000;
        arg1->unk0->unk30->unk4C = D_801BBBF0[0xF32];
        arg1->unk0->unk30->unk4D = D_801BBBF0[0xF33];
        arg1->unk0->unk30->unk4E = D_801BBBF0[0xF34];
        arg1->unk0->unk30->unk4F = D_801BBBF0[0xF35];
        func_8012C89C(arg0, 1, 0x302, 0x1F);
        arg1->unk4->unk30->unk24 = arg1->unk4->unk30->unk24 | 0x400;
        arg1->unk4->unk30->unk30 = (s32) D_8017AF90 | 0x40000000;
        arg1->unk4->unk30->unk4C = D_801BBBF0[0xF32];
        arg1->unk4->unk30->unk4D = D_801BBBF0[0xF33];
        arg1->unk4->unk30->unk4E = D_801BBBF0[0xF34];
        arg1->unk4->unk30->unk4F = D_801BBBF0[0xF35];
        func_8012C89C(arg0, 2, 0x303, 1);
        arg1->unk8->unk30->unk30 = (s32) D_8017AF90 | 0x40000000;
        arg1->unk8->unk30->unk24 = arg1->unk8->unk30->unk24 | 0x400;
        arg1->unk8->unk30->unk4C = D_801BBBF0[0xF32];
        arg1->unk8->unk30->unk4D = D_801BBBF0[0xF33];
        arg1->unk8->unk30->unk4E = D_801BBBF0[0xF34];
        arg1->unk8->unk30->unk4F = D_801BBBF0[0xF35];
        func_8012C89C(arg0, 3, 0x303, 3);
        arg1->unkC->unk30->unk30 = (s32) D_8017AF90 | 0x40000000;
        arg1->unkC->unk30->unk24 = arg1->unkC->unk30->unk24 | 0x400;
        arg1->unkC->unk30->unk4C = D_801BBBF0[0xF32];
        arg1->unkC->unk30->unk4D = D_801BBBF0[0xF33];
        arg1->unkC->unk30->unk4E = D_801BBBF0[0xF34];
        arg1->unkC->unk30->unk4F = D_801BBBF0[0xF35];
        func_8012C89C(arg0, 4, 0x302, 0x21);
        arg1->unk10->unk30->unk30 = (s32) D_8017AF90 | 0x40000000;
        arg1->unk10->unk30->unk24 = arg1->unk10->unk30->unk24 | 0x400;
        arg1->unk10->unk30->unk4 = 0.0f;
        arg1->unk10->unk30->unk8 = 38.0f;
        arg1->unk10->unk30->unkC = 0.0f;
        arg1->unk10->unk30->unk4C = D_801BBBF0[0xF32];
        arg1->unk10->unk30->unk4D = D_801BBBF0[0xF33];
        arg1->unk10->unk30->unk4E = D_801BBBF0[0xF34];
        arg1->unk10->unk30->unk4F = D_801BBBF0[0xF35];
        func_8012C89C(arg0, 5, 0x302, 0x22);
        arg1->unk14->unk30->unk24 = arg1->unk14->unk30->unk24 | 0x100;
        arg1->unk14->unk30->unk30 = (s32) D_8017B5A8 | 0x40000000;
        arg1->unk14->unk30->unk48 = 0xFF;
        arg1->unk14->unk30->unk49 = 0xFF;
        arg1->unk14->unk30->unk4A = 0xFF;
        arg1->unk14->unk30->unk4B = 0x4C;
        func_8012C89C(arg0, 6, 0x302, 0x23);
        func_8012CF8C(arg0, (u8 *) arg1->unk18->unk30 + 0x40, 0x302, 0x24);
        arg1->unk18->unk30->unk24 = arg1->unk18->unk30->unk24 | 0x4100;
        arg1->unk18->unk30->unk30 = (s32) D_80259770 | 0x40000000;
        arg1->unk18->unk30->unk48 = 0;
        arg1->unk18->unk30->unk49 = 0xFF;
        arg1->unk18->unk30->unk4A = 0x7D;
        arg1->unk18->unk30->unk4B = 8;
        arg1->unk18->unk30->unk4C = 0;
        arg1->unk18->unk30->unk4D = 0;
        arg1->unk18->unk30->unk4E = 0xFF;
        arg1->unk18->unk30->unk4F = 0xFF;
        func_8012C89C(arg0, 7, 0x302, 0x25);
        func_8012CF8C(arg0, (u8 *) arg1->unk1C->unk30 + 0x40, 0x302, 0x26);
        arg1->unk1C->unk30->unk24 = arg1->unk1C->unk30->unk24 | 0x4100;
        arg1->unk1C->unk30->unk30 = (s32) D_80259770 | 0x40000000;
        arg1->unk1C->unk30->unk48 = 0xFF;
        arg1->unk1C->unk30->unk49 = 0x78;
        arg1->unk1C->unk30->unk4A = 0;
        arg1->unk1C->unk30->unk4B = 0x4C;
        arg1->unk1C->unk30->unk4C = 0;
        arg1->unk1C->unk30->unk4D = 0;
        arg1->unk1C->unk30->unk4E = 0xFF;
        arg1->unk1C->unk30->unk4F = 0xFF;
        arg1->unk1C->unk22 = 0;
        func_8012C89C(arg0, 8, 0x303, 4);
        func_8012CF8C(arg0, (u8 *) arg1->unk20->unk30 + 0x40, 0x2F8, 0xF);
        arg1->unk20->unk30->unk24 = arg1->unk20->unk30->unk24 | 0x4000;
        arg1->unk20->unk30->unk30 = (s32) D_80259828 | 0x40000000;
        arg1->unk20->unk30->unk4C = 0;
        arg1->unk20->unk30->unk4D = 0;
        arg1->unk20->unk30->unk4E = 0xFF;
        arg1->unk20->unk30->unk4F = 0xFF;
        func_8012C89C(arg0, 9, 0x304, 0);
        func_8012CF8C(arg0, (u8 *) arg1->unk24->unk30 + 0x40, 0x2F8, 0x12);
        arg1->unk24->unk30->unk24 = arg1->unk24->unk30->unk24 | 0x4100;
        arg1->unk24->unk30->unk30 = (s32) D_80259770 | 0x40000000;
        arg1->unk24->unk30->unk48 = 0xFF;
        arg1->unk24->unk30->unk49 = 0xFF;
        arg1->unk24->unk30->unk4A = 0xFF;
        arg1->unk24->unk30->unk4B = 0;
        arg1->unk24->unk30->unk4C = 0;
        arg1->unk24->unk30->unk4D = 0;
        arg1->unk24->unk30->unk4E = 0xFF;
        arg1->unk24->unk30->unk4F = 0xFF;
        arg1->unk24->unk22 = 0;
        arg0->unk90 = 0;
        arg0->unk92 = 0;
        arg0->unk96 = 0;
        arg0->unk94 = 2;
        arg0->unk2C = 0x800;
        arg0->unk74 = func_8012C97C(0x303, 2);
        D_8025DE20 = (u8 *) func_80005670(arg0, D_802596E4);
        func_80005670(arg0, D_8025970C);
        func_8001F74C(arg0);
        func_800058DC(arg0, (void *) func_802543F8);
    }
}
#undef func_802543F8






void func_802543F8(func_802543F8_Obj *arg0, func_802543F8_Struct *arg1) {
    func_802577B4(arg0, arg1);
    if (func_80133A24(0x138) != 0) {
        arg1->unk14->unk22 = 0;
        func_80005670(arg0, D_80259720);
        arg0->unk90 = 0;
        arg0->unk92 = 0;
        func_801FBB30();
        func_80020718(8);
        func_800058DC(arg0, func_80254470);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80253A80/func_80254470.s")



/* hh-block asm/nonmatchings/file017/80253A80/_ro_func_80254808.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file017/80253A80/func_80254808.s","D_8025D860"],[".rodata","asm/nonmatchings/file017/80253A80/func_80254808.s","D_8025D89C"],[".rodata","asm/nonmatchings/file017/80253A80/func_80254808.s","D_8025D8D8"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file017/80253A80/_ro_func_80254808.s")

#define D_8025D860 D_8025D860__func_80254808
#define D_8025D89C D_8025D89C__func_80254808
#define D_8025D8D8 D_8025D8D8__func_80254808
#define func_800058DC func_800058DC__func_80254808
#define func_8011AAF4 func_8011AAF4__func_80254808
#define func_80251820_Ctx func_80251820_Ctx__func_80254808
#define func_80254B3C func_80254B3C__func_80254808
#define func_80254B3C_S func_80254B3C_S__func_80254808
#define func_80254B3C_T func_80254B3C_T__func_80254808
#define LQ(p, l) p##_##l
#define LP(p, l) LQ(p, l)
#define LP(p,l) LQ(p,l)
#define LQ(p,l) p##_##l
extern void func_800058DC();
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
typedef struct func_80251820_Ctx {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x44];
    s32 unk74;
    u8 pad78[0x18];
    u16 unk90;
    u16 unk92;
} func_80251820_Ctx;
typedef struct func_80254B3C_T { u8 pad[0x30]; u8 *unk30; } func_80254B3C_T;
typedef struct func_80254B3C_S { u8 pad[0x24]; struct func_80254B3C_T *unk24; } func_80254B3C_S;
void func_80254B3C(func_80251820_Ctx *arg0, func_80254B3C_S *arg1);
typedef struct func_80257F34_Struct_M { s16 a; s32 b; f32 c; s16 d; } func_80257F34_Struct_M;


typedef struct func_80254808_StructN { u8 pad0[0x22]; u8 unk22; } func_80254808_StructN;
typedef struct func_80254808_StructB { u8 pad0[0x24]; func_80254808_StructN *unk24; } func_80254808_StructB;
typedef struct func_80254808_Struct { u8 pad0[0x90]; u16 unk90; u8 pad92[6]; u16 unk98; } func_80254808_Struct;
extern u8 D_8025D860[];
extern u8 D_8025D89C[];
extern u8 D_8025D8D8[];

void func_80254808(func_80254808_Struct *arg0, func_80254808_StructB *arg1) {
    s32 pad[4];
    func_80257F34_Struct_M m;
    s32 t;

    t = arg0->unk90++;
    func_802577B4(arg0, arg1);
    if (t >= 0x3C) {
        if (t == 0x3C) {
            func_80020718(0x193);
            func_801518D4(0, 1, 0x3C);
            func_801C2F0C(0, NULL);
        } else if (t == 0x3D) {
            m.a = 0x1000;
            m.b = 0x0410002C;
            m.d = 0xA;
            m.c = 5.0f;
            func_801C2F0C(5, &m);
        } else if (func_801C3044() == 0) {
            m.a = 0x1100;
            m.b = 0x04100026;
            m.c = 3.0f;
            func_801C2F0C(4, &m);
        }
        if (!(t % 2)) {
            func_8011AAF4(D_8025D860, 0x360, arg0, 0, 1, 0.0f, -60.0f, 20.0f, 17.0f, 0.0f, -83.0f, 10.0f, -6.0f, 0.0f, 55.0f, -1, -1);
        } else {
            func_8011AAF4(D_8025D89C, 0x365, arg0, 0, 1, 0.0f, -60.0f, 19.0f, 17.0f, 0.0f, -83.0f, 9.0f, -6.0f, 0.0f, 55.0f, -1, -1);
        }
        arg0->unk98 = -arg0->unk98;
        if (t >= 0x78) {
            func_8011AAF4(D_8025D8D8, 0x36E, arg0, 0, 1, 0.0f, 120.0f, 166.0f, 174.0f, 0.0f, -35.0f, -9.0f, -39.0f, 0.0f, 55.0f, -1, -1);
            arg0->unk90 = 0;
            arg1->unk24->unk22 = 1;
            func_801518D4(0, 0, 0x1E);
            func_800058DC(arg0, func_80254B3C);
        }
    }
}
#undef LQ
#undef LP
#undef D_8025D860
#undef D_8025D89C
#undef D_8025D8D8
#undef func_800058DC
#undef func_8011AAF4
#undef func_80251820_Ctx
#undef func_80254B3C
#undef func_80254B3C_S
#undef func_80254B3C_T

typedef struct { u8 pad[0x90]; u16 unk90; } func_80254B3C_Ctx;
typedef struct { u8 pad[0x28]; } func_80254B3C_Args;
typedef struct { u8 pad[0x28]; } func_80254B3C_Node;
#define func_80251820_Ctx func_80254B3C_Ctx
#define func_80251820_Args func_80254B3C_Args
#define func_80251820_Node func_80254B3C_Node
typedef struct func_80254B3C_S { u8 pad[0x24]; struct func_80254B3C_T *unk24; } func_80254B3C_S;
typedef struct func_80254B3C_T { u8 pad[0x30]; u8 *unk30; } func_80254B3C_T;
void func_80254BFC(func_80254B3C_Ctx *arg0, u16 arg1);

void func_80254B3C(func_80254B3C_Ctx *arg0, func_80254B3C_S *arg1) {
    s32 sp24;
    u8 *p;

    sp24 = arg0->unk90++;
    func_802577B4(arg0, arg1);
    if (sp24 >= 0xF) {
        if (sp24 == 0xF) {
            func_80020718(0x192);
        }
        p = arg1->unk24->unk30;
        if (p[0x4B] < 0x4C) {
            p[0x4B] += 2;
        }
    }
    if (sp24 >= 0x5A) {
        arg0->unk90 = 0;
        *(f32 *)(D_801BBBF0 + 0x1EC) = 166.0f;
        func_801518D4(0, 5, 0xF);
        func_800058DC(arg0, func_80254BFC);
    }
}



/* hh-block asm/nonmatchings/file017/80253A80/_ro_func_80254BFC.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file017/80253A80/func_80254BFC.s","D_8025D914"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file017/80253A80/_ro_func_80254BFC.s")

#define D_8025D914 D_8025D914__func_80254BFC
#define func_8011AAF4 func_8011AAF4__func_80254BFC
#define func_8012FE50 func_8012FE50__func_80254BFC
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
#define HH_CAT2(a, b) a##b
#define HH_CAT(a, b) HH_CAT2(a, b)
#define func_80254B3C_Ctx HH_CAT(HHCtx_, __LINE__)
#define func_80254B3C_Args HH_CAT(HHArgs_, __LINE__)
#define func_80254B3C_Node HH_CAT(HHNode_, __LINE__)
#define HHCtx_115 func_80254B3C_Ctx
#define HHCtx_124 func_80254B3C_Ctx
#define HHCtx_125 func_80254B3C_Ctx
#define HHCtx_179 func_80254B3C_Ctx
#define HHCtx_217 func_80254B3C_Ctx
#define HHCtx_231 HHCtx2
#define HHCtx_245 func_80254B3C_Ctx
#define HHArgs_116 func_80254B3C_Args
#define HHArgs_140 func_80254B3C_Args
#define HHArgs_217 func_80254B3C_Args
#define HHArgs_232 HHArgs2
#define HHArgs_297 func_80254B3C_Args
#define HHNode_117 func_80254B3C_Node
#define HHNode_233 HHNode2
#define HHNode_245 func_80254B3C_Node
#undef func_80254B3C_Ctx
#undef func_80254B3C_Args
#undef func_80254B3C_Node
extern u8 D_8025D914[];
extern void func_8012FE50(s32, s32, s32, s32, s32);

void func_80254BFC(func_80254B3C_Ctx *arg0, u16 arg1) {
    arg1 = arg0->unk90;
    arg0->unk90 = arg1 + 1;
    if (arg1 < 0x1E) {
        *(f32 *)(D_801BBBF0 + 0x1EC) += -23.0f;
    } else if (arg1 < 0x96) {
        *(f32 *)(D_801BBBF0 + 0x1EC) += -5.0f;
    }
    func_8011AAF4(D_8025D914, 0x3A7, arg0, 0, 1, 0.0f, 120.0f, *(f32 *)(D_801BBBF0 + 0x1EC), 174.0f, 0.0f, -35.0f, -9.0f, -39.0f, 0.0f, 55.0f, -1, -1);
    if (arg1 == 0x96) {
        D_801BBBF0[0x3A6] = 0;
        *(u16 *)(D_801BBBF0 + 4) = 0x29;
        func_8012FE50(9, *(u16 *)(D_801BBBF0 + 4), 1, 1, 1);
    }
}
#undef HH_CAT2
#undef HH_CAT
#undef HHCtx_115
#undef HHCtx_124
#undef HHCtx_125
#undef HHCtx_179
#undef HHCtx_217
#undef HHCtx_231
#undef HHCtx_245
#undef HHArgs_116
#undef HHArgs_140
#undef HHArgs_217
#undef HHArgs_232
#undef HHArgs_297
#undef HHNode_117
#undef HHNode_233
#undef HHNode_245
#undef D_8025D914
#undef func_8011AAF4
#undef func_8012FE50

#define func_802550A8 func_802550A8__func_80254D48
extern void func_802550A8(void *arg0);
#define LP(p, l) LQ(p, l)
#define LQ(p, l) p##_##l
#define func_80254B3C_Ctx LP(CX, __LINE__)
#define func_80254B3C_Args LP(AX, __LINE__)
#define func_80254B3C_Node LP(NX, __LINE__)
typedef struct CXT CX_125;
typedef struct CXT CX_126;
typedef struct CXT CX_130;
typedef struct CXT CX_168;
typedef struct CXT CX_206;
typedef struct CXT CX_234;
typedef struct AXT AX_206;
typedef struct AXT AX_286;
typedef struct NXT NX_234;
#undef func_80254B3C_Ctx
#undef func_80254B3C_Args
#undef func_80254B3C_Node

typedef struct func_80254D48_Struct {
    u8 pad0[0x90];
    s16 unk90;
    s16 unk92;
    u8 pad94[4];
    f32 unk98;
    f32 unk9C;
    f32 unkA0;
} func_80254D48_Struct;

typedef struct func_80254D48_Inner {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    u8 pad28[8];
    u32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_80254D48_Inner;

typedef struct func_80254D48_Node {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_80254D48_Inner *unk30;
} func_80254D48_Node;

typedef struct func_80254D48_Args {
    func_80254D48_Node *unk0;
    func_80254D48_Node *unk4;
    func_80254D48_Node *unk8;
} func_80254D48_Args;

extern u8 D_80175C58[];
extern u8 D_80259920[];
extern u8 D_80259978[];

void func_80254D48(func_80254D48_Struct *arg0, func_80254D48_Args *arg1) {
    register f32 k;
    struct { s32 a[3]; } sp20;

    *(func_80257B10_V *)&sp20 = D_80164F40;
    sp20.a[1] = 0x80000300;
    func_80005E44(arg0, &sp20);
    sp20.a[1] = 0x80000300;
    func_80005E44(arg0, &sp20);
    sp20.a[1] = 0x80000300;
    func_80005E44(arg0, &sp20);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 2);
    func_8012CF8C(arg0, (u8 *)arg1->unk0->unk30 + 0x40, 0x375, 0);
    k = 0.0399999991f;
    arg1->unk0->unk30->unk24 |= 0x60300;
    arg1->unk0->unk30->unk30 = (u32)D_80175C58 | 0x40000000;
    arg1->unk0->unk30->unk18 = k;
    arg1->unk0->unk30->unk1C = k;
    arg1->unk0->unk30->unk20 = k;
    arg1->unk0->unk30->unk48 = 0xFF;
    arg1->unk0->unk30->unk49 = 0xFF;
    arg1->unk0->unk30->unk4A = 0xFF;
    arg1->unk0->unk30->unk4B = 0xFF;
    arg1->unk0->unk30->unk4C = 0x1A;
    arg1->unk0->unk30->unk4D = 0xFF;
    arg1->unk0->unk30->unk4E = 0x66;
    arg1->unk0->unk22 = 0;
    func_8012C89C(arg0, 1, 0x4D9, 0);
    k = 0.00999999978f;
    arg1->unk4->unk30->unk24 |= 0x500;
    arg1->unk4->unk30->unk30 = (u32)D_80259920 | 0x40000000;
    arg1->unk4->unk30->unk18 = k;
    arg1->unk4->unk30->unk1C = k;
    arg1->unk4->unk30->unk20 = k;
    arg1->unk4->unk30->unk48 = 0;
    arg1->unk4->unk30->unk49 = 0;
    arg1->unk4->unk30->unk4A = 0;
    arg1->unk4->unk30->unk4B = 0xFF;
    arg1->unk4->unk30->unk4C = D_801BBBF0[0xF32];
    arg1->unk4->unk30->unk4D = D_801BBBF0[0xF33];
    arg1->unk4->unk30->unk4E = D_801BBBF0[0xF34];
    arg1->unk4->unk30->unk4F = D_801BBBF0[0xF35];
    func_8012C89C(arg0, 2, 0x4D9, 0);
    k = 0.00999000017f;
    arg1->unk8->unk30->unk24 |= 0x100;
    arg1->unk8->unk30->unk30 = (u32)D_80259978 | 0x40000000;
    arg1->unk8->unk30->unk18 = k;
    arg1->unk8->unk30->unk1C = k;
    arg1->unk8->unk30->unk20 = k;
    arg1->unk8->unk30->unk48 = 0;
    arg1->unk8->unk30->unk49 = 0;
    arg1->unk8->unk30->unk4A = 0;
    arg1->unk8->unk30->unk4B = 0;
    arg1->unk8->unk22 = 0;
    arg0->unk90 = 0;
    arg0->unk92 = 0;
    arg0->unk98 = 0.0f;
    arg0->unk9C = 0.0f;
    arg0->unkA0 = 0.0f;
    func_8001F74C(arg0);
    func_800058DC(arg0, func_802550A8);
}
#undef LP
#undef LQ
#undef func_802550A8

#define func_80255134 func_80255134__func_802550A8

extern void func_80255134(func_802543F8_Obj *arg0);

typedef struct func_802550A8_Struct {
    s16 unk0;
    u8 pad2[2];
    s32 unk4;
    f32 unk8;
    s16 unkC;
    u8 pad3[0x10];
} func_802550A8_Struct;

void func_802550A8(void *arg0) {
    func_802550A8_Struct sp18;

    func_8025799C();
    if ((func_80133A24(0x138) != 0) && (func_801C2FF8() != 0)) {
        sp18.unk0 = 0;
        sp18.unk4 = 0x04100026;
        sp18.unkC = 0xF;
        sp18.unk8 = 3.0f;
        func_801C2F0C(3, &sp18);
        *(s16 *)((u8 *)arg0 + 0x90) = 0;
        func_80020718(0x18D);
        func_800058DC(arg0, func_80255134);
    }
}
#undef func_80255134



typedef struct func_80255134_Struct {
    s16 unk0;
    u8 pad[0x2];
    s32 unk4;
    f32 unk8;
    s32 unkC;
} func_80255134_Struct;

void func_80255134(func_802543F8_Obj *arg0) {
    u8 sp30[0x10];
    func_80255134_Struct sp18;

    func_8025799C();
    if (func_801C3044() == 0) {
        sp18.unk0 = 0x1100;
        sp18.unk4 = 0x04100026;
        sp18.unk8 = 3.0f;
        func_801C2F0C(4, &sp18);
        arg0->unk92 = 0;
        func_800058DC(arg0, func_802551A0);
    }
}

#define func_80255204 func_80255204__func_802551A0
extern void func_80255204(s16 *arg0);
#define LP(p, l) LQ(p, l)
#define LQ(p, l) p##_##l
#define func_80254B3C_Ctx LP(CX, __LINE__)
#define func_80254B3C_Args LP(AX, __LINE__)
#define func_80254B3C_Node LP(NX, __LINE__)
#define CX_116 func_80254B3C_CtxA
#define CX_125 func_80254B3C_CtxA
#define CX_126 func_80254B3C_CtxA
#define CX_130 func_80254B3C_CtxA
#define CX_213 func_80254B3C_CtxA
#define CX_227 func_80254B3C_CtxB
#define CX_241 func_80254B3C_CtxB
#define AX_117 func_80254B3C_ArgsA
#define AX_145 func_80254B3C_ArgsA
#define AX_213 func_80254B3C_ArgsA
#define AX_228 func_80254B3C_ArgsB
#define AX_293 func_80254B3C_ArgsB
#define NX_118 func_80254B3C_NodeA
#define NX_229 func_80254B3C_NodeB
#define NX_241 func_80254B3C_NodeB
#undef func_80254B3C_Ctx
#undef func_80254B3C_Args
#undef func_80254B3C_Node
#define func_8025799C func_8025799C__func_802551A0

extern void func_800179B0(void *);
extern void func_800208C4(s32);
extern u8 D_80259A30[];

typedef struct func_802551A0_Ctx { u8 pad0[0x92]; u16 unk92; } func_802551A0_Ctx;

void func_802551A0(func_802551A0_Ctx *arg0) {
    u8 pad[0x20];
    volatile s32 count;
    u16 temp;

    temp = arg0->unk92;
    count = temp;
    arg0->unk92 = temp + 1;
    func_8025799C();
    if (count >= 0x78) {
        func_800179B0(D_80259A30);
        func_800208C4(0x73);
        func_800058DC(arg0, func_80255204);
    }
}
#undef func_8025799C
#undef LP
#undef LQ
#undef CX_116
#undef CX_125
#undef CX_126
#undef CX_130
#undef CX_213
#undef CX_227
#undef CX_241
#undef AX_117
#undef AX_145
#undef AX_213
#undef AX_228
#undef AX_293
#undef NX_118
#undef NX_229
#undef NX_241
#undef func_80255204

#define func_80255278 func_80255278__func_80255204

extern void func_80255278(void *arg0);

typedef struct func_80255204_Struct {
    s16 unk0;
    s32 unk4;
    f32 unk8;
    s16 unkC;
    u8 pad[0x10];
} func_80255204_Struct;

void func_80255204(s16 *arg0) {
    func_80255204_Struct sp18;

    func_8025799C();
    if (func_800178E8() != 0) {
        sp18.unk0 = 0x1000;
        sp18.unk4 = 0x03480027;
        sp18.unkC = 0xA;
        sp18.unk8 = 4.0f;
        func_801C2F0C(5, &sp18);
        arg0[0x92 / 2] = 0;
        func_800058DC(arg0, func_80255278);
    }
}
#undef func_80255278



typedef struct func_80255278_Struct {
    s16 unk0;
    u8 pad2[2];
    s32 unk4;
    f32 unk8;
} func_80255278_Struct;

void func_80255278(void *arg0) {
    u8 pad[0x14];
    func_80255278_Struct sp18;

    func_8025799C();
    if (func_801C3044() == 0) {
        sp18.unk0 = 0x1100;
        sp18.unk4 = 0x03480028;
        sp18.unk8 = 4.0f;
        func_801C2F0C(4, &sp18);
        ((s16 *)arg0)[0x92 / 2] = 0;
        func_800058DC(arg0, func_802552E4);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80253A80/func_802552E4.s")





/* hh-block asm/nonmatchings/file017/80253A80/_ro_regular_7d868f11c252c71a.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file017/80253A80/func_8025584C.s","D_8025DAB8"],[".rodata","asm/nonmatchings/file017/80253A80/func_8025584C.s","D_8025DAF4"],[".rodata","asm/nonmatchings/file017/80253A80/func_80255CA0.s","D_8025DB30"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file017/80253A80/_ro_regular_7d868f11c252c71a.s")


/* hh-block asm/nonmatchings/file017/80253A80/_ro_regular_cedc406c1464ae9f.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file017/80253A80/func_802556EC.s","D_8025DA7C"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file017/80253A80/_ro_regular_cedc406c1464ae9f.s")

#define D_8025DA7C D_8025DA7C__func_802556EC
#define D_8025DC1C D_8025DC1C__func_802556EC
#define func_8011AAF4 func_8011AAF4__func_802556EC
#define func_80133980 func_80133980__func_802556EC
#define func_8025584C func_8025584C__func_802556EC
#define func_8025799C func_8025799C__func_802556EC
extern void func_80133980(s32);

typedef struct func_802556EC_Inner { u8 pad[0x4B]; u8 unk4B; } func_802556EC_Inner;
typedef struct func_802556EC_Node { u8 pad[0x30]; func_802556EC_Inner *unk30; } func_802556EC_Node;
typedef struct func_802556EC_Args { u8 pad[8]; func_802556EC_Node *unk8; } func_802556EC_Args;
typedef struct func_802556EC_Ctx { u8 pad[0x92]; u16 unk92; } func_802556EC_Ctx;
extern void func_8025799C();
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern u8 D_8025DA7C[];
extern f32 D_8025DC1C;
extern u8 func_8025584C[];

typedef struct func_802556EC_Struct {
    s16 a;
    s16 pad;
    s32 b;
    f32 c;
    s32 d[5];
} func_802556EC_Struct;

void func_802556EC(func_802556EC_Ctx *arg0, func_802556EC_Args *arg1) {
    func_802556EC_Struct sp;

    func_8025799C();
    func_8011AAF4(D_8025DA7C, 0x4D8, arg0, 0, 2, D_8025DC1C, -91.0f, 21.0f, -8.0f, 4294967296.0f, 1.0f, 11.0f, 4.0f, 0.0f, 55.0f, -1, -1);
    if (func_801C3044() == 0) {
        sp.a = 0x1100;
        sp.b = 0x04100026;
        sp.c = 3.0f;
        func_801C2F0C(4, &sp);
    }
    arg1->unk8->unk30->unk4B += 2;
    if (arg1->unk8->unk30->unk4B >= 0xFE) {
        func_80133980(0x13A);
        arg1->unk8->unk30->unk4B = 0xFF;
        arg0->unk92 = 0;
        func_800058DC(arg0, func_8025584C);
    }
}
#undef D_8025DA7C
#undef D_8025DC1C
#undef func_8011AAF4
#undef func_80133980
#undef func_8025584C
#undef func_8025799C



#define D_8025975C D_8025975C__func_8025584C
#define D_8025DAB8 D_8025DAB8__func_8025584C
#define D_8025DAF4 D_8025DAF4__func_8025584C
#define D_8025DC20 D_8025DC20__func_8025584C
#define D_8025DC28 D_8025DC28__func_8025584C
#define D_8025DE24 D_8025DE24__func_8025584C
#define func_800058DC func_800058DC__func_8025584C
#define func_8001EAD0 func_8001EAD0__func_8025584C
#define func_8001EB64 func_8001EB64__func_8025584C
#define func_8011AAF4 func_8011AAF4__func_8025584C
#define func_8012C6B4 func_8012C6B4__func_8025584C
#define func_80133980 func_80133980__func_8025584C
#define func_80255B30 func_80255B30__func_8025584C
#define func_80255B30_A0 func_80255B30_A0__func_8025584C
#define func_80255B30_A1 func_80255B30_A1__func_8025584C
#define func_80255B30_In func_80255B30_In__func_8025584C
#define func_80255B30_Node func_80255B30_Node__func_8025584C
#define func_8025799C func_8025799C__func_8025584C
#define func_8025799C_A0 func_8025799C_A0__func_8025584C
#define func_8025799C_A1 func_8025799C_A1__func_8025584C
#define func_8025799C_In func_8025799C_In__func_8025584C
#define func_8025799C_Nd func_8025799C_Nd__func_8025584C
#define func_80380F94 func_80380F94__func_8025584C
#define LQ(p, l) p##_##l
#define LP(p, l) LQ(p, l)
#define LP(p,l) LQ(p,l)
#define LQ(p,l) p##_##l
extern void func_800058DC();
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern s32 func_8012C6B4(s32);
extern void func_80133980(s32);
typedef struct func_80255B30_A0 {
    u8 pad0[0x40]; f32 unk40; f32 unk44; f32 unk48;
    u8 pad4C[0x92 - 0x4C]; u16 unk92; u8 pad94[4];
    f32 unk98; f32 unk9C; f32 unkA0;
} func_80255B30_A0;
typedef struct func_80255B30_In { u8 pad0[0x4B]; u8 unk4B; } func_80255B30_In;
typedef struct func_80255B30_Node { u8 pad0[0x30]; func_80255B30_In *unk30; } func_80255B30_Node;
typedef struct func_80255B30_A1 { u8 pad0[4]; func_80255B30_Node *unk4; func_80255B30_Node *unk8; } func_80255B30_A1;
void func_80255B30(func_80255B30_A0 *arg0, func_80255B30_A1 *arg1);
extern void func_8025799C();
typedef struct func_8025799C_A0 { u8 pad0[0x90]; u16 unk90; u8 pad92[6]; f32 unk98; f32 unk9C; f32 unkA0; } func_8025799C_A0;
typedef struct func_8025799C_In { u8 pad0[8]; f32 unk8; } func_8025799C_In;
typedef struct func_8025799C_Nd { u8 pad0[0x30]; func_8025799C_In *unk30; } func_8025799C_Nd;
typedef struct func_8025799C_A1 { u8 pad0[4]; func_8025799C_Nd *unk4; func_8025799C_Nd *unk8; } func_8025799C_A1;
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);


extern u8 D_8025DAB8[];
extern u8 D_8025DAF4[];
extern u8 D_8025975C[];
extern f32 D_8025DC20;
extern f64 D_8025DC28;
extern s32 D_8025DE24;

typedef struct func_8025584C_Struct {
    u8 pad0[0x92];
    u16 unk92;
    u8 pad94[4];
    f32 unk98;
    f32 unk9C;
    f32 unkA0;
} func_8025584C_Struct;

void func_8025584C(func_8025584C_Struct *arg0, func_8025799C_A1 *arg1) {
    f32 sp74;
    s32 sp70;
    s32 pad;
    s32 sp68;
    f32 sp64;
    f32 temp_fv0;
    f32 zero;

    sp70 = arg0->unk92++;
    func_8025799C((func_8025799C_A0 *)arg0, arg1);
    zero = 0.0f;
    if (sp70 < 0x3C) {
        func_8011AAF4(D_8025DAB8, 0x4F8, arg0, 0, 2, D_8025DC20, -91.0f, 21.0f, -8.0f, 4294967296.0f, 1.0f, 11.0f, 4.0f, zero, 55.0f, -1, -1);
        if ((sp70 % 6) == 0) {
            temp_fv0 = (f32) func_8012C6B4(0x2000);
            sp74 = temp_fv0;
            sp64 = func_8001EAD0((s16) (s32) temp_fv0);
            sp68 = func_8012C6B4(0xB4);
            func_80380F94((f32) (((f64) sp64 * 5.0) + (f64) arg0->unk98), (f32) (((((f64) (f32) sp68 / 10.0) + (f64) arg0->unk9C) - 9.0) + D_8025DC28), (f32) (((f64) func_8001EB64((s16) (s32) sp74) * 5.0) + (f64) arg0->unkA0), zero, zero, zero, 6);
        }
    }
    if (sp70 >= 0x5A) {
        func_80133980(0x13B);
        func_8011AAF4(D_8025DAF4, 0x509, arg0, 0, 1, zero, -90.0f, 12.0f, -30.0f, zero, -43.0f, 15.0f, 15.0f, zero, 55.0f, -1, -1);
        arg0->unk92 = 0;
        D_8025DE24 = func_80005670(arg0, D_8025975C);
        func_80020718(0x18F);
        func_800058DC(arg0, func_80255B30);
    }
}
#undef LQ
#undef LP
#undef D_8025975C
#undef D_8025DAB8
#undef D_8025DAF4
#undef D_8025DC20
#undef D_8025DC28
#undef D_8025DE24
#undef func_800058DC
#undef func_8001EAD0
#undef func_8001EB64
#undef func_8011AAF4
#undef func_8012C6B4
#undef func_80133980
#undef func_80255B30
#undef func_80255B30_A0
#undef func_80255B30_A1
#undef func_80255B30_In
#undef func_80255B30_Node
#undef func_8025799C
#undef func_8025799C_A0
#undef func_8025799C_A1
#undef func_8025799C_In
#undef func_8025799C_Nd
#undef func_80380F94

#define func_80255CA0 func_80255CA0__func_80255B30
#define func_80380F94 func_80380F94__func_80255B30
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);
#define LP(p,l) LQ(p,l)
#define LQ(p,l) p##_##l
#define func_80254B3C_Ctx LP(HC, __LINE__)
#define func_80254B3C_Args LP(HA, __LINE__)
#define func_80254B3C_Node LP(HN, __LINE__)
#define HC_116 HCa
#define HC_125 HCa
#define HC_126 HCa
#define HC_130 HCa
#define HC_184 HCa
#define HC_222 HCa
#define HC_223 HCb
#define HC_237 HCb
#define HA_117 HAa
#define HA_145 HAa
#define HA_222 HAa
#define HA_224 HAb
#define HA_289 HAb
#define HN_118 HNa
#define HN_225 HNb
#define HN_237 HNb
#undef func_80254B3C_Ctx
#undef func_80254B3C_Args
#undef func_80254B3C_Node

typedef struct func_80255B30_In { u8 pad0[0x4B]; u8 unk4B; } func_80255B30_In;
typedef struct func_80255B30_Node { u8 pad0[0x30]; func_80255B30_In *unk30; } func_80255B30_Node;
typedef struct func_80255B30_A1 { u8 pad0[4]; func_80255B30_Node *unk4; func_80255B30_Node *unk8; } func_80255B30_A1;
typedef struct func_80255B30_Pos { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; } func_80255B30_Pos;
typedef struct func_80255B30_G1 { u8 pad0[0x2C]; func_80255B30_Pos *unk2C; } func_80255B30_G1;
typedef struct func_80255B30_G { u8 pad0[0xE0]; func_80255B30_G1 *unkE0; } func_80255B30_G;
typedef struct func_80255B30_A0 {
    u8 pad0[0x40]; f32 unk40; f32 unk44; f32 unk48;
    u8 pad4C[0x92 - 0x4C]; u16 unk92; u8 pad94[4];
    f32 unk98; f32 unk9C; f32 unkA0;
} func_80255B30_A0;

extern u8 func_80255CA0[];

void func_80255B30(func_80255B30_A0 *arg0, func_80255B30_A1 *arg1) {
    s32 t[1];
    s32 v = arg0->unk92;
    func_80255B30_In *p;
    t[0] = v;
    arg0->unk92 = v + 1;
    func_8025799C(arg0, arg1);
    p = arg1->unk4->unk30;
    if (p->unk4B >= 4) {
        p->unk4B -= 3;
        arg1->unk8->unk30->unk4B -= 3;
    }
    if (t[0] >= 0x78) {
        func_80380F94(arg0->unk98, arg0->unk9C + 45.0f, arg0->unkA0, 0.0f, 0.0f, 0.0f, 7);
        arg0->unk9C = arg0->unk9C + 45.0f;
        arg0->unk40 = (((func_80255B30_G *)D_801BBBF0)->unkE0->unk2C->unk4 - arg0->unk98) / 20.0;
        arg0->unk44 = ((((func_80255B30_G *)D_801BBBF0)->unkE0->unk2C->unk8 + 10.0f) - arg0->unk9C) / 20.0;
        arg0->unk48 = (((func_80255B30_G *)D_801BBBF0)->unkE0->unk2C->unkC - arg0->unkA0) / 20.0;
        arg0->unk92 = 0;
        func_80020718(0x190);
        func_800058DC(arg0, func_80255CA0);
    }
}
#undef LP
#undef LQ
#undef HC_116
#undef HC_125
#undef HC_126
#undef HC_130
#undef HC_184
#undef HC_222
#undef HC_223
#undef HC_237
#undef HA_117
#undef HA_145
#undef HA_222
#undef HA_224
#undef HA_289
#undef HN_118
#undef HN_225
#undef HN_237
#undef func_80255CA0
#undef func_80380F94




#undef func_80251820_Ctx
#undef func_80251820_Node


#define D_80005700 D_80005700__func_80255CA0
#define D_8011AAF4 D_8011AAF4__func_80255CA0
#define D_801BBCD0 D_801BBCD0__func_80255CA0
#define D_8025DB30 D_8025DB30__func_80255CA0
#define D_8025DC30 D_8025DC30__func_80255CA0
#define D_8025DC38 D_8025DC38__func_80255CA0
#define D_8025DC40 D_8025DC40__func_80255CA0
#define D_8025DE24 D_8025DE24__func_80255CA0
#define func_800058DC func_800058DC__func_80255CA0
#define func_80129FB8 func_80129FB8__func_80255CA0
#define func_8012C6B4 func_8012C6B4__func_80255CA0
#define func_801C3D20 func_801C3D20__func_80255CA0
#define func_80251820_Ctx func_80251820_Ctx__func_80255CA0
#define func_80251820_Node func_80251820_Node__func_80255CA0
#define func_80255B30_A0 func_80255B30_A0__func_80255CA0
#define func_80256034 func_80256034__func_80255CA0
#define func_80256034_Cmd func_80256034_Cmd__func_80255CA0
#define func_80380F94 func_80380F94__func_80255CA0
#define HZCAT2(a, b) a##b
#define HZCAT(a, b) HZCAT2(a, b)
extern s32 D_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
typedef struct func_80253680_StructInner {
    u8 pad0[4];
    f32 x, y, z;
    u8 pad10[2];
    s16 angle;
    u8 pad14[0x1C];
    f32 a, b, c, d, e, f;
} func_80253680_StructInner;
typedef struct func_80253680_StructOuter {
    u8 pad0[0x2C];
    func_80253680_StructInner *inner;
} func_80253680_StructOuter;
extern func_80253680_StructOuter *D_801BBCD0;
extern void func_800058DC();
extern s32 func_8012C6B4(s32);
extern s32 func_801C3D20(f32, f32, f32);
typedef struct func_80255B30_A0 {
    u8 pad0[0x40]; f32 unk40; f32 unk44; f32 unk48;
    u8 pad4C[0x92 - 0x4C]; u16 unk92; u8 pad94[4];
    f32 unk98; f32 unk9C; f32 unkA0;
} func_80255B30_A0;
typedef struct func_80251820_Ctx {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x44];
    s32 unk74;
    u8 pad78[0x18];
    u16 unk90;
    u16 unk92;
} func_80251820_Ctx;
typedef struct func_80251820_Inner {
    u8 pad0[8];
    f32 unk8;
    u8 padC[6];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    u8 pad28[8];
    u32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_80251820_Inner;
typedef struct func_80251820_Node {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_80251820_Inner *unk30;
} func_80251820_Node;
void func_80256034(func_80251820_Ctx *arg0, func_80251820_Node **arg1);
typedef struct func_80256034_Cmd { s16 a; s32 b; f32 c; s16 d; } func_80256034_Cmd;
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern u8 D_8025DB30[];
extern f32 D_8025DC30;
extern f64 D_8025DC38;
extern f64 D_8025DC40;
extern s32 D_8025DE24;

typedef struct func_80255CA0_In {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_80255CA0_In;
typedef struct func_80255CA0_Node {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_80255CA0_In *unk30;
} func_80255CA0_Node;

extern void D_80005700(s32);
void func_80255CA0(func_80255B30_A0 *arg0, s32 arg1) {
    func_80253680_StructInner *temp_v1;
    s32 sp88[3];
    func_80256034_Cmd sp78;
    s32 sp74;

    sp74 = arg0->unk92++;
    if (sp74 == 2) {
        (*(func_80255CA0_Node **)arg1)->unk22 = 1;
        D_80005700(D_8025DE24);
    }
    (*(func_80255CA0_Node **)arg1)->unk30->unk4 = arg0->unk98;
    (*(func_80255CA0_Node **)arg1)->unk30->unk8 = arg0->unk9C;
    (*(func_80255CA0_Node **)arg1)->unk30->unkC = arg0->unkA0;
    func_80129FB8((f32) (((f64) (func_8012C6B4(0xC8) - 0x64) / 100.0) + (f64) arg0->unk98), (f32) (((f64) (func_8012C6B4(0xC8) - 0x64) / 100.0) + (f64) arg0->unk9C + 3.0), (f32) (((f64) (func_8012C6B4(0xC8) - 0x64) / 100.0) + (f64) arg0->unkA0), 0.0f, D_8025DC30, 0.0f, 0.0f, 0xFF, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0xA0, -2, (f32) (((f64) func_8012C6B4(0x64) / D_8025DC38) + D_8025DC40), 3, 0);
    arg0->unk98 = arg0->unk98 + arg0->unk40;
    arg0->unk9C = arg0->unk9C + arg0->unk44;
    arg0->unkA0 = arg0->unkA0 + arg0->unk48;
    if (sp74 == 0xE) {
        func_801C2F0C(0, NULL);
    } else if (sp74 == 0xF) {
        sp78.a = 0x1000;
        sp78.b = 0x04100031;
        sp78.d = 1;
        sp78.c = 3.0f;
        func_801C2F0C(5, &sp78);
    }
    if (func_801C3D20(arg0->unk98, arg0->unkA0, 5.0f) != 0) {
        D_8011AAF4(D_8025DB30, 0x562, arg0, 0, 1, 0.0f, -55.0f, 20.0f, -8.0f, 0.0f, -85.0f, 10.0f, 8.0f, 0.0f, 55.0f, -1, -1);
        func_80380F94((temp_v1 = D_801BBCD0->inner)->x, temp_v1->y + 10.0f, temp_v1->z, 0.0f, 0.0f, 0.0f, 7);
        arg0->unk92 = 0;
        (*(func_80255CA0_Node **)arg1)->unk22 = 0;
        func_80020718(0x191);
        func_801518D4(0, 5, 9);
        func_800058DC(arg0, func_80256034);
    }
}
#undef HZCAT2
#undef HZCAT
#undef D_80005700
#undef D_8011AAF4
#undef D_801BBCD0
#undef D_8025DB30
#undef D_8025DC30
#undef D_8025DC38
#undef D_8025DC40
#undef D_8025DE24
#undef func_800058DC
#undef func_80129FB8
#undef func_8012C6B4
#undef func_801C3D20
#undef func_80251820_Ctx
#undef func_80251820_Node
#undef func_80255B30_A0
#undef func_80256034
#undef func_80256034_Cmd
#undef func_80380F94
#define func_80251820_Ctx func_80254B3C_Ctx
#define func_80251820_Node func_80254B3C_Node

#undef func_80251820_Args
#undef func_80251820_Ctx
#undef func_80251820_Node


/* hh-block asm/nonmatchings/file017/80253A80/_ro_func_80256034.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file017/80253A80/func_80256034.s","D_8025DB6C"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file017/80253A80/_ro_func_80256034.s")

typedef struct func_80251820_Ctx { u8 pad0[0x92]; u16 unk92; } func_80251820_Ctx;
typedef struct func_80251820_Args { s32 unk0; } func_80251820_Args;
typedef struct func_80251820_Node { u8 pad0[0x22]; u8 unk22; } func_80251820_Node;
extern f32 func_8001EAD0();
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern s32 func_8012C6B4(s32);
void func_80256308(s32 arg0, s32 arg1);


typedef struct func_80256034_Pos { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; } func_80256034_Pos;
typedef struct func_80256034_Mid { u8 pad0[0x2C]; func_80256034_Pos *unk2C; } func_80256034_Mid;
typedef struct func_80256034_G { u8 pad0[0xE0]; func_80256034_Mid *unkE0; } func_80256034_G;
typedef struct func_80256034_Cmd { s16 a; s32 b; f32 c; s16 d; } func_80256034_Cmd;
extern f32 func_8001EB64(s16);
#define func_8001EAD0 func_8001EAD0__func_80256034
extern f32 func_8001EAD0(s16);
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);
extern u8 D_8025DB6C[];
extern u8 D_80259734[];
extern u8 D_80259748[];

void func_80256034(func_80251820_Ctx *arg0, func_80251820_Node **arg1) {
    s16 a;
    s32 i;
    f32 s;
    f32 r;
    func_80256034_Cmd cmd;
    s32 t;
    s32 padA;
    s32 padB;
    f32 v;
    f32 ang;
    f32 pad2;

    t = arg0->unk92++;
    func_8011AAF4(D_8025DB6C, 0x57F, arg0, 0, 2, 0.25f, -60.0f, 20.0f, 17.0f, 4294967296.0f, -83.0f, 10.0f, -6.0f, 0.0f, 55.0f, -1, -1);
    if (t == 8) {
        func_80005670(arg0, D_80259734);
        func_80005670(arg0, D_80259748);
    }
    (*arg1)->unk22 = 0;
    if (t == 0x72) {
        func_80133980(0x13C);
        for (i = 0; i != 0x20; i++) {
            ang = func_8012C6B4(0x2000);
            r = func_8012C6B4(0x1F4) / 100.0;
            pad2 = func_8001EAD0(a = ang), s = func_8001EB64(a);
#define func_80256034_P (((func_80256034_G *)D_801BBBF0)->unkE0->unk2C)
            v = func_8012C6B4(0x28) / 10.0 + 4.0;
            func_80380F94(pad2 * r + func_80256034_P->unk4, func_80256034_P->unk8 + 12.0f, s * r + func_80256034_P->unkC, 0.0f, v, 0.0f, 8);
#undef func_80256034_P
        }
    }
    if (t >= 0xB4) {
        cmd.a = 0x1100;
        cmd.b = 0x0348007A;
        cmd.d = 0xF;
        cmd.c = 10.0f;
        func_801C2F0C(5, &cmd);
        func_80133980(0x13D);
        func_800058DC(arg0, func_80256308);
    }
}
#undef func_8001EAD0
#define func_80251820_Args func_80254B3C_Args
#define func_80251820_Ctx func_80254B3C_Ctx
#define func_80251820_Node func_80254B3C_Node


void func_80256308(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


/* hh-block asm/nonmatchings/file017/80253A80/_mrg_keep_712955637d960f74.s {"functions":["func_80256314"],"rodata":[[".late_rodata","asm/nonmatchings/file017/80253A80/func_802556EC.s","D_8025DC1C"],[".late_rodata","asm/nonmatchings/file017/80253A80/func_8025584C.s","D_8025DC20"],[".late_rodata","asm/nonmatchings/file017/80253A80/func_8025584C.s","D_8025DC28"],[".late_rodata","asm/nonmatchings/file017/80253A80/func_80255CA0.s","D_8025DC30"],[".late_rodata","asm/nonmatchings/file017/80253A80/func_80255CA0.s","D_8025DC38"],[".late_rodata","asm/nonmatchings/file017/80253A80/func_80255CA0.s","D_8025DC40"],[".late_rodata","asm/nonmatchings/file017/80253A80/func_80256314.s","D_8025DC48"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file017/80253A80/_mrg_keep_712955637d960f74.s")

#define func_80256590 func_80256590__func_802564DC

typedef struct func_802564DC_StructB {
    u8 pad0[8];
    f32 unk8;
    u8 pad1[0x3F];
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_802564DC_StructB;

typedef struct func_802564DC_StructA {
    u8 pad0[0x30];
    func_802564DC_StructB *unk30;
} func_802564DC_StructA;

void func_80256590(s32 arg0, void **arg1);

void func_802564DC(s32 arg0, func_802564DC_StructA **arg1) {
    (*arg1)->unk30->unk8 = *(f32 *)(D_8025DE20 + 0x9C) + 43.0f;
    (*arg1)->unk30->unk4C = D_801BBBF0[0x208];
    (*arg1)->unk30->unk4D = D_801BBBF0[0x209];
    (*arg1)->unk30->unk4E = D_801BBBF0[0x20A];
    (*arg1)->unk30->unk4B += 2;
    if ((s32) (*arg1)->unk30->unk4B >= 0xFE) {
        (*arg1)->unk30->unk4B = 0xFF;
        func_800058DC((void *) arg0, (void *) func_80256590);
    }
}
#undef func_80256590


typedef struct func_80256590_StructB {
    u8 pad0[8];
    f32 unk8;
    u8 pad1[0x3F];
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_80256590_StructB;

typedef struct func_80256590_StructA {
    u8 pad0[0x30];
    func_80256590_StructB *unk30;
} func_80256590_StructA;


void func_80256590(s32 arg0, void **arg1) {
    (*(func_80256590_StructA **)arg1)->unk30->unk8 = *(f32 *)(D_8025DE20 + 0x9C) + 43.0f;
    (*(func_80256590_StructA **)arg1)->unk30->unk4C = D_801BBBF0[0x208];
    (*(func_80256590_StructA **)arg1)->unk30->unk4D = D_801BBBF0[0x209];
    (*(func_80256590_StructA **)arg1)->unk30->unk4E = D_801BBBF0[0x20A];
    if (func_80133A24(0x13A) != 0) {
        (*(func_80256590_StructA **)arg1)->unk30->unk4B -= 2;
        if ((*(func_80256590_StructA **)arg1)->unk30->unk4B < 2) {
            func_80005700(arg0, arg1);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80253A80/func_80256650.s")

#define func_8001EAD0 func_8001EAD0__func_802567F0
#define func_802569D0 func_802569D0__func_802567F0
#define func_802569D0_Args func_802569D0_Args__func_802567F0
#define func_802569D0_Inner func_802569D0_Inner__func_802567F0
#define func_802569D0_Node func_802569D0_Node__func_802567F0
extern f32 func_8001EAD0(s16);
typedef struct func_802569D0_Inner {
    u8 pad0[0x4B];
    u8 unk4B;
} func_802569D0_Inner;
typedef struct func_802569D0_Node {
    u8 pad0[0x30];
    func_802569D0_Inner *unk30;
} func_802569D0_Node;
typedef struct func_802569D0_Args {
    func_802569D0_Node *unk0;
} func_802569D0_Args;
extern void func_802569D0(s32 arg0, func_802569D0_Args *arg1);
#define LP(p, l) LQ(p, l)
#define LQ(p, l) p##_##l
#define func_80254B3C_Ctx LP(CX, __LINE__)
#define func_80254B3C_Args LP(AX, __LINE__)
#define func_80254B3C_Node LP(NX, __LINE__)
typedef struct CXT CX_125, CX_126, CX_130, CX_184, CX_222, CX_250;
typedef struct AXT AX_145, AX_222, AX_284;
typedef struct NXT NX_250;
#undef func_80254B3C_Ctx
#undef func_80254B3C_Args
#undef func_80254B3C_Node

typedef struct func_802567F0_StructB {
    u8 pad[0x4A];
    u8 unk4A;
    u8 pad2[2];
    u8 unk4D;
} func_802567F0_StructB;
typedef struct func_802567F0_StructA {
    u8 pad[0x30];
    func_802567F0_StructB *unk30;
} func_802567F0_StructA;
typedef struct func_802567F0_Arg0 {
    u8 pad[0x90];
    u16 unk90;
} func_802567F0_Arg0;

void func_802567F0(func_802567F0_Arg0 *arg0, func_802567F0_StructA **arg1)
{
  s16 a;
  u16 t;
  t = arg0->unk90;
  t += 0;
  arg0->unk90 = t + 1;
  a = (t * 0x1E) % 8192;
  (*arg1)->unk30->unk4A = (u32) ((func_8001EAD0(a) * 127.0f) + 128.0f);
  (*arg1)->unk30->unk4D = (u32) ((func_8001EAD0(a) * 127.0f) + 128.0f);
  if (func_80133A24(0x138) != 0)
  {
    func_800058DC(arg0, func_802569D0);
  }
}
#undef LP
#undef LQ
#undef func_8001EAD0
#undef func_802569D0
#undef func_802569D0_Args
#undef func_802569D0_Inner
#undef func_802569D0_Node

#define LP(p, l) LQ(p, l)
#define LQ(p, l) p##_##l
#define func_80254B3C_Ctx LP(CX, __LINE__)
#define func_80254B3C_Args LP(AX, __LINE__)
#define func_80254B3C_Node LP(NX, __LINE__)
#define CX_125 CX_116
#define CX_126 CX_116
#define CX_130 CX_116
#define CX_184 CX_116
#define CX_222 CX_116
#define CX_250 CX_116
#define AX_145 AX_117
#define AX_222 AX_117
#define NX_250 NX_118
#undef func_80254B3C_Ctx
#undef func_80254B3C_Args
#undef func_80254B3C_Node

typedef struct func_802569D0_Inner {
    u8 pad0[0x4B];
    u8 unk4B;
} func_802569D0_Inner;
typedef struct func_802569D0_Node {
    u8 pad0[0x30];
    func_802569D0_Inner *unk30;
} func_802569D0_Node;
typedef struct func_802569D0_Args {
    func_802569D0_Node *unk0;
} func_802569D0_Args;

void func_802569D0(s32 arg0, func_802569D0_Args *arg1) {
    func_802569D0_Inner *temp_v0;

    temp_v0 = arg1->unk0->unk30;
    temp_v0->unk4B = (u8) (temp_v0->unk4B - 2);
    if ((s32) arg1->unk0->unk30->unk4B < 2) {
        func_80005700(arg0, (void **) arg1);
    }
}
#undef LP
#undef LQ
#undef CX_125
#undef CX_126
#undef CX_130
#undef CX_184
#undef CX_222
#undef CX_250
#undef AX_145
#undef AX_222
#undef NX_250

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80253A80/func_80256A1C.s")


struct func_80256BC4_StructInner {
    u8 pad0[0x1C];
    f32 unk1C;
    u8 pad1[0x2B];
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
};

struct func_80256BC4_StructOuter {
    u8 pad0[0x30];
    struct func_80256BC4_StructInner *unk30;
};

struct func_80256BC4_StructArg0 {
    u8 pad0[0x90];
    u16 unk90;
};


void func_80256BC4(struct func_80256BC4_StructArg0 *arg0, struct func_80256BC4_StructOuter **arg1) {
    f64 temp_fv0;
    struct func_80256BC4_StructArg0 *var_a2 = arg0;
    struct func_80256BC4_StructInner *var_v0;
    extern void func_80005700();
    extern s32 func_80133A24();

    var_a2->unk90 = var_a2->unk90 + 1;
    var_v0 = (*arg1)->unk30;
    temp_fv0 = var_v0->unk1C;
    if (temp_fv0 < 0.1) {
        var_v0->unk1C = temp_fv0 + 0.0008;
        var_v0 = (*arg1)->unk30;
    }
    var_v0->unk4C = D_801BBBF0[0x208];
    (*arg1)->unk30->unk4D = D_801BBBF0[0x209];
    (*arg1)->unk30->unk4E = D_801BBBF0[0x20A];
    if (func_80133A24(0x139, arg1) != 0) {
        var_v0 = (*arg1)->unk30;
        var_v0->unk4B = var_v0->unk4B - 2;
        if ((s32) (*arg1)->unk30->unk4B < 2) {
            func_80005700(var_a2, arg1);
        }
    }
}

#define func_80256EA8 func_80256EA8__func_80256CB0
void func_80256EA8(s32 arg0, void **arg1);

typedef struct func_80256CB0_StructI {
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
    u32 unk24;
    u8 pad28[8];
    u32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_80256CB0_StructI;
typedef struct func_80256CB0_StructM {
    u8 pad0[0x30];
    func_80256CB0_StructI *unk30;
} func_80256CB0_StructM;
typedef struct func_80256CB0_StructA {
    u8 pad0[0x90];
    u16 unk90;
} func_80256CB0_StructA;
typedef struct func_80256CB0_StructP {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_80256CB0_StructP;
typedef struct func_80256CB0_StructB {
    u8 pad0[0x2C];
    func_80256CB0_StructP *unk2C;
} func_80256CB0_StructB;
typedef struct func_80256CB0_StructG {
    u8 pad0[0xE0];
    func_80256CB0_StructB *unkE0;
} func_80256CB0_StructG;


void func_80256CB0(func_80256CB0_StructA *arg0, func_80256CB0_StructM **arg1) {
    register f32 k;
    struct { s32 a[3]; } sp28;

    *(func_80257B10_V *)&sp28 = D_80164F40;
    sp28.a[1] = 0x80000300;
    func_80005E44(arg0, &sp28);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 2);
    func_8012D814(arg0, 0x4B1, 0, 0x3F800000, 1);
    k = 0.280000001f;
    (*arg1)->unk30->unk24 |= 0x300;
    (*arg1)->unk30->unk30 = (u32)D_802599D0 | 0x40000000;
    (*arg1)->unk30->unk4 = ((func_80256CB0_StructG *)D_801BBBF0)->unkE0->unk2C->unk4;
    (*arg1)->unk30->unk8 = ((func_80256CB0_StructG *)D_801BBBF0)->unkE0->unk2C->unk8 + 0.1;
    (*arg1)->unk30->unkC = ((func_80256CB0_StructG *)D_801BBBF0)->unkE0->unk2C->unkC;
    (*arg1)->unk30->unk10 = 0x1800;
    (*arg1)->unk30->unk12 = 0;
    (*arg1)->unk30->unk14 = 0;
    (*arg1)->unk30->unk18 = k;
    (*arg1)->unk30->unk1C = k;
    (*arg1)->unk30->unk20 = k;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4B = 0xFF;
    (*arg1)->unk30->unk4C = 0xFF;
    (*arg1)->unk30->unk4D = 0xB4;
    (*arg1)->unk30->unk4E = 0;
    arg0->unk90 = 0;
    func_800058DC(arg0, func_80256EA8);
}
#undef func_80256EA8


struct func_80256EA8_Inner {
    u8 pad[0x4B];
    u8 unk4B;
};

struct func_80256EA8_Outer {
    u8 pad[0x30];
    struct func_80256EA8_Inner *unk30;
};

void func_80256EA8(s32 arg0, void **arg1) {
    struct func_80256EA8_Inner *temp;
    extern void func_80005700();

    if (func_80133A24(0x13C) != 0) {
        temp = ((struct func_80256EA8_Outer *) *arg1)->unk30;
        temp->unk4B = (u8) (temp->unk4B - 0x28);
        if ((s32) ((struct func_80256EA8_Outer *) *arg1)->unk30->unk4B < 0x28) {
            func_80005700(arg0);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80253A80/func_80256F0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80253A80/func_80257114.s")


struct func_80257418_Struct30 {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad1[0x4B - 0x24];
    u8 unk4B;
};

struct func_80257418_Struct0 {
    u8 pad0[0x30];
    struct func_80257418_Struct30 *unk30;
};

void func_80257418(s32 arg0, struct func_80257418_Struct0 **arg1) {
    struct func_80257418_Struct30 *temp_v0;
    f64 temp_f0;

    temp_f0 = 0.95;
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk18 = (f32) ((f64) temp_v0->unk18 * temp_f0);
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk20 = (f32) ((f64) temp_v0->unk20 * temp_f0);
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk1C = (f32) ((f64) temp_v0->unk1C + 0.001);
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4B = (u8) (temp_v0->unk4B - 8);
    if ((s32) (*arg1)->unk30->unk4B < 8) {
        func_80005700(arg0, (void **) arg1);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80253A80/func_802574C8.s")

#undef func_80251820_Args
#undef func_80251820_Ctx
#undef func_80251820_Node
#define func_80251820_Args func_80251820_Args__func_80257684
#define func_80251820_Ctx func_80251820_Ctx__func_80257684
#define func_80251820_Node func_80251820_Node__func_80257684
#define func_80256CB0_StructA func_80256CB0_StructA__func_80257684
#define func_80256CB0_StructI func_80256CB0_StructI__func_80257684
#define func_80256CB0_StructM func_80256CB0_StructM__func_80257684
typedef struct func_80251820_Ctx func_80251820_Ctx;
typedef struct func_80251820_Args func_80251820_Args;
typedef struct func_80251820_Node func_80251820_Node;
typedef struct func_80256CB0_StructA {
    u8 pad0[0x90];
    u16 unk90;
} func_80256CB0_StructA;
typedef struct func_80256CB0_StructI {
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
    u32 unk24;
    u8 pad28[8];
    u32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_80256CB0_StructI;
typedef struct func_80256CB0_StructM {
    u8 pad0[0x30];
    func_80256CB0_StructI *unk30;
} func_80256CB0_StructM;

void func_80257684(func_80256CB0_StructA *arg0, func_80256CB0_StructM **arg1) {
    func_80256CB0_StructI *inner;

    arg0->unk90 = arg0->unk90 + 1;
    inner = (*arg1)->unk30;
    if ((s32) inner->unk4B < 0xFC) {
        inner->unk4B = inner->unk4B + 4;
        inner = (*arg1)->unk30;
    }
    inner->unk8 = (f32) (*(f32 *) (D_8025DE20 + 0x9C) + 45.0f);
    (*arg1)->unk30->unk48 = D_801BBBF0[0x204];
    (*arg1)->unk30->unk49 = D_801BBBF0[0x205];
    (*arg1)->unk30->unk4A = D_801BBBF0[0x206];
    (*arg1)->unk30->unk4C = D_801BBBF0[0x208];
    (*arg1)->unk30->unk4D = D_801BBBF0[0x209];
    (*arg1)->unk30->unk4E = D_801BBBF0[0x20A];
    inner = (*arg1)->unk30;
    if ((f64) inner->unk18 < 0.1) {
        f64 step;
        step = 0.002;
        inner->unk18 = (f32) ((f64) inner->unk18 + step);
        inner = (*arg1)->unk30;
        inner->unk1C = (f32) ((f64) inner->unk1C + step);
        inner = (*arg1)->unk30;
        inner->unk20 = (f32) ((f64) inner->unk20 + step);
    }
}
#undef func_80251820_Args
#undef func_80251820_Ctx
#undef func_80251820_Node
#undef func_80256CB0_StructA
#undef func_80256CB0_StructI
#undef func_80256CB0_StructM
#define func_80251820_Args func_80254B3C_Args
#define func_80251820_Ctx func_80254B3C_Ctx
#define func_80251820_Node func_80254B3C_Node

#undef func_802577B4
#define ZQ(a, b) a##b
#define ZP(a, b) ZQ(a, b)

typedef struct func_802577B4_Inner {
    u8 pad0[0x12];
    s16 unk12;
    u8 pad14[0x8];
    f32 unk1C;
    u8 pad20[0x2B];
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
} func_802577B4_Inner;

typedef struct func_802577B4_Node {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_802577B4_Inner *unk30;
} func_802577B4_Node;

typedef struct func_802577B4_Arg1 {
    u8 pad0[0x10];
    func_802577B4_Node *unk10;
    func_802577B4_Node *unk14;
    func_802577B4_Node *unk18;
    func_802577B4_Node *unk1C;
    func_802577B4_Node *unk20;
    func_802577B4_Node *unk24;
} func_802577B4_Arg1;

typedef struct func_802577B4_Arg0 {
    u8 pad0[0x90];
    u16 unk90;
    u8 pad92[2];
    s16 unk94;
} func_802577B4_Arg0;

void func_802577B4(func_802577B4_Arg0 *arg0, func_802577B4_Arg1 *arg1) {
    func_802577B4_Inner *p;
    u8 v;
    f64 lim;
    f64 d;
    s32 m;

    p = arg1->unk10->unk30;
    p->unk12 = (s16)(p->unk12 + 0x5B) & 0x1FFF;
    if (func_80133A24(0x138) != 0) {
        p = arg1->unk10->unk30;
        d = p->unk1C;
        lim = 0.01;
        if (lim <= d) {
            p->unk1C = d * 0.9;
            if (arg1->unk10->unk30->unk1C < lim) {
                arg1->unk10->unk22 = 0;
            }
        }
    }
    p = arg1->unk14->unk30;
    p->unk12 = (s16)(p->unk12 + 0x5B) & 0x1FFF;
    arg1->unk18->unk30->unk4D++;
    if (func_80133A24(0x137) != 0) {
        arg1->unk18->unk30->unk4B += arg0->unk94;
        v = arg1->unk18->unk30->unk4B;
        if (v >= 0xF0 || v < 9) {
            arg0->unk94 = -arg0->unk94;
        }
    }
    p = arg1->unk1C->unk30;
    p->unk12 = (s16)(p->unk12 - 0x44) & 0x1FFF;
    m = arg0->unk90 % 90;
    if (!(m % 2)) {
        func_8012CF8C(arg0, &arg1->unk20->unk30->unk4C - 0xC, 0x2F8, 0xF);
    } else {
        func_8012CF8C(arg0, &arg1->unk20->unk30->unk4C - 0xC, 0x2F8, 0xE);
    }
    arg1->unk24->unk30->unk4C++;
    arg1->unk24->unk30->unk4D++;
}
#undef ZQ
#undef ZP
#define func_802577B4 func_802577B4__decl

#define func_8001EAD0 func_8001EAD0__func_8025799C
#define func_8001EB64 func_8001EB64__func_8025799C
#define func_8012C6B4 func_8012C6B4__func_8025799C
#define func_80380F94 func_80380F94__func_8025799C
extern f32 func_8001EB64(s16);
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);
#define HHCAT2(a, b) a##b
#define HHCAT(a, b) HHCAT2(a, b)
#define func_80254B3C_Ctx HHCAT(hhctx_, __LINE__)
#define func_80254B3C_Args HHCAT(hhargs_, __LINE__)
#define func_80254B3C_Node HHCAT(hhnode_, __LINE__)
typedef struct hhctx_125 hhctx_125;
typedef struct hhctx_126 hhctx_126;
typedef struct hhctx_130 hhctx_130;
typedef struct hhctx_179 hhctx_179;
typedef struct hhctx_211 hhctx_211;
typedef struct hhctx_239 hhctx_239;
typedef struct hhargs_145 hhargs_145;
typedef struct hhargs_211 hhargs_211;
typedef struct hhargs_291 hhargs_291;
typedef struct hhnode_239 hhnode_239;
#undef func_80254B3C_Ctx
#undef func_80254B3C_Args
#undef func_80254B3C_Node

typedef struct func_8025799C_In { u8 pad0[8]; f32 unk8; } func_8025799C_In;
typedef struct func_8025799C_Nd { u8 pad0[0x30]; func_8025799C_In *unk30; } func_8025799C_Nd;
typedef struct func_8025799C_A1 { u8 pad0[4]; func_8025799C_Nd *unk4; func_8025799C_Nd *unk8; } func_8025799C_A1;
typedef struct func_8025799C_A0 { u8 pad0[0x90]; u16 unk90; u8 pad92[6]; f32 unk98; f32 unk9C; f32 unkA0; } func_8025799C_A0;

extern f32 func_8001EAD0(s16);
extern s32 func_8012C6B4(s32);

void func_8025799C(func_8025799C_A0 *arg0, func_8025799C_A1 *arg1)
{
  f32 sp3C;
  s32 sp38;
  u8 pad[4];
  f32 sp30;
  sp38 = arg0->unk90++;
  if (func_80133A24(0x13A) == 0)
  {
    arg0->unk9C = (f32) ((((f64) func_8001EAD0(sp38 * 0x1E)) * 2.5) - 2.5);
  }
  arg1->unk4->unk30->unk8 = arg0->unk9C;
  arg1->unk8->unk30->unk8 = arg0->unk9C;
  sp3C = func_8012C6B4(0x2000);
  sp30 = func_8001EAD0((s32) sp3C);
  func_80380F94((sp30 * 7.0) + arg0->unk98, arg0->unk9C + 35.0f, (func_8001EB64((s32) sp3C) * 7.0) + arg0->unkA0, 0, 0.8f, 0.0, 5);
}
#undef HHCAT2
#undef HHCAT
#undef func_8001EAD0
#undef func_8001EB64
#undef func_8012C6B4
#undef func_80380F94

