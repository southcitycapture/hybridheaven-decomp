#include "context.h"
extern s32 func_801C1B1C();

typedef struct func_801E6660_Struct {
    u8 pad0[0xC];
    s32 unkC;
} func_801E6660_Struct;

s32 func_801E6660(s32 arg0, s32 arg1) {
    if ((((func_801E6660_Struct *)func_801BF6B0(7))->unkC < 0x11) || (func_801C1B1C() == 0)) {
        return 0xA;
    }
    return 0xB;
}
