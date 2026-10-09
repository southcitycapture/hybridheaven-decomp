#include "context.h"
extern s32 D_801E6C34;
extern s32 func_801CC470(s32, s32, s32, s32, f32);

s32 func_801E57E8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x70EA40) != 0) {
        func_801CC470(2, 0x03480063, 0, 0, 2.0f);
        D_801E6C34 = 0;
        return 4;
    }
    return 3;
}
