#include "context.h"

extern void func_80127014();
extern void func_801CC618();
extern struct func_801CC2CC_Struct3 D_801CE6D0;

void func_801CC574(struct func_801CC2CC_Struct1 *arg0, s32 arg1) {
    struct func_801CC2CC_Struct2 *temp_a1;
    u16 temp_v1;

    temp_a1 = arg0->unk5C;
    temp_v1 = func_80010550(arg1, temp_a1);
    if ((u8) D_801CFE02 >= 3) {
        func_800058DC((s32) arg0, func_80127014);
    }
    if (temp_v1 != 0) {
        func_8013A28C(arg1, D_801CE6D0);
        D_801CFE02 = 1;
        func_800058DC((s32) arg0, func_801CC618);
    }
}
