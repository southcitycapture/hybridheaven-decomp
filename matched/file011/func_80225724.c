#include "context.h"
extern f32 D_8002FC20(f32);

typedef struct func_80225724_Struct {
    u8 pad0[0x35C];
    f32 unk35C;
    u8 pad360[4];
    f32 unk364;
} func_80225724_Struct;

void func_80225724(f32 *arg0, f32 *arg1) {
    f32 s;
    f32 d;
    f32 a;
    f32 t;

    s = D_8002FC20(((func_80225724_Struct *)&D_801BBBF0)->unk35C * ((func_80225724_Struct *)&D_801BBBF0)->unk35C + ((func_80225724_Struct *)&D_801BBBF0)->unk364 * ((func_80225724_Struct *)&D_801BBBF0)->unk364);
    d = s;
    if ((f64)s <= 0.0) {
        d = 1.0f;
    }
    t = *arg0 * ((func_80225724_Struct *)&D_801BBBF0)->unk35C + *arg1 * ((func_80225724_Struct *)&D_801BBBF0)->unk364;
    if (t < 0.0f) {
        a = -t;
    } else {
        a = t;
    }
    a = a / d;
    *arg0 = (a * 1.0f * ((func_80225724_Struct *)&D_801BBBF0)->unk35C) / d;
    *arg1 = (a * 1.0f * ((func_80225724_Struct *)&D_801BBBF0)->unk364) / d;
}
