#include "context.h"
extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
extern s32 func_801D697C();

s32 func_801E3D3C(s32 arg0, s32 arg1) {
    if (func_801D697C() == 0) {
        func_801CC470(0, 0x03480076, 0, 0, 5.0f);
        return 8;
    }
    return 7;
}
