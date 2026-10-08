#include "context.h"

extern void func_80005700(void *, void *);

struct func_80244444_Struct {
    u8 pad[0xA0];
    s8 unkA0;
};

struct func_80244444_Inner {
    u8 pad[0x4B];
    u8 unk4B;
};

struct func_80244444_Outer {
    u8 pad[0x30];
    struct func_80244444_Inner *unk30;
};

void func_80244444(struct func_80244444_Struct *arg0, struct func_80244444_Outer **arg1) {
    s32 var_v0;
    s8 temp_v1;
    struct func_80244444_Inner *temp_a0;

    temp_v1 = arg0->unkA0;
    if (temp_v1 != 0) {
        temp_a0 = (*arg1)->unk30;
        var_v0 = temp_a0->unk4B;
        var_v0 += temp_v1;
        if (var_v0 < 0) {
            func_80005700(arg0, arg1);
            return;
        }
        if (var_v0 >= 0x100) {
            var_v0 = 0xFF;
        }
        temp_a0->unk4B = (u8) var_v0;
    }
}
