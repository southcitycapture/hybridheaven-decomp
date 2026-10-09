#include "context.h"

extern void *func_801BF6B0(s32 arg0);
extern s32 func_801D7634(s32 arg0, s32 arg1);
extern void func_8038D33C(f32 arg0, f32 arg1, s32 arg2, s32 arg3, f32 arg4, f32 arg5);
extern f32 D_801E794C;

s32 func_801E66DC(s32 arg0, s32 arg1) {
    void *temp_v0;

    if ((((s32 *) func_801BF6B0(6))[3] < 8) && ((func_801D7634(0x01B80047, 6) != 0) || (func_801D7634(0x01B80047, 0x24) != 0))) {
        temp_v0 = ((void **) ((void **) ((void **) ((void **) ((void **) ((void **) func_801DAAF0[9])[2])[2])[2])[2])[9])[11];
        func_8038D33C(((f32 *) temp_v0)[1], ((f32 *) temp_v0)[2], ((s32 *) temp_v0)[3], 0x654, D_801E794C, 1.0f);
    }
    return 0x14;
}
