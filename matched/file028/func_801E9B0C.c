#include "context.h"

extern f32 D_802088C0;
extern f32 D_802088C4;
extern f32 D_802088C8;
extern void func_8038BD88(f32, f32, f32);

s32 func_801E9B0C(volatile s32 arg0, volatile s32 arg1) {
    func_8038BD50(D_802088C0, D_802088C4, 0xC2353333);
    func_8038BD88(D_802088C8, 15.0f, D_802088C8);
    return 0xB;
}
