#include "context.h"
extern void *func_801BF6B0(s32 arg0);

typedef struct func_801E6AF8_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E6AF8_Struct;

s32 func_801E6AF8(s32 arg0, s32 arg1) {
    if ((((func_801E6AF8_Struct *) func_801BF6B0(7))->unkC < 0x42) || (func_801C1B1C() == 0)) {
        return 0x27;
    }
    return 0x28;
}
