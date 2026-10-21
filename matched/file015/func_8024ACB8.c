#include "context.h"
extern func_8024AA38_Struct D_802534C4;
extern u8 D_80253800[];
extern void func_8024AD4C();
void func_8024ACB8(func_80249FC4_Arg *arg0, volatile s32 arg1) {
    s32 t = arg0->unk5C;
    if (func_80010550(arg1, t) != 0) {
        if (func_800178E8() != 0) {
            func_8013A1B4(arg1, D_802534C4, 0xFFFFFF);
            func_800179B0(D_80253800);
            func_800058DC(arg0, func_8024AD4C);
        }
    }
}
