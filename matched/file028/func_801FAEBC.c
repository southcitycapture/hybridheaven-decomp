#include "context.h"

extern void func_8038BEC8(f32);
extern f32 D_80208C38;
extern f32 D_80208C3C;
extern f32 D_80208C40;

s32 func_801FAEBC(s32 arg0, s32 arg1) {
    func_8038BEC8(5.0f);
    func_8038BD50(-24.0f, D_80208C38, (s32) 0xC184CCCD);
    D_8038BD88(D_80208C3C, D_80208C40, (s32) 0x4212CCCD);
    return 1;
}
