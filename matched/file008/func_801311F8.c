#include "common.h"
f32 func_80130874(s32, f32 *);

extern f32 func_8002FC20(f32);
extern void func_801315A8(void *, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern void func_8013173C(void *, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern void func_801318D8(void *, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, void *, f32, f32);
extern void func_80131B24(void *, void *, void *, u16, s32, s32);
extern f64 D_8018D6B8;

typedef struct { u16 a, b, c; } func_801311F8_StructA;
typedef struct { f32 x, y, z; } func_801311F8_StructB;

void func_801311F8(func_801311F8_StructA *arg0, func_801311F8_StructB *arg1, u16 arg2, u16 arg3, u16 arg4) {
    f32 fs2;
    f32 spC0, spBC, spB8;
    f32 fs1;
    f32 spB0, spAC, spA8, spA4;
    f32 fs0, fv1, ft5;
    f32 sp94;
    f32 t0, sp60, t3, p1, p2, p3;
    u16 pu;
    u16 sp78, sp76, sp74;

    fs2 = func_8002FC20((arg1->y * arg1->y) + (arg1->x * arg1->x));
    if (arg1->y >= 0.0f) {
        spC0 = 1.0f;
    } else {
        spC0 = -1.0f;
    }
    sp74 = arg0->a;
    sp76 = arg0->b;
    sp78 = arg0->c;
    arg0->a = 0x200;
    spBC = func_80130874(arg2, &spB8);
    fs1 = func_80130874(arg3, &spB0);
    spAC = func_80130874(arg4, &spA8);
    if (fs2 < 0.0f) {
        fv1 = -fs2;
    } else {
        fv1 = fs2;
    }
    if ((f64) fv1 < D_8018D6B8) {
        if (arg1->z > 0.0f) {
            spA4 = spB0 * spAC;
            fs0 = spB0 * spA8;
            func_801315A8(arg0, spA4, func_8002FC20((fs1 * fs1) + (fs0 * fs0)), fs1, fs0, spBC, spB8, fs1, spB0, spAC, spA8);
            func_80131B24(arg0, &arg0->b, &arg0->c, sp74, sp76, sp78);
            return;
        }
        spA4 = -spB0 * spAC;
        fs2 = -fs1;
        fs0 = spB0 * spA8;
        func_8013173C(arg0, spA4, func_8002FC20((fs2 * fs2) + (fs0 * fs0)), fs2, fs0, spBC, spB8, fs1, spB0, spAC, spA8);
        func_80131B24(arg0, &arg0->b, &arg0->c, sp74, sp76, sp78);
        return;
    }
    fv1 = spB0 * spAC;
    t0 = arg1->z;
    ft5 = fs1 * t0;
    spA4 = -((t0 * fv1) - (fs1 * fs2 * spC0));
    fs0 = (arg1->x * fv1) + ((((spB0 * spA8 * arg1->y) + (ft5 * arg1->x)) / fs2) * spC0);
    sp94 = (arg1->y * fv1) + ((((-spB0 * spA8 * arg1->x) + (ft5 * arg1->y)) / fs2) * spC0);
    func_801318D8(arg0, spA4, func_8002FC20((sp94 * sp94) + (fs0 * fs0)), sp94, fs0, spBC, spB8, fs1, spB0, spAC, spA8, arg1, fs2, spC0);
    func_80131B24(arg0, &arg0->b, &arg0->c, sp74, sp76, sp78);
}
