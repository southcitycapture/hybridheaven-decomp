#include "context.h"

extern s32 D_801DAF18;
extern s32 D_801DAF1C;
extern s32 D_801DAF40;

s32 func_801D0408(void) {
    if (D_801DAF1C != 0) {
        return 0;
    }
    if (D_801DAF18 != 0) {
        return 0;
    }
    return D_801DAF40;
}
