#include "context.h"
typedef struct func_8035A310_V {
    u8 pad0[0x33];
    u8 b7 : 1;
    u8 b6 : 1;
    u8 b5 : 1;
    u8 rest : 5;
    u8 pad1[0x32E - 0x34];
    s16 unk32E;
    s16 unk330;
} func_8035A310_V;
typedef struct func_8035A310_S2 { u8 pad[0x24]; struct { u8 pad[0x2C]; struct { u8 pad[0x34]; s32 unk34; } *u2C; } *u24; } func_8035A310_S2;
typedef struct func_8035A310_Arg { u8 pad[0xC]; func_8035A310_S2 *unkC; } func_8035A310_Arg;

void func_8035A310(func_8035A310_Arg *arg0, s32 arg1) {
    func_8035A310_V *v;
    if (D_801BBCCC == (s32)arg0->unkC) {
        v = (func_8035A310_V *)D_801BC03C;
    } else {
        v = (func_8035A310_V *)D_801BC3D8;
    }
    arg0->unkC->u24->u2C->unk34 = 0;
    v->unk32E = 0;
    v->unk330 = 0;
    v->b6 = 0;
    v->b5 = 0;
    func_80005700();
}
