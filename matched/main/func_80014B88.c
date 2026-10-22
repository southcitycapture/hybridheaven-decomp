#include "context.h"

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);

void func_80014B88(void *arg0, s16 arg1, s16 arg2, s16 arg3) {
    f32 sx;
    f32 cx;
    f32 sy;
    f32 cy;
    f32 sz;
    f32 cz;
    f32 t1;
    f32 t2;
    f32 t3;
    f32 t4;
    f32 pad1, pad2, pad3, pad4;

    sx = func_8001EAD0(arg1);
    cx = func_8001EB64(arg1);
    sy = func_8001EAD0(arg2);
    cy = func_8001EB64(arg2);
    sz = func_8001EAD0(arg3);
    cz = func_8001EB64(arg3);
    ((f32 *)arg0)[0] = cy * cz;
    ((f32 *)arg0)[1] = cy * sz;
    t2 = sx * sz;
    t1 = sx * cz;
    ((f32 *)arg0)[2] = -sy;
    t3 = cx * sz;
    ((f32 *)arg0)[4] = t1 * sy - t3;
    t4 = cx * cz;
    ((f32 *)arg0)[5] = t2 * sy + t4;
    ((f32 *)arg0)[6] = sx * cy;
    ((f32 *)arg0)[8] = t4 * sy + t2;
    ((f32 *)arg0)[9] = t3 * sy - t1;
    ((f32 *)arg0)[10] = cx * cy;
    ((f32 *)arg0)[3] = 0.0f;
    ((f32 *)arg0)[7] = 0.0f;
    ((f32 *)arg0)[11] = 0.0f;
    ((f32 *)arg0)[12] = 0.0f;
    ((f32 *)arg0)[13] = 0.0f;
    ((f32 *)arg0)[14] = 0.0f;
    ((f32 *)arg0)[15] = 1.0f;
}
