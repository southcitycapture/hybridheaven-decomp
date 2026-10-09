#include "context.h"
extern s32 D_801F2DB4;
extern void func_801CC4D8(s32, s32, s32, s32, f32);

s32 func_801E618C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xE4E1C0) != 0) {
        func_801CC4D8(2, 0x0320003D, 0, 0, 30.0f);
        D_801F2DB4 = 0;
        return 6;
    }
    return 5;
}
