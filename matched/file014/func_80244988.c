#define MYQ(p, l) p##_##l
#define MYP(p, l) MYQ(p, l)
#define func_80244988 D_80244988
#define func_80243820 MYP(fB, __LINE__)
#define func_802448C8 MYP(fC, __LINE__)
#include "context.h"
#undef func_80244988

extern struct func_802438E4_Table D_802484D0;
extern void func_80244A54();

void func_80244988(struct func_80244F98_Obj *arg0, s32 arg1) {
    struct func_80244F98_Child *s0 = arg0->unk5C;
    f32 sp28[3];

    arg0->unk2C |= 0x80;
    if (func_80242890() == 0) {
        func_8013A334(sp28, arg1, s0, 0xC);
        if (func_8012CE9C(arg1, s0, D_802484D0, 0xA) == 0 && D_80010550(arg1, s0) != 0) {
            s0->unk78 = 1;
            arg0->unk2C &= ~0x80;
            func_800058DC(arg0, func_80244A54);
        }
    }
}
