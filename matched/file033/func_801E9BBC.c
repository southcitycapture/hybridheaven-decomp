#include "context.h"
extern void D_8038BD88(f32, f32, s32);
extern void func_8038BD50(f32, f32, s32);

extern f32 D_801F4964;
extern f32 D_801F4968;
extern f32 D_801F496C;
extern f32 D_801F4970;

s32 func_801E9BBC(s32 arg0, s32 arg1) {
    func_8038BD50(D_801F4964, D_801F4968, 0xC25C6666);
    D_8038BD88(D_801F496C, D_801F4970, 0xC2360000);
    return 0x2F;
}
