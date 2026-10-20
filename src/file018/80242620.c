#include "common.h"

extern f32 D_8025BF5C;
extern f32 D_8025BF70;
extern f32 D_8025BF78;
extern f32 D_8025BF7C;
extern f32 D_8025BF80;
extern s32 D_80258DF8[];
extern s32 D_8025C6E0;
extern s32 D_8025C6E4;
extern s32 D_8025C6EC;
extern s32 D_8025C6F4;
extern s32 D_8025C700;
extern s32 D_8025C708;
extern s32 func_80010550();
extern s32 func_8001EF38(f32, f32);
extern s32 func_80126CC0(void *, void *);
extern s32 func_80129554(s32, s32, s32);
extern s32 func_8012A94C(void *, s32);
extern s32 func_8012A988(void *, s32, s32, s32, s32);
extern s32 func_8012C6B4(s32);
extern s32 func_80133A24(s32);
extern s32 func_8013B570(void *, s32, s32, s32, void *);
extern s32 func_80242620();
extern s32 func_80242714(void *);
extern s8 D_8025C6F8;
extern s8 D_8025C6F9;
extern s8 D_8025C6FA;
extern s8 D_8025C6FB;
extern s8 D_8025C6FC;
extern s8 D_8025C6FD;
extern s8 D_8025C704;
extern u8 D_80164F40[];
extern u8 D_801BBC0D;
extern u8 D_80258DD4[];
extern void func_80005700();
extern void func_800058DC(void *, void (*)());
extern void func_80005F6C(void *, void *);
extern void func_80006214(void *);
extern void func_8001F74C(void *);
extern void func_80020744(s16 arg0);
extern void func_80127014();
extern void func_80127430(f32, f32, s32, s32, f32, f32);
extern void func_8012C228(s32, s32, s32);
extern void func_8012C2DC(s32);
extern void func_8012C89C(void *, s32, s32, s32);
extern void func_8013A334();
extern void func_8013E570(s32, s32, void *, void *, void *);
extern void func_8013E5C4(s32, s32, s32, s32, s32);
extern void func_801FBB20(void);
extern void func_802429C0(void);
extern void func_80242BC4();
extern void func_80242D98();
extern void func_80242E5C();
extern void func_802431FC();
extern void func_802438BC();
extern void func_80243B94();
extern void func_80243C54();
extern void func_80243E0C();
extern void func_80243F08();
extern void func_80243F68();
extern void func_80244458(void *arg0, s32 *arg1);
extern void func_802445BC();
extern void func_802446CC();
extern void func_80244714();
extern void func_80244788();
extern void func_802448BC();
extern void func_8024490C();
extern void func_8024495C();
extern void func_802449AC();
extern void func_802449FC();

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_80242620.s")


struct func_80243D20_Top;
extern struct func_80243D20_Top *D_8025C6F0;

struct func_80242714_Inner {
    u8 pad0[0x78];
    s16 unk78;
};
struct func_80242714_Leaf {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
};
struct func_80242714_Mid {
    u8 pad0[0x2C];
    struct func_80242714_Leaf *unk2C;
};
struct func_80242714_Top {
    u8 pad0[0x24];
    struct func_80242714_Mid *unk24;
    u8 pad28[0x5C - 0x28];
    struct func_80242714_Inner *unk5C;
};

s32 func_80242714(arg)
void *arg;
{
#define arg0 ((struct func_80242714_Top *)arg)
    struct func_80242714_Inner *p;
    struct func_80242714_Top *o = (struct func_80242714_Top *)D_8025C6F0;
    struct func_80242714_Leaf *a;
    struct func_80242714_Leaf *b;
    f32 dx;
    f32 dz;

    if (o != NULL) {
        a = o->unk24->unk2C;
        b = arg0->unk24->unk2C;
        p = arg0->unk5C;
        dx = a->unk4 - b->unk4;
        dz = a->unkC - b->unkC;
        if (dx * dx + dz * dz < 3600.0f) {
            p->unk78 = 1;
            func_800058DC(arg0, func_80243B94);
            return 1;
        }
    }
    if ((u8)D_8025C6FD != 0 && (u32)D_8025C700 >= 0x81U) {
        p->unk78 = 1;
        D_8025C6FD = 0;
        D_8025C700 = 0;
        D_8025C6FC = (u8)D_8025C6FC + 1;
        func_80020744(0x57B);
        if (D_8025C6E4 < (s32)(u8)D_8025C6FC) {
            func_80020744(0x279);
        }
        func_800058DC(arg0, func_80243F68);
        return 1;
    }
    D_8025C6FD = 0;
    D_8025C700 += 1;
    return 0;
}
#undef arg0


struct func_80242868_Inner {
    u8 pad0[0x78];
    s16 unk78;
};

struct func_80242868_Struct {
    u8 pad0[0x2C];
    u32 unk2C;
    u8 pad1[0x5C - 0x30];
    struct func_80242868_Inner *unk5C;
};

struct func_80242868_Elem {
    u8 a;
    u8 pad1[0x13];
    u8 b;
    u8 pad2[0x13];
    u8 c;
    u8 pad3[0x13];
    u8 d;
    u8 pad4[0x13];
};

extern struct func_80242868_Elem D_8025C728[];

s32 func_80242868(struct func_80242868_Struct *arg0, s32 arg1) {
    s32 ret;
    struct func_80242868_Inner *p;
    s32 i;

    ret = func_80126CC0(arg0, func_80243F08);
    if (ret != 0) {
        func_8001F74C(arg0);
        if (D_801BBC0D == 0) {
            D_8025C6E0 = 0x28;
            D_8025C6E4 = 3;
        } else if (D_801BBC0D == 1) {
            D_8025C6E0 = 0x50;
            D_8025C6E4 = 6;
        } else {
            D_8025C6E0 = 0xA0;
            D_8025C6E4 = 0xC;
        }
        D_8025C6F8 = 0;
        D_8025C6F9 = 0;
        D_8025C6FA = 0;
        D_8025C6FB = 0;
        D_8025C6FC = 0;
        D_8025C6FD = 0;
        D_8025C700 = 0;
        D_8025C708 = 0;
        D_8025C704 = 0;
        for (i = 0; i < 2; i++) {
            D_8025C728[i].b = 0;
            D_8025C728[i].c = 0;
            D_8025C728[i].d = 0;
            D_8025C728[i].a = 0;
        }
        D_8025C6EC = arg0;
        arg0->unk2C |= 0x80;
        ret = func_8013B570(arg0, 0xF8, 2, 4, func_802429C0);
        p = arg0->unk5C;
        p->unk78 = 1;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_802429C0.s")

struct func_80242C60_Cfg {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
s32 func_8012CE9C(s32, void *, struct func_80242C60_Cfg, s32);
struct func_80242B30_Inner {
    u8 pad0[0x78];
    s16 unk78;
};
struct func_80242B30_Struct {
    u8 pad0[0x5C];
    struct func_80242B30_Inner *unk5C;
    u8 pad1[0x94 - 0x60];
    u16 unk94;
};
void func_80242B30(struct func_80242B30_Struct *arg0, s32 arg1);
extern struct func_80242C60_Cfg D_80258DA4;
struct func_80242A5C_Leaf {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
};
struct func_80242A5C_Mid {
    u8 pad0[0x2C];
    struct func_80242A5C_Leaf *unk2C;
};
struct func_80242A5C_Top {
    u8 pad0[0x24];
    struct func_80242A5C_Mid *unk24;
    u8 pad28[0x5C - 0x28];
    struct func_80242B30_Inner *unk5C;
    u8 pad60[0x94 - 0x60];
    s16 unk94;
};
void func_80242A5C(struct func_80242A5C_Top *arg0, s32 arg1) {
    struct func_80242B30_Inner *p = arg0->unk5C;
    struct func_80242A5C_Leaf *l;
    if (func_8012CE9C(arg1, p, D_80258DA4, 10) == 0) {
        func_80010550(arg1, p);
        if (arg0->unk94--) {
        } else {
            p->unk78 = 1;
            l = arg0->unk24->unk2C;
            func_80127430(l->unk4, l->unk8, l->unkC, 0x668, D_8025BF5C, 1.0f);
            func_800058DC(arg0, func_80242B30);
        }
    }
}




extern struct func_80242C60_Cfg D_80258D80;

void func_80242B30(struct func_80242B30_Struct *arg0, s32 arg1) {
    struct func_80242B30_Inner *sp24;

    sp24 = arg0->unk5C;
    if ((func_8012CE9C(arg1, sp24, D_80258D80, 0x14) == 0) && (func_80010550(arg1, sp24) != 0)) {
        sp24->unk78 = 1;
        arg0->unk94 = 0xA0;
        func_800058DC(arg0, func_80242BC4);
    }
}


struct func_80242BC4_Struct {
    u8 pad0[0x5C];
    struct func_80242B30_Inner *unk5C;
    u8 pad1[0x94 - 0x60];
    s16 unk94;
};
struct func_80242C60_Arg0;
void func_80242C60(struct func_80242C60_Arg0 *arg0, s32 arg1);

void func_80242BC4(arg0, arg1)
struct func_80242BC4_Struct *arg0;
s32 arg1;
{
    struct func_80242B30_Inner *p;

    p = arg0->unk5C;
    if (func_8012CE9C(arg1, p, *(struct func_80242C60_Cfg *)((u8 *)&D_80258D80 + 0x24), 0x14) == 0) {
        func_80010550(arg1, p);
        if (arg0->unk94--) {
        } else {
            p->unk78 = 1;
            func_800058DC(arg0, func_80242C60);
        }
    }
}



extern struct func_80242C60_Cfg D_80258D8C;

struct func_80242C60_Body {
    u8 pad0[0x12];
    u16 unk12;
    u8 pad1[0x24 - 0x14];
    s32 unk24;
    u8 pad2[0x30 - 0x28];
    s32 unk30;
    u8 pad3[0x48 - 0x34];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
};

struct func_80242C60_Node {
    u8 pad0[0x2C];
    struct func_80242C60_Body *unk2C;
};

struct func_80242C60_Sub {
    u8 pad0[0xC];
    u16 unkC;
};

struct func_80242C60_Arg0 {
    u8 pad0[0x24];
    struct func_80242C60_Node *unk24;
    u8 pad1[0x5C - 0x28];
    struct func_80242C60_Sub *unk5C;
};

void func_80242C60(struct func_80242C60_Arg0 *arg0, s32 arg1) {
    struct func_80242C60_Body *temp_a0;
    struct func_80242C60_Sub *temp_s0;
    struct func_80242C60_Node **var_v0;
    s32 var_a1;

    temp_s0 = arg0->unk5C;
    arg0->unk24->unk2C->unk12 = 0x1000;
    if (func_8012CE9C(arg1, temp_s0, D_80258D8C, 0x14) == 0) {
        func_80010550(arg1, temp_s0);
        if (func_80133A24(0x140) != 0) {
            var_a1 = 1;
            var_v0 = (struct func_80242C60_Node **) arg1 + 1;
            if (temp_s0->unkC >= 2) {
                do {
                    var_a1 += 1;
                    var_v0 += 1;
                    temp_a0 = var_v0[-1]->unk2C;
                    temp_a0->unk24 |= 0x100;
                    var_v0[-1]->unk2C->unk30 = (s32) D_80258DF8 | 0x40000000;
                    var_v0[-1]->unk2C->unk48 = 0xFF;
                    var_v0[-1]->unk2C->unk49 = 0xFF;
                    var_v0[-1]->unk2C->unk4A = 0xFF;
                    var_v0[-1]->unk2C->unk4B = 0xFF;
                } while (var_a1 < (s32) temp_s0->unkC);
            }
            func_800058DC(arg0, func_80242D98);
        }
    }
}


typedef struct func_80242D98_StructVec {
    s32 x;
    s32 y;
    s32 z;
} func_80242D98_StructVec;

typedef struct func_80242D98_StructInner {
    u8 pad0[0x1C];
    func_80242D98_StructVec unk1C;
    u8 pad28[0x50];
    s16 unk78;
} func_80242D98_StructInner;

typedef struct func_80242D98_StructLeaf {
    u8 pad0[0x2C];
    u8 *unk2C;
} func_80242D98_StructLeaf;

typedef struct func_80242D98_Struct {
    u8 pad0[0x24];
    func_80242D98_StructLeaf *unk24;
    u8 pad28[4];
    s32 unk2C;
    u8 pad30[0x1C];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
    u8 unk50;
    u8 pad51[3];
    s32 unk54;
    u8 pad58[4];
    func_80242D98_StructInner *unk5C;
} func_80242D98_Struct;


void func_80242D98(func_80242D98_Struct *arg0, s32 *arg1) {
    func_80242D98_StructInner *temp_v0;
    u8 *temp_v0_2;
    s32 value;

    temp_v0 = arg0->unk5C;
    temp_v0->unk1C = *(func_80242D98_StructVec *)&D_80258DA4;
    temp_v0->unk78 = 1;
    func_801FBB20();
    arg0->unk2C |= 0x23E0;
    arg0->unk4C = 0x1B;
    arg0->unk4D = 0x1B;
    arg0->unk4E = 0x1B;
    arg0->unk4F = 0;
    arg0->unk50 = 0xA;
    arg0->unk54 |= 0xE1;
    value = *arg1;
    temp_v0_2 = arg0->unk24->unk2C;
    func_8013E570(value, 0, temp_v0_2 + 4, temp_v0_2 + 8, temp_v0_2 + 0xC);
    func_800058DC(arg0, func_80242E5C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_80242E5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_80242FE0.s")


typedef struct func_8024312C_StructInner {
    u8 pad0[0x78];
    s16 unk78;
} func_8024312C_StructInner;

typedef struct func_8024312C_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x2C];
    func_8024312C_StructInner *unk5C;
    u8 pad60[0x34];
    s16 unk94;
} func_8024312C_Struct;

extern struct func_80242C60_Cfg D_80258D98;

void func_8024312C(func_8024312C_Struct *arg0, s32 arg1) {
    func_8024312C_StructInner *sp2C;

    sp2C = arg0->unk5C;
    if ((func_80242620() == 0) && (func_80242714(arg0) == 0) && (func_8012CE9C(arg1, sp2C, D_80258D98, 0xA) == 0) && (func_80010550(arg1, sp2C) != 0)) {
        arg0->unk2C = arg0->unk2C | 0x80;
        sp2C->unk78 = 1;
        arg0->unk94 = (s16) (func_8012C6B4(0x80) + 0x80);
        func_800058DC(arg0, func_802431FC);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_802431FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_8024339C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_8024368C.s")



struct func_802437C4_Inner {
    u8 pad0[0x78];
    s16 unk78;
};
struct func_802437C4_Leaf {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
};
struct func_802437C4_Mid {
    u8 pad0[0x2C];
    struct func_802437C4_Leaf *unk2C;
};
struct func_802437C4_Struct {
    u8 pad0[0x24];
    struct func_802437C4_Mid *unk24;
    u8 pad1[0x5C - 0x28];
    struct func_802437C4_Inner *unk5C;
    u8 pad2[0x94 - 0x60];
    s16 unk94;
};

void func_802437C4(struct func_802437C4_Struct *arg0, s32 arg1) {
    struct func_802437C4_Inner *sp2C;
    struct func_802437C4_Leaf *temp_v0;
    u32 one;

    one = 1;
    sp2C = arg0->unk5C;
    if ((func_80242620() == 0) && (func_80242714(arg0) == 0) && (func_8012CE9C(arg1, sp2C, D_80258DA4, 5) == 0)) {
        func_80010550(arg1, sp2C);
        if (func_8012A94C(arg0, 0x40) == 0) {
            temp_v0 = arg0->unk24->unk2C;
            func_80127430(temp_v0->unk4, temp_v0->unk8, temp_v0->unkC, 0x66D, D_8025BF70, 1.0f);
            sp2C->unk78 = 1;
            arg0->unk94 = one;
            func_800058DC(arg0, func_802438BC);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_802438BC.s")

struct func_80243AF0_Struct {
    u8 pad0[0x5C];
    struct func_80242B30_Inner *unk5C;
    u8 pad1[0x94 - 0x60];
    s16 unk94;
};
void func_80243AF0(arg0, arg1)
struct func_80243AF0_Struct *arg0;
s32 arg1;
{
    struct func_80242B30_Inner *p = arg0->unk5C;
    struct func_80242B30_Inner **pp = &p;
    if (func_8012CE9C(arg1, p, D_80258D80, 10) == 0) {
        func_80010550(arg1, *pp);
        if (arg0->unk94-- == 0) {
            (*pp)->unk78 = 1;
            func_800058DC(arg0, func_80242E5C);
        }
    }
}

void func_80243B94(arg, arg1)
void *arg;
s32 arg1;
{
#define arg0 ((func_8024312C_Struct *)arg)
    func_8024312C_StructInner *s0 = arg0->unk5C;
    struct func_80242C60_Cfg sp28;
    if (func_80242620(arg) == 0) {
        func_8013A334(&sp28, arg1, s0, 0xC);
        if (func_8012CE9C(arg1, s0, (&D_80258DA4)[4], 0xA) == 0 && func_80010550(arg1, s0) != 0) {
            s0->unk78 = 1;
            arg0->unk2C &= ~0x80;
            func_800058DC(arg, func_80243C54);
        }
    }
}
#undef arg0

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_80243C54.s")


struct func_80243D20_Inner {
    u8 pad0[0x78];
    s16 unk78;
};
struct func_80243D20_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x5C - 0x30];
    struct func_80243D20_Inner *unk5C;
    u8 pad2[0x94 - 0x60];
    s16 unk94;
};
struct func_80243D20_Leaf {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
    s32 unkC;
};
struct func_80243D20_Mid {
    u8 pad0[0x2C];
    struct func_80243D20_Leaf *unk2C;
};
struct func_80243D20_Top {
    u8 pad0[0x24];
    struct func_80243D20_Mid *unk24;
};


void func_80243D20(struct func_80243D20_Struct *arg0, s32 arg1) {
    struct func_80243D20_Inner *sp2C;
    struct func_80243D20_Leaf *temp_v1;

    sp2C = arg0->unk5C;
    arg0->unk2C = arg0->unk2C | 0x80;
    if (func_80242620() == 0 && func_8012CE9C(arg1, sp2C, D_80258DA4, 0xA) == 0) {
        func_80010550(arg1, sp2C);
        temp_v1 = D_8025C6F0->unk24->unk2C;
        if (func_8012A988(arg0, temp_v1->unk4, temp_v1->unkC, 0x30, 0x1000) == 0) {
            arg0->unk94 = (s16) (func_8012C6B4(0x40) + 0x80);
            sp2C->unk78 = 1;
            func_800058DC(arg0, func_80243E0C);
        }
    }
}

typedef struct {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_802455D8_Sub;
typedef struct {
    u8 pad0[0x2C];
    func_802455D8_Sub *unk2C;
} func_802455D8_Mid;
extern func_802455D8_Mid *D_801BBCD0;

struct func_80243E0C_StructSub {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_80243E0C_StructMid {
    u8 pad0[0x2C];
    struct func_80243E0C_StructSub *unk2C;
};
struct func_80243E0C_StructObj {
    u8 pad0[0x24];
    struct func_80243E0C_StructMid *unk24;
    u8 pad28[8];
    u32 unk30;
    u8 pad34[0x28];
    struct func_80242714_Inner *unk5C;
    u8 pad60[0x34];
    s16 unk94;
};

void func_80243E0C(struct func_80243E0C_StructObj *arg0, s32 arg1) {
    s32 pad;
    struct func_80242714_Inner *sp20;
    s32 angle;
    func_802455D8_Sub *pos0;
    struct func_80243E0C_StructSub *pos1;

    sp20 = arg0->unk5C;
    if (arg0->unk30 & 0x88) {
        arg0->unk94 = 0;
    }
    if (func_80242620(arg0) == 0) {
        func_80010550(arg1, sp20);
        angle = arg0->unk94;
        if (angle != 0) {
            arg0->unk94 = angle - 1;
            return;
        }
        pos0 = D_801BBCD0->unk2C;
        pos1 = arg0->unk24->unk2C;
        angle = (arg0->unk24->unk2C->unk12 - func_8001EF38(pos0->unk4 - pos1->unk4, pos0->unkC - pos1->unkC)) & 0x1FFF & 0xFFFF;
        if (angle < 0x200 || (angle >= 0x1E01 && angle < 0x1FFF)) {
            sp20->unk78 = 1;
            func_800058DC(arg0, func_80242E5C);
        }
        func_8012A94C(arg0, 0x40);
    }
}


struct func_80243F08_Inner {
    u8 pad0[0x2C];
    s32 unk2C;
};

struct func_80243F08_Struct {
    u8 pad0[0x24];
    struct func_80243F08_Inner *unk24;
};


void func_80243F08(struct func_80243F08_Struct *volatile arg0, s32 *arg1) {
    s32 temp_v0;

    s32 a;
    D_8025C6EC = 0;
    a = *arg1;
    temp_v0 = arg0->unk24->unk2C;
    func_8013E5C4(a, 0, temp_v0 + 4, temp_v0 + 8, temp_v0 + 0xC);
    func_800058DC(arg0, func_80127014);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_80243F68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file018/80242620/func_802442FC.s")



void func_80244418(s32 arg0, s32 arg1) {
    if (func_80129554(arg0, 0xFF, 64) != 0) {
        func_800058DC((void *)arg0, func_80244458);
    }
}


struct func_80244458_Struct1 {
    u8 pad0[0x2C];
    s32 unk2C;
};
struct func_80244458_Struct0 {
    u8 pad0[0x24];
    struct func_80244458_Struct1 *unk24;
};


void func_80244458(void *arg0, s32 *arg1)
{
  s32 temp_v0;
  func_800058DC(arg0, func_80243F08);
  D_8025C6F8 = 1;
  D_8025C6FA = 0;
  D_8025C6EC = 0;
  ;
  func_8013E5C4(*arg1, 0, ((struct func_80244458_Struct0 *) arg0)->unk24->unk2C + 4, ((struct func_80244458_Struct0 *) arg0)->unk24->unk2C + 8, ((struct func_80244458_Struct0 *) arg0)->unk24->unk2C + 0xC);
  D_8025C704 = 1;
}


void func_802444D4(void) {
}



void func_802444DC(void *arg0, void **arg1) {
    if (func_80133A24(0x144) == 0) {
        func_80005F6C(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x3CB, 0xB);
        func_8012C2DC(0);
        *(f32 *) (*(u8 **) (*(u8 **) arg1 + 0x30) + 0x4) = D_8025BF78;
        *(f32 *) (*(u8 **) (*(u8 **) arg1 + 0x30) + 0x8) = 200.0f;
        *(f32 *) (*(u8 **) (*(u8 **) arg1 + 0x30) + 0xC) = -90.0f;
        *(s16 *) (*(u8 **) (*(u8 **) arg1 + 0x30) + 0x12) = 0x800;
        func_8012C228((s32) arg0, 0x3CB, 0xC);
        *(s16 *) ((u8 *) arg0 + 0x90) = 0x80;
        func_800058DC(arg0, func_802445BC);
    }
}


struct func_802445BC_Struct1 {
    u8 pad0[0x30];
    f32 unk30_f;
};

struct func_802445BC_Struct0 {
    u8 pad0[0x24];
    struct func_802445BC_Inner *unk24;
};

struct func_802445BC_Inner {
    u8 pad0[0x30];
    struct func_802445BC_Leaf *unk30;
};

struct func_802445BC_Leaf {
    u8 pad0[0x4];
    f32 unk4;
};


void func_802445BC(struct func_802445BC_Struct0 *arg0, s32 arg1) {
    if (func_80133A24(0x144) != 0) {
        arg0->unk24->unk30->unk4 = D_8025BF7C;
    }
}


struct func_80244600_Struct2 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_80244600_Struct1 {
    u8 pad0[0x30];
    struct func_80244600_Struct2 *unk30;
};

struct func_80244600_Struct0 {
    u8 pad0[0x90];
    s16 unk90;
};


void func_80244600(struct func_80244600_Struct0 *arg0, struct func_80244600_Struct1 **arg1) {
    if (func_80133A24(0x146) == 0) {
        func_80005F6C(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x3CB, 5);
        func_8012C2DC(0);
        (*arg1)->unk30->unk4 = D_8025BF80;
        (*arg1)->unk30->unk8 = 200.0f;
        (*arg1)->unk30->unkC = 240.0f;
        (*arg1)->unk30->unk12 = 0;
        arg0->unk90 = 0x30;
        func_800058DC(arg0, func_802446CC);
    }
}



void func_802446CC(void *arg0, s32 arg1) {
    if (func_80133A24(0x146) != 0) {
        func_80020744(0x12B);
        func_800058DC(arg0, func_80244714);
    }
}


struct func_80244714_Inner {
    u8 pad0[0x8];
    f32 unk8;
};
struct func_80244714_Mid {
    u8 pad0[0x30];
    struct func_80244714_Inner *unk30;
};
struct func_80244714_Struct {
    u8 pad0[0x24];
    struct func_80244714_Mid *unk24;
    u8 pad1[0x90 - 0x28];
    u16 unk90;
};


void func_80244714(struct func_80244714_Struct *arg0, s32 arg1) {
    s32 temp_v0;
    struct func_80244714_Inner *temp_v0_2;

    temp_v0 = arg0->unk90;
    arg0->unk90 = temp_v0 - 1;
    if (temp_v0 != 0) {
        temp_v0_2 = arg0->unk24->unk30;
        temp_v0_2->unk8 = temp_v0_2->unk8 + 2.0f;
        return;
    }
    arg0->unk90 = 0x30;
    func_80020744(0x6CE);
    func_800058DC(arg0, &func_80244788);
}


struct func_80244788_Inner {
    u8 pad0[0x8];
    f32 unk8;
};

struct func_80244788_Mid {
    u8 pad0[0x30];
    struct func_80244788_Inner *unk30;
};

struct func_80244788_Struct {
    u8 pad0[0x24];
    struct func_80244788_Mid *unk24;
    u8 pad1[0x90 - 0x28];
    u16 unk90;
};

void func_80244788(struct func_80244788_Struct *arg0, s32 arg1) {
    struct func_80244788_Inner *temp_v0;
    extern s32 func_80133A24();

    if (func_80133A24(0x146, arg0) == 0) {
        if (arg0->unk90 != 0) {
            arg0->unk90 = arg0->unk90 - 1;
            temp_v0 = arg0->unk24->unk30;
            temp_v0->unk8 = temp_v0->unk8 - 2.0f;
        }
    }
}



void func_802447F0(s32 arg0, struct func_80244600_Struct1 **arg1) {
    func_80005F6C((void *) arg0, D_80164F40);
    func_80006214((void *) arg0);
    D_8025C6F4 = arg0;
    func_8012C89C((void *) arg0, 0, 0x3CB, 6);
    func_8012C2DC(0);
    (*arg1)->unk30->unk4 = 0.0f;
    (*arg1)->unk30->unk8 = 200.0f;
    (*arg1)->unk30->unkC = 404.0f;
    (*arg1)->unk30->unk12 = 0x1000;
    func_8012C228(arg0, 0x3CB, 0xA);
    func_800058DC((void *) arg0, func_802448BC);
}



void func_802448BC(void *arg0, s32 arg1) {
    if ((u8)D_8025C6FB == 1) {
        func_8012C89C(arg0, 0, 0x3CB, 7);
        func_800058DC(arg0, func_8024490C);
    }
}



void func_8024490C(void *arg0, s32 arg1) {
    if ((u8)D_8025C6FB == 2) {
        func_8012C89C(arg0, 0, 0x3CB, 8);
        func_800058DC(arg0, func_8024495C);
    }
}



void func_8024495C(void *arg0, s32 arg1) {
    if ((u8)D_8025C6FB == 3) {
        func_8012C89C(arg0, 0, 0x3CB, 9);
        func_800058DC(arg0, func_802449AC);
    }
}


/* The StructA typedef in context.h is declared after this function in the source file, so use a local struct. */
struct func_802449AC_Struct {
    u8 pad0[0x90];
    u16 unk90;
};


void func_802449AC(struct func_802449AC_Struct *arg0, s32 arg1) {
    if ((u8) D_8025C6FB == 4) {
        arg0->unk90 = 4;
        func_80020744(0x239);
        func_800058DC(arg0, func_802449FC);
    }
}



typedef struct func_802449FC_StructB {
    u8 pad0[0x8];
    f32 unk8;
    f32 unkC;
    s16 unk10;
} func_802449FC_StructB;

typedef struct func_802449FC_StructC {
    u8 pad0[0x30];
    func_802449FC_StructB *unk30;
} func_802449FC_StructC;

typedef struct func_802449FC_StructA {
    u8 pad0[0x24];
    func_802449FC_StructC *unk24;
    u8 pad1[0x90 - 0x28];
    u16 unk90;
} func_802449FC_StructA;

void func_802449FC(func_802449FC_StructA *arg0, s32 arg1) {
    func_802449FC_StructB *temp_v0;

    arg0->unk90 = arg0->unk90 + 1;
    temp_v0 = arg0->unk24->unk30;
    temp_v0->unkC = temp_v0->unkC + 1.0f;
    temp_v0 = arg0->unk24->unk30;
    temp_v0->unk10 = temp_v0->unk10 - 0x80;
    temp_v0 = arg0->unk24->unk30;
    temp_v0->unk8 = temp_v0->unk8 - (f32) ((s32) arg0->unk90 / 10);
    if (arg0->unk24->unk30->unk8 < -800.0f) {
        func_80005700();
    }
}

