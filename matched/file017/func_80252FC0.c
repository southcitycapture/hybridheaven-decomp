#include "common.h"
extern u8 D_80259520[];
extern void func_801C2F0C(s32, void *);
extern void func_80253A80();

extern void func_800058DC();
extern void func_80020718(s32);
extern s32 func_80133A24(s32);
typedef struct func_80252FC0_StructInner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    u8 pad1[0x8];
    u32 unk30;
    u8 pad2[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_80252FC0_StructInner;
typedef struct func_80252FC0_StructNode {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_80252FC0_StructInner *unk30;
} func_80252FC0_StructNode;
typedef struct func_80252FC0_StructArgs {
    func_80252FC0_StructNode *unk0;
    func_80252FC0_StructNode *unk4;
    func_80252FC0_StructNode *unk8;
    func_80252FC0_StructNode *unkC;
    func_80252FC0_StructNode *unk10;
    func_80252FC0_StructNode *unk14;
    func_80252FC0_StructNode *unk18;
    func_80252FC0_StructNode *unk1C;
} func_80252FC0_StructArgs;
typedef struct func_80252FC0_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[0x5B];
    u8 unk99;
} func_80252FC0_Struct;

typedef struct func_80252FC0_Struct2 {
    union { volatile s16 ordered; s16 plain; } a;
    union { volatile s32 ordered; s32 plain; } b;
    f32 c;
    u8 pad[0x14];
} func_80252FC0_Struct2;

extern u8 func_80253220[];
extern f64 D_8025D820;
extern f64 D_8025D828;
extern f64 D_8025D830;

void func_80252FC0(func_80252FC0_Struct *a0, func_80252FC0_StructArgs *arg1) {
    func_80252FC0_Struct2 sp38;
    s32 sp34;
    func_80252FC0_Struct *arg0;
    s32 sp2C;
    s32 sp28;
    s32 sp24;

    arg0 = a0;
    sp34 = arg0->unk3C++;
    func_80253A80(arg0, arg1);
    if (sp34 < 0x79) {
        arg1->unkC->unk30->unk4 = arg1->unkC->unk30->unk4 + D_8025D820;
        arg1->unkC->unk30->unk8 = arg1->unkC->unk30->unk8 + D_8025D828;
        arg1->unkC->unk30->unkC = arg1->unkC->unk30->unkC + D_8025D830;
    }
    if (sp34 >= 0x96) {
        arg0->unk3C = 0;
        arg1->unk10->unk22 = 0;
        arg1->unkC->unk22 = 0;
        arg1->unk0->unk30->unk30 = (u32)D_80259520 | 0x40000000;
        func_80020718(0x18A);
        sp24 = func_80133A24(0x135) == 0;
        sp28 = func_80133A24(0x134) == 0;
        sp2C = func_80133A24(0x133) == 0;
        arg0->unk99 = (((4 - (func_80133A24(0x136) == 0)) - sp2C) - sp28) - sp24;
        if (arg0->unk99 == 1) goto L1;
        if (arg0->unk99 == 2) goto L2;
        if (arg0->unk99 == 3) goto L3;
        if (arg0->unk99 != (sp34 = 4)) goto end;
        if (1) goto L4;
    L1:
        sp38.c = 5.0f; sp38.a.plain = 0x1000;
        do {} while (0);
        sp38.b.ordered = 0x04100043;
        func_801C2F0C(4, &sp38);
        goto end;
    L2:
        sp38.a.ordered = 0x1000; sp38.b.ordered = 0x0410002C; sp38.c = 5.0f;
        func_801C2F0C(4, &sp38);
        goto end;
    L3:
        sp38.a.ordered = 0x1100; sp38.b.ordered = 0x01B80026; sp38.c = 3.0f;
        func_801C2F0C(4, &sp38);
        goto end;
    L4:
        sp38.a.ordered = 0x1100; sp38.b.ordered = 0x01B80032; sp38.c = 10.0f;
        func_801C2F0C(4, &sp38);
    end:
        func_800058DC(arg0, func_80253220);
    }
}
