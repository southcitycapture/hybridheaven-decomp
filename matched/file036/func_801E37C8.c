#include "common.h"

extern s32 D_801E4D44;
extern s32 D_801E4D48;
extern f32 D_801E5240[];
extern f32 D_801E5250[];

void func_801E37C8(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    D_801E5240[0] = arg0;
    D_801E5240[1] = arg1;
    D_801E5240[2] = arg2;
    D_801E5250[0] = arg3;
    D_801E5250[1] = arg4;
    D_801E5250[2] = arg5;
    D_801E4D44 = 0;
    D_801E4D48 = 1;
}
