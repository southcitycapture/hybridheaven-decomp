#include "context.h"
extern s32 func_801C1B1C();

typedef struct func_801E9EA0_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E9EA0_Struct;

s32 func_801E9EA0(s32 arg0, s32 arg1) {
    if ((((func_801E9EA0_Struct *)func_801BF6B0(7))->unkC < 0xF) || (func_801C1B1C() == 0)) {
        return 0xF;
    }
    return 0x10;
}
