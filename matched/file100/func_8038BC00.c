#include "context.h"
extern struct func_8038BDC0_Glob D_801BBBF0;
extern s32 D_8038DB50;
extern s32 D_8038DB54;
void func_801BF6C4(s32 arg0);
void func_8038BE98(f32 arg0);
s32 func_8038C548(s32 arg0, s32 arg1);

extern s32 D_8038D8EC;
extern s32 D_8038D8F0;
extern s32 D_8038DB48;
extern s32 D_8038DB4C;
extern f32 D_8038DCF0;
extern s32 D_8038E070;

void func_8038BC00(void) {
    s32 *var_v0;
    s32 i;

    D_8038D8EC = 0;
    D_8038DB48 = 0;
    D_8038DB4C = 0;
    func_8038C548(D_8038DB50, D_8038DB54);
    func_801BF6C4(0);
    D_8038D8F0 = 0;
    for (i = 0; i < 2; i++) {
        var_v0 = &D_8038E070 + i * 16;
        var_v0[4] = 0;
        var_v0[5] = 0;
        var_v0[6] = 0;
        var_v0[7] = 0;
        var_v0[8] = 0;
        var_v0[9] = 0;
        var_v0[10] = 0;
        var_v0[11] = 0;
        var_v0[12] = 0;
        var_v0[13] = 0;
        var_v0[14] = 0;
        var_v0[15] = 0;
        var_v0[0] = 0;
        var_v0[1] = 0;
        var_v0[2] = 0;
        var_v0[3] = 0;
    }
    *(f32 *)((u8 *)&D_801BBBF0 + 0x29C) = 10.0f;
    *(f32 *)((u8 *)&D_801BBBF0 + 0x2A0) = 2000.0f;
    func_8038BE98(D_8038DCF0);
    D_8038D8EC = 1;
}
