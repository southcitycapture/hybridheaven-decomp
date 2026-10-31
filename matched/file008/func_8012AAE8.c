#include "common.h"
extern f32 func_8002FC20(f32, f32);


typedef struct func_8012AAE8_Struct {
    u8 pad0[0x24];
    struct func_8012AAE8_Obj *obj;
    u8 pad28[0x18];
    f32 v40;
    f32 v44;
    f32 v48;
} func_8012AAE8_Struct;
typedef struct func_8012AAE8_Obj {
    u8 pad0[0x2C];
    f32 *a;
    f32 *b;
} func_8012AAE8_Obj;

s32 func_8012AAE8(func_8012AAE8_Struct *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    f32 *x, *y, *z;
    f32 d, curx, cury, curz;

    if (arg0->obj->a != NULL) {
        x = arg0->obj->a + 1; y = arg0->obj->a + 2; z = arg0->obj->a + 3;
    } else {
        x = arg0->obj->b + 1; y = arg0->obj->b + 2; z = arg0->obj->b + 3;
    }
    d = func_8002FC20((arg1 - *x) * (arg1 - *x) + (arg2 - *y) * (arg2 - *y) + (arg3 - *z) * (arg3 - *z), arg2 - *y);
    if (d * arg4 == 0.0f) {
        arg0->v40 = 0.0f;
        arg0->v44 = 0.0f;
        arg0->v48 = 0.0f;
        return 0;
    }
    arg0->v40 = ((arg1 - *x) / d) * arg4;
    arg0->v44 = ((arg2 - *y) / d) * arg4;
    arg0->v48 = ((arg3 - *z) / d) * arg4;
    curx = *x;
    if ((arg1 - ((f64)arg0->v40 + curx)) * (f64)(arg1 - curx) < 0.0 ||
        (cury = *y, (arg2 - ((f64)arg0->v44 + cury)) * (f64)(arg2 - cury) < 0.0) ||
        (curz = *z, (arg3 - ((f64)arg0->v48 + curz)) * (f64)(arg3 - curz) < 0.0)) {
        *x = arg1;
        *y = arg2;
        *z = arg3;
        arg0->v40 = 0.0f;
        arg0->v44 = 0.0f;
        arg0->v48 = 0.0f;
        return 0;
    }
    return 1;
}
