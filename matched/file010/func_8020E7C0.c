#include "context.h"

extern u8 D_801BBD76;

struct func_8020E7C0_Inner {
    u8 pad0[0x4B];
    u8 unk4B;
};

struct func_8020E7C0_Outer {
    u8 pad0[0x30];
    struct func_8020E7C0_Inner *unk30;
};

s32 func_8020E7C0(s32 arg0, struct func_8020E7C0_Outer **arg1) {
    if (D_801BBD76 != 0) {
        return 0;
    }
    (*arg1)->unk30->unk4B = (u8) ((*arg1)->unk30->unk4B - 0x10);
    if ((s32) (*arg1)->unk30->unk4B < 0x10) {
        return 0;
    }
    return 1;
}
