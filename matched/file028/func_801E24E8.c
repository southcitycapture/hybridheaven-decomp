#include "common.h"

extern void func_8038BD50(f32, f32, s32);
extern void D_8038BD88(f32, f32, s32);
extern f32 D_802087EC;

s32 func_801E24E8(s32 arg0, s32 arg1) {
    func_8038BD50(D_802087EC, 2.0f, 0x41EF3333);
    D_8038BD88(-106.5f, 5.0f, 0x41840000);
    return 0x18;
}
