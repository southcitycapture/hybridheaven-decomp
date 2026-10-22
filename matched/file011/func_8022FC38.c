#include "context.h"

typedef struct func_8022FC38_Struct {
    u8 pad0[4];
    s16 unk4;
    s16 unk6;
    u8 pad8[2];
    s16 unkA;
    u8 padC[0x30 - 0xC];
    u32 unk30_0 : 11;
    u32 unk30_11 : 2;
    u32 unk30_13 : 19;
    u8 pad34[0x38 - 0x34];
    u32 unk38_0 : 1;
    u32 unk38_1 : 2;
    u32 unk38_3 : 29;
    u8 pad3C[0x5E - 0x3C];
    u16 unk5E;
    u8 pad60[0x62 - 0x60];
    u16 unk62;
    u8 pad64[0x66 - 0x64];
    u16 unk66;
    u8 pad68[0xA6 - 0x68];
    u8 unkA6;
    u8 padA7[0x30E - 0xA7];
    u16 unk30E;
    u8 pad310[0x398 - 0x310];
    u8 unk398;
} func_8022FC38_Struct;

typedef struct func_8022FC38_E {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad38[0x74 - 0x38];
    u8 unk74;
    u8 unk75;
} func_8022FC38_E;

typedef struct func_8022FC38_N {
    u8 pad0[0x1C];
    s32 unk1C;
} func_8022FC38_N;

typedef struct func_8022FC38_M {
    u8 pad0[0x5C];
    func_8022FC38_N *unk5C;
} func_8022FC38_M;

typedef struct func_8022FC38_G {
    u8 pad0[0x2C];
    u16 unk2C;
    u8 pad2E[2];
    u16 unk30;
    u8 pad32[0xDC - 0x32];
    func_8022FC38_M *unkDC;
    u8 padE0[0xEC - 0xE0];
    func_8022FC38_M *unkEC;
    u8 padF0[0x444 - 0xF0];
    func_8022FC38_E *unk444;
    func_8022FC38_E *unk448;
} func_8022FC38_G;

#define GG ((func_8022FC38_G *)D_801BBBF0)

extern u16 func_8022559C(s32, func_8022FC38_Struct *, u8 *, u8 *);

void func_8022FC38(func_8022FC38_Struct *arg0) {
    u8 *other;
    s32 id;
    s32 r;
    u16 speed;
    func_8022FC38_E *e;
    func_8022FC38_E *t;
    s32 cnt;
    u16 d;
    u8 *base;

    base = (u8 *)arg0 - 0x44C;
    if (base == D_801BBBF0) {
        other = D_801BC3D8;
    } else {
        other = D_801BC03C;
    }
    id = (base == D_801BBBF0) ? GG->unkDC->unk5C->unk1C : GG->unkEC->unk5C->unk1C;
    e = (base == D_801BBBF0) ? GG->unk444 : GG->unk448;
    t = (func_8022FC38_E *)((base == D_801BBBF0) ? GG->unkDC : GG->unkEC);
    r = func_8022559C(id, arg0, D_801BBBF0, other);
    if (arg0->unkA6 & 0x40) {
        speed = 1;
    } else if (arg0->unk30_11 != 0) {
        speed = 1;
    } else if (arg0->unk38_1 == 1 || arg0->unk38_1 == 2 || ((func_8022FC38_Struct *)other)->unk38_1 == 2) {
        speed = -3;
    } else if (arg0->unk38_0 != 0) {
        speed = 2;
    } else if ((((u32)*(u16 *)((u8 *)arg0 + 0x32) >> 13) == 4 || r == 0x16 || r == 0x1B || r == 0x1C) &&
               ((t->unk36 != 0xF5 && t->unk36 != 0xF6 && t->unk36 != 0x56 && t->unk36 != 0x147 &&
                 t->unk36 != 0x5A && t->unk36 != 0x5B) || GG->unk2C == 10)) {
        speed = 8;
    } else {
        speed = 1;
    }
    if (arg0->unkA < 20) {
        speed += 2;
    }
    d = arg0->unk62 - arg0->unk6 / 100;
    if (GG->unk30 % speed == 0) {
        if ((arg0->unk66 += d) >= 10) {
            arg0->unk5E = 1;
            arg0->unk66 %= 10;
        } else {
            arg0->unk5E = 0;
        }
    } else {
        arg0->unk5E = 0;
    }
    cnt = arg0->unk398;
    if (cnt != 0 && arg0->unk6 < arg0->unk4 && e->unk74 == 0 && GG->unk2C != 10) {
        arg0->unk398 = cnt - 1;
        arg0->unk5E = 0;
        if (arg0->unk398 == 0) {
            arg0->unk5E = 1;
        }
    } else if (arg0->unk6 != 0 && arg0->unk6 < arg0->unk4 && arg0->unk6 % 100 == 0 && e->unk74 == 0 &&
               cnt == 0 && GG->unk2C != 10) {
        if (e->unk75 == 1) {
            arg0->unk398 = 0x1F;
        }
        if (e->unk75 == 3) {
            arg0->unk398 = 0xF;
        }
        if (e->unk75 == 0) {
            arg0->unk398 = 8;
        }
    }
    if (arg0->unk6 == arg0->unk4) {
        if (arg0->unk30E < 0xFFFF) {
            arg0->unk30E++;
        }
    }
}
