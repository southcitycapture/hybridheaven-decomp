#include "context.h"
struct func_801C4848_Vec {
    u8 pad0[4];
    f32 x;
    u8 pad1[4];
    f32 y;
};
struct func_801C4848_Obj {
    u8 pad0[0x2C];
    struct func_801C4848_Vec *vec;
};
extern struct func_801C4848_Obj *D_801BBCD0;

s32 func_801C3D20(f32 arg0, f32 arg1, f32 arg2) {
    struct func_801C4848_Vec *temp_v0;
    f32 temp_fv0;
    f32 temp_fv1;

    temp_v0 = D_801BBCD0->vec;
    temp_fv0 = temp_v0->x - arg0;
    temp_fv1 = temp_v0->y - arg1;
    if (func_8002FC20((temp_fv0 * temp_fv0) + (temp_fv1 * temp_fv1)) <= arg2) {
        return 1;
    }
    return 0;
}
