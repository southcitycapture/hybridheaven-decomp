#include "context.h"

extern f32 D_801F56C0;
extern f32 D_801F56C4;
extern f32 D_801F56C8;
extern f32 D_801F56CC;

s32 func_801E2238(s32 arg0, s32 arg1) {
    if ((func_801C0B8C(0) != 0) && (func_801BF6B0(4)->unkC >= 9)) {
        func_8038BD50(D_801F56C0, D_801F56C4, 0xBECCCCCD);
        D_8038BD88(D_801F56C8, D_801F56CC, 0x4159999A);
        return 0x10;
    }
    return 0xF;
}
