#include "context.h"

struct func_801E3768_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801E3768(s32 arg0, s32 arg1) {
    struct func_801E3768_Struct *ptr;

    ptr = func_801BF6B0(2);
    if (ptr->unkC <= 0) {
        return 0;
    }
    return 1;
}
