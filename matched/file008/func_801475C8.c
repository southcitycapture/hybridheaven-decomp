#include "common.h"
#include "common.h"
extern f32 func_8002FC20(f32);

typedef struct func_801475C8_Struct {
    f32 x, y, z;
} func_801475C8_Struct;

s32 func_801475C8(func_801475C8_Struct *arg0) {
    f32 v;

    v = arg0->x * arg0->x + arg0->y * arg0->y + arg0->z * arg0->z;
    if (v != 0.0f && v != 1.0f) {
        if (v < 0.0 && func_8002FC20(v) == 0.0) {
        } else {
            v = 1.0f / func_8002FC20(v);
        }
        arg0->x *= v;
        arg0->y *= v;
        arg0->z *= v;
    }
    if (v == 0.0f) {
        return 0;
    }
    return 1;
}
