#include "context.h"
extern f32 D_801EDEB4;
extern f32 D_801EDEB8;
extern f32 D_801EDEBC;
extern f32 D_801EDEC0;
extern f32 D_801EDEC4;
extern f32 D_801EDEC8;
extern f32 D_801EDECC;
extern f32 D_801EDED0;
extern f32 D_801EDED4;
extern f32 D_801EDED8;

s32 func_801EA5FC(s32 arg0, s32 arg1) {
    f32 t;
    f32 v;
    f32 d;

    d = (f32) 2.0;
    t = (f32) D_801ED0FC / d;
    func_8038BE98(D_801EDEB4);
    D_8038BD50(-0.5f * t + D_801EDEB8, D_801EDEBC * t + D_801EDEC0, D_801EDEC4 * t + D_801EDEC8);
    v = D_801EDECC * t;
    func_8038BD88(v + D_801EDED0, v + D_801EDED4, 0.5f * t + D_801EDED8);
    D_801ED0FC++;
    if (D_801ED0FC >= 3) {
        return 0x25;
    }
    return 0x24;
}
