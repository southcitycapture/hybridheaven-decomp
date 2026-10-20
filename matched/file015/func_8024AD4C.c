#include "context.h"
struct func_8024AD4C_Vec { s32 a, b, c; };
extern struct func_8024AD4C_Vec D_802534D0;
extern u8 D_802538B8[];
extern u8 func_8024ADE0[];
void func_8024AD4C(arg0, arg1)
struct func_80249CF8_Obj *arg0;
volatile s32 arg1;
{
    s32 t = arg0->unk5C;
    if (func_80010550(arg1, t) != 0) {
        if (func_800178E8() != 0) {
            func_8013A1B4(arg1, D_802534D0, 0xFFFFFF);
            func_800179B0(D_802538B8);
            func_800058DC(arg0, func_8024ADE0);
        }
    }
}
