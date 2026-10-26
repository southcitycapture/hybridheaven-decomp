#include "common.h"

#define func_8024FB5C func_8024FB5C__func_8024F4F0

typedef struct { u8 pad0[4]; s32 b; u8 pad1[8]; } func_8024F4F0_V;

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

typedef struct func_8024F4F0_Ctx {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x44];
    s32 unk74;
    u8 pad78[0x18];
    u16 unk90;
    u16 unk92;
} func_8024F4F0_Ctx;

extern void func_800058DC();
extern void func_8012C89C(void *, s32, s32, u16);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8001F74C(void *);
extern void func_8012CF8C(void *, void *, s32, s32);
extern s32 func_8012C97C(s32, s32);
extern void func_8024FB5C();
extern func_8024F4F0_V D_80164F40;
extern u8 D_801BBBF0[];
extern u8 D_8017AF38[];
extern u8 D_8017AF90[];
extern u8 D_80259290[];
extern u8 D_80259330[];
extern u8 D_802593D8[];
extern u8 D_80259428[];

void func_8024F4F0(func_8024F4F0_Ctx *arg0, func_8024F4F0_Args *arg1) {
    s32 sp30[4];

    *(func_8024F4F0_V *) sp30 = D_80164F40;
    sp30[1] = 0x80000900;
    func_80005E44(arg0, sp30);
    sp30[1] = 0x80000900;
    func_80005E44(arg0, sp30);
    sp30[1] = 0x80000900;
    func_80005E44(arg0, sp30);
    sp30[1] = 0x80000900;
    func_80005E44(arg0, sp30);
    sp30[1] = 0x80000600;
    func_80005E44(arg0, sp30);
    sp30[1] = 0x80000600;
    func_80005E44(arg0, sp30);
    sp30[1] = 0x80000900;
    func_80005E44(arg0, sp30);
    sp30[1] = 0x80000300;
    func_80005E44(arg0, sp30);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0x302, 0xA);
    arg1->unk0->unk30->unk24 = arg1->unk0->unk30->unk24 | 0x500;
    arg1->unk0->unk30->unk30 = (s32) D_80259290 | 0x40000000;
    arg1->unk0->unk30->unk4B = 0xFF;
    arg1->unk0->unk30->unk4C = D_801BBBF0[0xF32];
    arg1->unk0->unk30->unk4D = D_801BBBF0[0xF33];
    arg1->unk0->unk30->unk4E = D_801BBBF0[0xF34];
    arg1->unk0->unk30->unk4F = D_801BBBF0[0xF35];
    func_8012C89C(arg0, 1, 0x302, 0x10);
    arg1->unk4->unk30->unk24 = arg1->unk4->unk30->unk24 | 0x400;
    arg1->unk4->unk30->unk30 = (s32) D_8017AF38 | 0x40000000;
    arg1->unk4->unk30->unk4C = D_801BBBF0[0xF32];
    arg1->unk4->unk30->unk4D = D_801BBBF0[0xF33];
    arg1->unk4->unk30->unk4E = D_801BBBF0[0xF34];
    arg1->unk4->unk30->unk4F = D_801BBBF0[0xF35];
    arg1->unk4->unk22 = 0;
    func_8012C89C(arg0, 2, 0x302, 0x2B);
    arg1->unk8->unk30->unk24 = arg1->unk8->unk30->unk24 | 0x400;
    arg1->unk8->unk30->unk30 = (s32) D_8017AF38 | 0x40000000;
    arg1->unk8->unk30->unk4C = D_801BBBF0[0xF32];
    arg1->unk8->unk30->unk4D = D_801BBBF0[0xF33];
    arg1->unk8->unk30->unk4E = D_801BBBF0[0xF34];
    arg1->unk8->unk30->unk4F = D_801BBBF0[0xF35];
    arg1->unk8->unk22 = 0;
    func_8012C89C(arg0, 3, 0x302, 0x17);
    arg1->unkC->unk30->unk24 = arg1->unkC->unk30->unk24 | 0x400;
    arg1->unkC->unk30->unk30 = (s32) D_8017AF90 | 0x40000000;
    arg1->unkC->unk30->unk4C = D_801BBBF0[0xF32];
    arg1->unkC->unk30->unk4D = D_801BBBF0[0xF33];
    arg1->unkC->unk30->unk4E = D_801BBBF0[0xF34];
    arg1->unkC->unk30->unk4F = D_801BBBF0[0xF35];
    func_8012C89C(arg0, 4, 0x302, 0x13);
    func_8012CF8C(arg0, (u8 *) arg1->unk10->unk30 + 0x40, 0x2F8, 0x13);
    arg1->unk10->unk30->unk24 = arg1->unk10->unk30->unk24 | 0x4100;
    arg1->unk10->unk30->unk30 = (s32) D_80259330 | 0x40000000;
    arg1->unk10->unk30->unk48 = 0x14;
    arg1->unk10->unk30->unk49 = 0x14;
    arg1->unk10->unk30->unk4A = 0xFF;
    arg1->unk10->unk30->unk4B = 0x80;
    arg1->unk10->unk30->unk4C = 0;
    arg1->unk10->unk30->unk4D = 0;
    arg1->unk10->unk30->unk4E = 0xFF;
    arg1->unk10->unk30->unk4F = 0xFF;
    arg1->unk10->unk22 = 0;
    func_8012C89C(arg0, 5, 0x302, 0x19);
    func_8012CF8C(arg0, (u8 *) arg1->unk14->unk30 + 0x40, 0x2F8, 0x11);
    arg1->unk14->unk30->unk24 = arg1->unk14->unk30->unk24 | 0x4100;
    arg1->unk14->unk30->unk30 = (s32) D_80259330 | 0x40000000;
    arg1->unk14->unk30->unk48 = 0xFF;
    arg1->unk14->unk30->unk49 = 0x64;
    arg1->unk14->unk30->unk4A = 0xAA;
    arg1->unk14->unk30->unk4B = 0xCC;
    arg1->unk14->unk30->unk4C = 0;
    arg1->unk14->unk30->unk4D = 0;
    arg1->unk14->unk30->unk4E = 0xFF;
    arg1->unk14->unk30->unk4F = 0xFF;
    arg1->unk14->unk22 = 0;
    func_8012C89C(arg0, 6, 0x302, 0x2D);
    arg1->unk18->unk30->unk24 = arg1->unk18->unk30->unk24 | 0x100;
    arg1->unk18->unk30->unk30 = (s32) D_802593D8 | 0x40000000;
    arg1->unk18->unk30->unk4 = 0.0f;
    arg1->unk18->unk30->unk8 = 0.0f;
    arg1->unk18->unk30->unkC = 0.0f;
    arg1->unk18->unk30->unk48 = 0;
    arg1->unk18->unk30->unk48 = 0;
    arg1->unk18->unk30->unk4A = 0;
    arg1->unk18->unk30->unk4B = 0xFF;
    arg1->unk18->unk30->unk12 = 0;
    arg1->unk18->unk22 = 1;
    func_8012C89C(arg0, 7, 3, 1);
    arg1->unk1C->unk30->unk24 = arg1->unk1C->unk30->unk24 | 0x60100;
    arg1->unk1C->unk30->unk30 = (s32) D_80259428 | 0x40000000;
    arg1->unk1C->unk30->unk18 = 10.0f;
    arg1->unk1C->unk30->unk1C = 10.0f;
    arg1->unk1C->unk30->unk20 = 10.0f;
    arg1->unk1C->unk30->unk48 = 0xFF;
    arg1->unk1C->unk30->unk49 = 0xFF;
    arg1->unk1C->unk30->unk4A = 0xFF;
    arg1->unk1C->unk30->unk4B = 0;
    arg1->unk1C->unk22 = 0;
    arg0->unk90 = 0;
    arg0->unk92 = 0;
    arg0->unk2C = 0x800;
    arg0->unk74 = func_8012C97C(0x302, 0xB);
    func_8001F74C(arg0);
    func_800058DC((s32) arg0, (void *) func_8024FB5C);
}
#undef func_8024FB5C

#define func_8024FC74 func_8024FC74__func_8024FB5C

typedef struct func_8024FB5C_Ctx {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0xC];
    u16 unk3C;
    u8 pad3E[0x36];
    s32 unk74;
    u8 pad78[0x20];
    u8 unk98;
} func_8024FB5C_Ctx;

typedef struct func_8024FB5C_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_8024FB5C_Inner;

typedef struct func_8024FB5C_Node {
    u8 pad0[0x30];
    func_8024FB5C_Inner *unk30;
} func_8024FB5C_Node;

typedef struct func_8024FB5C_Args {
    u8 pad0[0x1C];
    func_8024FB5C_Node *unk1C;
} func_8024FB5C_Args;

extern void func_801339D0();
extern s32 func_80133A24(s32);
extern s32 func_80126944(void);
extern void func_801C3B2C(s32);
extern void func_801C3B10(s32);
extern void func_801FBB30(void);
extern void func_8024FC74();

void func_8024FB5C(func_8024FB5C_Ctx *arg0, func_8024FB5C_Args *arg1) {
    if (func_80126944() == 0) {
        arg0->unk2C = arg0->unk2C | 0x800;
    } else {
        arg0->unk2C = arg0->unk2C & ~0x800;
    }
    if (func_80133A24(0x12F) != 0) {
        func_801339D0(0x12F);
        func_801FBB30();
        func_801C3B2C(2);
        func_801C3B10(1);
        arg1->unk1C->unk30->unk4 = 125.0f;
        arg1->unk1C->unk30->unk8 = 0.0f;
        arg1->unk1C->unk30->unkC = -142.0f;
        D_801BBBF0[0x204] = 0xFF;
        D_801BBBF0[0x205] = 0xFF;
        D_801BBBF0[0x206] = 0xFF;
        D_801BBBF0[0x207] = 0xFF;
        D_801BBBF0[0x208] = 0xFF;
        D_801BBBF0[0x209] = 0xC8;
        D_801BBBF0[0x20A] = 0;
        arg0->unk74 = 0;
        arg0->unk3C = 0;
        arg0->unk98 = 0;
        func_801339D0(0x131, arg1);
        func_801339D0(0x132);
        func_800058DC(arg0, &func_8024FC74);
    }
}
#undef func_8024FC74

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024F4F0/D_8025D300.s")

/* hh-block asm/nonmatchings/file017/8024F4F0/_ro_func_8024FC74.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file017/8024F4F0/func_8024FC74.s","D_8025D330"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024F4F0/_ro_func_8024FC74.s")

#define func_8024FEC4 func_8024FEC4__func_8024FC74

typedef struct func_8024FC74_Obj {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[0x1C];
    f32 unk30;
    u8 pad34[4];
    f32 unk38;
} func_8024FC74_Obj;
typedef struct func_8024FC74_Ent {
    u8 pad0[0x2C];
    func_8024FC74_Obj *unk2C;
} func_8024FC74_Ent;
typedef struct func_8024FC74_G {
    u8 pad0[0xE0];
    func_8024FC74_Ent *unkE0;
    u8 padE4[4];
    func_8024FC74_Ent *unkE8;
} func_8024FC74_G;
typedef struct func_8024FC74_Arg {
    u8 pad0[0x3C];
    s16 unk3C;
} func_8024FC74_Arg;

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s16 func_8001EF38(f32, f32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern s32 func_8015105C(s32);
extern s32 func_801C3D20(f32, f32, f32);
extern s32 D_801C3DC8(void *, f32, f32, f32, f32, f32, f32, f32, f32);
extern u8 D_8025D330[];

extern s32 D_8025DE00;
extern void func_8024FEC4();

void func_8024FC74(func_8024FC74_Arg *arg0, s32 arg1) {
    u16 sp66;
    func_8024FC74_Obj *obj;
    f32 sp5C;
    f32 c;
#define g ((func_8024FC74_G *)D_801BBBF0)

    sp5C = func_8001EAD0(g->unkE0->unk2C->unk12);
    c = func_8001EB64(g->unkE0->unk2C->unk12);
    obj = g->unkE0->unk2C;
    if (D_801C3DC8(arg0, obj->unk4, obj->unk8 + 18.0f, obj->unkC,
            sp5C * 40.0f + obj->unk4, obj->unk8 + 15.0f,
            c * 40.0f + obj->unkC, 0.100000001f, 35.0f) == 0
        || func_801C3D20(g->unkE8->unk2C->unk30, g->unkE8->unk2C->unk38, 10.0f) != 0) {
        sp66 = func_8001EF38(125.0 - g->unkE0->unk2C->unk4, (-142.0) - g->unkE0->unk2C->unkC);
        sp5C = func_8001EAD0(sp66);
        func_8011AAF4(D_8025D330, 0x269, arg0, 0, 1, 0.0f, 125.0 - sp5C * 70.0f, 15.0f + g->unkE0->unk2C->unk8,
            (-142.0) - func_8001EB64(sp66) * 70.0f, 0.0f, 125.0f, 14.0f, -142.0f, 0.0f, 35.0f, -1, -1);
        arg0->unk3C = 0;
        D_8025DE00 = func_8015105C(0xFC);
        func_800058DC(arg0, func_8024FEC4);
    }
}
#undef func_8024FEC4

typedef struct func_8024FEC4_Struct { u8 pad0[0x3C]; u16 unk3C; } func_8024FEC4_Struct;
typedef struct func_8024FEC4_Obj { u8 pad0[0x2C]; func_8024F4F0_Inner *unk2C; } func_8024FEC4_Obj;
typedef struct func_8024FEC4_Glob { u8 pad0[0xE0]; func_8024FEC4_Obj *unkE0; } func_8024FEC4_Glob;
extern s32 func_8024CF9C(f32, f32, f32);
extern void func_80020718(s32);
extern s32 func_801512CC(s32, f32, f32, f32);
extern void func_80151430(s32, s32);
extern void func_801515B0(s32, u8, s32);
extern s32 func_801516CC(s32);
extern void D_80151700(s32, u8, void *);
extern s32 func_801517CC(s32);
extern u8 D_8017BAD8[];

extern u8 func_8025006C[];

void func_8024FEC4(func_8024FEC4_Struct *arg0, s32 arg1) {
    s32 i;
    u8 j;
    u16 t;
    func_8024F4F0_Inner *p;
    func_8024F4F0_Inner *q;

    t = arg0->unk3C;
    arg0->unk3C = t + 1;
    if (t == 0) {
        func_8024CF9C(125.0f, 0.100000001f, -142.0f);
        p = ((func_8024FEC4_Glob *)D_801BBBF0)->unkE0->unk2C;
        ((func_8024FEC4_Glob *)D_801BBBF0)->unkE0->unk2C->unk12 = func_8001EF38(125.0 - p->unk4, (-142.0) - p->unkC);
        func_80020718(0x182);
    }
    if (t >= 0x1E && func_801517CC(D_8025DE00) != 0) {
        func_801512CC(D_8025DE00, 125.0f, 0.0f, -142.0f);
        q = ((func_8024FEC4_Glob *)D_801BBBF0)->unkE0->unk2C;
        func_80151430(D_8025DE00, func_8001EF38(q->unk4 - 125.0, q->unkC - (-142.0)) & 0xFFFF);
        i = 0;
        if (func_801516CC(D_8025DE00) > 0) {
            do {
                j = i;
                D_80151700(D_8025DE00, j, D_8017BAD8);
                func_801515B0(D_8025DE00, j, 0);
                i++;
            } while (i < func_801516CC(D_8025DE00));
        }
        arg0->unk3C = 0;
        func_800058DC(arg0, func_8025006C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024F4F0/func_8025006C.s")

#define func_80251574 func_80251574__func_8025022C

typedef struct func_8025022C_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_8025022C_Struct;

extern void func_802502F0();
extern void func_80251574();
extern void func_801C4058(void *, s32, f32, s32);
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);

void func_8025022C(func_8025022C_Struct *arg0, s32 arg1)
{
    u16 temp_s1 = arg0->unk3C;
    arg0->unk3C = temp_s1 + 1;
    func_80251574((void *)arg0, arg1);
    if (temp_s1 >= 0x3C) {
        if (temp_s1 == 0x3C) {
            func_80020718(0x184);
        }
        func_801C4058(arg0, 0x3F19999A, 0.0f, 0x16);
        if ((temp_s1 % 10) == 0) {
            func_80380F94(125.0f, 0.0f, -142.0f, 0.0f, 0.0f, 0.0f, 0xA);
        }
    }
    if (temp_s1 >= 0x5A) {
        arg0->unk3C = 0;
        func_800058DC(arg0, func_802502F0);
    }
}
#undef func_80251574

#define D_801C4058 D_801C4058__func_802502F0
#define D_80259274 D_80259274__func_802502F0
#define func_80133980 func_80133980__func_802502F0
#define func_8015115C func_8015115C__func_802502F0
#define func_801516CC func_801516CC__func_802502F0
#define func_8024CF18 func_8024CF18__func_802502F0
#define func_802503CC func_802503CC__func_802502F0
#define func_802503CC_Arg1 func_802503CC_Arg1__func_802502F0
#define func_802503CC_Struct func_802503CC_Struct__func_802502F0
#define func_802503CC_Sub func_802503CC_Sub__func_802502F0
#define func_80251574 func_80251574__func_802502F0
#define func_80251574_Struct func_80251574_Struct__func_802502F0
struct func_802503CC_Sub {
    u8 pad[0x22];
    u8 unk22;
};
struct func_802503CC_Arg1 {
    u8 pad[0x1C];
    struct func_802503CC_Sub *unk1C;
};
struct func_802503CC_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};
extern void func_802503CC(struct func_802503CC_Struct *arg0, struct func_802503CC_Arg1 *arg1);
typedef struct func_80251574_Struct {
    u8 pad[0x96];
    u16 f96;
} func_80251574_Struct;
extern void func_80251574(func_80251574_Struct *arg0, s32 arg1);
struct func_8024B444_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};
struct func_8024B444_Sub {
    u8 pad[0x22];
    u8 unk22;
};
struct func_8024B444_Arg1 {
    u8 pad[0x18];
    struct func_8024B444_Sub *unk18;
};
void func_8024CF18(s32 arg0, u8 arg1);
extern void func_8015115C(s32, void *);
extern u8 D_80259274[];
extern void D_801C4058(void *, f32, f32, s32);
extern void func_80133980(s32 arg0);
extern s32 func_801516CC(s32 arg0);
struct func_8024B444_Struct;
struct func_8024B444_Arg1;

void func_802502F0(struct func_802503CC_Struct *arg0)
{
    s32 i;
    u16 t;
extern void func_80251574();
    t = arg0->unk3C;
    arg0->unk3C = t + 1;
    func_80251574();
    D_801C4058(arg0, 0.0f, -0.4f, 0);
    if ((s32)t >= 0x2D) {
        func_80133980(0x131);
        arg0->unk3C = 0;
        for (i = 1; i < func_801516CC(D_8025DE00); i++) {
            func_8024CF18(D_8025DE00, i);
        }
        func_8015115C(D_8025DE00, D_80259274);
        func_80020718(0x185);
        func_800058DC((s32)arg0, (void (*)())((void (*)(struct func_8024B444_Struct *arg0, struct func_8024B444_Arg1 *arg1))func_802503CC));
    }
}
#undef D_801C4058
#undef D_80259274
#undef func_80133980
#undef func_8015115C
#undef func_801516CC
#undef func_8024CF18
#undef func_802503CC
#undef func_802503CC_Arg1
#undef func_802503CC_Struct
#undef func_802503CC_Sub
#undef func_80251574
#undef func_80251574_Struct

#define func_801516CC func_801516CC__func_802503CC
#define func_80251574 func_80251574__func_802503CC

struct func_802503CC_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

struct func_802503CC_Sub {
    u8 pad[0x22];
    u8 unk22;
};

struct func_802503CC_Arg1 {
    u8 pad[0x1C];
    struct func_802503CC_Sub *unk1C;
};

extern void func_80251574();
extern void func_80133980(s32 arg0);
extern s32 func_801516CC(s32 arg0);
extern void func_80151700(s32, s32, void *);
extern u8 func_802504AC[];

void func_802503CC(struct func_802503CC_Struct *arg0, struct func_802503CC_Arg1 *arg1) {
    s32 var_s0;

    func_80251574();
    func_801C4058(arg0, 0xBE99999A, 0.0f, -0x22);
    if (arg0->unk3C++ >= 0x5A) {
        func_80133980(0x132);
        arg0->unk3C = 0;
        arg1->unk1C->unk22 = 1;
        for (var_s0 = 0; var_s0 < func_801516CC(D_8025DE00); var_s0++) {
            func_80151700(D_8025DE00, var_s0 & 0xFF, D_8017BAD8);
        }
        func_800058DC(arg0, func_802504AC);
    }
}
#undef func_801516CC
#undef func_80251574

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024F4F0/func_802504AC.s")

/* hh-block asm/nonmatchings/file017/8024F4F0/_ro_func_80250730.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file017/8024F4F0/func_80250730.s","D_8025D378"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024F4F0/_ro_func_80250730.s")

#define func_802508F0 func_802508F0__func_80250730
#define func_80251750 func_80251750__func_80250730

typedef struct func_80250730_StructB { u8 pad[0x4B]; u8 unk4B; } func_80250730_StructB;
typedef struct func_80250730_StructA { u8 pad[0x22]; u8 unk22; u8 pad23[0xD]; func_80250730_StructB *unk30; } func_80250730_StructA;
typedef struct func_80250730_StructC { u8 pad[0x1C]; func_80250730_StructA *unk1C; } func_80250730_StructC;

extern u8 D_8025D378[];
extern u8 D_80259280[];

extern s16 func_80151478(s32);
extern void func_80251750();
void func_802508F0(struct func_802503CC_Struct *arg0, void *arg1);
extern void func_8015115C(s32, void *);

void func_80250730(struct func_802503CC_Struct *arg0, func_80250730_StructC *arg1) {
    s16 sp66;
    s32 sp60;
    s32 pad;
    f32 sp58;

    sp60 = arg0->unk3C++;
    func_80251750(arg0, arg1);
    if (sp60 >= 0x14) {
        if (sp60 == 0x14) {
            sp66 = func_80151478(D_8025DE00);
            sp58 = func_8001EAD0(sp66);
            func_8011AAF4(D_8025D378, 0x362, arg0, 0, 1, 0.0f, (f32) ((f64) (sp58 * 100.0f) + 125.0), 45.0f, (f32) ((f64) (func_8001EB64(sp66) * 100.0f) + (-142.0)), 0.0f, 125.0f, 12.0f, -142.0f, 0.0f, 35.0f, -1, -1);
            func_8015115C(D_8025DE00, D_80259280);
            func_80020718(0x227);
        } else {
            func_801C4058(arg0, 0xBE19999A, -0.25f, 0);
        }
        arg1->unk1C->unk30->unk4B -= 4;
        if (arg1->unk1C->unk30->unk4B >= 0xFC) {
            arg1->unk1C->unk22 = 0;
            arg0->unk3C = 0;
            func_800058DC(arg0, func_802508F0);
        }
    }
}
#undef func_802508F0
#undef func_80251750

#define func_80250A98 func_80250A98__func_802508F0
#define func_80251750 func_80251750__func_802508F0

extern s32 func_8012C6B4(s32);
extern void func_801C2F0C(s32, s32);
extern void func_801FA2E0();
extern s32 func_801270C0(s32);

extern void func_80251750();
extern void func_80250A98();

void func_802508F0(struct func_802503CC_Struct *arg0, void *arg1) {
    f32 sp44;
    f32 sp40;
    s32 t;

    t = arg0->unk3C;
    arg0->unk3C++;
    func_80251750((void *)arg0, arg1);
    if (t < 0x3C && !(t % 2)) {
        sp44 = func_8012C6B4(0x2000);
        sp40 = func_8012C6B4(0x1E) / 10.0 + 2.0;
        func_80380F94(func_8001EAD0((s32)sp44) * sp40 + 125.0, 14.0f, func_8001EB64((s32)sp44) * sp40 + (-142.0), 0.0f, 0.400000006f, 0.0f, 5);
    }
    if (t < 0x78) {
        func_801C4058(arg0, 0xBE19999A, -0.25f, 0);
    }
    if (t == 0x78) {
        func_801FA2E0();
    }
    if (t >= 0x96 && func_801270C0(D_8025DE00) != 0) {
        func_801C2F0C(1, 0);
        func_800058DC(arg0, func_80250A98);
    }
}
#undef func_80250A98
#undef func_80251750

#define func_800058DC func_800058DC__func_80250A98
#define func_80250AE8 func_80250AE8__func_80250A98

extern void func_80126968();
extern void func_801268CC(s32);
extern void func_80020744(s32);
extern void func_800058DC(s32, void *);
extern s16 D_801BBF90[];
extern void func_80250AE8(s32 arg0);

void func_80250A98(s32 arg0, s32 arg1) {
    func_80126968();
    D_801BBF90[2] = 0x135;
    func_801268CC(0);
    func_80020744(0xA);
    func_800058DC(arg0, func_80250AE8);
}
#undef func_800058DC
#undef func_80250AE8

#define func_800058DC func_800058DC__func_80250AE8
#define func_80250B54 func_80250B54__func_80250AE8
#define func_80251750 func_80251750__func_80250AE8

extern void func_80251750();
extern void func_800058DC(s32, void *);
extern void func_80250B54();

void func_80250AE8(s32 arg0) {
    func_80251750();
    if (func_80133A24(0x135) != 0) {
        if (func_80126944() != 1) {
            func_801C3B2C(2);
            func_801C3B10(1);
            func_801FBB30();
            func_800058DC(arg0, func_80250B54);
        }
    }
}
#undef func_800058DC
#undef func_80250B54
#undef func_80251750

/* starting point: func_80252E78 (file017), whose assembly is 99% the same as this function's */

extern s32 func_801C42DC(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, s32, f32);
extern s32 func_801C3DC8(void *, s32, s32, s32, f32, f32, f32, f32, f32);

extern void func_80250C9C();

typedef struct func_80250B54_StructObj {
    u8 pad[0x3C];
    s16 unk3C;
} func_80250B54_StructObj;

void func_80250B54(func_80250B54_StructObj *arg0) {
    extern void func_80251750();
    func_80251750();
    func_801C42DC(0xFF, 0xFF, 0xFF, D_801BBBF0[0xF23], D_801BBBF0[0xF24], D_801BBBF0[0xF25], (s8)D_801BBBF0[0xF26], (s8)D_801BBBF0[0xF27], (s8)D_801BBBF0[0xF28], D_801BBBF0[0xF29], D_801BBBF0[0xF2A], D_801BBBF0[0xF2B], (s8)D_801BBBF0[0xF2C], (s8)D_801BBBF0[0xF2D], (s8)D_801BBBF0[0xF2E], D_801BBBF0[0xF32], D_801BBBF0[0xF33], D_801BBBF0[0xF34], D_801BBBF0[0xF35], *(f32 *)&D_801BBBF0[0x29C], *(f32 *)&D_801BBBF0[0x2A0], 2, 0.0f);
    if (func_801C3DC8(arg0, 0x43250000, 0x42B00000, 0xC33E0000, 134.0f, 223.0f, 150.0f, 0.100000001f, 35.0f) == 0) {
        arg0->unk3C = 0;
        func_80020718(0x150);
        func_800058DC(arg0, func_80250C9C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024F4F0/func_80250C9C.s")


/* hh-block asm/nonmatchings/file017/8024F4F0/_mrg_keep_6dd5fc580218ed7d.s {"functions":["func_80250F04"],"rodata":[[".rodata","asm/nonmatchings/file017/8024F4F0/func_80250F04.s","D_8025D468"],[".late_rodata","asm/nonmatchings/file017/8024F4F0/func_80250F04.s","D_8025D588"],[".rodata","asm/nonmatchings/file017/8024F4F0/func_80251350.s","D_8025D4A8"],[".late_rodata","asm/nonmatchings/file017/8024F4F0/func_80251350.s","D_8025D58C"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024F4F0/_mrg_keep_6dd5fc580218ed7d.s")



#define D_801BBCD0 D_801BBCD0__func_80251350
#define D_801BBCD8 D_801BBCD8__func_80251350
#define D_8025D4A8 D_8025D4A8__func_80251350
#define D_8025D58C D_8025D58C__func_80251350
#define func_802514F4 func_802514F4__func_80251350
#define func_802514F4_Struct func_802514F4_Struct__func_80251350
#define func_802514F4_StructInner func_802514F4_StructInner__func_80251350
struct func_802514F4_StructInner {
    u8 pad[0x22];
    u8 unk22;
};
struct func_802514F4_Struct {
    s32 pad0;
    struct func_802514F4_StructInner *unk4;
};
extern void func_802514F4(s32 arg0, struct func_802514F4_Struct *arg1);

typedef struct func_80251350_Struct_Cam {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
    u8 pad2[0x1C];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_80251350_Struct_Cam;
typedef struct func_80251350_Struct {
    u8 pad[0x74];
    s32 unk74;
} func_80251350_Struct;
typedef struct func_80251350_Struct_Holder {
    u8 pad[0x2C];
    func_80251350_Struct_Cam *unk2C;
} func_80251350_Struct_Holder;

extern func_80251350_Struct_Holder *D_801BBCD0;
extern func_80251350_Struct_Holder *D_801BBCD8;
extern u8 D_8025D4A8[];
extern f32 D_8025D58C;


void func_80251350(func_80251350_Struct *arg0, s32 arg1) {
    u8 pad[4];
    f32 sp50;

    sp50 = func_8001EAD0(D_801BBCD0->unk2C->unk12);
    if (D_801C3DC8(arg0, (f32) ((f64) D_801BBCD0->unk2C->unk4 - ((f64) sp50 * 40.0)), D_801BBCD0->unk2C->unk8 + 20.0f, (f32) ((f64) D_801BBCD0->unk2C->unkC - ((f64) func_8001EB64(D_801BBCD0->unk2C->unk12) * 40.0)), D_801BBCD0->unk2C->unk4, D_801BBCD0->unk2C->unk8 + 17.0f, D_801BBCD0->unk2C->unkC, D_8025D58C, 35.0f) == 0) {
        func_8011AAF4(D_8025D4A8, 0x492, arg0, 2, 1, 0.0f, D_801BBCD8->unk2C->unk30, D_801BBCD8->unk2C->unk34, D_801BBCD8->unk2C->unk38, 0.0f, D_801BBCD8->unk2C->unk3C, D_801BBCD8->unk2C->unk40, D_801BBCD8->unk2C->unk44, 0.0f, 35.0f, -1, -1);
        arg0->unk74 = 0;
        func_801C2F0C(1, 0);
        func_801FBB20();
        func_800058DC(arg0, func_802514F4);
    }
}
#undef D_801BBCD0
#undef D_801BBCD8
#undef D_8025D4A8
#undef D_8025D58C
#undef func_802514F4
#undef func_802514F4_Struct
#undef func_802514F4_StructInner

#define func_800058DC func_800058DC__func_802514F4
#define func_8025153C func_8025153C__func_802514F4

struct func_802514F4_StructInner {
    u8 pad[0x22];
    u8 unk22;
};

struct func_802514F4_Struct {
    s32 pad0;
    struct func_802514F4_StructInner *unk4;
};

extern void func_800058DC(s32, void *);
extern void func_8025153C();

void func_802514F4(s32 arg0, struct func_802514F4_Struct *arg1) {
    if (func_80133A24(0x138) != 0) {
        arg1->unk4->unk22 = 0;
        func_800058DC(arg0, func_8025153C);
    }
}
#undef func_800058DC
#undef func_8025153C


typedef struct func_8025153C_StructInner {
    u8 pad[0x22];
    u8 unk22;
} func_8025153C_StructInner;

typedef struct func_8025153C_Struct {
    u8 pad[4];
    func_8025153C_StructInner *unk4;
} func_8025153C_Struct;


void func_8025153C(s32 arg0, func_8025153C_Struct *arg1) {
    if (func_80133A24(0x138) != 0) {
        arg1->unk4->unk22 = 0;
    }
}


typedef struct func_80251574_Struct {
    u8 pad[0x96];
    u16 f96;
} func_80251574_Struct;

extern u8 D_801BBDA0[];

void func_80251574(func_80251574_Struct *arg0, s32 arg1) {
    s32 t;

    t = arg0->f96++;
    D_801BBDA0[0x56] = (u32)((f64)func_8001EB64((s16)(t * 100) & 0x1FFF) * 25.5 + 229.5);
    D_801BBDA0[0x58] = (u32)((f64)func_8001EB64((s16)(t * 110) & 0x1FFF) * 25.5 + 229.5);
}


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

extern u16 D_80259488[];

void func_80251750(func_80251750_StructA *arg0, func_80251750_StructE *arg1) {
    s32 temp_hi;
    func_80251750_StructC *temp_v0;

    func_8012C89C(arg0, 5, 0x302, D_80259488[(s32) ((s32) arg0->unk90 / 15) % 5]);
    temp_hi = (s32) arg0->unk90 % 15;
    if (temp_hi == 0) {
        arg1->unk14->unk22 = 1;
    } else if (temp_hi == 1) {
        arg1->unk14->unk22 = 0;
    }
    temp_v0 = arg1->unk10->unk30;
    temp_v0->unk4C = (u8) (temp_v0->unk4C + 2);
    arg0->unk90 = (u16) (arg0->unk90 + 1);
    arg0->unk92 = (u16) (arg0->unk92 - 1);
}

