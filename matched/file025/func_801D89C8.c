#include "context.h"

extern s32 D_801DBB74;
extern s32 D_801DBB78;
extern s32 D_801DBB7C;

s32 func_801D89C8(void) {
    if (D_801DBB78 != 0) {
        return 0;
    }
    if (D_801DBB74 != 0) {
        return 0;
    }
    return D_801DBB7C;
}
