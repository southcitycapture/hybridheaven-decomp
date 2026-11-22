#include "common.h"

extern void D_8038BD88(f32, f32, s32);
extern void *func_801BF6B0(s32 arg0);
extern s32 func_801C1B1C();
typedef struct func_801E1E80_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E1E80_Struct;
extern void func_8038BD50(f32, f32, s32);
s32 func_801E1E80(s32 arg0, s32 arg1) {
    func_8038BD50(64.0999985f, 1.0f, 0xC04CCCCD);
    D_8038BD88(29.1000004f, 8.10000038f, 0xC019999A);
    if ((((func_801E1E80_Struct *) func_801BF6B0(7))->unkC < 4) || (func_801C1B1C() == 0)) {
        return 5;
    }
    return 6;
}
