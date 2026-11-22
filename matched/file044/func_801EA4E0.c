#include "common.h"

extern s32 D_801ED0FC;
extern void D_8038BD50(f32, f32, f32);
extern void func_8038BD88(f32, f32, f32);
extern void func_8038BE98(f32);
s32 func_801EA4E0(s32 arg0, s32 arg1) {
    f32 t;

    t = (f32) D_801ED0FC / 2;
    func_8038BE98(33.2999992f);
    D_8038BD50((0.5f * t) + 0.600000024f, (0.399999857f * t) + (-2.5999999f), ((-0.600000381f) * t) + -13.0f);
    func_8038BD88((0.399999619f * t) + 4.80000019f, (0.399999619f * t) + 19.7000008f, (-0.5f * t) + 6.80000019f);
    D_801ED0FC = D_801ED0FC + 1;
    if (D_801ED0FC >= 3) {
        D_801ED0FC = 0;
        return 0x24;
    }
    return 0x23;
}
