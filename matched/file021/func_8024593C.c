#include "context.h"

struct func_8024593C_Inner {
    u8 pad0[0x10];
    s16 unk10;
};

struct func_8024593C_Outer {
    u8 pad0[0x30];
    struct func_8024593C_Inner *unk30;
};

struct func_8024593C_Arg0 {
    u8 pad0[0x90];
    u16 unk90;
};

extern f64 D_80257148;
extern void func_802459C8();

void func_8024593C(struct func_8024593C_Arg0 *arg0, struct func_8024593C_Outer **arg1) {
    struct func_8024593C_Inner *temp_v0;
    s32 temp_v1;

    if (func_80133A24(0x1AC) != 0) {
        temp_v0 = (*arg1)->unk30;
        temp_v0->unk10 = (s16) (s32) ((f64) temp_v0->unk10 + D_80257148);
        temp_v1 = arg0->unk90;
        arg0->unk90 = temp_v1 - 1;
        if (temp_v1 == 0) {
            func_800058DC((s32) arg0, func_802459C8);
        }
    }
}
