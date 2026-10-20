#include "context.h"

typedef struct func_802033F8_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_802033F8_StructB;

typedef struct func_802033F8_StructA {
    u8 pad0[0x30];
    func_802033F8_StructB *unk30;
} func_802033F8_StructA;

typedef struct func_802033F8_StructC {
    u8 pad0[4];
    func_802033F8_StructA *unk4;
    func_802033F8_StructA *unk8;
    func_802033F8_StructA *unkC;
} func_802033F8_StructC;

typedef struct func_802033F8_Struct {
    u8 pad0[0x74];
    s32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
    s16 unk84;
    s16 unk86;
    s16 unk88;
    u8 pad8A[6];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 unk9E;
    u8 pad9F;
    u8 padA0[2];
    s16 unkA2;
    u8 *unkA4;
} func_802033F8_Struct;

extern void func_80020718();

void func_802033F8(func_802033F8_Struct *arg0, func_802033F8_StructC *arg1) {
    s32 v;
    f64 d;

    if (arg0->unk9E != 1) {
        if (arg0->unk9E != 3) goto end;
        goto c3;
    }
    {
        v = arg0->unkA2++;
        if (v == 0) {
            func_80020718(0x1C2);
        }
        if (v < 2) {
            d = func_8001EAD0(arg0->unk9C);
            arg1->unk8->unk30->unk4 = (f64)arg1->unk8->unk30->unk4 + d;
            d = func_8001EB64(arg0->unk9C);
            arg1->unk8->unk30->unkC = (f64)arg1->unk8->unk30->unkC + d;
        } else if (v >= 4) {
            if (v < 8) {
                arg1->unk4->unk30->unk8 += 0.5;
                arg1->unk8->unk30->unk8 += 0.5;
                arg1->unkC->unk30->unk8 += 0.5;
            } else if (v >= 0xA) {
                if (v < 0x1E) {
                    arg1->unk4->unk30->unk12 -= 0xCC;
                    arg1->unk8->unk30->unk12 -= 0xCC;
                    arg1->unkC->unk30->unk12 += 0xCC;
                } else if (v == 0x1E) {
                    arg0->unk9E = 2;
                    arg0->unk74 = 0;
                    *arg0->unkA4 |= 8;
                    *arg0->unkA4 &= 0xFFFB;
                }
            }
        }
    }
    goto end;
c3:
    {
        v = arg0->unkA2++;
        if (v == 0) {
            func_80020718(0x1C1);
            arg0->unk74 = func_8012C97C(0xCE, 8);
        }
        if (v < 0x14) {
            arg1->unk4->unk30->unk12 += 0xCC;
            arg1->unk8->unk30->unk12 += 0xCC;
            arg1->unkC->unk30->unk12 -= 0xCC;
        } else if (v >= 0x16) {
            if (v < 0x1A) {
                arg1->unk4->unk30->unk8 -= 0.5;
                arg1->unk8->unk30->unk8 -= 0.5;
                arg1->unkC->unk30->unk8 -= 0.5;
            } else if (v >= 0x1C) {
                if (v < 0x1E) {
                    arg1->unk8->unk30->unk4 = (f64)arg1->unk8->unk30->unk4 - (f64)func_8001EAD0(arg0->unk9C);
                    arg1->unk8->unk30->unkC = (f64)arg1->unk8->unk30->unkC - (f64)func_8001EB64(arg0->unk9C);
                } else if (v == 0x1E) {
                    arg1->unk4->unk30->unk12 = arg0->unk9C;
                    arg1->unk8->unk30->unk12 = arg0->unk9C;
                    arg1->unkC->unk30->unk12 = arg0->unk9C;
                    arg1->unk4->unk30->unk8 = arg0->unk94;
                    arg1->unk8->unk30->unk8 = arg0->unk94;
                    arg1->unkC->unk30->unk8 = arg0->unk94;
                    arg1->unk8->unk30->unk4 = arg0->unk90 - 2.0 * func_8001EAD0(arg0->unk9C);
                    arg1->unk8->unk30->unkC = arg0->unk98 - 2.0 * func_8001EB64(arg0->unk9C);
                    arg0->unk9E = 0;
                    *arg0->unkA4 &= 0xFFF3;
                }
            }
        }
    }
end:
    arg0->unk84 = 0;
    arg0->unk88 = 0;
    arg0->unk78 = arg0->unk90;
    arg0->unk7C = arg0->unk94;
    arg0->unk80 = arg0->unk98;
    arg0->unk86 = arg0->unk9C;
}
