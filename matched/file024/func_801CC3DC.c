#include "context.h"

extern struct func_801CC2CC_Struct3 D_801CE6B8;
struct func_801CC484_Struct1;
void func_801CC484(struct func_801CC484_Struct1 *arg0, s32 volatile arg1);

void func_801CC3DC(struct func_801CC2CC_Struct1 *arg0, s32 volatile arg1) {
    struct func_801CC2CC_Struct2 *temp_a1;
    u16 sp1A;

    temp_a1 = arg0->unk5C;
    sp1A = (u16) func_80010550(arg1, temp_a1);
    if ((u8) D_801CFE02 >= 3) {
        func_800058DC((s32) arg0, func_80127014);
    }
    if (sp1A != 0) {
        func_8013A28C(arg1, D_801CE6B8);
        D_801CFE04 = 3.0f;
        func_800058DC((s32) arg0, func_801CC484);
    }
}
