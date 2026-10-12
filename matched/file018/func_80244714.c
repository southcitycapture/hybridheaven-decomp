#include "context.h"

struct func_80244714_Inner {
    u8 pad0[0x8];
    f32 unk8;
};
struct func_80244714_Mid {
    u8 pad0[0x30];
    struct func_80244714_Inner *unk30;
};
struct func_80244714_Struct {
    u8 pad0[0x24];
    struct func_80244714_Mid *unk24;
    u8 pad1[0x90 - 0x28];
    u16 unk90;
};

extern void func_80020744(s16 arg0);
extern void func_80244788();

void func_80244714(struct func_80244714_Struct *arg0, s32 arg1) {
    s32 temp_v0;
    struct func_80244714_Inner *temp_v0_2;

    temp_v0 = arg0->unk90;
    arg0->unk90 = temp_v0 - 1;
    if (temp_v0 != 0) {
        temp_v0_2 = arg0->unk24->unk30;
        temp_v0_2->unk8 = temp_v0_2->unk8 + 2.0f;
        return;
    }
    arg0->unk90 = 0x30;
    func_80020744(0x6CE);
    func_800058DC(arg0, &func_80244788);
}
