#include "common.h"

extern void func_8038D28C(s32 arg0);
extern s32 D_801FBB08;
extern s32 D_801FBB0C;

s32 func_801F9E00(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0282651F) != 0) {
        func_8038D28C(0x699);
        D_801FBB08 = 0;
        D_801FBB0C = 0;
        return 0xA;
    }
    return 9;
}
