#include "context.h"

void func_80130AA0(s16 arg0, s16 arg1, s16 arg2, f32 *arg3, f32 *arg4, f32 *arg5) {
    f32 sa, ca, sb, cb, sc, cc;
    s32 angle;
    f32 sasb;
    f32 ox, oy, oz;

    angle = arg0;
    sa = func_8001EAD0(angle);
    ca = func_8001EB64(angle);
    angle = arg1;
    sb = func_8001EAD0(angle);
    cb = func_8001EB64(angle);
    angle = arg2;
    sc = func_8001EAD0(angle);
    cc = func_8001EB64(angle);
    sasb = sa * sb;
    ox = cb * cc * *arg3 + (sasb * cc - ca * sc) * *arg4 + (ca * sb * cc + sa * sc) * *arg5;
    oy = cb * sc * *arg3 + (sasb * sc + ca * cc) * *arg4 + (ca * sb * sc - sa * cc) * *arg5;
    oz = -sb * *arg3 + sa * cb * *arg4 + ca * cb * *arg5;
    *arg3 = ox;
    *arg4 = oy;
    *arg5 = oz;
}
