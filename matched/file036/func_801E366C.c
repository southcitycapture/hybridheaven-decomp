#include "common.h"

extern void func_801E34C0();
extern void func_801E3584(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5);
extern void func_801E3660(s32 arg0);

s32 func_801E366C(s32 arg0, s32 arg1) {
    func_801E34C0();
    func_801E3584(45.5f, 16.5f, -94.5f, 45.0f, 17.0f, -94.5f);
    func_801E3660(0);
    return 3;
}
