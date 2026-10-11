#include "common.h"

struct func_801FC6AC_Struct {
    u8 pad0[0x21C];
    s16 unk21C;
    u8 pad1[6];
    s16 unk224;
    s16 unk226;
    u16 unk228;
};

extern u16 func_800208C4(u16);
extern struct func_801FC6AC_Struct D_801BBBF0;

void func_801FC6AC(s32 arg0) {
    D_801BBBF0.unk226 = D_801BBBF0.unk226 - 1;
    if (D_801BBBF0.unk226 == 0) {
        func_800208C4(D_801BBBF0.unk228);
        D_801BBBF0.unk224 = 0;
        D_801BBBF0.unk21C = 0;
    }
}
