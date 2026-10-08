#include "common.h"

void *func_8035FF0C(u8);
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];

u8 func_803626E0(s32 arg0) {
    u8 *var_v1;
    s32 temp_v0;
    u8 var_v1_2;

    if (arg0 != D_801BBCCC) {
        var_v1 = D_801BC03C;
    } else {
        var_v1 = D_801BC3D8;
    }
    temp_v0 = var_v1[0x2D8];
    if (temp_v0 == 0 || temp_v0 == 1 || temp_v0 == 0xA || temp_v0 == 9) {
        var_v1_2 = ((u8 *)func_8035FF0C(var_v1[0x2D9]))[3];
    } else {
        var_v1_2 = 4;
    }
    return var_v1_2;
}
