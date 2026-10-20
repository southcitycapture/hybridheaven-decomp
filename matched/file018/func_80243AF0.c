#include "context.h"
struct func_80243AF0_Struct {
    u8 pad0[0x5C];
    struct func_80242B30_Inner *unk5C;
    u8 pad1[0x94 - 0x60];
    s16 unk94;
};
void func_80243AF0(arg0, arg1)
struct func_80243AF0_Struct *arg0;
s32 arg1;
{
    struct func_80242B30_Inner *p = arg0->unk5C;
    struct func_80242B30_Inner **pp = &p;
    if (func_8012CE9C(arg1, p, D_80258D80, 10) == 0) {
        func_80010550(arg1, *pp);
        if (arg0->unk94-- == 0) {
            (*pp)->unk78 = 1;
            func_800058DC(arg0, func_80242E5C);
        }
    }
}
