#include "context.h"

extern s32 func_801D3620(void);
extern s32 D_801EA990;

s32 func_801E6B9C(s32 arg0, s32 arg1) {
    if (func_801D3620() == 0) {
        func_801CC470(2, 0x03200057, 0, 0, 6.0f);
        D_801EA990 = 0;
        return 0x1E;
    }
    return 0x1D;
}
