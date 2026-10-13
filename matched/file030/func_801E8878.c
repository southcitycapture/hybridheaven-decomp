#include "context.h"

struct func_801E8878_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801E8878(s32 arg0, s32 arg1) {
    if (((struct func_801E8878_Struct *)func_801BF6B0(7))->unkC < 0xB || func_801C1B1C() == 0) {
        return 7;
    }
    return 8;
}
