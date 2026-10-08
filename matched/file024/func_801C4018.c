#include "common.h"

struct func_801C4018_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

extern void func_800058DC(void *, void *);
extern s32 func_801C1334(void);
extern void func_801C4074(void);

void func_801C4018(struct func_801C4018_Struct *arg0, s32 arg1) {
    s32 temp_v0;

    if (func_801C1334() & 0xB000) {
        func_800058DC(arg0, func_801C4074);
    }
    temp_v0 = arg0->unk3C;
    arg0->unk3C = temp_v0 - 1;
    if (temp_v0 != 0) {
        return;
    }
    func_800058DC(arg0, func_801C4074);
}
