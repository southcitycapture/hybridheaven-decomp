#include "context.h"
extern void func_8038BE98(f32);
extern void func_8038D28C(s32);
extern void D_8038BD88(f32, f32, f32);
extern void func_8038BD50(f32, f32, f32);
s32 func_801C0B8C(u64 time);
s32 func_801C0B8C(u64 time);

extern void func_8038BEC8(f32);
extern f32 D_801E88D0;
extern f32 D_801E88D4;
extern f32 D_801E88D8;
extern f32 D_801E88DC;

s32 func_801E1BE0(s32 arg0, s32 arg1) {
    func_8038BEC8(5.0f);
    if (func_801C0B8C(0) != 0) {
        func_8038BE98(D_801E88D0);
        func_8038BD50(D_801E88D4, 8.5f, 504.7f);
        D_8038BD88(D_801E88D8, D_801E88DC, 502.6f);
        func_8038D28C(0x6F);
        return 1;
    }
    return 0;
}
