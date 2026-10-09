#include "context.h"
void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
s32 func_801CE274(void);

s32 func_801E42F8(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348007A, 0, 0x100, 10.0f);
        return 6;
    }
    return 5;
}
