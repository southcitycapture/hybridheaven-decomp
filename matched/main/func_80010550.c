#include "context.h"

u16 func_80010550(u32 **arg0, func_80010454_StructArg *arg1) {
    s32 pad;
    u16 sp32;
    u16 n;
    u16 i;
    u16 r;

    n = func_8000FE48((struct func_8000FE48_StructObj **)arg0, arg1->unkC, (func_8000FCD0_Struct *)D_800631F0, D_80063DF0);
    for (i = 0; i < n; i++) {
        r = func_800101D8(i, arg0, arg1->unkC);
        if (i == 0) {
            sp32 = r;
        }
    }
    func_8000F458(arg0, arg1);
    D_801BC028 = arg1->unk44;
    return sp32;
}
