#include "context.h"

struct func_801E2B4C_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801E2B4C(s32 arg0, s32 arg1) {
    struct func_801E2B4C_Struct *obj;

    obj = (struct func_801E2B4C_Struct *)func_801BF6B0(7);
    if (obj->unkC < 0x66 || func_801C1B1C() == 0) {
        return 0x2E;
    }
    return 0x2F;
}
