#include "context.h"

extern s32 D_801E703C;

s32 func_801E26E4(s32 arg0, s32 arg1) {
    if (D_801E703C >= 0x3D) {
        func_801E2044();
        return 0xF;
    }
    D_801E703C = D_801E703C + 1;
    return 0xE;
}
