#include "common.h"
extern s32 func_800058DC(s32, void *);

extern void func_80243E2C(s32 arg0, s32 arg1);

struct func_80243DDC_Inner {
    u16 pad0[2];
    u16 unk4;
};

struct func_80243DDC_Struct {
    u8 pad0[0x34];
    struct func_80243DDC_Inner *unk34;
    u8 pad38[0x42 - 0x38];
    u8 unk42;
};

void func_80243DDC(struct func_80243DDC_Struct *arg0, s32 arg1) {
    struct func_80243DDC_Inner *inner;

    inner = arg0->unk34;
    if (++arg0->unk42 >= 11) {
        arg0->unk42 = 0;
        inner->unk4 = 0x8000;
        func_800058DC((s32)arg0, func_80243E2C);
    }
}
