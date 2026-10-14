#include "context.h"

struct func_802234F8_Actor {
    u8 pad0[0x5C];
    s32 unk5C;
};
extern struct func_8021E52C_Struct D_8023C2D4;
extern void func_8022359C();

void func_802234F8(s32 arg0, s32 arg1) {
    s32 sp2C;
    struct func_8021E52C_Struct sp20;

    sp2C = ((struct func_802234F8_Actor *) arg0)->unk5C;
    sp20 = D_8023C2D4;
    if ((D_801BCC21 != 0xF) && (func_80011140(arg1, sp2C, sp20, 3) != 0)) {
        func_800058DC(arg0, &func_8022359C);
    }
}
