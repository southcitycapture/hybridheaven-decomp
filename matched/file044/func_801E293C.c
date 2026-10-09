#include "context.h"
extern f32 D_801EDC78;
extern f32 D_801EDC7C;
extern f32 D_801EDC80;
extern f32 D_801EDC84;
extern f32 D_801EDC88;

s32 func_801E293C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_8038BE98(D_801EDC78);
        func_8038BD50(D_801EDC7C, D_801EDC80, 0xC0400000);
        D_8038BD88(D_801EDC84, D_801EDC88, 0x40DCCCCD);
        return 0x2B;
    }
    return 0x2A;
}
