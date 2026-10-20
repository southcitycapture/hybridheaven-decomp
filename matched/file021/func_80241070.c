#include "context.h"
void func_802410C0(s32 arg0);

extern u8 D_80247B48[];

void func_80241070(s32 arg0, s32 arg1) {
    u8 *base;

    func_80203830(arg0, D_80247B48);
    base = (u8 *) &D_801BBBF0;
    *(s32 *) (base + 0x10A0) = *(s32 *) (base + 0x40);
    {
        extern s32 func_8020394C();
        func_8020394C();
    }
    func_800058DC((void *) arg0, &func_802410C0);
}
