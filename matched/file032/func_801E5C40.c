#include "context.h"

struct func_801E5C40_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801E5C40(s32 arg0, s32 arg1) {
    struct func_801E5C40_Struct *obj;

    obj = (struct func_801E5C40_Struct *)func_801BF6B0(7);
    if (obj->unkC < 0x66 || func_801C1B1C() == 0) {
        return 0x1C;
    }
    return 0x1D;
}
