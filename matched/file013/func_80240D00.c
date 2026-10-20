#include "context.h"

struct func_80240D00_Inner {
    u8 pad[8];
    f32 unk8;
};
struct func_80240D00_Outer {
    u8 pad[0x30];
    struct func_80240D00_Inner *unk30;
};
struct func_80240D00_Struct0 {
    struct func_80240D00_Outer *unk0;
    struct func_80240D00_Outer *unk4;
};
struct func_80240D00_Self {
    u8 pad[0x90];
    s16 unk90;
};

extern void func_80240D94();
extern void func_80020744(s32);
extern void func_800058DC(void *, void *);

void func_80240D00(struct func_80240D00_Self *arg0, struct func_80240D00_Struct0 *arg1) {
    struct func_80240D00_Inner *p;

    p = arg1->unk4->unk30;
    p->unk8 = (f32)((f64)p->unk8 + 0.5);
    if (arg0->unk90--) {
    } else {
        func_80020744(0x1C0);
        arg0->unk90 = 0x64;
        arg1->unk0->unk30->unk8 = 1.0f;
        func_800058DC(arg0, func_80240D94);
    }
}
