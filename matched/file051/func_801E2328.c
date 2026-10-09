#include "context.h"
extern u8 D_801DAB14[];
extern void D_8038BD88(f32, f32, s32);
extern void func_8038BD50(f32, f32, s32);
extern void func_8038BE98(f32);

extern f32 D_801E7864;
extern f32 D_801E7868;
extern f32 D_801E786C;
extern f32 D_801E7870;

s32 func_801E2328(s32 arg0, s32 arg1) {
    func_8038BE98(D_801E7864);
    func_8038BD50(D_801E7868, 7.5f, 0x42EC3333);
    D_8038BD88(D_801E786C, D_801E7870, 0x42693333);
    *(s16 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)D_801DAB14 + 8) + 0x24) + 0x2C) + 0x12) = 0;
    *(s16 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)D_801DAB14 + 8) + 8) + 0x24) + 0x2C) + 0x12) = 0;
    return 0xC;
}
