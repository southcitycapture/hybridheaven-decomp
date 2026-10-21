#include "context.h"
typedef struct func_80257F34_Struct_In {
    u8 pad0[8];
    f32 unk8;
    u8 padC[0x3F];
    u8 unk4B;
} func_80257F34_Struct_In;
typedef struct func_80257F34_Struct_Node {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_80257F34_Struct_In *unk30;
} func_80257F34_Struct_Node;
typedef struct func_80257F34_Struct_A1 {
    u8 pad0[8];
    func_80257F34_Struct_Node *unk8;
} func_80257F34_Struct_A1;
typedef struct func_80257F34_Struct_A0 {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[6];
    f32 unk44;
} func_80257F34_Struct_A0;
typedef struct func_80257F34_Struct_V {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
} func_80257F34_Struct_V;
typedef struct func_80257F34_Struct_G {
    u8 pad0[0x2C];
    func_80257F34_Struct_V *unk2C;
} func_80257F34_Struct_G;
typedef struct func_80257F34_Struct_M { s16 a; s32 b; f32 c; s16 d; } func_80257F34_Struct_M;
extern func_80257F34_Struct_G *D_801BBCD0;
extern f32 D_8025DD88;
extern f64 D_8025DD90;
extern u8 D_8025DCE0[];
extern u8 func_80258268[];
extern s32 D_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

void func_80257F34(func_80257F34_Struct_A0 *arg0, func_80257F34_Struct_A1 *arg1) {
    s16 a0;
    func_80257F34_Struct_V *v;
    func_80257F34_Struct_In *p;
    func_80257F34_Struct_Node *n;
    func_80257F34_Struct_M m;
    f32 sp8C;
    s32 sp88;
    s32 sp84;

    sp88 = arg0->unk3C;
    arg0->unk3C = arg0->unk3C + 1;
    func_801C42DC(0, 0, 0, 0xFF, 0xB4, 0xDC, 0x14, 0x1E, -0x1E, 0x96, 0xA0, 0x46, 0x6E, 0x50, -0x46, 0, 0, 0, 0xB9, 5.0f, D_8025DD88, 2, 3.0f);
    if ((func_801C2FF8() != 0) && (func_801C3044() == 0)) {
        m.a = 0x1100;
        m.b = 0x01680041;
        m.d = 0xA;
        m.c = 3.0f;
        func_801C2F0C(5, &m);
    }
    v = D_801BBCD0->unk2C;
    sp84 = func_8001EF38(v->unk4, v->unkC);
    sp8C = (f32)((s16)(arg0->unk3C * 10 + sp84 - 0x1C7) & 0x1FFF);
    a0 = (s16)(s32)sp8C;
    D_8011AAF4(D_8025DCE0, 0x15A, arg0, 0, 1, 0.0f, (func_8001EAD0(a0) * 20.0f) + D_801BBCD0->unk2C->unk4, 4.0f, (func_8001EB64(a0) * 20.0f) + D_801BBCD0->unk2C->unkC, 0.0f, func_8001EAD0(a0 = (s16)(s32)(sp8C - 2048.0f) & 0x1FFF) * 30.0f, 80.0f, func_8001EB64(a0) * 30.0f, 0.0f, 55.0f, -1, -1);
    arg1->unk8->unk30->unk8 += arg0->unk44;
    arg0->unk44 = (f32)((f64)arg0->unk44 - D_8025DD90);
    if (sp88 >= 0x2D) {
        arg1->unk8->unk30->unk4B -= 6;
        n = arg1->unk8;
        if (n->unk30->unk4B < 6) {
            n->unk22 = 0;
            func_80133980(0x137);
            func_800058DC(arg0, func_80258268);
        }
    }
}
