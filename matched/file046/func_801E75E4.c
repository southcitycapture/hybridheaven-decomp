#include "context.h"

typedef struct func_801E75E4_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E75E4_Struct;

s32 func_801E75E4(s32 arg0, s32 arg1) {
    if ((((func_801E75E4_Struct *)func_801BF6B0(7))->unkC < 0x5B) || (func_801C1B1C() == 0)) {
        return 0x11;
    }
    return 0x12;
}
