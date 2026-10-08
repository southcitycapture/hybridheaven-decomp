#include "context.h"

extern s32 D_801DAC70;
extern s32 D_801DAC74;
extern s32 D_801DAC78;

s32 func_801CE284(void) {
    if (D_801DAC74 != 0) {
        return 0;
    }
    if (D_801DAC70 != 0) {
        return 0;
    }
    return D_801DAC78;
}
