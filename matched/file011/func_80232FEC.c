#include "common.h"
extern u8 D_801BBBF0[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
#include "ctx_probe.h"

typedef struct func_80232FEC_E {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad38[0x3D];
    u8 unk75;
} func_80232FEC_E;
typedef struct func_80232FEC_Ent {
    s16 x;
    s16 y;
    s16 z;
} func_80232FEC_Ent;
typedef struct func_80232FEC_P {
    u8 pad0[0xAA];
    func_80232FEC_Ent e[14];
    func_80232FEC_Ent f[20];
    u8 pad176[0x12];
    func_80232FEC_Ent g[37];
} func_80232FEC_P;
typedef struct func_80232FEC_G {
    u8 pad0[0xDC];
    func_80232FEC_E *unkDC;
    u8 padE0[0x364];
    func_80232FEC_E *unk444;
    func_80232FEC_E *unk448;
} func_80232FEC_G;
#define G_80232FEC ((func_80232FEC_G *)D_801BBBF0)

void func_80232FEC(func_80232FEC_E *self) {
    func_80232FEC_E *obj;
    func_80232FEC_P *p;
    u16 i;
    u16 a;
    u16 b;
    u16 c;
    u16 total;
    s32 type;
    s32 j;

    a = 0;
    b = 0;
    c = 0;
    if (self == G_80232FEC->unkDC) {
        obj = G_80232FEC->unk444;
    } else {
        obj = G_80232FEC->unk448;
    }
    if (self == G_80232FEC->unkDC) {
        p = (func_80232FEC_P *)D_801BC03C;
    } else {
        p = (func_80232FEC_P *)D_801BC3D8;
    }
    type = self->unk36;
    if (type == 0x29 || type == 0x2B || type == 0x11B || type == 0x11C || type == 0x58 || type == 0x59 || type == 0x2E || type == 0x31 || type == 0x32) {
        for (i = 0; i < 14; i++) {
            a += p->e[i].x;
        }
        for (i = 0; i < 20; i++) {
            j = i;
            b += p->f[j].x;
        }
        for (i = 0; i < 37; i++) {
            j = i;
            c += p->g[j].x;
        }
        total = a + b + c;
        if (total < 100) {
            obj->unk75 = 0;
            return;
        }
        if (b < a && c < a && a * 100 / total > 40) {
            obj->unk75 = 3;
            return;
        }
        if (a < b && c < b && b * 100 / total > 40) {
            obj->unk75 = 1;
            return;
        }
        if (a < c && b < c && c * 100 / total > 40) {
            obj->unk75 = 2;
            return;
        }
        obj->unk75 = 0;
    }
}
