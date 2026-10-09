#include "common.h"

extern void func_8038BD50(f32, f32, s32);
extern void D_8038BD88(f32, f32, s32);
extern f32 D_802087B4;
extern f32 D_802087B8;
extern f32 D_802087BC;
extern f32 D_802087C0;

s32 func_801E2180(s32 arg0, s32 arg1) {
    func_8038BD50(D_802087B4, D_802087B8, 0x41480000);
    D_8038BD88(D_802087BC, D_802087C0, 0xC20F3333);
    return 0xF;
}
