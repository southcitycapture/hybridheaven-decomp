#include "common.h"


extern u8 D_802590C0[];
extern void func_8024EA0C();

struct func_8024E79C_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[0x5B];
    u8 unk99;
};

void func_8024E79C(struct func_8024E79C_Struct *ctx, func_8024D030_Args *arg1) {
    struct func_8024E79C_Struct *arg0 = ctx;
    struct func_8024E79C_StructMsg { s16 a; s32 b; f32 c; u8 pad[0x10]; } sp;
    s32 t;
    u8 k;
    s32 c, b, a;

    t = arg0->unk3C++;
    func_8024F294((func_8024D030_Ctx *)arg0, arg1);
    if (t < 0x79) {
        arg1->unk8->unk30->unk4 += (-0.33666666666666667);
        arg1->unk8->unk30->unk8 += (0.24166666666666667);
        arg1->unk8->unk30->unkC += (-0.5833333333333334);
    }
    if (t >= 0x96) {
        arg0->unk3C = 0;
        arg1->unk8->unk22 = 0;
        arg1->unk0->unk30->unk30 = (u32)D_802590C0 | 0x40000000;
        arg1->unk10->unk30->unk30 = (u32)D_802590C0 | 0x40000000;
        arg1->unkC->unk30->unk30 = (u32)D_802590C0 | 0x40000000;
        func_80020718(0x18A);
        a = func_80133A24(0x135) == 0;
        b = func_80133A24(0x134) == 0;
        c = func_80133A24(0x133) == 0;
        k = 4;
        arg0->unk99 = k - (func_80133A24(0x136) == 0) - c - b - a;
        if (arg0->unk99 == 1) goto c1;
        if (arg0->unk99 == 2) goto c2;
        if (arg0->unk99 == 3) goto c3;
        if (k != arg0->unk99) goto end;
        goto c4;
    c1:
        sp.a = 0x1000;
        sp.b = 0x04100043;
        sp.c = 5.0f;
        func_801C2F0C(4, (s32)&sp);
        goto end;
    c2:
        sp.a = 0x1000;
        sp.b = 0x0410002C;
        sp.c = 5.0f;
        func_801C2F0C(4, (s32)&sp);
        goto end;
    c3:
        sp.a = 0x1100;
        sp.b = 0x01B80026;
        sp.c = 3.0f;
        func_801C2F0C(4, (s32)&sp);
        goto end;
    c4:
        sp.a = 0x1100;
        sp.b = 0x01B80032;
        sp.c = 10.0f;
        func_801C2F0C(4, (s32)&sp);
    end:
        func_800058DC(arg0, func_8024EA0C);
    }
}
