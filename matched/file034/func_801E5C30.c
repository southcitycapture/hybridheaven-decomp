#include "context.h"

typedef struct func_801E5C30_Struct {
    u8 pad0[0xC];
    s32 unkC;
} func_801E5C30_Struct;

s32 func_801E5C30(s32 arg0, s32 arg1) {
    if (((func_801E5C30_Struct *) func_801BF6B0(7))->unkC < 0xB || func_801C1B1C() == 0) {
        return 13;
    }
    return 14;
}
