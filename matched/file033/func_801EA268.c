#include "context.h"

struct func_801EA268_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801EA268(s32 arg0, s32 arg1) {
    struct func_801EA268_Struct *obj;

    obj = (struct func_801EA268_Struct *) func_801BF6B0(7);
    if ((obj->unkC < 0xA6) || (func_801C1B1C() == 0)) {
        return 0x42;
    }
    return 0x43;
}
