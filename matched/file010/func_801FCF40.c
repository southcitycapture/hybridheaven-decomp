#include "context.h"

struct func_801FCF40_Struct {
    u8 pad0[0x18];
    s32 unk18;
    u8 pad1[4];
    s32 unk20;
    u8 pad2[0x3C - 0x24];
    u16 unk3C;
};

extern u8 D_801BBD6E[];

void func_801FCF40(struct func_801FCF40_Struct *arg0, s32 arg1) {
    if ((arg0->unk3C++ >= 0x1E) && (D_801BBD6E[3] == 0)) {
        arg0->unk18 = 0;
        arg0->unk20 = 0;
        func_800058DC(arg0, func_80126EAC);
    }
}
