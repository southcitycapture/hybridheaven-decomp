#include "context.h"

struct func_8024175C_Struct {
    u8 pad[0xF26];
    s8 unkF26;
};

extern struct func_8024175C_Struct D_801BBBF0;

void func_8024175C(s32 arg0, s32 arg1) {
    D_801BBBF0.unkF26 = D_801BBBF0.unkF26 + 4;
    if (D_801BBBF0.unkF26 >= 0x70) {
        D_801BBBF0.unkF26 = 0x10;
    }
}
