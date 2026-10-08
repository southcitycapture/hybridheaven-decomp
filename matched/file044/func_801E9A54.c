#include "context.h"

extern s32 D_801ED0F8;

s32 func_801E9A54(s32 arg0, s32 arg1) {
    if (func_801D3620() == 0) {
        func_801CC470(2, 0x03200055, 0, 0, 5.0f);
        D_801ED0F8 = 0;
        return 8;
    }
    return 7;
}
