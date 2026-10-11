#include "context.h"

extern s32 D_801DB164;
extern s32 D_801DB168;
extern s32 D_801DB16C;

s32 func_801D1A74(void) {
    if (D_801DB168 != 0) {
        return 0;
    }
    if (D_801DB164 != 0) {
        return 0;
    }
    return D_801DB16C;
}
