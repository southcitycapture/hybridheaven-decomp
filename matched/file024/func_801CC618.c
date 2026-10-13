/* starting point: func_801CC344 (file024), whose assembly is 100% the same as this function's */
#include "context.h"

extern void func_80127014();
extern void func_801CC3DC();
extern void func_801CC6B0();
extern struct func_801CC2CC_Struct3 D_801CE6DC;

void func_801CC618(struct func_801CC2CC_Struct1 *arg0, s32 volatile arg1) {
    struct func_801CC2CC_Struct2 *temp_a1;
    u16 sp1A;

    temp_a1 = arg0->unk5C;
    sp1A = (u16) func_80010550(arg1, (s32) temp_a1);
    if ((u8) D_801CFE02 >= 3) {
        func_800058DC((s32) arg0, func_80127014);
    }
    if (sp1A != 0) {
        func_8013A28C(arg1, D_801CE6DC);
        func_800058DC((s32) arg0, func_801CC6B0);
    }
}
