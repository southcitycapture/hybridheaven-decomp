#include "context.h"

extern s32 D_801DB354;
extern s32 D_801DB358;
extern s32 D_801DB35C;

s32 func_801D3270(void) {
    if (D_801DB358 != 0) {
        return 0;
    }
    if (D_801DB354 != 0) {
        return 0;
    }
    return D_801DB35C;
}
