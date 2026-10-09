#include "context.h"

extern s32 func_801CEDD4();
extern s32 D_801E9800;

s32 func_801E6B10(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80047, 0, 0, 4.0f);
        D_801E9800 = 0;
        return 0x38;
    }
    return 0x37;
}
