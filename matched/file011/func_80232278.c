#include "common.h"

struct func_80232278_Struct {
    u8 pad0[0xE];
    u16 unkE;
    u8 pad1[0x48 - 0x10];
    u16 unk48;
};

extern struct func_80232278_Struct D_8017DC40;

void func_80232278(void) {
    if ((s32) D_8017DC40.unk48 < 8) {
        D_8017DC40.unkE = 1;
        return;
    }
    if ((s32) D_8017DC40.unk48 < 0x10) {
        D_8017DC40.unkE = 2;
        return;
    }
    if ((s32) D_8017DC40.unk48 < 0x18) {
        D_8017DC40.unkE = 3;
        return;
    }
    if ((s32) D_8017DC40.unk48 < 0x20) {
        D_8017DC40.unkE = 4;
        return;
    }
    D_8017DC40.unkE = 5;
}
