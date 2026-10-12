#include "context.h"

struct func_80244A54_Inner {
    u8 pad[0x8];
    f32 unk8;
};

struct func_80244A54_Outer {
    u8 pad[0x30];
    struct func_80244A54_Inner *unk30;
};

struct func_80244A54_Arg0 {
    u8 pad[0x24];
    struct func_80244A54_Outer *unk24;
};

extern f64 D_80257130;
extern void func_80244AC4();

void func_80244A54(struct func_80244A54_Arg0 *arg0, s32 arg1) {
    struct func_80244A54_Inner *temp_v0;

    temp_v0 = arg0->unk24->unk30;
    temp_v0->unk8 = (f32) ((f64) temp_v0->unk8 - D_80257130);
    if (!(arg0->unk24->unk30->unk8 > -34.0f)) {
        func_800058DC((s32) arg0, (void *) func_80244AC4);
    }
}
