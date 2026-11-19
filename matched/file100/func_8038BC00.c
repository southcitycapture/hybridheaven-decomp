#include "common.h"
extern u8 D_801BBBF0[];
extern s32 D_8038D8EC;
extern s32 D_8038D8F0;
extern s32 D_8038DB48;
extern s32 D_8038DB4C;
extern s32 D_8038DB50;
extern s32 D_8038DB54;
extern s32 D_8038E070;
void func_801BF6C4(s32 arg0);
void func_8038BE98(f32 arg0);
s32 func_8038C548(s32 arg0, s32 arg1);


extern f32 D_8038DCF0__func_8038BC00;

void func_8038BC00(void) {
    s32 i;

    D_8038D8EC = 0;
    D_8038DB48 = 0;
    D_8038DB4C = 0;
    func_8038C548(D_8038DB50, D_8038DB54);
    func_801BF6C4(0);
    D_8038D8F0 = 0;
    for (i = 0; i < 2; i++) {
        (&D_8038E070)[i * 16 + 4] = 0;
        (&D_8038E070)[i * 16 + 5] = 0;
        (&D_8038E070)[i * 16 + 6] = 0;
        (&D_8038E070)[i * 16 + 7] = 0;
        (&D_8038E070)[i * 16 + 8] = 0;
        (&D_8038E070)[i * 16 + 9] = 0;
        (&D_8038E070)[i * 16 + 10] = 0;
        (&D_8038E070)[i * 16 + 11] = 0;
        (&D_8038E070)[i * 16 + 12] = 0;
        (&D_8038E070)[i * 16 + 13] = 0;
        (&D_8038E070)[i * 16 + 14] = 0;
        (&D_8038E070)[i * 16 + 15] = 0;
        (&D_8038E070)[i * 16] = 0;
        (&D_8038E070)[i * 16 + 1] = 0;
        (&D_8038E070)[i * 16 + 2] = 0;
        (&D_8038E070)[i * 16 + 3] = 0;
    }
    *(f32 *)(D_801BBBF0 + 0x29C) = 10.0f;
    *(f32 *)(D_801BBBF0 + 0x2A0) = 2000.0f;
    func_8038BE98(D_8038DCF0__func_8038BC00);
    D_8038D8EC = 1;
}
