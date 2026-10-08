#include "common.h"

struct func_80243224_Inner {
    u8 pad[0x4C];
    u8 unk4C;
    u8 unk4D;
};

struct func_80243224_Outer {
    u8 pad[0x30];
    struct func_80243224_Inner *unk30;
};

void func_80243224(s32 arg0, struct func_80243224_Outer **arg1) {
    struct func_80243224_Inner *temp_v0;

    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4C++;
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4D++;
}
