#include "context.h"
extern void func_8038BEC8(f32);
extern void func_8038BE98(f32);
extern void func_8038BD50(f32, f32, f32);
extern void D_8038BD88(f32, f32, f32);
extern f32 D_801E3B20;
extern f32 D_801E3B24;
extern f32 D_801E3B28;
extern f32 D_801E3B2C;
extern f32 D_801E3B30;
extern f32 D_801E3B34;

s32 func_801E1BE0(s32 arg0, s32 arg1) {
    func_8038BEC8(5.0f);
    if (func_801C0B8C(0x53EC60) != 0) {
        func_8038BE98(D_801E3B20);
        func_8038BD50(D_801E3B24, D_801E3B28, 45.4f);
        D_8038BD88(-143.0f, 14.5f, 0.0f);
        return 1;
    }
    func_8038BE98(D_801E3B2C);
    func_8038BD50(D_801E3B30, D_801E3B34, 0.0f);
    D_8038BD88(182.0f, 20.0f, 0.0f);
    return 0;
}
