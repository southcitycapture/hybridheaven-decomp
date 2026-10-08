#include "common.h"

extern s32 func_80133A24(s32 arg0);

struct func_802427B4_Inner {
    u8 pad[0x4C];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
};

struct func_802427B4_Outer {
    u8 pad[0x30];
    struct func_802427B4_Inner *unk30;
};

void func_802427B4(s32 arg0, struct func_802427B4_Outer **arg1) {
    if (func_80133A24(0x1A1) != 0) {
        (*arg1)->unk30->unk4C = 0xFF;
        (*arg1)->unk30->unk4D = 0x13;
        (*arg1)->unk30->unk4E = 0;
    }
}
