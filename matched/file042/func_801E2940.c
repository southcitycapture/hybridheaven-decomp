#include "context.h"

extern void func_8038D28C(s32 arg0);
extern s32 D_801E4E70;

s32 func_801E2940(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x4C4B40) != 0) {
        D_801E4E70 = 0;
        func_8038D28C(0x254);
        return 2;
    }
    return 1;
}
