#include "common.h"

extern void func_8038BE98(f32);
extern void func_8038BD50(f32, f32, f32);
extern void D_8038BD88(f32, f32, f32);
extern f32 D_801E51D8;
extern f32 D_801E51DC;
extern f32 D_801E51E0;
extern f32 D_801E51E4;

s32 func_801E2F18(s32 arg0, s32 arg1) {
    func_8038BE98(D_801E51D8);
    func_8038BD50(D_801E51DC, D_801E51E0, 25.3f);
    D_8038BD88(44.5f, D_801E51E4, 44.6f);
    return 0x15;
}
