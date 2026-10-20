#include "context.h"

extern f32 D_80043860[];

f32 func_80014798(f32 arg0, f32 arg1) {
    s32 i;
    f32 a;
    f32 b;
    f32 r;

    if (arg1 < 0.0f) {
        a = -arg1;
    } else {
        a = arg1;
    }
    if (arg0 < 0.0f) {
        b = -arg0;
    } else {
        b = arg0;
    }
    if (b < a) {
        if (arg1 == 0.0f) {
            return 0.0f;
        }
        i = (s32)(((f64)b * 512.0) / (f64)a);
        if ((u32)i >= 0x201U) {
            i = 0x200;
        }
        r = D_80043860[i];
    } else if (a < b) {
        if (arg0 == 0.0f) {
            return 0.0f;
        }
        i = (s32)(((f64)a * 512.0) / (f64)b);
        if ((u32)i >= 0x201U) {
            i = 0x200;
        }
        r = (f32)(1.5707963267948966 - (f64)D_80043860[i]);
    } else if (a == b) {
        r = 0.7853982f;
    }
    if ((arg1 < 0.0f) && (arg0 >= 0.0f)) {
        r = (f32)(3.141592653589793 - (f64)r);
    } else if ((arg1 < 0.0f) && (arg0 < 0.0f)) {
        r = (f32)((f64)r + 3.141592653589793);
    } else if ((arg1 >= 0.0f) && (arg0 < 0.0f)) {
        r = (f32)(6.283185307179586 - (f64)r);
    }
    return r;
}
