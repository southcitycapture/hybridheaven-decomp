#include "common.h"
extern u8 D_801BBBF0[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern s32 func_8001EF38(f32, f32, void *);
typedef struct func_8035DB6C_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_8035DB6C_StructB;
typedef struct func_8035DB6C_StructA {
    u8 pad0[0x2C];
    func_8035DB6C_StructB *unk2C;
} func_8035DB6C_StructA;
typedef struct func_8035DB6C_StructO {
    u8 pad0[0x24];
    func_8035DB6C_StructA *unk24;
} func_8035DB6C_StructO;
void func_8035DB6C(func_8035DB6C_StructO *arg0, s16 arg1, f32 arg2, f32 arg3, u8 arg4);


typedef struct func_8035DD80_StructF {
    u8 pad0[0x58];
    f32 unk58;
    f32 unk5C;
} func_8035DD80_StructF;
typedef struct func_8035DD80_StructLeaf {
    u8 pad0[0x12];
    s16 unk12;
} func_8035DD80_StructLeaf;
typedef struct func_8035DD80_StructMid {
    u8 pad0[0x2C];
    func_8035DD80_StructLeaf *unk2C;
} func_8035DD80_StructMid;
typedef struct func_8035DD80_StructObj {
    u8 pad0[0x24];
    func_8035DD80_StructMid *unk24;
    u8 pad28[0x5C - 0x28];
    func_8035DD80_StructF *unk5C;
} func_8035DD80_StructObj;
typedef struct func_8035DD80_StructG {
    u8 pad0[0xDC];
    func_8035DD80_StructObj *unkDC;
    u8 padE0[0xEC - 0xE0];
    func_8035DD80_StructObj *unkEC;
    u8 padF0[0xB98 - 0xF0];
    s16 unkB98;
} func_8035DD80_StructG;
typedef struct func_8035DD80_StructB {
    u8 pad0[0x30];
    u32 pad30 : 9;
    u32 f30 : 2;
    u32 rest30 : 21;
    u32 pad34;
    u32 pad38 : 3;
    u32 a38 : 1;
    u32 b38 : 2;
    u32 rest38 : 26;
} func_8035DD80_StructB;
#define GD ((func_8035DD80_StructG *)D_801BBBF0)
extern void func_80224AC4(void *, s32);

void func_8035DD80(func_8035DD80_StructObj *arg0, u8 arg1) {
    func_8035DD80_StructObj *a3;
    func_8035DD80_StructF *a0;
    func_8035DD80_StructF *v1;
    func_8035DD80_StructB *a1;
    func_8035DD80_StructLeaf *t1;
    func_8035DD80_StructLeaf *a2;
    f32 fa1;
    f32 fa0;
    s16 ang;

    if (arg0 != GD->unkDC) {
        a3 = GD->unkDC;
    } else {
        a3 = GD->unkEC;
    }
    if (arg0 == GD->unkDC) {
        v1 = GD->unkDC->unk5C;
    } else {
        v1 = GD->unkEC->unk5C;
    }
    if (arg0 != GD->unkDC) {
        a0 = GD->unkDC->unk5C;
    } else {
        a0 = GD->unkEC->unk5C;
    }
    if (arg0 == GD->unkDC) {
        a1 = (func_8035DD80_StructB *)D_801BC03C;
    } else {
        a1 = (func_8035DD80_StructB *)D_801BC3D8;
    }
    t1 = arg0->unk24->unk2C;
    a2 = a3->unk24->unk2C;
    fa1 = (f32)((f64)(v1->unk5C + v1->unk58 + a0->unk5C + a0->unk58) / 27.0);
    ang = (s16)((arg0 != GD->unkDC ? 0 : 0x1000) + GD->unkB98) & 0x1FFF;
    if (a1->a38 == 1) {
        if (a1->b38 != 1) {
            fa0 = -0.5f;
            fa1 = (f32)((f64)fa1 * 5.5);
            if (a1->f30 == 3) {
                fa0 = fa0 * -1.0f;
            }
            ang = ang - func_8001EF38(fa0, fa1, a2);
            a2->unk12 = ang;
            t1->unk12 = a2->unk12;
        } else {
            return;
        }
    } else {
        fa0 = 0.0f;
        fa1 = (f32)((f64)fa1 * 7.8);
        func_80224AC4(arg0, 0);
        func_80224AC4(a3, 0);
    }
    func_8035DB6C((void *)arg0, ang, fa0, fa1, arg1);
}
