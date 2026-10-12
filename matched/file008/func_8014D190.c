#include "context.h"

typedef struct func_8014D190_Struct {
    u8 pad0[0x92];
    u8 unk92;
    u8 pad1[0xA0 - 0x93];
    u16 unkA0;
    u16 unkA2;
} func_8014D190_Struct;

s32 func_80126880(s32 arg0);

void func_8014D190(func_8014D190_Struct *arg0, s32 arg1) {
    u16 var_v0;
    u8 *base;

    if (arg0->unk92 == 2) {
        var_v0 = arg0->unkA0;
    } else {
        var_v0 = arg0->unkA2;
    }
    if (func_80126880(var_v0 & 0xFFFF) != 0) {
        base = (u8 *) &D_801BBBF0;
        base[0x435] = (u8) (base[0x435] & 0xFFFE);
        func_800058DC(arg0, func_8014C72C);
    }
}
