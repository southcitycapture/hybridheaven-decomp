#include "common.h"
struct func_8024A434_Sub {
    u8 pad[0x40];
    f32 unk40;
    u8 pad2[4];
    f32 unk48;
};
struct func_8024A434_StructBBF0 {
    u8 pad[0xDC];
    struct func_8024A434_Sub *unkDC;
};
extern struct func_8024A434_StructBBF0 D_801BBBF0;
extern void *D_8025A2B0;
typedef struct func_8024A120_G {
    u8 pad[0x1E8];
    f32 unk1E8;
    f32 unk1EC;
    f32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
} func_8024A120_G;
#define GG ((func_8024A120_G *)&D_801BBBF0)
extern void func_800058DC(void *, void *);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern void func_80133980(s32);
extern void func_801C2F0C(s32 arg0, void *arg1);
void func_8024965C(s32 arg0, s32 arg1);

extern void func_80005700(void *);
extern s32 func_8012C6B4(s32);
extern s32 func_801C3044(void);
extern void func_801DFAA4(void *, s32);
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);
extern u8 D_80258F10[];
extern u8 D_80258F50[];
extern f64 D_80259150;
extern f32 D_80259158;
extern f64 D_80259160;
extern f64 D_80259168;
extern f32 D_80259170;

typedef struct func_80248F7C_S3 {
    u8 pad0[4];
    f32 f4;
    f32 f8;
    f32 fC;
    s16 h10;
    s16 h12;
    s16 h14;
} func_80248F7C_S3;
typedef struct func_80248F7C_S2 {
    u8 pad0[0x22];
    u8 b22;
    u8 pad23[0xD];
    func_80248F7C_S3 *unk30;
} func_80248F7C_S2;
typedef struct func_80248F7C_A1 {
    s32 unk0;
    func_80248F7C_S2 *unk4;
    func_80248F7C_S2 *unk8;
} func_80248F7C_A1;
typedef struct func_80248F7C_A0 {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[0x56];
    f32 f94;
    f32 f98;
} func_80248F7C_A0;
typedef struct func_80248F7C_N {
    u8 pad0[0x2C];
    func_80248F7C_S3 *unk2C;
} func_80248F7C_N;
typedef struct func_80248F7C_G {
    u8 pad0[0xDC];
    void *unkDC;
    func_80248F7C_N *unkE0;
    u8 padE4[0x104];
    f32 f1E8, f1EC, f1F0, f1F4, f1F8, f1FC;
    u8 pad200[4];
    u8 b204, b205, b206, b207, b208, b209, b20A;
} func_80248F7C_G;
typedef struct func_80248F7C_L {
    s16 a;
    s32 b;
    f32 c;
    s16 d;
    u8 pad[0x10];
} func_80248F7C_L;
#define GG ((func_80248F7C_G *)&D_801BBBF0)

void func_80248F7C(func_80248F7C_A0 *arg0, func_80248F7C_A1 *arg1) {
    func_80248F7C_L l;
    s32 t;

    t = arg0->unk3C++;
    if (arg1->unk4->unk30->f8 > -300.0f) {
        arg1->unk4->unk30->f8 += arg0->f94;
        arg0->f94 -= D_80259150;
        arg1->unk4->unk30->h10 += 0x111;
        arg1->unk4->unk30->h14 += 0x2D;
        if (!(t % 8)) {
            func_80129FB8(arg1->unk4->unk30->f4, arg1->unk4->unk30->f8, arg1->unk4->unk30->fC, 0.0f, 0.0f, 0.0f, 0.0f, 0x4B, 0x4B, 0x4B, 0x32, 0x32, 0x32, 0x50, -2, D_80259158, 0xC, 0);
        }
    }
    if (arg1->unk8->unk30->f8 > -300.0f) {
        arg1->unk8->unk30->f8 += arg0->f98;
        arg0->f98 -= D_80259160;
        arg1->unk8->unk30->h10 -= 0x111;
        arg1->unk8->unk30->h14 -= 0x2D;
        if (t % 8 == 4) {
            func_80129FB8(arg1->unk8->unk30->f4, arg1->unk8->unk30->f8, arg1->unk8->unk30->fC, 0.0f, 0.0f, 0.0f, 0.0f, 0x4B, 0x4B, 0x4B, 0x32, 0x32, 0x32, 0x50, -2, func_8012C6B4(0xA) / 100.0 + D_80259168, 0xC, 0);
        }
    }
    if (t == 0) {
        func_80129FB8(100.0f, -170.0f, -260.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0xFF, 0xFF, 0xFF, 0xD4, 0x18, 0xDC, -8, D_80259170, 3, 0);
        func_80380F94(100.0f, -170.0f, -260.0f, 0.0f, 0.0f, 0.0f, 0xF);
        GG->b204 = 0;
        GG->b205 = 0;
        GG->b206 = 0;
        GG->b207 = 0xFF;
        GG->b208 = 0;
        GG->b209 = 0;
        GG->b20A = 0;
        func_80380F94(100.0f, -170.0f, -260.0f, 0.0f, 0.0f, 0.0f, 0xB);
    }
    if (t < 0x18 && !(t % 2)) {
        func_80380F94(func_8012C6B4(0x3C) + 0x46, func_8012C6B4(0x1E) - 0xC8, func_8012C6B4(0x3C) - 0x122, 0.0f, 0.0f, 0.0f, 0x1E);
    }
    if (t == 0x1E || t == 0x28) {
        func_801DFAA4(GG->unkDC, 1);
    }
    if (t == 8) {
        GG->f1E8 = GG->unkE0->unk2C->f4;
        GG->f1EC = GG->unkE0->unk2C->f8 + 15.0f;
        GG->f1F0 = GG->unkE0->unk2C->fC + 120.0f;
        GG->f1F4 = GG->unkE0->unk2C->f4;
        GG->f1F8 = GG->unkE0->unk2C->f8 + 13.0f;
        GG->f1FC = GG->unkE0->unk2C->fC;
        func_8011AAF4(D_80258F10, 0x282, arg0, 0, 1, 0.0f, GG->f1E8, GG->f1EC, GG->f1F0, 0.0f, GG->f1F4, GG->f1F8, GG->f1FC, 0.0f, 35.0f, -1, -1);
        l.a = 0;
        l.b = 0x0410002A;
        l.c = 2.0f;
        func_801C2F0C(4, &l);
        GG->unkE0->unk2C->h12 = 0x1000;
        func_80005700(D_8025A2B0);
    }
    if (t >= 0x3A) {
        if (t == 0x3A) {
            l.a = 0;
            l.b = 0x01900077;
            l.c = 1.0f;
            func_801C2F0C(4, &l);
            return;
        }
        if (t != 0x3B && func_801C3044() == 0) {
            arg1->unk4->b22 = 0;
            arg1->unk8->b22 = 0;
            func_8011AAF4(D_80258F50, 0x2A0, arg0, 2, 1, 0.0f, GG->f1E8, GG->f1EC, GG->f1F0, 0.0f, GG->f1F4, GG->f1F8, GG->f1FC, 0.0f, 35.0f, -1, -1);
            func_80133980(0x72);
            l.a = 0;
            l.b = 0x01680041;
            l.d = 0xF;
            l.c = 1.0f;
            func_801C2F0C(3, &l);
            func_800058DC(arg0, func_8024965C);
        }
    }
}
