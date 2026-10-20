#include "context.h"

struct func_801FA6B0_Struct {
    u8 pad[0x3C];
    u16 unk3C;
    u8 pad3E[0x94 - 0x3E];
    u16 unk94;
};

extern void func_80126E88(u16, void *);

void func_801FA6B0(struct func_801FA6B0_Struct *arg0, s32 arg1) {
    if (--arg0->unk3C == 0) {
        func_80126E88(arg0->unk94, arg0);
        func_80005700((s32)arg0);
    }
}
