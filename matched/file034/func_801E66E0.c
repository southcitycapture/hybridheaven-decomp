#include "context.h"

typedef struct func_801E66E0_Struct {
    u8 pad0[0xC];
    s32 unkC;
} func_801E66E0_Struct;

s32 func_801E66E0(s32 arg0, s32 arg1) {
    if ((((func_801E66E0_Struct *) func_801BF6B0(7))->unkC < 0x30) || (func_801C1B1C() == 0)) {
        return 0x20;
    }
    return 0x21;
}
