#include "common.h"

#define x0 p[0]
#define y0 p[1]
#define z0 p[2]
#define x1 p[3]
#define y1 p[4]
#define z1 p[5]
#define x2 p[6]
#define y2 p[7]
#define z2 p[8]
#define x0f ((f32)x0)
#define y0f ((f32)y0)
#define z0f ((f32)z0)
#define x1f ((f32)x1)
#define y1f ((f32)y1)
#define z1f ((f32)z1)
#define x2f ((f32)x2)
#define y2f ((f32)y2)
#define z2f ((f32)z2)
#define ax arg0->a.x
#define ay arg0->a.y
#define az arg0->a.z
#define bx arg0->b.x
#define by arg0->b.y
#define bz arg0->b.z
#define e1x (x1 - x0)
#define e1y (y1 - y0)
#define e1z (z1 - z0)
#define e2x (x2 - x0)
#define e2y (y2 - y0)
#define e2z (z2 - z0)

typedef struct {
    u8 type;
    u8 pad1;
    s16 v[9];
} func_8010C21C_Node;

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} func_8010C21C_Vec;

typedef struct {
    func_8010C21C_Node *node;
    func_8010C21C_Vec a;
    func_8010C21C_Vec b;
} func_8010C21C_Arg;

s32 func_8010C21C(func_8010C21C_Arg *arg0) {
    s32 off;
    f32 nx;
    f32 ny;
    f32 nz;
    f32 ly;
    f32 dx;
    f32 dy;
    f32 dz;
    f32 num;
    f32 ty;
    f32 den;
    f32 md;
    f32 mx1;
    f32 my1;
    f32 mz1;
    f32 md1;
    f32 s1;
    s16 *p;
    f32 tx;
    f32 lx;
    f32 tz;
    f32 lz;
    f32 s2;
    f32 md2;
    f32 minx;
    f32 miny;
    f32 minz;
    f32 maxx;
    f32 maxy;
    f32 maxz;
    s16 lo0, hi0, lo1, hi1, lo2, hi2;

    if (arg0->a.x < arg0->b.x) {
        minx = arg0->a.x;
        maxx = arg0->b.x;
    } else {
        minx = arg0->b.x;
        maxx = arg0->a.x;
    }
    if (arg0->a.y < arg0->b.y) {
        miny = arg0->a.y;
        maxy = arg0->b.y;
    } else {
        miny = arg0->b.y;
        maxy = arg0->a.y;
    }
    if (arg0->a.z < arg0->b.z) {
        minz = arg0->a.z;
        maxz = arg0->b.z;
    } else {
        minz = arg0->b.z;
        maxz = arg0->a.z;
    }
    dx = bx - ax;
    dy = by - ay;
    dz = bz - az;
    for (off = 0; arg0->node[off].type != 0xFF; off++) {
        p = &arg0->node[off].v[0];
        if (p[0] < p[3]) {
            if (p[6] < p[3]) {
                hi0 = p[3];
                if (p[0] < p[6]) {
                    lo0 = p[0];
                } else {
                    lo0 = p[6];
                }
            } else {
                lo0 = p[0];
                hi0 = p[6];
            }
        } else {
            if (p[6] < p[0]) {
                hi0 = p[0];
                if (p[3] < p[6]) {
                    lo0 = p[3];
                } else {
                    lo0 = p[6];
                }
            } else {
                lo0 = p[3];
                hi0 = p[6];
            }
        }
        if (p[1] < p[4]) {
            if (p[7] < p[4]) {
                hi1 = p[4];
                if (p[1] < p[7]) {
                    lo1 = p[1];
                } else {
                    lo1 = p[7];
                }
            } else {
                lo1 = p[1];
                hi1 = p[7];
            }
        } else {
            if (p[7] < p[1]) {
                hi1 = p[1];
                if (p[4] < p[7]) {
                    lo1 = p[4];
                } else {
                    lo1 = p[7];
                }
            } else {
                lo1 = p[4];
                hi1 = p[7];
            }
        }
        if (p[2] < p[5]) {
            if (p[8] < p[5]) {
                hi2 = p[5];
                if (p[2] < p[8]) {
                    lo2 = p[2];
                } else {
                    lo2 = p[8];
                }
            } else {
                lo2 = p[2];
                hi2 = p[8];
            }
        } else {
            if (p[8] < p[2]) {
                hi2 = p[2];
                if (p[5] < p[8]) {
                    lo2 = p[5];
                } else {
                    lo2 = p[8];
                }
            } else {
                lo2 = p[5];
                hi2 = p[8];
            }
        }
        if (!(maxx < (f32)lo0) && !((f32)hi0 < minx) && !(maxy < (f32)lo1) && !((f32)hi1 < miny) &&
            !(maxz < (f32)lo2) && !((f32)hi2 < minz) &&
            ((s32 (*)(u8, s16 *))D_801BBAD4)(arg0->node[off].type, p) != 0) {
        nx = e1y * e2z - e2y * e1z;
        ny = e2x * e1z - e1x * e2z;
        nz = e1x * e2y - e2x * e1y;
        den = nx * dx + ny * dy + nz * dz;
        if (den < 0.0f) {
            md = -(nx * x0f + ny * y0f + z0f * nz);
            num = -nx * ax - ny * ay - nz * az - md;
            tx = dx * num;
            ty = dy * num;
            tz = dz * num;
            lx = dx * den;
            ly = dy * den;
            lz = dz * den;
            if ((tx >= 0.0f && tx <= lx) || (tx <= 0.0f && lx <= tx)) {
                if ((ty >= 0.0f && ty <= ly) || (ty <= 0.0f && ly <= ty)) {
                    if ((tz >= 0.0f && tz <= lz) || (tz <= 0.0f && lz <= tz)) {
                        tx += ax * den;
                        ty += ay * den;
                        tz += az * den;
                        mx1 = (f32)e1y * nz - (f32)e1z * ny;
                        my1 = nx * (f32)e1z - (f32)e1x * nz;
                        mz1 = (f32)e1x * ny - (f32)e1y * nx;
                        md1 = -(mx1 * x0f + my1 * y0f + z0f * mz1);
                        s1 = mx1 * x2f + my1 * y2f + z2f * mz1 + md1;
                        s2 = mx1 * tx + my1 * ty + mz1 * tz + md1 * den;
                        if ((s1 <= 0.0f && s2 >= 0.0f) || (s1 >= 0.0f && s2 <= 0.0f)) {
                            mx1 = (f32)(y2 - y1) * nz - (f32)(z2 - z1) * ny;
                            my1 = nx * (f32)(z2 - z1) - (f32)(x2 - x1) * nz;
                            mz1 = (f32)(x2 - x1) * ny - (f32)(y2 - y1) * nx;
                            md1 = -(mx1 * x1f + my1 * y1f + z1f * mz1);
                            s1 = mx1 * x0f + my1 * y0f + z0f * mz1 + md1;
                            s2 = mx1 * tx + my1 * ty + mz1 * tz + md1 * den;
                            if ((s1 <= 0.0f && s2 >= 0.0f) || (s1 >= 0.0f && s2 <= 0.0f)) {
                                mx1 = (f32)(y0 - y2) * nz - (f32)(z0 - z2) * ny;
                                my1 = nx * (f32)(z0 - z2) - (f32)(x0 - x2) * nz;
                                mz1 = (f32)(x0 - x2) * ny - (f32)(y0 - y2) * nx;
                                md2 = -(mx1 * x2f + my1 * y2f + z2f * mz1);
                                s1 = mx1 * x1f + my1 * y1f + z1f * mz1 + md2;
                                s2 = mx1 * tx + my1 * ty + mz1 * tz + md2 * den;
                                if ((s1 <= 0.0f && s2 >= 0.0f) || (s1 >= 0.0f && s2 <= 0.0f)) {
                                    return 1;
                                }
                            }
                        }
                    }
                }
            }
        }
        }
    }
    return 0;
}
