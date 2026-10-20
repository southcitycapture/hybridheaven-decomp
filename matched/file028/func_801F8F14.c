#include "context.h"

extern f32 D_80208C30;
extern f32 D_80208C34;
extern f32 D_80208E14;
extern f32 D_80208E18;
extern s32 func_801D03F8();
extern s32 func_801D0454(s32, s32);

typedef struct func_801F8F14_Struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801F8F14_Struct;

#define P801F8F14 ((func_801F8F14_Struct *)FUNC_801EEE98_H)

#define Q801F8F14 ((func_801F8F14_Struct *)*(u8 **)(*(u8 **)(FUNC_801EEE98_NEXT(FUNC_801EEE98_NEXT(FUNC_801EEE98_NEXT(FUNC_801EEE98_NEXT(FUNC_801EEE98_NEXT((u8 *)D_801DAB14)))) ) + 0x24) + 0x2C))

s32 func_801F8F14(s32 arg0, s32 arg1) {
    f32 d;
    f32 k;
    f32 m;
    func_801F8F14_Struct *p;

    if (D_80207438 == 0) goto c0;
    if (D_80207438 == 1) goto c1;
    if (D_80207438 == 2) goto c2;
    if (D_80207438 == 3) goto c3;
    return 0xB;
c0:
    func_801CC4D8(4, 0x01680003, 0, 0, 15.0f);
    D_80207438 = 1;
    goto end;
c1:
    if (func_801D03F8() == 0) {
        k = (f32)2.0;
        m = 30.0f;
        p = P801F8F14;
        d = (u32)(k * m);
        D_80208E14 = (D_80208C30 - p->unk4) / d;
        D_80208E18 = (35.5f - p->unkC) / d;
        func_801CC470(4, 0x01680003, 0, 0x1100, 1.0f);
        func_801C0D04(4, 4);
        D_80207438 = 2;
    }
    goto end;
c2:
    if (func_801C0DE4(4, 4, 0x40000000) != 0) {
        func_801C0EB0(4, 4);
        func_801CC4D8(4, 0x03480000, 0, 0, 15.0f);
        D_80207438 = 3;
    }
    Q801F8F14->unk4 = Q801F8F14->unk4 + D_80208E14;
    Q801F8F14->unkC = Q801F8F14->unkC + D_80208E18;
    if (func_801D0454(0x01680003, 0x14) != 0 || func_801D0454(0x01680003, 0x28) != 0) {
        func_8038D33C(P801F8F14->unk4, P801F8F14->unk8, *(s32 *)&P801F8F14->unkC, 0x676, D_80208C34, 1.0f);
        return 0xB;
    }
    goto end;
c3:
    if (func_801D03F8() == 0) {
        return 0xC;
    }
end:
    return 0xB;
}
