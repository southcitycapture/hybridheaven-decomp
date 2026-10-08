#include "context.h"

f32 func_80130874(s32, f32 *);

f32 func_8013099C(s32 arg0) {
    f32 temp_fv1;
    f32 sp18;

    temp_fv1 = func_80130874((*(s32 *) &arg0) & 0x3FF & 0xFFFF, &sp18);
    if (sp18 == 0.0f) {
        return 0.0f;
    }
    return temp_fv1 / sp18;
}
