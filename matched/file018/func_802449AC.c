#include "context.h"

/* The StructA typedef in context.h is declared after this function in the source file, so use a local struct. */
struct func_802449AC_Struct {
    u8 pad0[0x90];
    u16 unk90;
};

extern void func_80020744(s16 arg0);
extern void func_802449FC();

void func_802449AC(struct func_802449AC_Struct *arg0, s32 arg1) {
    if ((u8) D_8025C6FB == 4) {
        arg0->unk90 = 4;
        func_80020744(0x239);
        func_800058DC(arg0, func_802449FC);
    }
}
