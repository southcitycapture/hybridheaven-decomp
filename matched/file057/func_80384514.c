#include "context.h"

extern u8 D_80389B78[];
extern u8 D_8038CB10[];

struct func_80384514_Struct {
    u8 pad0[0xC];
    void *unkC;
    u8 pad10[0xA0];
    s16 unkB0;
};

void func_80384514(struct func_80384514_Struct *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_s0;
    extern void func_80005670();

    temp_v0 = arg0->unkB0-- == 0;
    var_s0 = 0;
    if (!temp_v0 && !(D_80089474[2] & 0x8000)) {
        if (D_80089474[2] & 0x2000) {
            goto block_5;
        }
        return;
    }
block_5:
    do {
        func_8001B204(var_s0 & 0xFF, 0, 0, D_8038CB10);
        var_s0 = (var_s0 + 1) & 0xFF;
    } while (var_s0 < 6);
    func_80005670(arg0->unkC, D_80389B78);
    func_80005700(arg0);
}
