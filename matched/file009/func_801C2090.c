#include "context.h"

void func_801C2090(func_801C1C1C_StructArg *arg0, s32 arg1) {
    void *temp_a1;
    extern void func_801C1B38();

    temp_a1 = arg0->unk5C;
    if (func_8012CE9C(arg1, temp_a1, *(func_801C2494_Struct388500 *)&D_801E0B00, 0xA) == 0) {
        if (func_80010550(arg1, temp_a1) != 0) {
            func_800058DC(arg0, func_801C1B38);
        }
    }
}
