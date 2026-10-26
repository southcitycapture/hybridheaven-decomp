#include "common.h"
#define LP(p,l) LQ(p,l)
#define LQ(p,l) p##_##l
extern void func_800058DC();
extern void func_80020718(s32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_801518D4(s32, s32, s32);
extern void func_801C2F0C(s32, void *);
extern s32 func_801C3044(void);
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
extern void func_802577B4(void *, void *);
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
