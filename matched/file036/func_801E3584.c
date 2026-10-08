#include "common.h"

extern s32 D_801E4D14;
extern s32 D_801E4D18;
extern f32 D_801E5220[];
extern f32 D_801E5230[];

void func_801E3584(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    D_801E5220[0] = arg0;
    D_801E5220[1] = arg1;
    D_801E5220[2] = arg2;
    D_801E5230[0] = arg3;
    D_801E5230[1] = arg4;
    D_801E5230[2] = arg5;
    D_801E4D14 = 0;
    D_801E4D18 = 1;
}
