#include "context.h"

extern s32 func_801D0A34();
extern void func_801D0A74(s32 a);
extern void func_801D0AEC(s32 a);

s32 func_801F9750(s32 arg0, s32 arg1) {
    if (func_801D0A34() != 0) {
        func_801D0A74(1);
        func_801D0AEC(1);
        return 5;
    }
    return 4;
}
