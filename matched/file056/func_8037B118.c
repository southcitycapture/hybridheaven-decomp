#include "context.h"

typedef struct func_8037B118_StructV { s32 w0; s32 w4; s32 w8; } func_8037B118_StructV;
typedef struct func_8037B118_StructP { u8 pad[0x1C]; func_8037B118_StructV v; } func_8037B118_StructP;
typedef struct func_8037B118_StructA { u8 pad[0x5C]; func_8037B118_StructP *p; } func_8037B118_StructA;
typedef struct func_8037B118_StructV2 { s32 w0; u16 h4; u16 h6; s32 w8; } func_8037B118_StructV2;

extern s32 func_80020DAC(s32);
extern void func_801DFAA4(void *, s32);
extern void func_8013A28C(s32, func_8037B118_StructV);
extern u16 D_8017DC42;

void func_8037B118(func_8037B118_StructA *arg0, s32 arg1) {
    func_8037B118_StructP *sp24;
    func_8037B118_StructV *v;
    u16 sp1E;
    extern s32 func_80010550();
    extern void func_80020744(s32);
    extern s8 D_8038A93C;
    extern void func_8037B86C();

    sp24 = arg0->p;
    v = &sp24->v;
    sp1E = func_80010550(arg1, sp24);
    if (func_8037B9F0((func_8037B9F0_StructB *)arg0) == 0) {
        if (((func_8037B118_StructV2 *)v)->h4 >= 0xA) {
            if (func_80020DAC(0x30C) == 0 && func_80020DAC(0x30D) == 0 && func_80020DAC(0x30E) == 0) {
                func_801DFAA4(arg0, 1);
            }
        }
        if (sp1E != 0) {
            if (D_8017DC42 > 0) {
                v->w0 = 0x01900077;
                ((func_8037B118_StructV2 *)v)->h4 = 0;
                ((func_8037B118_StructV2 *)v)->h6 = 0;
                func_8013A28C(arg1, *v);
                func_800058DC(arg0, func_8037AA80);
                return;
            }
            D_8038A93C = 0;
            func_80020744(0xA);
            func_800058DC(arg0, func_8037B86C);
        }
    }
}
