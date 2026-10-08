#include "common.h"

extern void func_800058DC(void *arg0, void *arg1);
extern void func_80241200(void);

struct func_802411A8_Inner {
    u8 pad[8];
    f32 unk8;
};

struct func_802411A8_Outer {
    u8 pad[0x30];
    struct func_802411A8_Inner *unk30;
};

struct func_802411A8_Self {
    u8 pad[0x90];
    s16 unk90;
};

void func_802411A8(struct func_802411A8_Self *arg0, struct func_802411A8_Outer **arg1) {
    struct func_802411A8_Inner *temp_v0;
    s16 temp_v1;

    temp_v0 = (*arg1)->unk30;
    temp_v0->unk8 = temp_v0->unk8 - 2.0f;
    temp_v1 = arg0->unk90;
    arg0->unk90 = temp_v1 - 1;
    if (temp_v1 == 0) {
        arg0->unk90 = 0x40;
        func_800058DC(arg0, func_80241200);
    }
}
