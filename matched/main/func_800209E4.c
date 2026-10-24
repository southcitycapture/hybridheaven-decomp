#define HH_CAT2(a, b) a##b
#define HH_CAT(a, b) HH_CAT2(a, b)
#define func_80024114 HH_CAT(HHf_, __LINE__)
#define HHf_350 func_80024114
#define func_800209E4 HHself_func
#include "context.h"
#undef func_80024114
#undef func_800209E4

s32 func_800209E4(arg0, arg1)
u8 arg0;
u8 arg1;
{
    u8 *p;
    s32 v;
    s32 a;

    p = (u8 *)D_800CBDA4 + arg1;
    v = p[0xB8];
    if (v != 0) {
        if (arg1 == 0) {
            a = (s8)p[0xBB] << 8;
        } else {
            a = (s8)p[0xBB];
        }
        a += (D_800CBAF0[arg0].b * v) / 10;
        return a;
    }
    return D_800CBAF0[arg0].b;
}
