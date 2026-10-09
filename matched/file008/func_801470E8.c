#include "context.h"

struct func_801470E8_Obj {
    u8 pad0[0x22];
    u8 unk22;
};

void func_801470E8(struct func_801470E8_Obj **arg0, u8 arg1, u8 arg2, u8 arg3) {
    s8 var_v0;

    for (var_v0 = arg1; var_v0 < arg1 + arg2; var_v0++) {
        arg0[var_v0]->unk22 = arg3;
    }
}
