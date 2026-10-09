#include "context.h"
extern void D_8038BD88(f32, f32, s32);
extern void func_8038BD50(f32, f32, s32);

extern f32 D_801EC500;
extern f32 D_801EC504;
extern f32 D_801EC508;

s32 func_801E2254(s32 arg0, s32 arg1) {
    func_8038BD50(D_801EC500, 0.5f, 0x41C9999A);
    D_8038BD88(D_801EC504, D_801EC508, 0xC124CCCD);
    return 0x11;
}
