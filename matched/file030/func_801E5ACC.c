#include "context.h"

struct func_801E5ACC_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801E5ACC(s32 arg0, s32 arg1) {
    if ((((struct func_801E5ACC_Struct *) func_801BF6B0(7))->unkC < 7) || (func_801C1B1C() == 0)) {
        return 12;
    }
    return 0xD;
}
