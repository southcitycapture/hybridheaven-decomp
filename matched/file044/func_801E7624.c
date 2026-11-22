#include "common.h"

extern s32 D_801ECEE8;
extern s32 D_801ECEEC;
extern u8 D_801DAB14[];
struct func_801E71AC_Struct { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; };
#define SS ((struct func_801E71AC_Struct *)(*(s32 *)(*(s32 *)(*(s32 *)(*(s32 *)D_801DAB14 + 8) + 0x24) + 0x2C)))
extern void func_801C1000(s32, s32);                       /* extern */
extern s32 func_801C1088(s32, s32, s32);
extern void func_801C10D8(s32, s32);
extern s32 func_801C1134(s32, s32);
extern void func_801CC470(s32, s32, s32, s32, f32);
extern s32 func_801CC4D8(s32, s32, s32, s32, f32);
extern s32 func_801CE274();
extern s32 func_801CE284(void);
extern void func_8038D28C(s32 arg0);
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
        SS->unk4 = (-0.700004578f) * t + 118.300003f;
        SS->unk8 = (-0.199998856f) * t + 16.7999992f;
        SS->unkC = 0.699996948f * t + -76.5f;
        goto bend;
    }
b1:
    if (func_801C1088(4, 0, 5) != 0) {
        func_801C10D8(4, 0);
        D_801ECEEC = 2;
        goto bend;
    } else {
        t = (f32)(u32)func_801C1134(4, 0) / 5.0f;
        SS->unk4 = 0.400001526f * t + 117.599998f;
        SS->unk8 = (-0.200000763f) * t + 16.6000004f;
        SS->unkC = (-0.399993896f) * t + (-75.8000031f);
    }
bend:
    if (D_801ECEE8 == 3 && D_801ECEEC == 2) {
        return 0x1F;
    }
    return 0x1E;
}
