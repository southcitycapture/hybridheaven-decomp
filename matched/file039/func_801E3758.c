#include "context.h"

extern void func_8038BE98(f32);
extern void func_8038BD50(f32, f32, s32);
extern void D_8038BD88(f32, f32, s32);
extern f32 D_801EB2FC;
extern f32 D_801EB300;
extern f32 D_801EB304;
extern f32 D_801EB308;

s32 func_801E3758(s32 arg0, s32 arg1) {
    func_8038BE98(D_801EB2FC);
    func_8038BD50(D_801EB300, 2.5f, 0xC3CCB333);
    D_8038BD88(D_801EB304, D_801EB308, 0xC3D40CCD);
    return 0x43;
}
