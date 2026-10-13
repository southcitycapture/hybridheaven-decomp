#include "context.h"

extern f32 D_801DA71C;
extern f32 D_801DA720;

f32 func_801C87E0(s32 arg0) {
    return ((f32) arg0 * D_801DA71C) - (0.5f * (D_801DA720 * (f32) (arg0 * arg0)));
}
