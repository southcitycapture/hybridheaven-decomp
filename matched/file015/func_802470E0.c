#include "context.h"

extern void func_80005700(void *);
extern void *D_8025A2A0;
extern s32 D_80010550(s32, s32, void *, s32);

struct func_802470E0_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad1[0x30];
    u16 unk90;
};

void func_802470E0(struct func_802470E0_Struct *arg0, s32 arg1) {
    s32 t = arg0->unk5C;

    D_80010550(arg1, t, arg0, arg1);
    if (arg0->unk90++ >= 0x28) {
        func_80005700(D_8025A2A0);
        func_80005700(D_8025A2A4);
        func_80133980(0x73);
    }
}
