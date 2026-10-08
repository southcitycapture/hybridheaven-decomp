#include "common.h"
#include "functions.h"

extern void func_8038BE98(f32 arg0);
extern void func_8038BD50(f32 arg0, f32 arg1, s32 arg2);
extern void D_8038BD88(f32 arg0, f32 arg1, s32 arg2);
extern f32 D_801EB33C;
extern f32 D_801EB340;
extern f32 D_801EB344;
extern f32 D_801EB348;
extern f32 D_801EB34C;

s32 func_801E21B8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x16E360) != 0) {
        func_8038BE98(D_801EB33C);
        func_8038BD50(D_801EB340, D_801EB344, 0x433A0000);
        D_8038BD88(D_801EB348, D_801EB34C, 0x434F0000);
        return 0x10;
    }
    return 0xF;
}
