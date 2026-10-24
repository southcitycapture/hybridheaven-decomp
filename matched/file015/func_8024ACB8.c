extern void func_8024ACB8();
#define LPX(a, b) a##b
#define LP(a, b) LPX(a, b)
#define func_8024ACB8 LP(func_8024ACB8_L, __LINE__)
#define func_8024ACB8_L539 func_8024ACB8
#define func_8024AD4C LP(func_8024AD4C_L, __LINE__)
#include "context.h"
#undef func_8024ACB8
#undef func_8024AD4C
extern void func_8024AD4C();
extern func_8024AA38_Struct D_802534C4;
extern u8 D_80253800[];
void func_8024ACB8(arg0, arg1)
func_80249FC4_Arg *arg0;
volatile s32 arg1;
{
    s32 t = arg0->unk5C;
    if (func_80010550(arg1, t) != 0) {
        if (func_800178E8() != 0) {
            func_8013A1B4(arg1, D_802534C4, 0xFFFFFF);
            func_800179B0(D_80253800);
            func_800058DC(arg0, func_8024AD4C);
        }
    }
}
