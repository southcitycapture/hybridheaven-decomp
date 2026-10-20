#include "context.h"

struct func_80242BC4_Struct {
    u8 pad0[0x5C];
    struct func_80242B30_Inner *unk5C;
    u8 pad1[0x94 - 0x60];
    s16 unk94;
};
struct func_80242C60_Arg0;
void func_80242C60(struct func_80242C60_Arg0 *arg0, s32 arg1);

void func_80242BC4(arg0, arg1)
struct func_80242BC4_Struct *arg0;
s32 arg1;
{
    struct func_80242B30_Inner *p;

    p = arg0->unk5C;
    if (func_8012CE9C(arg1, p, *(struct func_80242C60_Cfg *)((u8 *)&D_80258D80 + 0x24), 0x14) == 0) {
        func_80010550(arg1, p);
        if (arg0->unk94--) {
        } else {
            p->unk78 = 1;
            func_800058DC(arg0, func_80242C60);
        }
    }
}
