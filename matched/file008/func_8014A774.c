#include "context.h"

extern void func_80130E34(s32, s32, s32, s32, f32 *, f32 *);
extern void func_800023A8(s32);
extern f64 D_8018FB60;
extern func_80148DDC_S *D_801BBCCC;
extern func_80148DDC_S *D_801BBCDC;
extern u8 D_801BCC20;

typedef struct func_8014A774_Struct_Cam {
    u8 pad[0x2C];
    s32 unk2C;
} func_8014A774_Struct_Cam;
extern func_8014A774_Struct_Cam *D_801BBCD8;

void func_8014A774(s32 arg0, s32 arg1) {
    f32 sp54;
    f32 sp50;
    f32 ten;
    f32 fa0;
    f32 ft5;
    f32 fa1;
    func_80148DDC_V sp34;
    u8 *sp30;
    func_801493A0_Inner *v;
    register f32 fv0;

    sp54 = 160.0f;
    sp50 = 120.0f;
    sp30 = ((func_80148500_Struct *)arg0)->unk98;
    if (func_80126944() == 0) {
        sp34 = func_80148DDC(D_801BBCCC, 3);
    } else if (func_80126944() == 1) {
        if (D_801BCC20 != 0) {
            if (func_801487B4(sp30[0x2D9]) != 0) {
                sp34 = func_80148DDC(D_801BBCCC, 3);
            } else {
                sp34 = func_80148DDC(D_801BBCDC, 3);
            }
        } else if (func_801487B4(sp30[0x2D9]) != 0) {
            sp34 = func_80148DDC(D_801BBCDC, 3);
        } else {
            sp34 = func_80148DDC(D_801BBCCC, 3);
        }
    }
    func_80130E34(D_801BBCD8->unk2C, sp34.a, sp34.b, sp34.c, &sp54, &sp50);
    func_80006214(arg0);
    if (sp54 < 0.0f) {
        sp54 = 0;
    }
    if (sp50 < 0.0f) {
        sp50 = 0;
    }
#define P1 (*(func_801493A0_Outer **)&D_80181D5C)
#define P2 (*(func_801493A0_Outer **)&D_80181D60)
    ten = 10.0f;
    fa0 = (sp54 - P1->unk30->unk4) / ten;
    ft5 = (sp50 - P1->unk30->unk8) / ten;
    fa1 = (D_8018FB60 - P1->unk30->unk18) / ten;
    P1->unk30->unk4 = P1->unk30->unk4 + fa0;
    P2->unk30->unk4 = P1->unk30->unk4;
    P1->unk30->unk8 = P1->unk30->unk8 + ft5;
    P2->unk30->unk8 = P1->unk30->unk8;
    P1->unk30->unk20 = P1->unk30->unk20 + fa1;
    P1->unk30->unk1C = fv0 = P1->unk30->unk20;
    P1->unk30->unk18 = fv0;
    P2->unk30->unk20 = fv0;
    P2->unk30->unk1C = fv0;
    P2->unk30->unk18 = fv0;
    func_801486A8((struct func_801486A8_Obj *)arg0, 0x2E0);
    if ((fa0 < 0.0f ? -fa0 : fa0) < 1.0f) {
        if ((ft5 < 0.0f ? -ft5 : ft5) < 1.0f) {
            func_801471DC((s32)D_801BED18);
            D_801BCC25 = 1;
            if (func_80126944() == 0) {
                func_800023A8(0);
            }
            func_80148FC4((func_80148FC4_Struct *)arg0, (s32)func_8014ABD0, 2, 1);
        }
    }
}
