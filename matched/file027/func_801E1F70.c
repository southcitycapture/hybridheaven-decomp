#include "common.h"

extern void D_8038BD88(f32, f32, s32);
struct func_801E1D84_StructA {
    u8 pad[0xC];
    s32 unkC;
};
extern struct func_801E1D84_StructA *func_801BF6B0(s32 a0);
extern s32 func_801C1B1C();
extern void func_8038BD50(f32, f32, s32);
s32 func_801E1F70(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x48) || (func_801C1B1C() == 0)) {
        return 8;
    }
    func_8038BD50((-23.6000004f), 89.6999969f, 0x423E0000);
    D_8038BD88(0.899999976f, 11.3000002f, 0xC0900000);
    return 9;
}
