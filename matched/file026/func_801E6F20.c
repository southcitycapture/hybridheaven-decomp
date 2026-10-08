#include "common.h"
#include "functions.h"

extern f32 D_801FC070;
extern f32 D_801FC074;
extern f32 D_801FC078;
extern f32 D_801FC07C;
extern f32 D_801FC080;
extern f32 D_801FC084;

void func_8038BEC8(f32);
void func_8038BE98(f32);
void func_8038BD50(f32, f32, f32);
void D_8038BD88(f32, f32, f32);

s32 func_801E6F20(s32 arg0, s32 arg1) {
    func_8038BEC8(5.0f);
    func_8038BE98(D_801FC070);
    func_8038BD50(-195.0f, 2.0f, -102.0f);
    D_8038BD88(D_801FC074, 10.0f, 63.0f);
    if (func_801C0B8C(0x53EC60) != 0) {
        func_8038BD50(D_801FC078, D_801FC07C, -36.6f);
        D_8038BD88(D_801FC080, D_801FC084, -32.5f);
        return 1;
    }
    return 0;
}
