#include "context.h"

extern s32 func_8010854C(s32, s32, s32, s32, f32, f32);

s32 func_8012B81C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 *fp;
    s32 *ap;
    fp = (f32 *) &arg2;
    ap = &arg3;
    if (func_8010854C(arg0, arg1, arg2, arg3, fp[2], fp[3]) != 0) {
        return 1;
    }
    return 0;
}
