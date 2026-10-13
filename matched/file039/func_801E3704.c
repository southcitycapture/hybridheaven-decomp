#include "context.h"

struct func_801E3704_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801E3704(s32 arg0, s32 arg1) {
    struct func_801E3704_Struct *obj;

    obj = (struct func_801E3704_Struct *) func_801BF6B0(7);
    if ((obj->unkC < 0x4D) || (func_801C1B1C() == 0)) {
        return 0x41;
    }
    return 0x42;
}
