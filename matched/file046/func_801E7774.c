#include "context.h"

typedef struct func_801E7774_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E7774_Struct;

s32 func_801E7774(s32 arg0, s32 arg1) {
    if ((((func_801E7774_Struct *) func_801BF6B0(7))->unkC < 0x63) || (func_801C1B1C() == 0)) {
        return 0x16;
    }
    return 0x17;
}
