#include "context.h"

extern s32 D_801DB660;
extern s32 D_801DB664;
extern s32 D_801DB684;

s32 func_801D51A4(void) {
    if (D_801DB664 != 0) {
        return 0;
    }
    if (D_801DB660 != 0) {
        return 0;
    }
    return D_801DB684;
}
