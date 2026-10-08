#include "common.h"

extern f32 D_801DA71C;
extern f32 D_801DA720;

void func_801C8794(f32 arg0, s32 arg1) {
    D_801DA71C = (4.0f * arg0) / (f32) arg1;
    D_801DA720 = (8.0f * arg0) / (f32) (arg1 * arg1);
}
