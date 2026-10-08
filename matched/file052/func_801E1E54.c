#include "context.h"

extern void func_8038BE98(f32 a0);
extern void func_8038BD50(f32 a0, f32 a1, s32 a2);
extern void D_8038BD88(f32 a0, f32 a1, s32 a2);
extern f32 D_801E598C;
extern f32 D_801E5990;
extern f32 D_801E5994;

s32 func_801E1E54(s32 arg0, s32 arg1) {
    if (*(s32 *)((u8 *)func_801BF6B0(4) + 0x3C) >= 6) {
        func_8038BE98(D_801E598C);
        func_8038BD50(0.0f, D_801E5990, 0x41980000);
        D_8038BD88(0.0f, D_801E5994, 0x420D999A);
        return 5;
    }
    return 4;
}
