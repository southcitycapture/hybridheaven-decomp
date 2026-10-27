#include "common.h"

extern f32 D_8025CD38;
extern f32 D_8025CD3C;
extern f32 D_8025CD40;
extern f32 D_8025CD44;
extern f32 D_8025CD48;
extern f32 D_8025CD4C;
extern f32 D_8025CD50;
extern f32 D_8025CD54;
extern f32 D_8025CD58;
extern f32 D_8025CD5C;
extern f32 D_8025CD60;
extern f32 D_8025CD64;
extern f32 D_8025CD68;
extern f32 D_8025CD6C;
extern f32 func_8001EAD0(s16);
extern s32 D_801BBCCC;
extern s32 func_800058DC(void *, void *);
extern s32 func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern s32 func_801C2F0C(s32, s32);
extern u8 D_8017AD28[];
extern u8 D_80258C34[];
extern u8 D_80258C48[];
extern u8 D_80258CE8[];
extern u8 D_8025CB70[];
extern u8 D_8025CBA8[];
extern u8 D_8025CBE0[];
extern u8 D_8025CC18[];
extern u8 D_8025CC50[];
extern u8 D_8025CC88[];
extern u8 D_8025CCC0[];
extern u8 D_8025CCF8[];
extern void func_80005670(void *, void *);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_80020718(s32);
extern void func_800208C4(s32);
extern void func_8012C784(void *, s32, s32);
extern void func_8012CF8C(void *, void *, s32, s32);
extern void func_801C3B10(s32);
extern void func_801C3B2C(s32);
extern void func_80249960();
extern void func_80249EF8();
extern void func_80249FF4();
extern void func_8024A0D4();
extern void func_8024A1B4(void *, s32);
extern void func_8024A33C(void *arg0, s32 arg1);
extern void func_8024A418();
extern void func_8024A4FC(void *arg0, s32 arg1);
extern void func_8024A54C(s32 arg0, s32 arg1);

#define func_80249960 func_80249960__func_80249170

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

extern void func_80249960();
extern func_80249170_Copy D_80164F40;

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
#undef func_80249960

#define func_80249170_Ctx func_80249170_Ctx__func_80249960
typedef struct func_80249170_Ctx {
    u8 pad0[0x90];
    u16 unk90;
    u16 unk92;
    u16 unk94;
    u16 unk96;
    u16 unk98;
} func_80249170_Ctx;


typedef struct func_80249960_Inner {
    u8 pad0[0x12];
    s16 unk12;
    u8 pad1[0x38];
    u8 unk4C;
    u8 unk4D;
} func_80249960_Inner;

typedef struct func_80249960_Node {
    u8 pad0[0x30];
    func_80249960_Inner *unk30;
} func_80249960_Node;

typedef struct func_80249960_Args {
    func_80249960_Node *unk0;
    func_80249960_Node *unk4;
    func_80249960_Node *unk8;
    func_80249960_Node *unkC;
    func_80249960_Node *unk10;
    func_80249960_Node *unk14;
    func_80249960_Node *unk18;
    func_80249960_Node *unk1C;
    func_80249960_Node *unk20;
    func_80249960_Node *unk24;
    func_80249960_Node *unk28;
} func_80249960_Args;

void func_80249960(func_80249170_Ctx *arg0, func_80249960_Args *arg1) {
    arg1->unk0->unk30->unk4C = arg0->unk96;
    arg1->unk4->unk30->unk4C = (u32)arg0->unk96 * 0.2;
    arg1->unk8->unk30->unk12 = (s16)(arg1->unk8->unk30->unk12 + 1) & 0x1FFF;
    arg1->unkC->unk30->unk12 = (s16)(arg1->unkC->unk30->unk12 - 9) & 0x1FFF;
    arg1->unkC->unk30->unk4D = (u32)arg0->unk96 * 1.5;
    arg1->unk10->unk30->unk4D = (u32)arg0->unk96 * 1.0;
    arg1->unk14->unk30->unk12 = (s16)(arg1->unk14->unk30->unk12 + 4) & 0x1FFF;
    arg1->unk14->unk30->unk4C = (u32)arg0->unk94 * 0.5;
    arg1->unk18->unk30->unk12 = (s16)(arg1->unk18->unk30->unk12 - 5) & 0x1FFF;
    arg1->unk18->unk30->unk4D = (u32)arg0->unk94 * 0.5;
    arg1->unk1C->unk30->unk12 = (s16)(arg1->unk1C->unk30->unk12 + 11) & 0x1FFF;
    arg1->unk20->unk30->unk4D = arg0->unk96;
    arg1->unk24->unk30->unk4C = arg0->unk96;
    arg1->unk28->unk30->unk4D = func_8001EAD0(arg0->unk92) * 128.0f + 128.0f;
    arg0->unk92 = (s16)(arg0->unk92 + 0x16) & 0x1FFF;
    arg0->unk94++;
    arg0->unk96--;
}
#undef func_80249170_Ctx

#define func_80249EF8 func_80249EF8__func_80249EC4

extern void func_80249EF8();

void func_80249EC4(void *arg0, s32 arg1) {
    if (D_801BBCCC != 0) {
        func_800058DC(arg0, func_80249EF8);
    }
}
#undef func_80249EF8

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80249170/_ro_func_80249EF8.s")

#define func_80249FF4 func_80249FF4__func_80249EF8
typedef struct func_8024A4FC_Inner {
    u8 pad[0x8];
    f32 unk8;
} func_8024A4FC_Inner;
typedef struct func_8024A4FC_Outer {
    u8 pad[0x2C];
    func_8024A4FC_Inner *unk2C;
} func_8024A4FC_Outer;
extern func_8024A4FC_Outer *D_801BBCD0;


extern void func_80249FF4();

void func_80249EF8(void *arg0, s32 arg1) {
    if ((-610.0f) <= *(f32 *)(*(u8 **)((u8 *)D_801BBCD0 + 0x2C) + 4)) {
        func_8011AAF4(D_8025CB70, 0x25F, arg0, 0, 1, 0.0f, (-539.0f), -197.0f, -40.0f, 0.0f, (-610.0f), -179.0f, -5.0f, 0.0f, 55.0f, -1, -1);
        func_801C3B2C(2);
        func_801C3B10(1);
        func_80020718(0x65D);
        func_800208C4(0x49);
        func_800058DC(arg0, &func_80249FF4);
    }
}
#undef func_80249FF4

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80249170/_ro_func_80249FF4.s")

#define func_8024A0D4 func_8024A0D4__func_80249FF4


extern void func_8024A0D4();

typedef struct func_80249FF4_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_80249FF4_Struct;

void func_80249FF4(func_80249FF4_Struct *arg0, s32 arg1) {
    if (func_8011AAF4(D_8025CBA8, 0x272, arg0, 0, 2,
        15.0f, 487.0f, -32.0f, (-441.0f), 4294967296.0f,
        13.0f, -292.0f, -5.0f, 0.0f, 55.0f, -1, -1) == 0) {
        arg0->unk3C = 0;
        func_800058DC(arg0, func_8024A0D4);
    }
}
#undef func_8024A0D4

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80249170/_ro_func_8024A0D4.s")

#define func_8024A418 func_8024A418__func_8024A0D4

typedef struct func_8024A0D4_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_8024A0D4_Struct;

extern void func_8024A418();

void func_8024A0D4(func_8024A0D4_Struct *arg0, s32 arg1) {
    if ((s32) arg0->unk3C++ >= 0x78) {
        func_8011AAF4(D_8025CBE0, 0x280, arg0, 2, 1, 0.0f, (-550.0f), -180.0f, -30.0f, 0.0f, (-605.0f), -185.0f, 0.0f, 0.0f, 55.0f, -1, -1);
        func_801C2F0C(1, 0);
        func_800058DC(arg0, func_8024A418);
    }
}
#undef func_8024A418

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80249170/_ro_func_8024A1B4.s")

#define func_8024A33C func_8024A33C__func_8024A1B4


extern void func_8024A33C(void *arg0, s32 arg1);

void func_8024A1B4(void *arg0, s32 arg1) {
    f32 v;

    v = *(f32 *)((u8 *)D_801BBCD0->unk2C + 4);
    if (v >= -560.0f) {
        func_8011AAF4(D_8025CC18, 0x291, arg0, 0, 1, 0.0f, (-549.0f), -184.0f, -29.0f, 0.0f, -300.0f, -500.0f, 0.0f, 0.0f, 55.0f, -1, -1);
        func_800058DC(arg0, func_8024A418);
        return;
    }
    if (v <= -620.0f) {
        func_8011AAF4(D_8025CC50, 0x298, arg0, 0, 1, 0.0f, (-550.0f), -180.0f, 0.0f, 0.0f, (-605.0f), -185.0f, 0.0f, 0.0f, 55.0f, -1, -1);
        func_800058DC(arg0, func_8024A33C);
    }
}
#undef func_8024A33C

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80249170/_ro_func_8024A33C.s")

#define func_8024A1B4 func_8024A1B4__func_8024A33C


extern void func_8024A1B4(void *, s32);

void func_8024A33C(void *arg0, s32 arg1) {
    if ((-610.0f) <= *(f32 *)((u8 *)D_801BBCD0->unk2C + 4)) {
        func_8011AAF4(D_8025CC88, 0x2A6, arg0, 0, 1,
            0.0f, (-550.0f), -180.0f, -30.0f, 0.0f,
            (-605.0f), -185.0f, 0.0f, 0.0f, 55.0f, -1, -1);
        func_800058DC(arg0, func_8024A1B4);
    }
}
#undef func_8024A1B4

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80249170/_ro_func_8024A418.s")

#define func_8024A4FC func_8024A4FC__func_8024A418
void func_8024A4FC(void *arg0, s32 arg1);


void func_8024A418(void *arg0, s32 arg1) {
    if (D_801BBCD0->unk2C->unk8 <= -500.0f) {
        func_8011AAF4(D_8025CCC0, 0x2B4, arg0, 0, 1, 0.0f, -234.0f, (-630.0f), -64.0f, 0.0f, -240.0f, -532.0f, 30.0f, 0.0f, 55.0f, -1, -1);
        func_800058DC(arg0, func_8024A4FC);
    }
}
#undef func_8024A4FC

#define func_8024A54C func_8024A54C__func_8024A4FC



extern void func_8024A54C(s32 arg0, s32 arg1);

void func_8024A4FC(void *arg0, s32 arg1) {
    if (D_801BBCD0->unk2C->unk8 <= -600.0f) {
        func_800058DC(arg0, (void *) func_8024A54C);
    }
}
#undef func_8024A54C

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80249170/_ro_func_8024A54C.s")


typedef struct func_8024A54C_Pos {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_8024A54C_Pos;

typedef struct func_8024A54C_Obj {
    u8 pad[0x2C];
    func_8024A54C_Pos *unk2C;
} func_8024A54C_Obj;


void func_8024A54C(s32 arg0, s32 arg1) {
    func_8011AAF4(D_8025CCF8, 0x2CA, arg0, 0, 1, 0.0f, -243.0f, (-630.0f), -64.0f, 0.0f, ((func_8024A54C_Obj *)D_801BBCD0)->unk2C->unk4, ((func_8024A54C_Obj *)D_801BBCD0)->unk2C->unk8 + 10.0f, ((func_8024A54C_Obj *)D_801BBCD0)->unk2C->unkC, 0.0f, 55.0f, -1, -1);
}

