#include "common.h"

extern void func_801CC4D8(s32, s32, s32, s32, f32);
extern void func_801CE3C4(s32);
extern void func_801CE3D0(s32);

s32 func_801E6280(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x02CF3293) != 0) {
        func_801CC4D8(0, 0x0348005C, 0, 0, 5.0f);
        func_801CE3C4(1);
        func_801CE3D0(0);
        return 0x1E;
    }
    return 0x1D;
}
