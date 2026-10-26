#include "common.h"
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
extern void func_80020718(s32);
extern s32 func_8012C6B4(s32);
extern void func_801518D4(s32, s32, s32);
extern void func_801C2F0C(s32, void *);
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
