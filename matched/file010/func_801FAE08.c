#include "context.h"

extern f64 D_80218E30;

struct func_801FAE08_Inner {
    u8 pad[0x8];
    f32 unk8;
};

struct func_801FAE08_Struct {
    u8 pad[0x30];
    struct func_801FAE08_Inner *unk30;
};

void func_801FAE08(s32 arg0, struct func_801FAE08_Struct **arg1) {
    struct func_801FAE08_Inner *temp_v0;

    temp_v0 = (*arg1)->unk30;
    temp_v0->unk8 = (f32) ((f64) temp_v0->unk8 + D_80218E30);
}
