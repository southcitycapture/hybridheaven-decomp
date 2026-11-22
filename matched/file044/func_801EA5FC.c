#include "common.h"

extern s32 D_801ED0FC;
extern void D_8038BD50(f32, f32, f32);
extern void func_8038BD88(f32, f32, f32);
extern void func_8038BE98(f32);
s32 func_801EA5FC(s32 arg0, s32 arg1) {
    f32 t;
    f32 v;
    f32 d;

    d = (f32) 2.0;
    t = (f32) D_801ED0FC / d;
    func_8038BE98(33.2999992f);
    D_8038BD50(-0.5f * t + 1.10000002f, (-0.399999857f) * t + (-2.20000005f), 0.600000381f * t + (-13.6000004f));
    v = (-0.399999619f) * t;
    func_8038BD88(v + 5.19999981f, v + 20.1000004f, 0.5f * t + 6.30000019f);
    D_801ED0FC++;
    if (D_801ED0FC >= 3) {
        return 0x25;
    }
    return 0x24;
}
