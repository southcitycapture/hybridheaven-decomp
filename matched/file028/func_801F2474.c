#include "context.h"

extern s32 D_80206D30;
extern f32 D_802089F0;
extern f32 D_802089F4;
extern f32 D_802089F8;
extern f32 D_802089FC;

s32 func_801F2474(s32 arg0, s32 arg1) {
    func_8038BD50(D_802089F0, D_802089F4, 0x41E40000);
    D_8038BD88(D_802089F8, D_802089FC, 0xC1D33333);
    D_80206D30 = 0;
    return 1;
}
