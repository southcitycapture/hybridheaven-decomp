#include "common.h"


typedef struct func_80030810_StructB {
    u8 pad[4];
    u32 (*fn)();
} func_80030810_StructB;

typedef struct func_80030810_StructA {
    func_80030810_StructB *vt;
    u8 pad[0x10];
    u32 u14;
} func_80030810_StructA;

typedef struct func_80030810_Cmd { u32 w0; u32 w1; } func_80030810_Cmd;

func_80030810_Cmd *func_80030810(func_80030810_StructA *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_80030810_Cmd *g;
    func_80030810_Cmd *_g;

    g = (func_80030810_Cmd *)arg0->vt->fn(arg0->vt, arg1, arg2, arg3, arg4);
    _g = g++; _g->w1 = (arg2 * 2) & 0xFFFF; _g->w0 = 0x08000000;
    _g = g++; _g->w0 = 0x0D000000; _g->w1 = 0x04400580;
    _g = g++; _g->w1 = (arg2 * 4) & 0xFFFF; _g->w0 = 0x08000000;
    _g = g++; _g->w0 = 0x06000000;
    g[-1].w1 = arg0->u14;
    return g;
}


typedef struct func_8003089C_Struct { s32 u0; u8 pad[0x10]; s32 u14; } func_8003089C_Struct;

s32 func_8003089C(func_8003089C_Struct *arg0, s32 arg1, s32 arg2) {
    switch (arg1) {
    case 1:
        arg0->u0 = arg2;
        break;
    case 6:
        arg0->u14 = arg2;
        break;
    }
    return 0;
}

