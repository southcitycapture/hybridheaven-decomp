#include "context.h"

extern s32 func_801E2EAC(s32);

s32 func_801E37B8(s32 arg0, s32 arg1) {
    s32 i;

    for (i = 0; i != 0xE; i++) {
        func_801E2EAC(i);
    }
    return 4;
}
