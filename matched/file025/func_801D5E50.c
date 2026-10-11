#include "context.h"

extern s32 D_801DB7F8;
extern s32 D_801DB7FC;
extern s32 D_801DB804;

s32 func_801D5E50(void) {
    if (D_801DB7FC != 0) {
        return 0;
    }
    if (D_801DB7F8 != 0) {
        return 0;
    }
    return D_801DB804;
}
