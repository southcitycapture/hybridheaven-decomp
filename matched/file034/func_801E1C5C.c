#include "common.h"

extern f32 D_801E93D0;
extern f32 D_801E93D4;
extern f32 D_801E93D8;
extern f32 D_801E93DC;

void func_8038BD50(f32, f32, f32);
void D_8038BD88(f32, f32, f32);

s32 func_801E1C5C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x3D0900) != 0) {
        func_8038BD50(D_801E93D0, D_801E93D4, 275.0f);
        D_8038BD88(D_801E93D8, D_801E93DC, 287.3f);
        return 2;
    }
    return 1;
}
