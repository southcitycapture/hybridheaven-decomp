#include "context.h"
void D_8038BD88(f32, f32, f32);
f64 func_80034C24(u64);                             /* extern */
u64 func_801C0B2C();                                /* extern */
s32 func_801C0B8C(u64 time);
void func_8038BD50(f32, f32, f32);

extern f32 D_801FC740;
extern f32 D_801FC744;
extern f32 D_801FC748;
extern f32 D_801FC74C;

s32 func_801E975C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x06FFA2DA) != 0) {
        return 0x1D;
    }
    func_80034C24(func_801C0B2C());
    func_8038BD50(D_801FC740, D_801FC744, -57.7f);
    D_8038BD88(D_801FC748, D_801FC74C, -50.4f);
    return 0x1C;
}
