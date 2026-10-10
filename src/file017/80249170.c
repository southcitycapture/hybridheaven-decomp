#include "common.h"


typedef struct func_80249170_Inner {
    u8 pad0[0x24];
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
} func_80249170_Inner;

typedef struct func_80249170_Node {
    u8 pad0[0x30];
    func_80249170_Inner *unk30;
} func_80249170_Node;

typedef struct func_80249170_Args {
    func_80249170_Node *unk0;
    func_80249170_Node *unk4;
    func_80249170_Node *unk8;
    func_80249170_Node *unkC;
    func_80249170_Node *unk10;
    func_80249170_Node *unk14;
    func_80249170_Node *unk18;
    func_80249170_Node *unk1C;
    func_80249170_Node *unk20;
    func_80249170_Node *unk24;
    func_80249170_Node *unk28;
} func_80249170_Args;

typedef struct func_80249170_Copy {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} func_80249170_Copy;

typedef struct func_80249170_Ctx {
    u8 pad0[0x90];
    u16 unk90;
    u16 unk92;
    u16 unk94;
    u16 unk96;
    u16 unk98;
} func_80249170_Ctx;

extern void func_80005670(void *, void *);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C784(void *, s32, s32);
extern void func_8012CF8C(void *, void *, s32, s32);
extern void func_80249960(void);
extern func_80249170_Copy D_80164F40;
extern u8 D_80258C34[];
extern u8 D_80258C48[];
extern u8 D_80258CE8[];
extern u8 D_8017AD28[];

void func_80249170(func_80249170_Ctx *arg0, func_80249170_Args *arg1) {
    s32 sp30[4];
    s32 sp20[2];

    *(func_80249170_Copy *) sp30 = D_80164F40;
    sp30[1] =0x80000C00;
    func_80005E44(arg0, sp30);
    sp30[1] =0x80000600;
    func_80005E44(arg0, sp30);
    sp30[1] =0x80000600;
    func_80005E44(arg0, sp30);
    sp30[1] =0x80000600;
    func_80005E44(arg0, sp30);
    sp30[1] =0x80000600;
    func_80005E44(arg0, sp30);
    sp30[1] =0x80000C00;
    func_80005E44(arg0, sp30);
    sp30[1] =0x80000600;
    func_80005E44(arg0, sp30);
    sp30[1] =0x80000C00;
    func_80005E44(arg0, sp30);
    sp30[1] =0x80000C00;
    func_80005E44(arg0, sp30);
    func_80005E44(arg0, sp30);
    func_80005E44(arg0, sp30);
    func_80006214(arg0);
    arg1->unk0->unk30->unk30 = (s32) D_80258C48 | 0x40000000;
    arg1->unk0->unk30->unk24 = (s32) (arg1->unk0->unk30->unk24 | 0x4000);
    sp20[1] = (s32) D_80258C48 | 0x40000000;
    func_8012C784(arg0, 0, 2);
    func_8012CF8C(arg0, (u8 *) arg1->unk0->unk30 + 0x40, 0x2F8, 0xC);
    arg1->unk0->unk30->unk4C = 0;
    arg1->unk0->unk30->unk4D = 0;
    arg1->unk0->unk30->unk4E = 0xFF;
    arg1->unk0->unk30->unk4F = 0xFF;
    arg1->unk4->unk30->unk24 = (s32) (arg1->unk4->unk30->unk24 | 0x4100);
    arg1->unk4->unk30->unk30 = (s32) D_80258CE8 | 0x40000000;
    arg1->unk4->unk30->unk48 = 0xFF;
    arg1->unk4->unk30->unk49 = 0xFF;
    arg1->unk4->unk30->unk4A = 0xB4;
    arg1->unk4->unk30->unk4B = 0x80;
    sp20[0] = (s32) D_80258CE8 | 0x40000000;
    func_8012C784(arg0, 1, 3);
    func_8012CF8C(arg0, (u8 *) arg1->unk4->unk30 + 0x40, 0x301, 4);
    arg1->unk4->unk30->unk4C = 0;
    arg1->unk4->unk30->unk4D = 0;
    arg1->unk4->unk30->unk4E = 0xFF;
    arg1->unk4->unk30->unk4F = 0xFF;
    arg1->unk8->unk30->unk24 = (s32) (arg1->unk8->unk30->unk24 | 0x4100);
    arg1->unk8->unk30->unk30 = sp20[0];
    arg1->unk8->unk30->unk48 = 0xFF;
    arg1->unk8->unk30->unk49 = 0x96;
    arg1->unk8->unk30->unk4A = 0;
    arg1->unk8->unk30->unk4B = 0x4C;
    func_8012C784(arg0, 2, 5);
    func_8012CF8C(arg0, (u8 *) arg1->unk8->unk30 + 0x40, 0x301, 6);
    arg1->unk8->unk30->unk4C = 0;
    arg1->unk8->unk30->unk4D = 0;
    arg1->unk8->unk30->unk4E = 0xFF;
    arg1->unk8->unk30->unk4F = 0xFF;
    arg1->unkC->unk30->unk24 = (s32) (arg1->unkC->unk30->unk24 | 0x4100);
    arg1->unkC->unk30->unk30 = sp20[0];
    arg1->unkC->unk30->unk48 = 0xFF;
    arg1->unkC->unk30->unk49 = 0x64;
    arg1->unkC->unk30->unk4A = 0x64;
    arg1->unkC->unk30->unk4B = 0xCC;
    func_8012C784(arg0, 3, 7);
    func_8012CF8C(arg0, (u8 *) arg1->unkC->unk30 + 0x40, 0x301, 4);
    arg1->unkC->unk30->unk4C = 0;
    arg1->unkC->unk30->unk4D = 0;
    arg1->unkC->unk30->unk4E = 0xFF;
    arg1->unkC->unk30->unk4F = 0xFF;
    arg1->unk10->unk30->unk24 = (s32) (arg1->unk10->unk30->unk24 | 0x4100);
    arg1->unk10->unk30->unk30 = sp20[0];
    arg1->unk10->unk30->unk48 = 0xFF;
    arg1->unk10->unk30->unk49 = 0;
    arg1->unk10->unk30->unk4A = 0xFF;
    arg1->unk10->unk30->unk4B = 0xCC;
    func_8012C784(arg0, 4, 8);
    func_8012CF8C(arg0, (u8 *) arg1->unk10->unk30 + 0x40, 0x301, 9);
    arg1->unk10->unk30->unk4C = 0;
    arg1->unk10->unk30->unk4D = 0;
    arg1->unk10->unk30->unk4E = 0xFF;
    arg1->unk10->unk30->unk4F = 0xFF;
    arg1->unk14->unk30->unk24 = (s32) (arg1->unk14->unk30->unk24 | 0x4000);
    arg1->unk14->unk30->unk30 = sp20[1];
    func_8012C784(arg0, 5, 0xA);
    func_8012CF8C(arg0, (u8 *) arg1->unk14->unk30 + 0x40, 0x301, 0xB);
    arg1->unk14->unk30->unk4C = 0;
    arg1->unk14->unk30->unk4D = 0;
    arg1->unk14->unk30->unk4E = 0xFF;
    arg1->unk14->unk30->unk4F = 0xFF;
    arg1->unk18->unk30->unk24 = (s32) (arg1->unk18->unk30->unk24 | 0x4100);
    arg1->unk18->unk30->unk30 = sp20[0];
    arg1->unk18->unk30->unk48 = 0xFF;
    arg1->unk18->unk30->unk49 = 0xC8;
    arg1->unk18->unk30->unk4A = 0;
    arg1->unk18->unk30->unk4B = 0xB4;
    func_8012C784(arg0, 6, 0xC);
    func_8012CF8C(arg0, (u8 *) arg1->unk18->unk30 + 0x40, 0x301, 9);
    arg1->unk18->unk30->unk4C = 0;
    arg1->unk18->unk30->unk4D = 0;
    arg1->unk18->unk30->unk4E = 0xFF;
    arg1->unk18->unk30->unk4F = 0xFF;
    func_8012C784(arg0, 7, 0xD);
    arg1->unk1C->unk30->unk30 = (s32) D_8017AD28 | 0x40000000;
    arg1->unk20->unk30->unk24 = (s32) (arg1->unk20->unk30->unk24 | 0x4000);
    arg1->unk20->unk30->unk30 = sp20[1];
    func_8012C784(arg0, 8, 0xF);
    func_8012CF8C(arg0, (u8 *) arg1->unk20->unk30 + 0x40, 0x301, 0x10);
    arg1->unk20->unk30->unk4C = 0;
    arg1->unk20->unk30->unk4D = 0;
    arg1->unk20->unk30->unk4E = 0xFF;
    arg1->unk20->unk30->unk4F = 0xFF;
    arg1->unk24->unk30->unk24 = (s32) (arg1->unk24->unk30->unk24 | 0x4000);
    arg1->unk24->unk30->unk30 = sp20[1];
    func_8012C784(arg0, 9, 0x11);
    func_8012CF8C(arg0, (u8 *) arg1->unk24->unk30 + 0x40, 0x2F8, 0xD);
    arg1->unk24->unk30->unk4C = 0;
    arg1->unk24->unk30->unk4D = 0;
    arg1->unk24->unk30->unk4E = 0xFF;
    arg1->unk24->unk30->unk4F = 0xFF;
    arg1->unk28->unk30->unk24 = (s32) (arg1->unk28->unk30->unk24 | 0x4000);
    arg1->unk28->unk30->unk30 = sp20[1];
    func_8012C784(arg0, 0xA, 0x12);
    func_8012CF8C(arg0, (u8 *) arg1->unk28->unk30 + 0x40, 0x2F8, 0xD);
    arg1->unk28->unk30->unk4C = 0;
    arg1->unk28->unk30->unk4D = 0;
    arg1->unk28->unk30->unk4E = 0xFF;
    arg1->unk28->unk30->unk4F = 0xFF;
    arg0->unk90 = 0;
    arg0->unk92 = 0;
    arg0->unk94 = 0;
    arg0->unk96 = 0;
    arg0->unk98 = 0x5C;
    func_80005670(arg0, D_80258C34);
    func_800058DC(arg0, (void *) func_80249960);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80249170/func_80249960.s")


extern void func_80249EF8(void);
extern s32 D_801BBCCC;

void func_80249EC4(void *arg0, s32 arg1) {
    if (D_801BBCCC != 0) {
        func_800058DC(arg0, func_80249EF8);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80249170/func_80249EF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80249170/func_80249FF4.s")


typedef struct func_8024A0D4_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_8024A0D4_Struct;

extern s32 func_800058DC(void *, void *);
extern s32 func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern s32 func_801C2F0C(s32, s32);
extern void func_8024A418(void);
extern u8 D_8025CBE0[];
extern f32 D_8025CD48;
extern f32 D_8025CD4C;

void func_8024A0D4(func_8024A0D4_Struct *arg0, s32 arg1) {
    if ((s32) arg0->unk3C++ >= 0x78) {
        func_8011AAF4(D_8025CBE0, 0x280, arg0, 2, 1, 0.0f, D_8025CD48, -180.0f, -30.0f, 0.0f, D_8025CD4C, -185.0f, 0.0f, 0.0f, 55.0f, -1, -1);
        func_801C2F0C(1, 0);
        func_800058DC(arg0, func_8024A418);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80249170/func_8024A1B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80249170/func_8024A33C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80249170/func_8024A418.s")


typedef struct func_8024A4FC_Inner {
    u8 pad[0x8];
    f32 unk8;
} func_8024A4FC_Inner;

typedef struct func_8024A4FC_Outer {
    u8 pad[0x2C];
    func_8024A4FC_Inner *unk2C;
} func_8024A4FC_Outer;

extern func_8024A4FC_Outer *D_801BBCD0;
extern void func_8024A54C(void);

void func_8024A4FC(void *arg0, s32 arg1) {
    if (D_801BBCD0->unk2C->unk8 <= -600.0f) {
        func_800058DC(arg0, (void *) func_8024A54C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80249170/func_8024A54C.s")

