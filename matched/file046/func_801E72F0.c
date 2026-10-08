#include "context.h"

extern s32 D_801EAA54;

s32 func_801E72F0(s32 arg0, s32 arg1) {
    if (func_801D20AC() == 0) {
        func_801CC470(3, 0x019100FF, 0, 0, 6.0f);
        D_801EAA54 = 0;
        return 7;
    }
    return 6;
}
