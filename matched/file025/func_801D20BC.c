#include "context.h"

extern s32 D_801DB198;
extern s32 D_801DB19C;
extern s32 D_801DB1C0;

s32 func_801D20BC(void) {
    if (D_801DB19C != 0) {
        return 0;
    }
    if (D_801DB198 != 0) {
        return 0;
    }
    return D_801DB1C0;
}
