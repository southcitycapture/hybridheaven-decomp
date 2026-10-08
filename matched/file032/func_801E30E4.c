#include "context.h"

typedef struct func_801E30E4_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E30E4_Struct;

s32 func_801E30E4(s32 arg0, s32 arg1) {
    if ((((func_801E30E4_Struct *) func_801BF6B0(7))->unkC < 0x8E) || (func_801C1B1C() == 0)) {
        return 0x3F;
    }
    return 0x40;
}
