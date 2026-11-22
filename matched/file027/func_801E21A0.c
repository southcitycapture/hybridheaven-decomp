#include "common.h"

extern void D_8038BD88(f32, f32, s32);
struct func_801E1D84_StructA {
    u8 pad[0xC];
    s32 unkC;
};
extern struct func_801E1D84_StructA *func_801BF6B0(s32 a0);
extern s32 func_801C1B1C();
extern void func_8038BD50(f32, f32, s32);
s32 func_801E21A0(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x56) || (func_801C1B1C() == 0)) {
        return 0xD;
    }
    func_8038BD50((-6.5999999f), 5.69999981f, 0x41766666);
    D_8038BD88(1.5f, 13.3999996f, 0xC079999A);
    return 0xE;
}
