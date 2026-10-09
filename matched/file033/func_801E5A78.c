#include "context.h"
extern s32 D_801F2CD8;
extern void func_801CC4D8(s32, s32, s32, s32, f32);

s32 func_801E5A78(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x4C4B40) != 0) {
        func_801CC4D8(0, 0x0348002F, 0, 0, 15.0f);
        D_801F2CD8 = 0;
        return 0x1D;
    }
    return 0x1C;
}
