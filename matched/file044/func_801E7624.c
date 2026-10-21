#include "context.h"

extern f32 D_801EDDA0;
extern f32 D_801EDDA4;
extern f32 D_801EDDA8;
extern f32 D_801EDDAC;
extern f32 D_801EDDB0;
extern f32 D_801EDDB4;
extern f32 D_801EDDB8;
extern f32 D_801EDDBC;
extern f32 D_801EDDC0;
extern f32 D_801EDDC4;
extern f32 D_801EDDC8;
extern s32 D_801ECEEC;

s32 func_801E7624(s32 arg0, s32 arg1) {
    f32 t;
    s32 s;

    if ((s = D_801ECEE8) == 0) goto a0;
    if (s == 1) goto a1;
    if (s == 2) goto a2;
    if (s != 3) goto aend;
    goto aend;
a0:
    func_801CC4D8(0, 0x01B80036, 0, 0, 3.0f);
    func_8038D28C(0x25D);
    D_801ECEE8 = 1;
    goto aend;
a1:
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x01B80036, 0, 0, 3.0f);
        D_801ECEE8 = 2;
    }
    goto aend;
a2:
    if (func_801CE284() != 0) {
        D_801ECEE8 = 3;
    }
aend:
    if ((s = D_801ECEEC) == 0) goto b0;
    if (s == 1) goto b1;
    if (s != 2) goto bend;
    goto bend;
b0:
    if (func_801C1088(4, 0, 5) != 0) {
        func_801C10D8(4, 0);
        func_801C1000(4, 0);
        D_801ECEEC = 1;
        goto bend;
    } else {
        t = (f32)(u32)func_801C1134(4, 0) / 5.0f;
        SS->unk4 = D_801EDDA0 * t + D_801EDDA4;
        SS->unk8 = D_801EDDA8 * t + D_801EDDAC;
        SS->unkC = D_801EDDB0 * t + -76.5f;
        goto bend;
    }
b1:
    if (func_801C1088(4, 0, 5) != 0) {
        func_801C10D8(4, 0);
        D_801ECEEC = 2;
        goto bend;
    } else {
        t = (f32)(u32)func_801C1134(4, 0) / 5.0f;
        SS->unk4 = D_801EDDB4 * t + D_801EDDB8;
        SS->unk8 = D_801EDDBC * t + D_801EDDC0;
        SS->unkC = D_801EDDC4 * t + D_801EDDC8;
    }
bend:
    if (D_801ECEE8 == 3 && D_801ECEEC == 2) {
        return 0x1F;
    }
    return 0x1E;
}
