#include "context.h"

struct func_802438E0_Inner {
    u8 pad[0x8];
    f32 unk8;
};

struct func_802438E0_Outer {
    u8 pad[0x30];
    struct func_802438E0_Inner *unk30;
};

struct func_802438E0_Arg0 {
    u8 pad[0x24];
    struct func_802438E0_Outer *unk24;
    u8 pad28[0x90 - 0x28];
    u16 unk90;
};

extern f64 D_802570C8;
extern void func_80243958();

void func_802438E0(struct func_802438E0_Arg0 *arg0, s32 arg1) {
    struct func_802438E0_Inner *temp_v0;

    temp_v0 = arg0->unk24->unk30;
    temp_v0->unk8 = (f32) ((f64) temp_v0->unk8 - D_802570C8);
    if (!(arg0->unk24->unk30->unk8 > -426.0f)) {
        arg0->unk90 = 0x16;
        func_800058DC((s32) arg0, (void *) func_80243958);
    }
}
