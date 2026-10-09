#include "context.h"

extern void func_8038D28C(s32 a0);

s32 func_801E50E4(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_8038D28C(0x23F);
        func_801CC470(0, 0x03480074, 0, 0, 2.0f);
        return 0x1D;
    }
    return 0x1C;
}
