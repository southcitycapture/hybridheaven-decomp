#include "context.h"
extern void D_8038BD88(f32, f32, s32);
extern void func_8038BD50(f32, f32, s32);

extern f32 D_801EC4D8;
extern f32 D_801EC4DC;
extern f32 D_801EC4E0;

s32 func_801E2060(s32 arg0, s32 arg1) {
    func_8038BD50(D_801EC4D8, D_801EC4DC, 0x41ACCCCD);
    D_8038BD88(D_801EC4E0, 14.5f, 0xC10E6666);
    return 0xB;
}
