#include "context.h"

extern void D_8038C158(void);
extern void func_8038BE98(f32 f);
extern void func_8038BD50(f32 f0, f32 f1, s32 a2);
extern void D_8038BD88(f32 f0, f32 f1, s32 a2);
extern f32 D_801E5954;
extern f32 D_801E5958;
extern f32 D_801E595C;
extern f32 D_801E5960;
extern f32 D_801E5964;

s32 func_801E1D00(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x9D2A60) != 0) {
        D_8038C158();
        return 3;
    }
    if (func_801C0B8C(0x7EA5E0) != 0) {
        func_8038BE98(D_801E5954);
        func_8038BD50(D_801E5958, D_801E595C, 0xC2943333);
        D_8038BD88(D_801E5960, D_801E5964, 0x4195999A);
    }
    return 2;
}
