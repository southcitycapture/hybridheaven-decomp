#include "context.h"

typedef struct func_80248280_StructB {
    u8 pad0[0x78];
    s16 unk78;
} func_80248280_StructB;
typedef struct func_80248280_StructV {
    u8 pad0[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
} func_80248280_StructV;
typedef struct func_80248280_StructG {
    u8 pad0[0x2C];
    func_80248280_StructV *unk2C;
} func_80248280_StructG;
typedef struct func_80248280_StructP {
    u8 pad0[0x24];
    struct func_80248280_StructP2 *unk24;
    s32 unk28;
    s32 unk2C;
    u8 pad30[0x2C];
    func_80248280_StructB *unk5C;
    u8 pad60[0x30];
    s16 unk90;
} func_80248280_StructP;
typedef struct func_80248280_StructQ {
    u8 pad0[0x2C];
    struct { u8 pad0[4]; f32 unk4; f32 unk8; s32 unkC; } *unk2C;
} func_80248280_StructQ;
extern func_80248280_StructG *D_801BBCD8;
extern func_80246E60_StructGlobal D_80258F30;
extern u8 D_8025C468[];
extern f32 D_8025C5D8;
extern void func_80127430(f32, f32, s32, s32, f32, f32);
extern u8 func_80248484[];

void func_80248280(func_80248280_StructP *arg0, s32 arg1) {
    func_80248280_StructB *sp5C;
    func_80248280_StructV *v;
    f32 a, b;
    s16 t;

    sp5C = arg0->unk5C;
    arg0->unk2C |= 0x80;
    v = D_801BBCD8->unk2C;
    if (v->unk30 < D_8025C71C) {
        a = -(v->unk30 - D_8025C71C);
    } else {
        a = v->unk30 - D_8025C71C;
    }
    if (v->unk38 < D_8025C724) {
        b = -(v->unk38 - D_8025C724);
    } else {
        b = v->unk38 - D_8025C724;
    }
    if (b + a > 50.0f) {
        func_8011AAF4(&D_8025C468, 0x5AE, arg0, 0, 1, 4.0f, v->unk30, v->unk34, v->unk38, 4294967296.0f, D_8025C71C, D_8025C720, D_8025C724, 0.0f, 35.0f, -1, -1);
    }
    if (func_80244AB0(arg0) == 0 && func_8012CE9C(arg1, sp5C, D_80258F30, 0xA) == 0) {
        func_80010550(arg1, sp5C);
        t = arg0->unk90;
        arg0->unk90 = t - 1;
        if (t == 0) {
            sp5C->unk78 = 1;
            arg0->unk2C &= ~0x80;
            arg0->unk90 = 0x28;
            func_80127430(((func_80248280_StructQ *)arg0->unk24)->unk2C->unk4, ((func_80248280_StructQ *)arg0->unk24)->unk2C->unk8, ((func_80248280_StructQ *)arg0->unk24)->unk2C->unkC, 0x6C9, D_8025C5D8, 1.0f);
            func_800058DC(arg0, func_80248484);
        }
    }
}
