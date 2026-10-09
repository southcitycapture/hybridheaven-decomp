#include "context.h"

/* context.h declares D_801BC03C / D_801BC3D8 as u8 arrays, so access
   their fields through offsets instead of a struct type. */
extern u8 D_801BBBF0[];
extern void func_8022C0A0(s32 arg0);
extern void func_80231CEC(s32 arg0);
extern void func_80360818(s32 arg0, s32 arg1);

void func_80362DF4(s32 arg0, s32 arg1) {
    u8 *var_v1;
    u8 *var_v0;

    if (arg0 == *(s32 *) &D_801BBBF0[0xDC]) {
        var_v1 = D_801BC03C;
    } else {
        var_v1 = D_801BC3D8;
    }
    if (arg0 != *(s32 *) &D_801BBBF0[0xDC]) {
        var_v0 = D_801BC03C;
    } else {
        var_v0 = D_801BC3D8;
    }
    var_v1[0x392] = 0;
    if (var_v0[0x394] != 0) {
        if (arg0 == *(s32 *) &D_801BBBF0[0xDC]) {
            D_801BBBF0[0x1030] = 0;
        } else {
            D_801BBBF0[0x1030] = 1;
        }
        func_8022C0A0(arg0);
        if (var_v1[0x2D9] < 0xE) {
            var_v1[0x2D8] = 0;
        } else {
            var_v1[0x2D8] = 1;
        }
        var_v1[0x2DD] = 1;
        func_80231CEC(arg0);
        func_80360818(arg0, arg1);
    }
}
