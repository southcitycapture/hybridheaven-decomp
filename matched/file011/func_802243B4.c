#include "common.h"
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];


typedef struct func_802243B4_StructC {
    u8 pad0[0x12];
    s16 unk12;
} func_802243B4_StructC;

typedef struct func_802243B4_StructB {
    u8 pad0[0x2C];
    func_802243B4_StructC *unk2C;
} func_802243B4_StructB;

typedef struct func_802243B4_StructA {
    u8 pad0[0x24];
    func_802243B4_StructB *unk24;
    u8 pad28[0xE];
    u16 unk36;
} func_802243B4_StructA;

typedef struct func_802243B4_StructD {
    u8 pad0[0x10];
    f32 unk10;
    f32 unk14;
} func_802243B4_StructD;

#define SPD(p) ((s14 > 0.0 ? s14 : (p)->unk10))
#define RAW(p) ((s16)(s32)(SPD(p) * 128.0f))
#define WRAP(x) (((x) & 0x1000) ? (((x) & 0x1FFF) - 0x2000) : ((x) & 0x1FFF))

s32 func_802243B4(s32 arg0, s16 arg1) {
    func_802243B4_StructD *p;
    func_802243B4_StructA *o;
    func_802243B4_StructC *m;
    s16 w;
    s16 a;
    s32 r;
    s32 t;
    f32 s14;

    o = (func_802243B4_StructA *)arg0;
    if (arg0 == D_801BBCCC) {
        p = (func_802243B4_StructD *)D_801BC03C;
    } else {
        p = (func_802243B4_StructD *)D_801BC3D8;
    }
    m = o->unk24->unk2C;
    w = WRAP((s16)(m->unk12 - arg1));
    s14 = p->unk14;
    r = 0;
    a = (WRAP(RAW(p)) < 0) ? -WRAP(RAW(p)) : WRAP(RAW(p));
    if (w < -0xE00) {
        r = 3;
    } else if (w < -0x600) {
        r = 2;
    } else if (w < -a / 2) {
        r = 1;
    } else if (w > 0xE00) {
        r = 6;
    } else if (w > 0x600) {
        r = 5;
    } else if (w > a / 2) {
        r = 4;
    }
    if (o->unk36 == 0x11D || o->unk36 == 0xF6 || o->unk36 == 0xF4) {
        t = r;
        if (t >= 4) {
            r = 4;
        } else {
            r = r * 1;
            if (t > 0) {
                r = 1;
            }
        }
    }
    return r;
}
