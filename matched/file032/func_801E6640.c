#include "context.h"

struct func_801E6640_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801E6640(s32 arg0, s32 arg1) {
    struct func_801E6640_Struct *obj;

    obj = (struct func_801E6640_Struct *) func_801BF6B0(7);
    if ((obj->unkC < 0xA6) || (func_801C1B1C() == 0)) {
        return 0x30;
    }
    return 0x31;
}
