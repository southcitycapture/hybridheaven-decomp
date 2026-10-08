#include "common.h"

extern void D_8038BD88(f32, f32, u32);
extern void func_8038BD50(f32, f32, u32);
extern void func_8038BE98(f32);
extern f32 D_801EDC48;
extern f32 D_801EDC4C;
extern f32 D_801EDC50;
extern f32 D_801EDC54;
extern f32 D_801EDC58;

s32 func_801E26A4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x192D50) != 0) {
        func_8038BE98(D_801EDC48);
        func_8038BD50(D_801EDC4C, D_801EDC50, 0xC2AB0000);
        D_8038BD88(D_801EDC54, D_801EDC58, 0xC29C999A);
        return 0x20;
    }
    return 0x1F;
}
