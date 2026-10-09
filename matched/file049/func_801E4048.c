#include "context.h"
extern s32 D_801E7144;
extern void func_801CC4D8(s32, s32, s32, s32, f32);

s32 func_801E4048(s32 arg0, s32 arg1) {
    s32 v;

    if (func_801C0B8C(0) != 0) {
        v = D_801E7144;
        if (v >= 0xB) {
            func_801CC4D8(0, 0x01B8003C, 0, 0, 5.0f);
            return 9;
        }
        D_801E7144 = v + 1;
    }
    return 8;
}
