#include "context.h"

extern s32 D_801DB084;
extern s32 D_801DB088;
extern s32 D_801DB0A8;

s32 func_801D11D4(void) {
    if (D_801DB088 != 0) {
        return 0;
    }
    if (D_801DB084 != 0) {
        return 0;
    }
    return D_801DB0A8;
}
