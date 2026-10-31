#include "common.h"
extern void func_800058DC();
extern void func_80020718(s32);
extern s32 func_80133A24(s32);
extern void func_801C2F0C(s32, s32);
typedef struct func_8024F4F0_Inner {
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
} func_8024F4F0_Inner;
typedef struct func_8024F4F0_Node {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_8024F4F0_Inner *unk30;
} func_8024F4F0_Node;
typedef struct func_8024F4F0_Args {
    func_8024F4F0_Node *unk0;
    func_8024F4F0_Node *unk4;
    func_8024F4F0_Node *unk8;
    func_8024F4F0_Node *unkC;
    func_8024F4F0_Node *unk10;
    func_8024F4F0_Node *unk14;
    func_8024F4F0_Node *unk18;
    func_8024F4F0_Node *unk1C;
} func_8024F4F0_Args;
typedef struct func_80251750_StructA {
    u8 pad[0x90];
    u16 unk90;
    u16 unk92;
} func_80251750_StructA;
typedef struct func_80251750_StructB {
    u8 pad[0x22];
    u8 unk22;
} func_80251750_StructB;
typedef struct func_80251750_StructC {
    u8 pad[0x4C];
    u8 unk4C;
} func_80251750_StructC;
typedef struct func_80251750_StructD {
    u8 pad[0x30];
    func_80251750_StructC *unk30;
} func_80251750_StructD;
typedef struct func_80251750_StructE {
    u8 pad[0x10];
    func_80251750_StructD *unk10;
    func_80251750_StructB *unk14;
} func_80251750_StructE;
void func_80251750(func_80251750_StructA *arg0, func_80251750_StructE *arg1);


typedef struct func_80250C9C_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[0x5B];
    u8 unk99;
} func_80250C9C_Struct;

typedef struct func_80250C9C_Struct2 {
    union { volatile s16 ordered; s16 plain; } a;
    union { volatile s32 ordered; s32 plain; } b;
    f32 c;
    u8 pad[0x14];
} func_80250C9C_Struct2;

extern u8 D_802592E0[];
extern u8 func_80250F04[];
extern f64 D_8025D570;
extern f64 D_8025D578;
extern f64 D_8025D580;

void func_80250C9C(func_80250C9C_Struct *a0, func_8024F4F0_Args *arg1) {
    func_80250C9C_Struct2 sp38;
    s32 sp34;
    func_80250C9C_Struct *arg0;
    s32 sp2C;
    s32 sp28;
    s32 sp24;

    arg0 = a0;
    sp34 = arg0->unk3C++;
    func_80251750(arg0, arg1);
    if (sp34 < 0x79) {
        arg1->unkC->unk30->unk4 = arg1->unkC->unk30->unk4 + D_8025D570;
        arg1->unkC->unk30->unk8 = arg1->unkC->unk30->unk8 + D_8025D578;
        arg1->unkC->unk30->unkC = arg1->unkC->unk30->unkC + D_8025D580;
    }
    if (sp34 >= 0x96) {
        arg0->unk3C = 0;
        arg1->unk14->unk22 = 0;
        arg1->unk10->unk22 = 0;
        arg1->unkC->unk22 = 0;
        arg1->unk0->unk30->unk30 = (u32)D_802592E0 | 0x40000000;
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
        func_801C2F0C(4, (s32)&sp38);
        goto end;
    L2:
        sp38.a.ordered = 0x1000; sp38.b.ordered = 0x0410002C; sp38.c = 5.0f;
        func_801C2F0C(4, (s32)&sp38);
        goto end;
    L3:
        sp38.a.ordered = 0x1100; sp38.b.ordered = 0x01B80026; sp38.c = 3.0f;
        func_801C2F0C(4, (s32)&sp38);
        goto end;
    L4:
        sp38.a.ordered = 0x1100; sp38.b.ordered = 0x01B80032; sp38.c = 10.0f;
        func_801C2F0C(4, (s32)&sp38);
    end:
        func_800058DC(arg0, func_80250F04);
    }
}
