#include "context.h"

#define G ((func_801178E4_Struct *)&D_801BBBF0)

void func_801182F4(s16 arg0, s16 arg1, f32 *arg2, f32 *arg3, f32 *arg4, f32 *arg5, f32 *arg6, f32 *arg7) {
    f32 t;

    t = func_8001EB64(arg1);
    *arg2 = G->unkE0->unk2C->unk4 - (func_8001EB64(arg0) * (3.0 * t));
    *arg3 = (G->unkE0->unk2C->unk8 + 18.0) - (func_8001EAD0(arg1) * 3.0);
    t = func_8001EB64(arg1);
    *arg4 = G->unkE0->unk2C->unkC - (func_8001EAD0(arg0) * (3.0 * t));
    t = func_8001EB64(arg1);
    *arg5 = ((f64)func_8001EB64(arg0) * (f64)t) + G->unkE0->unk2C->unk4;
    *arg6 = func_8001EAD0(arg1) + (G->unkE0->unk2C->unk8 + 18.0);
    t = func_8001EB64(arg1);
    *arg7 = ((f64)func_8001EAD0(arg0) * (f64)t) + G->unkE0->unk2C->unkC;
}
