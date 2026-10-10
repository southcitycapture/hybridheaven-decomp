#include "context.h"

extern void func_801D70A4(s32 arg0);

s32 func_801E45BC(s32 arg0, s32 arg1) {
    if (func_801D6FB0() == 0) {
        func_801D70A4(1);
        func_801CC470(1, 0x01B80042, 0, 0, 5.0f);
        return 0x1A;
    }
    return 0x19;
}
