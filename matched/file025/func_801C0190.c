#include "context.h"

extern s32 func_801C01F0(void);
extern s32 D_801D8CE4;

s32 func_801C0190(void) {
    if (D_801D8CE4 == 9) {
        return 0;
    }
    if (D_801D8CE4 == 0xA) {
        return 0;
    }
    if (func_801C01F0() != 0) {
        return 0;
    }
    return 1;
}
