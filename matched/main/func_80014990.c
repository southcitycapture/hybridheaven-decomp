#include "common.h"


f32 func_8001EAD0(s16);
f32 func_8001EB64(s16);

typedef struct {
    f32 f0, f4, f8, fC, f10, f14, f18, f1C, f20, f24, f28, f2C, f30, f34, f38, f3C;
} func_80014990_Struct;

void func_80014990(void *a0, f32 a1, f32 a2, f32 a3, s32 a4, s32 a5, s32 a6) {
    func_80014990_Struct *m = a0;
    f32 sp40;
    f32 sp3C;
    f32 t0;
    f32 sp34;
    f32 s0;
    f32 s1;
    f32 n1;
    f32 c;

    s1 = func_8001EAD0(*(s16 *)((u8 *)&a4 + 2));
    s0 = func_8001EB64(*(s16 *)((u8 *)&a4 + 2));
    sp40 = func_8001EAD0(*(s16 *)((u8 *)&a5 + 2));
    sp34 = func_8001EB64(*(s16 *)((u8 *)&a5 + 2));
    sp3C = func_8001EAD0(*(s16 *)((u8 *)&a6 + 2));
    c = func_8001EB64(*(s16 *)((u8 *)&a6 + 2));
    n1 = -s1;
    m->f0 = sp34 * c;
    m->f4 = s1 * sp40 * c + s0 * sp3C;
    m->f8 = -s0 * sp40 * c + s1 * sp3C;
    m->fC = 0.0f;
    m->f10 = -sp34 * sp3C;
    m->f14 = n1 * sp40 * sp3C + s0 * c;
    m->f18 = s0 * sp40 * sp3C + s1 * c;
    m->f1C = 0.0f;
    m->f20 = sp40;
    m->f24 = n1 * sp34;
    m->f28 = s0 * sp34;
    m->f2C = 0.0f;
    m->f30 = m->f20 * a3 + (m->f0 * a1 + m->f10 * a2);
    m->f34 = a2;
    m->f38 = m->f28 * a3 + (m->f8 * a1 + m->f18 * a2);
    m->f3C = 1.0f;
}
