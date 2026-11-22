#include "common.h"

extern void D_8038BD88(f32, f32, s32);
struct func_801E1D84_StructA {
    u8 pad[0xC];
    s32 unkC;
};
extern struct func_801E1D84_StructA *func_801BF6B0(s32 a0);
extern s32 func_801C0B8C(u64);
extern void func_8038BD50(f32, f32, s32);
s32 func_801E2238(s32 arg0, s32 arg1) {
    if ((func_801C0B8C(0) != 0) && (func_801BF6B0(4)->unkC >= 9)) {
        func_8038BD50(17.2000008f, 6.4000001f, 0xBECCCCCD);
        D_8038BD88((-4.4000001f), 14.1999998f, 0x4159999A);
        return 0x10;
    }
    return 0xF;
}
