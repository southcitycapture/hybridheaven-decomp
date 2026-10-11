#include "context.h"

struct func_80232128_Struct {
    u8 pad0[0x36];
    u16 unk36;
};

void func_80232128(u8 *arg0) {
    struct func_80232128_Struct *var_v0;
    u16 temp_v1;

    if (arg0 == D_801BBBF0 + 0x44C) {
        var_v0 = *(struct func_80232128_Struct **)(D_801BBBF0 + 0xEC);
    } else {
        var_v0 = *(struct func_80232128_Struct **)(D_801BBBF0 + 0xDC);
    }
    if (arg0[0x2D9] == 0x13) {
        temp_v1 = var_v0->unk36;
        if (temp_v1 == 0xF9 || temp_v1 == 0xF6 || temp_v1 == 0xFA || temp_v1 == 0xFB || temp_v1 == 0xFC || temp_v1 == 0xFD || temp_v1 == 0x11B || temp_v1 == 0x143 || temp_v1 == 0xF4 || temp_v1 == 0xF5 || temp_v1 == 0x148 || temp_v1 == 0x149 || temp_v1 == 0x2E || temp_v1 == 0x31 || temp_v1 == 0x32 || temp_v1 == 0x11D || temp_v1 == 0x11E) {
            arg0[0x2DA] = 0;
            return;
        }
    }
    arg0[0x2DA] = 1;
}
