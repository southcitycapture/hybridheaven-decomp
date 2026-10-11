#include "context.h"
extern void *func_801BF6B0(s32 arg0);

typedef struct func_801E3590_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E3590_Struct;

s32 func_801E3590(s32 arg0, s32 arg1) {
    if ((((func_801E3590_Struct *) func_801BF6B0(7))->unkC < 0x42) || (func_801C1B1C() == 0)) {
        return 0x3C;
    }
    return 0x3D;
}
