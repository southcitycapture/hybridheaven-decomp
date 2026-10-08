#include "common.h"

extern void func_801E1C28();
extern void func_8038BE98(f32);
extern void func_8038BD50(f32, f32, s32);
extern void D_8038BD88(f32, f32, s32);

extern f32 D_801E7848;
extern f32 D_801E784C;
extern f32 D_801E7850;
extern f32 D_801E7854;
extern f32 D_801E7858;

s32 func_801E2124(s32 arg0, s32 arg1) {
    func_801E1C28();
    if (func_801C0B8C(0x70EA40) != 0) {
        func_8038BE98(D_801E7848);
        func_8038BD50(D_801E784C, D_801E7850, 0x41666666);
        D_8038BD88(D_801E7854, D_801E7858, 0x40000000);
        return 7;
    }
    return 6;
}
