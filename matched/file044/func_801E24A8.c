#include "common.h"

extern void func_8038BE98(f32);
extern void func_8038BD50(f32, f32, u32);
extern void D_8038BD88(f32, f32, u32);
extern f32 D_801EDC0C;
extern f32 D_801EDC10;
extern f32 D_801EDC14;
extern f32 D_801EDC18;
extern f32 D_801EDC1C;

s32 func_801E24A8(s32 arg0, s32 arg1) {
    func_8038BE98(D_801EDC0C);
    func_8038BD50(D_801EDC10, D_801EDC14, 0xC181999A);
    D_8038BD88(D_801EDC18, D_801EDC1C, 0xBF333333);
    return 0x1A;
}
