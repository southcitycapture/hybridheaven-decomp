#include "context.h"
extern s32 D_801E703C;
extern void D_8038BD88(f32, f32, f32);
extern u8 func_801DAAF0[];
extern void func_8038BD50(f32, f32, f32);

extern void func_8038BE98(f32);
extern f32 D_801E76D0;
extern f32 D_801E76D4;
extern f32 D_801E76D8;

s32 func_801E2630(s32 arg0, s32 arg1) {
    if (D_801E703C >= 0x3D) {
        func_8038BE98(D_801E76D0);
        func_8038BD50(-10.5f, D_801E76D4, 132.8f);
        D_8038BD88(D_801E76D8, 13.0f, 127.5f);
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 8) + 8) + 0x24) + 0x2C) + 8) = 20.0f;
        D_801E703C = 0;
        return 0xE;
    } else {
        D_801E703C = D_801E703C + 1;
        return 0xD;
    }
}
