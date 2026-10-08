#include "common.h"

extern s32 func_801CC470(s32, s32, s32, s32, f32);
extern s32 D_801E87B0;

s32 func_801E7780(s32 arg0, s32 arg1) {
    if (D_801E87B0 != 0) {
        if (D_801E87B0 != 1) {
        }
    } else {
        if (func_801C0B8C(0x02EDB713) != 0) {
            func_801CC470(4, 0x03480090, 0, 0x100, 3.0f);
            D_801E87B0 = 1;
        }
    }
    return 4;
}
