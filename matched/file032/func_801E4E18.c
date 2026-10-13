#include "context.h"

typedef struct func_801E4E18_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E4E18_Struct;

s32 func_801E4E18(s32 arg0, s32 arg1) {
    if ((((func_801E4E18_Struct *) func_801BF6B0(7))->unkC < 0x6E) || (func_801C1B1C() == 0)) {
        return 0x2A;
    }
    return 0x2B;
}
