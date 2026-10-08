#include "context.h"

f32 func_801306D0(s32, f32 *);                      /* extern */

f32 func_80130708(s32 arg0) {
    f32 temp_fv1;
    f32 sp18;

    if (&arg0 == NULL) {
        return 0.0f;
    }
    temp_fv1 = func_801306D0(arg0 & 0xFFFF, &sp18);
    if (sp18 == 0.0f) {
        return 0.0f;
    }
    return temp_fv1 / sp18;
}
