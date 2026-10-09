#include "context.h"

extern f32 D_801EDBC4;
extern f32 D_801EDBC8;
extern f32 D_801EDBCC;
extern f32 D_801EDBD0;
extern f32 D_801EDBD4;
extern void func_8038C4D8(s32, s32);

s32 func_801E2228(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x3F79FF) != 0) {
        func_8038BE98(D_801EDBC4);
        func_8038BD50(D_801EDBC8, D_801EDBCC, 0xC2AB0000);
        D_8038BD88(D_801EDBD0, D_801EDBD4, 0xC29C999A);
        func_8038C4D8(2, 0);
        return 0x13;
    }
    return 0x12;
}
