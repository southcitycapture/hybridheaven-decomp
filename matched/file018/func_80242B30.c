#include "context.h"
void func_800058DC(void *, void (*)());
s32 func_8012CE9C(s32, void *, struct func_80242C60_Cfg, s32);
extern s32 func_80010550();



extern struct func_80242C60_Cfg D_80258D80;
extern void func_80242BC4();

void func_80242B30(struct func_80242B30_Struct *arg0, s32 arg1) {
    struct func_80242B30_Inner *sp24;

    sp24 = arg0->unk5C;
    if ((func_8012CE9C(arg1, sp24, D_80258D80, 0x14) == 0) && (func_80010550(arg1, sp24) != 0)) {
        sp24->unk78 = 1;
        arg0->unk94 = 0xA0;
        func_800058DC(arg0, func_80242BC4);
    }
}
