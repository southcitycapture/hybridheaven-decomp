#include "context.h"

typedef struct func_80385208_Obj {
    u8 pad0[0xA4];
    s16 unkA4;
} func_80385208_Obj;

typedef struct func_80385208_Arg {
    u8 pad0[0xC];
    func_80385208_Obj *unkC;
    u8 pad1[0xA0];
    s16 unkB0;
} func_80385208_Arg;

typedef struct func_80385208_Globals {
    u8 pad0[0xA0];
    u16 unkA0;
    u8 pad1[6];
    u16 unkA8;
    u8 pad2[0x16];
    u16 unkC0;
    u8 pad3[6];
    u16 unkC8;
} func_80385208_Globals;

typedef struct func_80385208_Gfx {
    u8 pad0[0xA];
    u16 unkA;
} func_80385208_Gfx;

extern func_80385208_Globals D_801BBBF0;
extern func_80385208_Gfx D_801BBC8E;
extern u8 D_8038CB68[];
extern u8 D_8038CB74[];
extern u8 D_8038CB80[];
extern void func_8038540C();
extern void func_80020718(s32);
extern s32 func_8001B204(s32, s32, s32, void *, s32, s32, s32);

void func_80385208(func_80385208_Arg *arg0, void *arg1) {
    s16 var_v1;
    u32 var_v0;

    var_v0 = D_801BBBF0.unkA8;
    if ((var_v0 & 0x800) || (D_801BBBF0.unkC8 & 0x800)) {
        func_80020718(0x300);
        arg0->unkC->unkA4 -= 1;
        var_v1 = arg0->unkC->unkA4;
        if (var_v1 < 0) {
            arg0->unkC->unkA4 = 2;
            var_v1 = arg0->unkC->unkA4;
        }
        func_8001B204(0xD, 0x6A, (s16) ((var_v1 * 0xC) + 0x80), D_8038CB68, 1, 1, 8);
        var_v0 = D_801BBC8E.unkA;
    }
    if ((var_v0 & 0x400) || (D_801BBBF0.unkC8 & 0x400)) {
        func_80020718(0x300);
        arg0->unkC->unkA4 += 1;
        var_v1 = arg0->unkC->unkA4;
        if (var_v1 >= 3) {
            arg0->unkC->unkA4 = 0;
            var_v1 = arg0->unkC->unkA4;
        }
        func_8001B204(0xD, 0x6A, (s16) ((var_v1 * 0xC) + 0x80), D_8038CB74, 1, 1, 8);
    }
    if ((D_801BBBF0.unkA0 & 0x8000) || (D_801BBBF0.unkC0 & 0x8000)) {
        func_8001B204(0xD, 0x6A, (s16) ((arg0->unkC->unkA4 * 0xC) + 0x80), D_8038CB80, 1, 1, 4);
        func_80020718(0x104);
        arg0->unkB0 = 0x14;
        func_800058DC(arg0, (void *) func_8038540C);
    }
}
