#include "context.h"

struct func_80377644_Struct {
    u8 pad[0x2C];
    s32 unk2C;
};

extern s32 func_8014C0A8(u16);
extern void func_800058DC(void *, void *);
extern u16 D_801BBBF8;
extern void func_8037769C();

void func_80377644(struct func_80377644_Struct *arg0, s32 arg1) {
    volatile void *home;

    home = &arg1;
    if (func_8014C0A8(D_801BBBF8) == 0) {
        arg0->unk2C = arg0->unk2C & ~0x80;
        func_800058DC(arg0, func_8037769C);
    }
}
