#include "context.h"

extern void *func_801BF6B0(s32 arg0);
extern s32 func_801C1B1C();

typedef struct func_801E49D4_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E49D4_Struct;

s32 func_801E49D4(s32 arg0, s32 arg1) {
    if ((((func_801E49D4_Struct *)func_801BF6B0(7))->unkC < 0x1C) || (func_801C1B1C() == 0)) {
        return 0x18;
    }
    return 0x19;
}
