#include "common.h"

typedef struct func_801476E0_Struct { f32 x, y, z; } func_801476E0_Struct;
extern void func_8002FC20(f32);
void func_801476E0(func_801476E0_Struct *a, func_801476E0_Struct *b) {
    f32 dx = a->x - b->x;
    f32 dy = a->y - b->y;
    f32 dz = a->z - b->z;
    f32 s;
    s = dx * dx;
    s += dy * dy;
    s += dz * dz;
    func_8002FC20(s);
}
