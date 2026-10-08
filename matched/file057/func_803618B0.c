#include "common.h"

extern void func_8036153C(void);
extern void func_8036CA40(void);
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];

void func_803618B0(s32 arg0) {
    u8 *var_v0;

    if (arg0 == D_801BBCCC) {
        var_v0 = D_801BC03C;
    } else {
        var_v0 = D_801BC3D8;
    }
    if (var_v0[0x2D8] == 8) {
        func_8036CA40();
        return;
    }
    func_8036153C();
}
