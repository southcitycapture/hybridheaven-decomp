#include "common.h"
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern void func_8035AFEC();
void *func_8035FF0C(u8 arg0);

#undef func_8035AFEC

typedef struct func_80360090_StructB {
    u8 pad0[0x30];
    u32 pad:9;
    u32 mode:2;
} func_80360090_StructB;
typedef struct func_80360090_StructA {
    u8 pad0[0x58];
    f32 unk58;
    f32 unk5C;
    f32 unk60;
    f32 unk64;
} func_80360090_StructA;
typedef struct func_80360090_StructC {
    u8 pad0[1];
    u8 unk1;
    u8 pad2[0xA];
    f32 unkC;
} func_80360090_StructC;
typedef struct func_80360090_StructD {
    f32 a[3];
} func_80360090_StructD;
typedef struct func_80360090_StructE {
    func_80360090_StructD d[5];
} func_80360090_StructE;
typedef struct func_80360090_StructArg {
    u8 pad0[0x5C];
    func_80360090_StructA *unk5C;
} func_80360090_StructArg;
extern u8 func_8035FF38();
extern u8 D_803863B0[];
extern f64 D_8038A690;
extern f64 D_8038A698;
extern f64 D_8038A6A0;
extern f64 D_8038A6A8;
extern f64 D_8038A6B0;
extern f64 D_8038A6B8;

s32 func_80360090(void *arg0, u8 arg1) {
    func_80360090_StructB *b;
    func_80360090_StructA *a;
    u8 t;
    f32 v1;
    f32 v0;
    func_80360090_StructE sp28;
    s32 idx;

    if ((s32)arg0 == D_801BBCCC) {
        b = (func_80360090_StructB *)D_801BC03C;
    } else {
        b = (func_80360090_StructB *)D_801BC3D8;
    }
    a = ((func_80360090_StructArg *)arg0)->unk5C;
    sp28 = *(func_80360090_StructE *)D_803863B0;
    arg0 = func_8035FF0C(arg1);
    t = ((func_80360090_StructC *)arg0)->unk1;
    idx = t & 3;
    if (idx == 4) {
        v0 = a->unk64 / D_8038A690;
    } else if (idx == 0) {
        v0 = a->unk5C / D_8038A698;
    } else if (idx == 1) {
        v0 = a->unk58 / D_8038A6A0;
    } else {
        v0 = (a->unk60 * 100.0f) / D_8038A6A8;
    }
    if (b->mode == 3) {
        arg1 = func_8035FF38(arg1, a, t, b);
        arg0 = func_8035FF0C(arg1);
        t = ((func_80360090_StructC *)arg0)->unk1;
    }
    idx = t & 0xFF;
    v1 = (((func_80360090_StructC *)arg0)->unkC * v0) * D_8038A6B0;
    if (arg1 == 0x23) {
        idx = 3;
    }
    if (arg1 == 0x24) {
        v1 = ((func_80360090_StructC *)arg0)->unkC * D_8038A6B8;
    }
    if (((f64)((func_80360090_StructD *)&sp28)[idx].a[2] + (f64)v1 * 1.25) < (f64)*(f32 *)(D_801BC3D8 + 0x3A8)) {
        return 0;
    }
    if (((func_80360090_StructD *)&sp28)[idx].a[1] + v1 < *(f32 *)(D_801BC3D8 + 0x3A8)) {
        return 1;
    }
    if (((func_80360090_StructD *)&sp28)[idx].a[0] + v1 < *(f32 *)(D_801BC3D8 + 0x3A8)) {
        return 2;
    }
    return 3;
}
