#include "common.h"


struct func_8002DD00_Struct {
    u8 pad0[0x10];
    f32 unk10;
    f32 unk14;
    u8 pad18[4];
    f32 unk1C;
};

f32 func_8002DD00(struct func_8002DD00_Struct *arg0, s32 arg1) {
    f32 v;
    f64 t;

    arg0->unk14 = arg0->unk14 + arg0->unk10 * (f32) arg1;
    t = arg0->unk14;
    if (t > 2.0) {
        arg0->unk14 = t - 4.0;
    } else {
        arg0->unk14 = t;
    }
    v = arg0->unk14;
    if (v < 0.0f) {
        v = -v;
    }
    v = (f32) (v - 1.0);
    return arg0->unk1C * v;
}
