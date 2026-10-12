#include "context.h"

struct func_802490A4_Struct {
    u8 pad[0x3C];
    s16 unk3C;
};

extern s32 func_801C3044();
extern void func_801C2F0C();
extern void func_800058DC(void *, void *);
extern void func_802490EC();

void func_802490A4(struct func_802490A4_Struct *arg0, s32 arg1) {
    if (func_801C3044() == 0) {
        func_801C2F0C(1, 0);
        arg0->unk3C = 0;
        func_800058DC(arg0, func_802490EC);
    }
}
