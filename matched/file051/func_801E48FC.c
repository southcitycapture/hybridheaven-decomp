#include "context.h"

s32 func_801E48FC(s32 arg0, s32 arg1) {
    s32 temp_v1;

    if ((((func_801E23C4_Struct *)func_801BF6B0(7))->unkC < 4) || (func_801C1B1C() == 0)) {
        return 9;
    }
    if (D_801E732C == 0x12) {
        func_8038D28C(0x677);
    }
    temp_v1 = D_801E732C;
    D_801E732C = temp_v1 + 1;
    return 0xA;
}
