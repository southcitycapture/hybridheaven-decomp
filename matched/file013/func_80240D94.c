#include "context.h"

extern f64 D_80249A98;
extern void func_800058DC(void *, void *);
extern void func_80240DF4(void);

struct func_80240D94_Inner {
    u8 pad[8];
    f32 unk8;
};

struct func_80240D94_Outer {
    u8 pad[0x30];
    struct func_80240D94_Inner *unk30;
};

struct func_80240D94_Self {
    u8 pad[0x90];
    s16 unk90;
};

void func_80240D94(struct func_80240D94_Self *arg0, struct func_80240D94_Outer **arg1) {
    s16 temp_v1;
    struct func_80240D94_Inner *temp_v0;

    temp_v0 = (*arg1)->unk30;
    temp_v0->unk8 = (f32) ((f64) temp_v0->unk8 + D_80249A98);
    temp_v1 = arg0->unk90;
    arg0->unk90 = temp_v1 - 1;
    if (temp_v1 == 0) {
        arg0->unk90 = 0x64;
        func_800058DC(arg0, func_80240DF4);
    }
}
