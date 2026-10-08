#include "context.h"

extern s32 func_801CD074(s32);
extern void func_801CD354();
extern s32 D_80208E2C;
extern s32 D_80208E30;

s32 func_801F5BCC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x39FBBF) != 0) {
        func_801CD074(0);
        func_801CD354();
        D_80208E2C = 0;
        D_80208E30 = 0;
        return 7;
    }
    return 6;
}
