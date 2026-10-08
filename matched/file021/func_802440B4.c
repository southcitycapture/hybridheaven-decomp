#include "context.h"

struct func_802440B4_Inner {
    u8 pad0[0x22];
    u8 unk22;
};

struct func_802440B4_Outer {
    struct func_802440B4_Inner *unk0;
    struct func_802440B4_Inner *unk4;
    struct func_802440B4_Inner *unk8;
};

extern void func_80244110(void);

void func_802440B4(s32 arg0, struct func_802440B4_Outer *arg1) {
    if (func_80133A24(0x1A5) != 0) {
        arg1->unk0->unk22 = 1;
        arg1->unk4->unk22 = 1;
        arg1->unk8->unk22 = 1;
        func_800058DC(arg0, func_80244110);
    }
}
