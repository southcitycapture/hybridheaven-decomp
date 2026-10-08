#include "context.h"

extern s32 func_801CE284();

s32 func_801E4E00(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        func_801CC4D8(0, 0x0348004E, 0, 0, 5.0f);
        return 0x27;
    }
    return 0x26;
}
