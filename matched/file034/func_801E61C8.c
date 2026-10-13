#include "context.h"

typedef struct func_801E61C8_Struct {
    u8 pad0[0xC];
    s32 unkC;
} func_801E61C8_Struct;

s32 func_801E61C8(s32 arg0, s32 arg1) {
    if ((((func_801E61C8_Struct *) func_801BF6B0(7))->unkC < 0x20) || (func_801C1B1C() == 0)) {
        return 0x18;
    }
    return 0x19;
}
