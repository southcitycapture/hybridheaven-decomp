#include "context.h"
extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
s32 func_801CE274(void);

s32 func_801E4B4C(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x01B8003C, 0, 0, 4.0f);
        return 0x1B;
    }
    return 26;
}
