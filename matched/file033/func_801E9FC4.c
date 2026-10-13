#include "context.h"
extern void D_8038BD88(f32, f32, s32);
extern void func_8038BD50(f32, f32, s32);

extern f32 D_801F4994;
extern f32 D_801F4998;
extern f32 D_801F499C;
extern f32 D_801F49A0;

s32 func_801E9FC4(s32 arg0, s32 arg1) {
    func_8038BD50(D_801F4994, D_801F4998, 0xC25C6666);
    D_8038BD88(D_801F499C, D_801F49A0, 0xC2360000);
    return 0x3B;
}
