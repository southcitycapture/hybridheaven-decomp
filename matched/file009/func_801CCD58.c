#include "common.h"

struct func_801CCD58_Inner {
    u8 pad0[0x7C];
    void *unk7C;
    u16 unk80;
};

struct func_801CCD58_Outer {
    u8 pad0[0x5C];
    struct func_801CCD58_Inner *unk5C;
};

struct func_801CCD58_Global {
    u8 pad0[0x4C];
    u16 unk4C;
};

extern void func_800058DC(void *, void *);
extern void func_801DB6B8(void *, s32, s32);
extern void func_801CCDE4(void);
extern u8 D_801BCC25;
extern u8 D_801E4070[];
extern struct func_801CCD58_Global *D_801E4080;

void func_801CCD58(struct func_801CCD58_Outer *arg0, s32 arg1) {
    struct func_801CCD58_Inner *temp_v0;

    temp_v0 = arg0->unk5C;
    if (D_801BCC25 == 1) {
        func_801DB6B8(arg0, arg1, 0);
        if (temp_v0->unk7C == D_801E4070 && temp_v0->unk80 == 0) {
            D_801E4080->unk4C = D_801E4080->unk4C | 0x8000;
            D_801BCC25 = 0;
            func_800058DC(arg0, func_801CCDE4);
        }
    }
}
