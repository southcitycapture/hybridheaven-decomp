#include "context.h"
extern f32 D_801EDB94;
extern f32 D_801EDB98;
extern f32 D_801EDB9C;
extern f32 D_801EDBA0;
extern f32 D_801EDBA4;
extern f32 D_801EDBA8;
extern f32 D_801EDBAC;
extern f32 D_801EDBB0;
extern f32 D_801EDBB4;
extern f32 D_801EDBB8;
extern f32 D_801EDBBC;
extern f32 D_801EDBC0;

s32 func_801E210C(s32 arg0, s32 arg1) {
    f32 a = D_801EDB94;
    f32 b = D_801EDB98;
    f32 c = D_801EDB9C;
    if (D_8038C17C(0.0f, 1.5f, -5.7f, 10.8f, D_801EDBA0, D_801EDBA4, D_801EDBA8, -43.0f, a, 15.0f, b, a, D_801EDBAC, b, c, c) != 0) {
        func_8038BE98(D_801EDBB0);
        func_8038BD50(D_801EDBB4, D_801EDBB8, 0xC2B03333);
        D_8038BD88(D_801EDBBC, D_801EDBC0, 0xC24C6666);
        return 0x11;
    }
    return 0x10;
}
