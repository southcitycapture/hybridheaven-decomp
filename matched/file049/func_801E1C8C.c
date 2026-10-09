#include "context.h"
extern void D_8038BD88(f32, f32, f32);
extern void func_8038BD50(f32, f32, f32);

extern void func_8038BE98(f32);
extern f32 D_801E7640;
extern f32 D_801E7644;
extern f32 D_801E7648;
extern f32 D_801E764C;

s32 func_801E1C8C(s32 arg0, s32 arg1) {
    func_8038BE98(D_801E7640);
    func_8038BD50(D_801E7644, D_801E7648, 85.4f);
    D_8038BD88(D_801E764C, 10.5f, 106.2f);
    return 4;
}
