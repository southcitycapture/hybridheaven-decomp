#include "common.h"

extern void D_8038BD88(f32, f32, s32);
struct func_801E1D84_StructA {
    u8 pad[0xC];
    s32 unkC;
};
extern struct func_801E1D84_StructA *func_801BF6B0(s32 a0);
extern void func_8038BD50(f32, f32, s32);
s32 func_801E1EF8(s32 arg0, s32 arg1) {
    if (((s32 *)func_801BF6B0(7))[3] >= 0xF) {
        func_8038BD50((-11.8999996f), 4.9000001f, 0x40D33333);
        D_8038BD88((-2.29999995f), 13.8000002f, 0xC0C9999A);
        return 8;
    }
    return 7;
}
