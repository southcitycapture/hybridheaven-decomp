#include "common.h"


typedef struct func_80367CE8_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_80367CE8_Struct;

void *func_80367CE8(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    func_80367CE8_Struct sp;
    f32 t;

    sp.unk0 = (arg3 * arg2) + (arg4 * arg1);
    t = arg3 * arg1;
    sp.unk8 = (arg4 * arg2) - t;
    sp.unk4 = 0.0f;
    *(func_80367CE8_Struct *) arg0 = sp;
    return arg0;
}
