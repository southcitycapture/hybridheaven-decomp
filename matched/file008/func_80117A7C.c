#include "context.h"

extern f64 D_80189B30;
extern f64 D_80189B38;

s32 func_80117A7C(s16 arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 *arg4, f32 *arg5, f32 *arg6) {
    *arg1 = (f32) ((f64) ((func_801178E4_Struct *)&D_801BBBF0)->unkE0->unk2C->unk4 - ((f64) func_8001EB64(arg0) * D_80189B30));
    *arg2 = (f32) ((f64) ((func_801178E4_Struct *)&D_801BBBF0)->unkE0->unk2C->unk8 + 25.0 + (f64) ((func_801178E4_Struct *)&D_801BBBF0)->unk320);
    *arg3 = (f32) ((f64) ((func_801178E4_Struct *)&D_801BBBF0)->unkE0->unk2C->unkC - ((f64) func_8001EAD0(arg0) * D_80189B38));
    *arg4 = ((func_801178E4_Struct *)&D_801BBBF0)->unkE0->unk2C->unk4;
    *arg5 = (f32) ((f64) ((func_801178E4_Struct *)&D_801BBBF0)->unkE0->unk2C->unk8 + 15.0);
    *arg6 = ((func_801178E4_Struct *)&D_801BBBF0)->unkE0->unk2C->unkC;
    if (func_801084C4(*arg4, *arg5, *arg6, *arg1, *arg2, *arg3) != 0) {
        *arg1 = ((func_801178E4_Struct *)&D_801BBBF0)->unk374;
        *arg2 = ((func_801178E4_Struct *)&D_801BBBF0)->unk378;
        *arg3 = ((func_801178E4_Struct *)&D_801BBBF0)->unk37C;
    }
}
