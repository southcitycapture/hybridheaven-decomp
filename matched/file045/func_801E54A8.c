#include "context.h"

extern s32 func_801CE274();
extern s32 D_801E8480;

s32 func_801E54A8(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348007A, 0, 0x100, 10.0f);
        D_801E8480 = 0;
        return 0xB;
    }
    return 0xA;
}
