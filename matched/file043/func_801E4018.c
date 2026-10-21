#include "context.h"
extern f64 D_801EA1F0;
extern f32 D_801EA1F8;

s32 func_801E4018(s32 arg0, s32 arg1) {
    f64 t;
    f32 k;
    f32 b;
    f32 c;
    s32 i;
    u64 r;

    if (func_801C0DE4(3, 1, 0x40F33334) != 0) {
        func_801C0EB0(3, 1);
        return 7;
    }
    r = func_801C0F18(3, 1);
    t = func_80034C24(r);
    i = 1;
    if (D_801E96B8 + 1 >= 2) {
        k = (f32)(t / D_801EA1F0) / D_801EA1F8;
        do {
            b = (f32)(i - 1) * D_801E96BC + -51.0f;
            c = (f32)(i - 1) * D_801E96BC + -940.0f;
            ENTRY(i * 4)->unk30->unk4 = (c - b) * k + b;
            i++;
        } while (D_801E96B8 >= i);
    }
    return 6;
}
