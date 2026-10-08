#include "context.h"

struct func_80244C14_Inner {
    u8 pad[0x10];
    s16 unk10;
};

struct func_80244C14_Mid {
    u8 pad[0x30];
    struct func_80244C14_Inner *unk30;
};

extern s32 func_8012AAE8(s32, s32, s32, s32, f32);

void func_80244C14(s32 arg0, struct func_80244C14_Mid **arg1) {
    struct func_80244C14_Inner *temp_v0;

    if ((func_80133A24(0x1AD) != 0) && (func_8012AAE8(arg0, 0x43480000, 0xC4960000, 0xC4394000, 1.0f) != 0)) {
        temp_v0 = (*arg1)->unk30;
        temp_v0->unk10 = (s16) (temp_v0->unk10 + 5);
    }
}
