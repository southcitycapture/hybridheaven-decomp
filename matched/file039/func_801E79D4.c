#include "context.h"

typedef struct func_801E79D4_Struct {
    u8 pad0[0xC];
    s32 unkC;
} func_801E79D4_Struct;

s32 func_801E79D4(s32 arg0, s32 arg1) {
    if (((func_801E79D4_Struct *)func_801BF6B0(7))->unkC < 0x2F || func_801C1B1C() == 0) {
        return 0x24;
    }
    return 0x25;
}
