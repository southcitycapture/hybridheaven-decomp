#include "context.h"

extern void func_80130F74(f32 *);
extern void func_80131074(f32 *, f32 *, f32 *);

typedef struct func_80130CBC_Struct {
    u8 pad0[0x1C];
    f32 f1C;
    u8 pad20[0x10];
    f32 f30;
    f32 f34;
    f32 f38;
    f32 f3C;
    f32 f40;
    f32 f44;
} func_80130CBC_Struct;

f32 func_80130CBC(func_80130CBC_Struct *arg0, f32 arg1, f32 arg2, f32 arg3, f32 *arg4, f32 *arg5) {
    f32 sp44[3];
    f32 sp38[3];
    f32 sp2C[3];
    f32 r;
    f32 sp24;

    sp44[0] = arg0->f30 - arg0->f3C;
    sp44[1] = arg0->f34 - arg0->f40;
    sp44[2] = arg0->f38 - arg0->f44;
    sp38[0] = arg1 - arg0->f30;
    sp38[1] = arg2 - arg0->f34;
    sp38[2] = arg3 - arg0->f38;
    func_80130F74(sp44);
    func_80131074(sp38, sp2C, sp44);
    sp24 = func_8001EB64((s16) (s32) (((arg0->f1C / (f32)2.0) * 8192.0f) / 360.0f));
    r = (-sp2C[2] * func_8001EAD0((s16) (s32) (((arg0->f1C / (f32)2.0) * 8192.0f) / 360.0f))) / sp24;
    if (r < 0.0f) {
        return r;
    }
    *arg4 = sp2C[0] / r;
    *arg5 = sp2C[1] / r;
    return r;
}
