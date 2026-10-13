#include "context.h"

typedef struct func_801E1E94_Struct {
    u8 pad0[0xC];
    s32 unkC;
} func_801E1E94_Struct;

s32 func_801E1E94(s32 arg0, s32 arg1) {
    if (((func_801E1E94_Struct *)func_801BF6B0(7))->unkC < 8 || func_801C1B1C() == 0) {
        return 8;
    }
    return 9;
}
