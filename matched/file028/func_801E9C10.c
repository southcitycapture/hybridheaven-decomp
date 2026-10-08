#include "common.h"

extern void func_8038BD50(f32, f32, s32);
extern void D_8038BD88(f32, f32, s32);
extern f32 D_802088CC;
extern f32 D_802088D0;
extern f32 D_802088D4;

s32 func_801E9C10(s32 arg0, s32 arg1) {
    func_8038BD50(D_802088CC, D_802088D0, 0x415E6666);
    D_8038BD88(D_802088D4, 11.0f, 0x3F99999A);
    return 0xE;
}
