#include "context.h"

extern f64 D_8004D480[];
extern f64 D_8004D4A8;
extern f64 D_8004D4B0;
extern f64 D_8004D4B8;
extern f32 D_8004D4C0;
extern f32 D_8004D4D0;

f32 func_80032720(f32 x) {
    f64 dx, xsq, poly;
    f64 dn;
    f32 xabs;
    s32 n;
    f64 result;
    s32 ix, xpt;

    ix = *(s32 *)&x;
    xpt = (ix >> 22);
    xpt &= 0x1ff;

    if (xpt < 0x136) {
        xabs = (x > 0.0f) ? x : -x;
        dx = xabs;
        dn = dx * D_8004D4A8 + .5;
        if (0.0 <= dn) {
            n = dn + .5;
        } else {
            n = dn - .5;
        }
        dn = n;
        dn -= .5;
        dx -= dn * D_8004D4B0;
        dx -= dn * D_8004D4B8;
        xsq = dx * dx;
        poly = ((D_8004D480[4] * xsq + D_8004D480[3]) * xsq + D_8004D480[2]) * xsq + D_8004D480[1];
        result = dx + (dx * xsq) * poly;
        if ((n & 0x0001) == 0) {
            return (f32)result;
        }
        return -(f32)result;
    }
    if (x != x) {
        return D_8004D4D0;
    }
    return D_8004D4C0;
}
