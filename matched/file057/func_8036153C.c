#include "common.h"
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u16 func_80011590();


typedef struct func_8036153C_StructA {
    s32 unk0;
    u16 unk4;
    u16 unk6;
    u8 pad8[0x8];
    s32 *unk10;
    u8 pad14[4];
    s32 *unk18;
} func_8036153C_StructA;

typedef struct func_8036153C_StructB {
    s32 unk0;
    u16 unk4;
    u8 pad6[2];
    f32 unk8;
} func_8036153C_StructB;

typedef struct func_8036153C_StructC {
    u8 pad0[0x2F4];
    f32 unk2F4;
} func_8036153C_StructC;

typedef struct func_8036153C_Obj {
    u8 pad0[0x5C];
    u8 *unk5C;
} func_8036153C_Obj;
extern void *func_8035FFA8(void *);

#define b ((func_8036153C_StructB *)arg0)

f32 func_8036153C(func_8036153C_Obj *arg0) {
    u8 *t0;
    s32 v1;
    func_8036153C_StructC *c;
    func_8036153C_StructA *a;

    t0 = arg0->unk5C;
    if ((s32)arg0 == D_801BBCCC) {
        c = (func_8036153C_StructC *)D_801BC03C;
    } else {
        c = (func_8036153C_StructC *)D_801BC3D8;
    }
    a = func_8035FFA8(c);
    c->unk2F4 = 0.0f;
    arg0 = (func_8036153C_Obj *)(t0 + 0x1C);
    if (arg0) {}
    v1 = b->unk0;
    if (t0) {}
    if (v1 == *a->unk10) {
        if (b->unk4 < func_80011590((u32)((f32)a->unk4 * b->unk8) & 0xFFFF) - 1) {
            c->unk2F4 = 0.0f;
        } else {
            if (b->unk4 < func_80011590((u32)((f32)a->unk6 * b->unk8) & 0xFFFF)) {
                if (a->unk6 - a->unk4 > 0) {
                    c->unk2F4 = ((f64)(f32)b->unk4 - (f64)((f32)a->unk4 * b->unk8) * 1) / (f64)(f32)((f64)((f32)(a->unk6 - a->unk4) * b->unk8) * 1);
                } else {
                    c->unk2F4 = 0.5f;
                }
            } else {
                c->unk2F4 = 1.0f;
            }
        }
    } else if (v1 == *a->unk18) {
        if (b->unk4 < 2) {
            c->unk2F4 = 1.0 - (((f64)b->unk4 + 1.0) / 3.0);
        }
    }
    return c->unk2F4;
}
