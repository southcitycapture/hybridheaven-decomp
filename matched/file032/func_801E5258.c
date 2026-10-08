#include "common.h"

typedef struct func_801E5258_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E5258_Struct;

void *func_801BF6B0(s32 arg0);
s32 func_801C1B1C(void);
extern s32 D_801EADAC;

s32 func_801E5258(s32 arg0, s32 arg1) {
    if ((((func_801E5258_Struct *)func_801BF6B0(7))->unkC < 0x2F) || (func_801C1B1C() == 0)) {
        return 5;
    }
    D_801EADAC = 0;
    return 6;
}
