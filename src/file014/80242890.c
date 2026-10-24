#include "common.h"

extern f32 D_8024AAE0;
extern f32 D_8024AAE4;
extern f32 D_8024AAEC;
extern f32 D_8024AB20;
extern f32 D_8024AB24;
extern f32 D_8024AB28;
extern f32 D_8024AB2C;
extern f64 D_8024AAD0;
extern s16 D_8024AB46;
extern s32 func_8001EF38(f32, f32);
extern s32 func_801084C4(f32, f32, f32, f32, f32, f32);
extern s32 func_8011AAF4(void *, s32, void *, u8, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern s32 func_801268F4(s32);
extern s32 func_8012A564(void *, s32);
extern s32 func_8012C6B4(s32);
extern s32 func_8012CE9C();
extern s32 func_80133A24(s32);
extern s32 func_80242890();
extern u16 D_801BBBF4;
extern u8 D_801BBF7C[];
extern u8 D_801BBFAC[];
extern u8 D_8024A618[];
extern u8 D_8024A6E4[];
extern u8 D_8024A78C[];
extern u8 D_8024A7C4[];
extern u8 D_8024A7FC[];
extern u8 D_8024A834[];
extern u8 D_8024A86C[];
extern u8 D_8024A8A4[];
extern u8 D_8024A8DC[];
extern u8 func_80127014[];
#define func_80243C48 func_80243C48__decl
extern u8 func_80243C48[];
#define func_8024412C func_8024412C__decl
extern u8 func_8024412C[];
#define func_802448C8 func_802448C8__decl
extern u8 func_802448C8[];
#define func_80244988 func_80244988__decl
extern u8 func_80244988[];
#define func_80245D74 func_80245D74__decl
extern u8 func_80245D74[];
extern void func_800058DC();
extern void func_80010454(s32, void *, s32);
extern void func_80010550();
extern void func_80020744(s32, void *, void *);
extern void func_801178E4(f32 *, f32 *, f32 *, f32 *, f32 *, f32 *);
extern void func_80127430(f32, f32, s32, s32, f32, f32);
extern void func_8012A94C(void *, s32);
extern void func_80133980(s32);
extern void func_801339D0(s32);
extern void func_8013A334(f32 *, s32, void *, s32);
extern void func_8013E570(s32, s32, void *, void *, void *);
extern void func_8013E5C4(s32, s32, s32, s32, s32);
extern void func_801FBB20(void);
extern void func_801FBB30();
extern void func_80243510();
extern void func_802435AC();
extern void func_80243820();
extern void func_802438E4();
extern void func_80243A4C();
extern void func_80244248();
extern void func_802445F8();
extern void func_8024476C();
extern void func_80244FDC();
extern void func_80245290();
extern void func_80245BF8();
extern void func_80245FE4();
extern void func_80246510();
extern void func_8037BB4C(s16, f32, f32, s16);

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80242890.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80242A90.s")


void func_802433E0(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

struct func_80246478_Child {
    u8 pad0[0x78];
    s16 unk78;
};
struct func_80246478_Sub {
    u8 pad0[0x8];
    f32 unk8;
};
struct func_80246478_Mid {
    u8 pad0[0x2C];
    struct func_80246478_Sub *unk2C;
};
struct func_80246478_Obj {
    u8 pad0[0x24];
    struct func_80246478_Mid *unk24;
    u8 pad1[0x34];
    struct func_80246478_Child *unk5C;
    u8 pad2[0x34];
    s16 unk94;
};
void func_80243488(struct func_80246478_Obj *arg0, s32 arg1);
struct func_802438E4_Table {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
struct func_80246828_Triple {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
extern struct func_80246828_Triple D_802484C4;

void func_802433EC(struct func_80246478_Obj *arg0, s32 arg1) {
    s32 temp_a1;

    temp_a1 = (s32) arg0->unk5C;
    if (func_8012CE9C(arg1, (void *) temp_a1, *(struct func_802438E4_Table *) &D_802484C4, 1) == 0) {
        func_80010550(arg1, (void *) temp_a1);
        if (func_80133A24(0x47) != 0) {
            func_801FBB30();
            arg0->unk94 = 0x12C;
            func_800058DC(arg0, &func_80243488);
        }
    }
}



void func_80243488(struct func_80246478_Obj *arg0, s32 arg1) {
    struct func_80246478_Child *temp_a1;
    s16 temp_v0;

    temp_a1 = arg0->unk5C;
    arg0->unk24->unk2C->unk8 = (f32) ((f64) arg0->unk24->unk2C->unk8 + D_8024AAD0);
    func_80010550(arg1, temp_a1);
    temp_v0 = arg0->unk94;
    arg0->unk94 = temp_v0 - 1;
    if (temp_v0 == 0) {
        temp_a1->unk78 = 1;
        func_800058DC(arg0, func_80243510);
    }
}

struct func_80244F98_Child {
    u8 pad0[0x78];
    s16 unk78;
};
struct func_80244F98_Obj {
    u8 pad0[0x2C];
    u32 unk2C;
    u8 pad1[0x2C];
    struct func_80244F98_Child *unk5C;
};
void func_80243564(struct func_80244F98_Obj *arg0, s32 arg1);

struct func_80243510_StructObj {
    u8 pad[0x5C];
    void *unk5C;
};

void func_80243510(struct func_80243510_StructObj *arg0, s32 arg1) {
    extern void func_80020744();
    void *child;

    child = arg0->unk5C;
    func_80010550(arg1, child);
    if (func_80133A24(0x48) != 0) {
        func_80020744(0x66B);
        func_800058DC(arg0, (void *)func_80243564);
    }
}



void func_80243564(struct func_80244F98_Obj *arg0, s32 arg1) {
    struct func_80244F98_Child *child;

    child = arg0->unk5C;
    func_80010550(arg1, child, arg1);
    if (func_80133A24(0x48) != 0) {
        func_800058DC(arg0, func_802435AC);
    }
}

#define D_80010550 D_80010550__func_802435AC
#define func_802448C8 func_802448C8__func_802435AC
#define func_80244988 func_80244988__func_802435AC
extern void func_802448C8(struct func_80244F98_Obj *arg0, s32 arg1);
extern void func_80244988(struct func_80244F98_Obj *arg0, s32 arg1);
extern s32 D_80010550(s32, void *);
#define CQ(p, l) p##_##l
#define CP(p, l) CQ(p, l)
#define func_80243820 CP(fA, __LINE__)
#define func_802448C8 CP(fB, __LINE__)
#define func_80244988 CP(fC, __LINE__)
#undef func_80243820
#undef func_802448C8
#undef func_80244988

extern u8 D_8024A5E0[];
extern struct func_802438E4_Table D_802484AC;
extern u8 D_802436F0[];

typedef struct {
    f32 x, y, z;
} func_802435AC_Vec;

void func_802435AC(struct func_80246478_Obj *arg0, s32 arg1) {
    struct func_80246478_Child *s0;
    func_802435AC_Vec sp58;

    s0 = arg0->unk5C;
    func_8013A334(&sp58.x, arg1, s0, 6);
    if (func_80133A24(0x48) != 0) {
        func_8011AAF4(D_8024A5E0, 0x1EC, arg0, 0, 1, 4.0f, -75.0f, 57.0f, -372.0f, 4294967296.0f, sp58.x, sp58.y, sp58.z, 0.0f, 35.0f, -1, -1);
        if (func_8012CE9C(arg1, s0, D_802484AC, 0xA) == 0 && D_80010550(arg1, s0) != 0) {
            s0->unk78 = 1;
            func_800058DC(arg0, D_802436F0);
        }
    }
}
#undef CQ
#undef CP
#undef D_80010550
#undef func_802448C8
#undef func_80244988


extern struct func_802438E4_Table D_802484DC;

void func_802436F0(struct func_80246478_Obj *arg0, s32 arg1) {
    void *sp5C;
    f32 sp50[3];

    sp5C = arg0->unk5C;
    func_8013A334(sp50, arg1, sp5C, 6);
    func_8011AAF4(D_8024A618, 0x1FF, arg0, 0, 1, 4.0f, -75.0f, 57.0f, -372.0f, 4294967296.0f, sp50[0], sp50[1], sp50[2], 0.0f, 35.0f, -1, -1);
    if (func_8012CE9C(arg1, sp5C, D_802484DC, 0xA) == 0) {
        func_80133980(0x49);
        D_801BBF7C[0x10] = 1;
        func_800058DC(arg0, (void *)func_80243820);
    }
}


typedef struct func_80243820_StructVec {
    s32 x;
    s32 y;
    s32 z;
} func_80243820_StructVec;

typedef struct func_80243820_StructInner {
    u8 pad0[0x1C];
    func_80243820_StructVec unk1C;
    u8 pad28[0x50];
    s16 unk78;
} func_80243820_StructInner;

typedef struct func_80243820_StructLeaf {
    u8 pad0[0x2C];
    u8 *unk2C;
} func_80243820_StructLeaf;

typedef struct func_80243820_Struct {
    u8 pad0[0x24];
    func_80243820_StructLeaf *unk24;
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
    func_80243820_StructInner *unk5C;
} func_80243820_Struct;


void func_80243820(func_80243820_Struct *arg0, s32 *arg1) {
    func_80243820_StructInner *temp_v0;
    u8 *temp_v0_2;
    s32 value;

    temp_v0 = arg0->unk5C;
    temp_v0->unk1C = *(func_80243820_StructVec *)&D_802484DC;
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
    func_800058DC(arg0, func_802438E4);
}


struct func_802438E4_Child {
    u8 pad0[0x78];
    s16 unk78;
};
struct func_802438E4_Obj {
    u8 pad0[0x2C];
    u32 unk2C;
    u8 pad1[0x2C];
    struct func_802438E4_Child *unk5C;
};


void func_802438E4(struct func_802438E4_Obj *arg0, s32 arg1) {
    struct func_802438E4_Child *temp_s1;

    temp_s1 = arg0->unk5C;
    arg0->unk2C |= 0x80;
    if (func_80242890() == 0 && func_8012CE9C(arg1, temp_s1, D_802484DC, 0xA) == 0) {
        arg0->unk2C |= 0x80;
        func_80010550(arg1, temp_s1);
        if (func_8012A564(arg0, 0x436A0000) == 0) {
            temp_s1->unk78 = 1;
            arg0->unk2C &= ~0x80;
            func_800058DC(arg0, func_802445F8);
            return;
        }
        if (func_8012A564(arg0, 0x42580000) != 0) {
            temp_s1->unk78 = 1;
            arg0->unk2C &= ~0x80;
            func_800058DC(arg0, func_80244248);
            return;
        }
        if (func_8012A564(arg0, 0x43220000) != 0) {
            temp_s1->unk78 = 1;
            arg0->unk2C &= ~0x80;
            func_800058DC(arg0, func_80243A4C);
            return;
        }
        func_8012A94C(arg0, 0x16);
    }
}

#define D_801BBCD0 D_801BBCD0__func_80243A4C
#define func_802448C8 func_802448C8__func_80243A4C
#define func_80244988 func_80244988__func_80243A4C
extern void func_802448C8(struct func_80244F98_Obj *arg0, s32 arg1);
extern void func_80244988(struct func_80244F98_Obj *arg0, s32 arg1);
extern s32 D_801BBCD0;
#define LP(p, l) LQ(p, l)
#define LQ(p, l) p##_##l
#define func_80243820 LP(fA, __LINE__)
#define func_802448C8 D_802448C8
#define func_80244988 D_80244988

extern f32 D_8024AAD8;
#define func_80243B88 func_80243B88__decl364
extern u8 func_80243B88[];

struct func_80243A4C_Sub {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_80243A4C_FSub {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
};
struct func_80243A4C_Mid {
    u8 pad0[0x2C];
    struct func_80243A4C_Sub *unk2C;
};
struct func_80243A4C_Obj {
    u8 pad0[0x24];
    struct func_80243A4C_Mid *unk24;
    u8 pad1[0x34];
    struct func_80246478_Child *unk5C;
};

void func_80243A4C(struct func_80243A4C_Obj *arg0, s32 arg1) {
    s32 pad;
    struct func_80246478_Child *sp28;
    struct func_80243A4C_Obj *p;
    s32 t;

    sp28 = arg0->unk5C;
    p = arg0;
    if (func_80242890() == 0) {
        if (func_8012CE9C(arg1, sp28, D_802484DC, 0xA) == 0) {
            func_80010550(arg1, sp28);
            arg0 = (struct func_80243A4C_Obj *)((struct func_80243A4C_Mid *)D_801BBCD0)->unk2C;
            t = (s32)p->unk24->unk2C;
            t = (u16)((p->unk24->unk2C->unk12 - func_8001EF38(((struct func_80243A4C_FSub *)arg0)->unk4 - ((struct func_80243A4C_Sub *)t)->unk4, ((struct func_80243A4C_FSub *)arg0)->unkC - *(f32 *)&((struct func_80243A4C_Sub *)t)->unkC)) & 0x1FFF);
            if (t < 0x200 || (t >= 0x1E01 && t < 0x1FFF)) {
                sp28->unk78 = 1;
                t = (s32)p->unk24->unk2C;
                func_80127430(((struct func_80243A4C_Sub *)t)->unk4, ((struct func_80243A4C_Sub *)t)->unk8, ((struct func_80243A4C_Sub *)t)->unkC, 0x66A, D_8024AAD8, 1.0f);
                func_800058DC(p, func_80243B88);
            }
            func_8012A94C(p, 0x40);
        }
    }
}
#undef func_80243B88
#undef LP
#undef LQ
#undef func_80243820
#undef D_801BBCD0
#undef func_802448C8
#undef func_80244988

#define D_80010550 D_80010550__func_80243B88
#define func_802448C8 func_802448C8__func_80243B88
#define func_80244988 func_80244988__func_80243B88
extern void func_802448C8(struct func_80244F98_Obj *arg0, s32 arg1);
extern void func_80244988(struct func_80244F98_Obj *arg0, s32 arg1);
extern s32 D_80010550(s32, void *);
#define CQ(p, l) p##_##l
#define CP(p, l) CQ(p, l)
#define func_80243820 CP(fA, __LINE__)
#define func_802448C8 CP(fD, __LINE__)
#define func_80244988 CP(fE, __LINE__)
#undef func_80243820
#undef func_802448C8
#undef func_80244988

typedef struct func_80243B88_StructInner {
    u8 pad0[0x78];
    s16 unk78;
} func_80243B88_StructInner;

typedef struct func_80243B88_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x2C];
    func_80243B88_StructInner *unk5C;
    u8 pad60[0x34];
    s16 unk94;
} func_80243B88_Struct;

extern struct func_802438E4_Table D_802484D0;
extern u8 D_80243C48[];

void func_80243B88(func_80243B88_Struct *arg0, s32 arg1) {
    func_80243B88_StructInner *sp2C;

    sp2C = arg0->unk5C;
    if ((func_80242890() == 0) && (func_8012CE9C(arg1, sp2C, D_802484D0, 0xA) == 0) && (D_80010550(arg1, sp2C) != 0)) {
        arg0->unk2C = arg0->unk2C | 0x80;
        sp2C->unk78 = 1;
        arg0->unk94 = (s16) (func_8012C6B4(0x100) + 0x200);
        func_800058DC(arg0, D_80243C48);
    }
}
#undef CQ
#undef CP
#undef D_80010550
#undef func_802448C8
#undef func_80244988

#undef func_80243C48
#define D_80010550 D_80010550__func_80243C48
extern s32 D_80010550(s32, void *);
#define ZP(p, l) ZQ(p, l)
#define ZQ(p, l) p##_##l
#define func_80243820 ZP(zA, __LINE__)
#define func_802448C8 ZP(zC, __LINE__)
#define func_80244988 ZP(zD, __LINE__)
#define func_80243C48 D_80243C48
#undef func_80243820
#undef func_802448C8
#undef func_80244988
#undef func_80243C48

struct func_80243C48_Struct_Sub { u8 pad0[4]; f32 unk4; f32 unk8; s32 unkC; };
struct func_80243C48_Struct_Mid { u8 pad0[0x2C]; struct func_80243C48_Struct_Sub *unk2C; };
struct func_80243C48_Struct {
    u8 pad0[0x24];
    struct func_80243C48_Struct_Mid *unk24;
    u8 pad1[0x8];
    s32 unk30;
    u8 pad2[0x28];
    struct func_80246478_Child *unk5C;
    u8 pad3[0x34];
    s16 unk94;
};
extern struct func_802438E4_Table D_802484F4;
extern f32 D_8024AADC;
extern void func_80244988();
extern void func_802448C8();
extern void func_80243E38();

void func_80243C48(struct func_80243C48_Struct *arg0, s32 arg1) {
    struct func_80246478_Child *sp2C;
    s16 v;

    sp2C = arg0->unk5C;
    if (func_80242890() != 0) {
        return;
    }
    if (func_8012CE9C(arg1, sp2C, D_802484F4, 0xA) != 0) {
        return;
    }
    {
        D_80010550(arg1, sp2C);
        if (arg0->unk94-- == 0) {
            sp2C->unk78 = 1;
            func_800058DC(arg0, func_80244988);
            return;
        }
        if (arg0->unk30 & 0x10) {
            sp2C->unk78 = 1;
            func_800058DC(arg0, func_802448C8);
            return;
        }
        if (arg0->unk30 & 0x80) {
            sp2C->unk78 = 1;
            if ((func_80133A24(0x4F) != 0) && (D_801BBBF4 == 0x10)) {
                func_800058DC(arg0, func_80244988);
                return;
            }
            func_800058DC(arg0, func_802448C8);
            return;
        }
        if (func_8012A564(arg0, 0x42900000) != 0) {
            struct func_80243C48_Struct_Sub *t;
            sp2C->unk78 = 1;
            *(u16 *)&arg0->unk94 = 1;
            t = arg0->unk24->unk2C;
            func_80127430(t->unk4, t->unk8, t->unkC, 0x66D, D_8024AADC, 1.0f);
            func_800058DC(arg0, func_80243E38);
        } else {
            func_8012A94C(arg0, 0x40);
        }
        if (func_8012A564(arg0, 0x43340000) == 0) {
            sp2C->unk78 = 1;
            func_800058DC(arg0, func_802438E4);
        }
    }
}
#undef ZP
#undef ZQ
#undef D_80010550
#define func_80243C48 func_80243C48__decl

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
struct func_80243E38_Struct { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; u8 pad1[2]; s16 unk12; };
struct func_80243E38_Mid { u8 pad0[0x2C]; struct func_80243E38_Struct *unk2C; };
struct func_80243E38_Obj { u8 pad0[0x18]; struct func_80243E38_Mid *unk18; u8 pad1[0x8]; struct func_80243E38_Mid *unk24; u8 pad2[0x8]; s32 unk30; u8 pad3[0x28]; struct func_80246478_Child *unk5C; u8 pad4[0x34]; s16 unk94; };
extern s32 func_8012CF10(s32, void *, struct func_802438E4_Table, s32, s32);
extern struct func_802438E4_Table D_8024850C;

void func_80243E38(struct func_80243E38_Obj *arg0, s32 arg1) {
    struct func_80246478_Child *sp54;
    f32 sp48[3];
    struct func_80243E38_Struct *s;
    f32 a, b, c, t;

    sp54 = arg0->unk5C;
    if (func_80242890() == 0) {
        if (arg0->unk30 & 0x10) {
            sp54->unk78 = 1;
            s = arg0->unk24->unk2C;
            func_80127430(s->unk4, s->unk8, *(s32 *)&s->unkC, 0x337, D_8024AAE0, 1.0f);
            func_800058DC(arg0, func_80244988);
            return;
        }
        if (arg0->unk30 & 0x80) {
            sp54->unk78 = 1;
            if (func_80133A24(0x4F) != 0 && D_801BBBF4 == 0x10) {
                func_800058DC(arg0, func_80244988);
                return;
            }
            func_800058DC(arg0, func_802448C8);
            return;
        }
        func_8013A334(sp48, arg1, sp54, 0xC);
        if (arg0->unk94 != 0) {
            s = ((struct func_80243E38_Mid *)D_801BBCD0)->unk2C;
            t = s->unk8;
            if (t < sp48[1]) a = -(t - sp48[1]); else a = t - sp48[1];
            t = s->unk4;
            if (t < sp48[0]) b = -(t - sp48[0]); else b = t - sp48[0];
            t = s->unkC;
            if (t < sp48[2]) c = -(t - sp48[2]); else c = t - sp48[2];
            if (c * 1.0f + (b + a) < 30.0f) {
                arg0->unk94 = 0;
                s = arg0->unk24->unk2C;
                func_80127430(s->unk4, s->unk8, *(s32 *)&s->unkC, 0x6BD, D_8024AAE4, 1.0f);
                func_8037BB4C(arg0->unk24->unk2C->unk12 + 0x800, 2.0f, 2.0f, D_8024AB46);
            }
        }
        func_80010454(arg1, sp54, 0xE3F001);
        if (func_8012CF10(arg1, sp54, D_8024850C, 0xA, 0x1C0FFE) == 0) {
            func_80010454(arg1, sp54, 0x1C0FFE);
            func_80010550(arg1, sp54);
            if (((u8 *)((struct func_80243E38_Obj *)arg1)->unk18->unk2C)[0x6A] != 0) {
                sp54->unk78 = 1;
                arg0->unk94 = func_8012C6B4(0x40) + 0x10;
                func_800058DC(arg0, func_8024412C);
            }
        }
    }
}

#undef func_8024412C
#define D_80010550 D_80010550__func_8024412C
extern s32 D_80010550(s32, void *);
#define ZQ(p, l) p##_##l
#define ZP(p, l) ZQ(p, l)
#define func_80243820 ZP(zA, __LINE__)
#define func_802448C8 ZP(zB, __LINE__)
#define func_80244988 ZP(zC, __LINE__)
#define func_8024412C ZP(zD, __LINE__)
#undef func_8024412C
#undef func_80243820

extern void func_80244518();

void func_8024412C(struct func_802438E4_Obj *arg0, s32 arg1) {
    struct func_802438E4_Child *s1;
    u32 f;

    s1 = arg0->unk5C;
    if (func_80242890() == 0) {
        f = *(u32 *)((u8 *)arg0 + 0x30);
        if ((f & 8) || (f & 0x80)) {
            s1->unk78 = 1;
            ((struct func_80246478_Obj *)arg0)->unk94 = 0x40;
            func_800058DC(arg0, func_80244518);
            return;
        }
        if (func_8012CE9C(arg1, s1, D_802484F4, 1) == 0) {
            struct func_80246478_Obj *o = (struct func_80246478_Obj *)arg0;
            D_80010550(arg1, s1);
            if (o->unk94-- == 0) {
                s1->unk78 = 1;
                func_800058DC(arg0, func_802438E4);
                return;
            }
            if (func_8012A564(arg0, 0x43340000) == 0) {
                s1->unk78 = 1;
                func_800058DC(arg0, func_802438E4);
            }
        }
    }
}
#undef ZQ
#undef ZP
#undef func_802448C8
#undef func_80244988
#undef D_80010550
#define func_8024412C func_8024412C__decl

#define func_8024476C_Vec func_8024476C_Vec__func_80244248
struct func_8024476C_Vec {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
};
#define LP(p, l) LQ(p, l)
#define LQ(p, l) p##_##l
#define func_80243820 LP(fA, __LINE__)
#define func_802448C8 D_802448C8
#define func_80244988 D_80244988

struct func_80244248_StructMid {
    u8 pad[0x2C];
    struct func_8024476C_Vec *unk2C;
};
struct func_80244248_StructObj {
    u8 pad[0x24];
    struct func_80244248_StructMid *unk24;
    u8 pad2[0x34];
    struct func_80246478_Child *unk5C;
};
extern s32 D_8012A94C(void *, s32);
extern f32 D_8024AAE8;
extern void func_80244328();

void func_80244248(struct func_80244248_StructObj *arg0, s32 arg1) {
    struct func_80246478_Child *sp2C;
    struct func_8024476C_Vec *temp_v0;

    sp2C = arg0->unk5C;
    if ((func_80242890(arg0) == 0) && (func_8012CE9C(arg1, sp2C, D_802484DC, 5) == 0)) {
        func_80010550(arg1, sp2C);
        if (D_8012A94C(arg0, 0x40) == 0) {
            temp_v0 = arg0->unk24->unk2C;
            func_80127430(temp_v0->unk4, temp_v0->unk8, temp_v0->unkC, 0x66D, D_8024AAE8, 1.0f);
            sp2C->unk78 = 1;
            func_800058DC(arg0, func_80244328);
        }
    }
}
#undef LP
#undef LQ
#undef func_80243820
#undef func_802448C8
#undef func_80244988
#undef func_8024476C_Vec

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80242890/func_80244328.s")

#define D_80010550 D_80010550__func_80244518
#define D_802484B8 D_802484B8__func_80244518
extern s32 D_80010550(s32, void *);
extern struct func_80246828_Triple D_802484B8;
#define HZQ(p, l) p##_##l
#define HZP(p, l) HZQ(p, l)
#define func_80243820 HZP(hA, __LINE__)
#define func_802448C8 HZP(hB, __LINE__)
#define func_80244988 HZP(hC, __LINE__)

struct func_80244518_StructObj {
    u8 pad0[0x2C];
    u32 unk2C;
    u8 pad1[0x2C];
    struct func_80246478_Child *unk5C;
    u8 pad2[0x34];
    s16 unk94;
};

void func_80244518(struct func_80244518_StructObj *arg0, s32 arg1) {
    s16 temp_v1;
    s32 is_zero;
    struct func_80246478_Child *temp_s1;

    temp_s1 = arg0->unk5C;
    if (func_8012A564(arg0, 0x436A0000) == 0) {
        temp_s1->unk78 = 1;
        arg0->unk2C &= ~0x80;
        func_800058DC(arg0, func_802445F8);
        return;
    }
    if (func_8012CE9C(arg1, temp_s1, *(struct func_802438E4_Table *)&D_802484B8, 10) == 0) {
        D_80010550(arg1, temp_s1);
        if (arg0->unk94-- == 0) {
            temp_s1->unk78 = 1;
            func_800058DC(arg0, func_802438E4);
        }
    }
}
#undef HZQ
#undef HZP
#undef func_80243820
#undef func_802448C8
#undef func_80244988
#undef D_80010550
#undef D_802484B8

#define D_80010550 D_80010550__func_802445F8
#define func_80244714 func_80244714__func_802445F8
#define func_80244714_StructChild func_80244714_StructChild__func_802445F8
#define func_80244714_StructObj func_80244714_StructObj__func_802445F8
#define func_80244B3C_StructMid func_80244B3C_StructMid__func_802445F8
#define func_80244B3C_StructSub func_80244B3C_StructSub__func_802445F8
struct func_80244714_StructChild {
    u8 pad[0x78];
    s16 unk78;
};
struct func_80244714_StructObj {
    u8 pad[0x2C];
    u32 unk2C;
    u8 pad30[0x2C];
    struct func_80244714_StructChild *unk5C;
};
struct func_80244B3C_StructSub {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_80244B3C_StructMid {
    u8 pad0[0x2C];
    struct func_80244B3C_StructSub *unk2C;
};
extern void func_80244714(struct func_80244714_StructObj *arg0, s32 arg1);
extern s32 D_80010550(s32, void *);
#define LP(p, l) LQ(p, l)
#define LQ(p, l) p##_##l
#define func_80243820 LP(fA, __LINE__)
#define func_802448C8 D_802448C8
#define func_80244988 D_80244988

struct func_802445F8_Struct {
    u8 pad0[0x24];
    struct func_80244B3C_StructMid *unk24;
    u8 pad28[4];
    u32 unk2C;
    u8 pad30[0x2C];
    struct func_80246478_Child *unk5C;
};

void func_802445F8(struct func_802445F8_Struct *arg0, s32 arg1) {
    s32 v;
    struct func_80246478_Child *sp28;
    func_802455D8_Sub *a;
    struct func_80244B3C_StructSub *b;

    sp28 = arg0->unk5C;
    if (func_80242890() == 0) {
        arg0->unk2C |= 0x80;
        if (func_8012CE9C(arg1, sp28, D_802484DC, 10) == 0) {
            D_80010550(arg1, sp28);
            a = D_801BBCD0->unk2C;
            b = arg0->unk24->unk2C;
            v = (arg0->unk24->unk2C->unk12 - func_8001EF38(a->unk4 - b->unk4, a->unkC - b->unkC)) & 0x1FFF & 0xFFFF;
            if (v < 0x200 || (v > 0x1E00 && v < 0x1FFF)) {
                sp28->unk78 = 1;
                func_800058DC(arg0, func_80244714);
            }
            func_8012A94C(arg0, 0x80);
        }
    }
}
#undef LP
#undef LQ
#undef func_80243820
#undef func_802448C8
#undef func_80244988
#undef D_80010550
#undef func_80244714
#undef func_80244714_StructChild
#undef func_80244714_StructObj
#undef func_80244B3C_StructMid
#undef func_80244B3C_StructSub



struct func_80244714_StructChild {
    u8 pad[0x78];
    s16 unk78;
};

struct func_80244714_StructObj {
    u8 pad[0x2C];
    u32 unk2C;
    u8 pad30[0x2C];
    struct func_80244714_StructChild *unk5C;
};

void func_80244714(struct func_80244714_StructObj *arg0, s32 arg1)
{
  struct func_80244714_StructChild *temp_v1;
 do { temp_v1 = arg0->unk5C; } while (0);
  if (func_80242890() == 0)
  {
    arg0->unk2C |= 0x80;
    temp_v1->unk78 = 1;
    func_800058DC(arg0, func_8024476C);
  }
}


struct func_8024476C_Struct {
    u8 pad0[0x24];
    struct func_80246478_Mid *unk24;
    u8 pad1[0x4];
    u32 unk2C;
    u32 unk30;
    u8 pad2[0x28];
    struct func_80246478_Child *unk5C;
    u8 pad3[0x34];
    s16 unk94;
};
struct func_8024476C_Vec {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
};
extern struct func_802438E4_Table D_80248500;

void func_8024476C(struct func_8024476C_Struct *arg0, s32 arg1)
{
  struct func_80246478_Child *sp2C;
  u32 t;
  struct func_8024476C_Vec *v;
  sp2C = arg0->unk5C;
  if (func_80242890() != 0)
  {
    return;
  }
  if (func_8012CE9C(arg1, sp2C, D_80248500, 0xA) != (t * 0))
  {
    return;
  }
  func_80010550(arg1, sp2C);
  func_8012A94C(arg0, 0x30);
  t = arg0->unk30;
  if (t & 0x10)
  {
    sp2C->unk78 = 1;
    v = (struct func_8024476C_Vec *) arg0->unk24->unk2C;
    func_80127430(v->unk4, v->unk8, v->unkC, 0x337, D_8024AAEC, 1.0f);
    func_800058DC(arg0, func_80244988);
    return;
  }
  if (t & 0x80)
  {
    sp2C->unk78 = 1;
    func_800058DC(arg0, func_802448C8);
    return;
  }
  if (func_8012A564(arg0, 0x42580000) != 0)
  {
    arg0->unk2C |= 0x80;
    arg0->unk94 = func_8012C6B4(0x100) + 0x200;
 do { } while (0);
    func_800058DC(arg0, func_80243C48);
  }
}

#undef func_802448C8
#define LP(p, l) LQ(p, l)
#define LQ(p, l) p##_##l
#define func_80243820 LP(fA, __LINE__)
#define func_802448C8 D_802448C8
#undef func_80243820
#undef func_802448C8

extern struct func_802438E4_Table D_80248518;
extern s32 D_80010550(s32, void *);

void func_802448C8(struct func_80244F98_Obj *arg0, s32 arg1) {
    struct func_80244F98_Child *s0;

    s0 = arg0->unk5C;
    if (func_80242890(arg0) == 0) {
        f32 sp28[3];

        func_8013A334(sp28, arg1, s0, 0xC);
        if (func_8012CE9C(arg1, s0, D_80248518, 0xA) == 0) {
            if (D_80010550(arg1, s0) != 0) {
                s0->unk78 = 1;
                arg0->unk2C &= ~0x80;
                func_800058DC(arg0, func_80244988);
            }
        }
    }
}
#undef LP
#undef LQ
#define func_802448C8 func_802448C8__decl

#undef func_80244988
#define MYQ(p, l) p##_##l
#define MYP(p, l) MYQ(p, l)
#define func_80244988 D_80244988
#define func_80243820 MYP(fB, __LINE__)
#define func_802448C8 MYP(fC, __LINE__)
#undef func_80244988

extern struct func_802438E4_Table D_802484D0;
extern void func_80244A54();

void func_80244988(struct func_80244F98_Obj *arg0, s32 arg1) {
    struct func_80244F98_Child *s0 = arg0->unk5C;
    f32 sp28[3];

    arg0->unk2C |= 0x80;
    if (func_80242890() == 0) {
        func_8013A334(sp28, arg1, s0, 0xC);
        if (func_8012CE9C(arg1, s0, D_802484D0, 0xA) == 0 && D_80010550(arg1, s0) != 0) {
            s0->unk78 = 1;
            arg0->unk2C &= ~0x80;
            func_800058DC(arg0, func_80244A54);
        }
    }
}
#undef MYQ
#undef MYP
#undef func_80243820
#undef func_802448C8
#define func_80244988 func_80244988__decl

#define func_80244B3C func_80244B3C__func_80244A54
#define func_80244B3C_StructMid func_80244B3C_StructMid__func_80244A54
#define func_80244B3C_StructObj func_80244B3C_StructObj__func_80244A54
#define func_80244B3C_StructSub func_80244B3C_StructSub__func_80244A54
struct func_80244B3C_StructSub {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_80244B3C_StructMid {
    u8 pad0[0x2C];
    struct func_80244B3C_StructSub *unk2C;
};
struct func_80244B3C_StructObj {
    u8 pad0[0x24];
    struct func_80244B3C_StructMid *unk24;
    u8 pad28[8];
    u32 unk30;
    u8 pad34[0x28];
    struct func_80246478_Child *unk5C;
    u8 pad60[0x34];
    s16 unk94;
};
extern void func_80244B3C(struct func_80244B3C_StructObj *arg0, s32 arg1);
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define func_80243820 CAT(func_80243820_, __LINE__)
#define func_802448C8 CAT(func_802448C8_, __LINE__)
#define func_80244988 CAT(func_80244988_, __LINE__)
#undef func_80243820
#undef func_802448C8
#undef func_80244988

struct func_80244A54_Inner {
    u8 pad0[0x78];
    s16 unk78;
};
struct func_80244A54_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x5C - 0x30];
    struct func_80244A54_Inner *unk5C;
    u8 pad2[0x94 - 0x60];
    s16 unk94;
};
struct func_80244A54_Leaf {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
    s32 unkC;
};
struct func_80244A54_Mid {
    u8 pad0[0x2C];
    struct func_80244A54_Leaf *unk2C;
};

extern s32 func_8012A988(void *, s32, s32, s32, s32);

void func_80244A54(struct func_80244A54_Struct *arg0, s32 arg1) {
    struct func_80244A54_Inner *sp2C;
    struct func_80244A54_Leaf *temp_v1;

    sp2C = arg0->unk5C;
    arg0->unk2C = arg0->unk2C | 0x80;
    if (func_80242890() == 0 && func_8012CE9C(arg1, sp2C, D_802484DC, 0xA) == 0) {
        D_80010550(arg1, sp2C);
        temp_v1 = ((struct func_80244A54_Mid *) D_801BBCD0)->unk2C;
        if (func_8012A988(arg0, ((s32 *) temp_v1)[1], ((s32 *) temp_v1)[3], 0x30, 0x1000) == 0) {
            arg0->unk94 = func_8012C6B4(0x40) + 0x80;
            sp2C->unk78 = 1;
            func_800058DC(arg0, func_80244B3C);
        }
    }
}
#undef CAT2
#undef CAT
#undef func_80244B3C
#undef func_80244B3C_StructMid
#undef func_80244B3C_StructObj
#undef func_80244B3C_StructSub


struct func_80244B3C_StructSub {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_80244B3C_StructMid {
    u8 pad0[0x2C];
    struct func_80244B3C_StructSub *unk2C;
};
struct func_80244B3C_StructObj {
    u8 pad0[0x24];
    struct func_80244B3C_StructMid *unk24;
    u8 pad28[8];
    u32 unk30;
    u8 pad34[0x28];
    struct func_80246478_Child *unk5C;
    u8 pad60[0x34];
    s16 unk94;
};

void func_80244B3C(struct func_80244B3C_StructObj *arg0, s32 arg1) {
    s32 pad;
    struct func_80246478_Child *sp20;
    s32 angle;
    func_802455D8_Sub *pos0;
    struct func_80244B3C_StructSub *pos1;

    sp20 = arg0->unk5C;
    if (arg0->unk30 & 0x88) {
        arg0->unk94 = 0;
    }
    if (func_80242890(arg0) == 0) {
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
            func_800058DC(arg0, func_802438E4);
        }
        func_8012A94C(arg0, 0x40);
    }
}

#define func_80020744 func_80020744__func_80244C38
#define LQ(p, l) p##_##l
#define LP(p, l) LQ(p, l)
#define func_80243820 LP(rn3820_, __LINE__)
#define func_802448C8 LP(rn48C8_, __LINE__)
#define func_80244988 LP(rn4988_, __LINE__)
extern void func_80020744(s32);

struct func_80244C38_Sub {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_80244C38_Mid {
    u8 pad0[0x2C];
    struct func_80244C38_Sub *unk2C;
};
struct func_80244C38_Obj {
    u8 pad0[0x24];
    struct func_80244C38_Mid *unk24;
    u8 pad1[4];
    u32 unk2C;
    u8 pad2[0x2C];
    struct func_80246478_Child *unk5C;
};
extern f32 D_8024AAF0;
extern f32 D_8024AAF4;
extern f32 D_8024AAF8;
extern void func_80244CE0();

void func_80244C38(struct func_80244C38_Obj *arg0, s32 arg1) {
    struct func_80246478_Child *c = arg0->unk5C;
    arg0->unk24->unk2C->unk4 = D_8024AAF0;
    arg0->unk24->unk2C->unk8 = D_8024AAF4;
    arg0->unk24->unk2C->unkC = D_8024AAF8;
    arg0->unk24->unk2C->unk12 = 0;
    arg0->unk2C &= ~0x3C0;
    c->unk78 = 1;
    D_801BBF7C[0x10] = 0;
    func_80020744(0x13E);
    func_800058DC(arg0, func_80244CE0);
}
#undef LQ
#undef LP
#undef func_80243820
#undef func_802448C8
#undef func_80244988
#undef func_80020744

#define XQ(p, l) p##_##l
#define XP(p, l) XQ(p, l)
#define func_80243820 XP(xA, __LINE__)
#define func_802448C8 XP(xB, __LINE__)
#define func_80244988 XP(xC, __LINE__)
#undef func_80243820
#undef func_802448C8
#undef func_80244988
extern struct func_802438E4_Table D_80248524;
extern f64 D_8024AB00;
extern f64 D_8024AB08;
extern f64 D_8024AB10;
extern f64 D_8024AB18;

void func_80244CE0(struct func_80244B3C_StructObj *arg0, s32 arg1) {
    void *p;
    struct func_80244B3C_StructSub *s;
    func_802455D8_Sub *t;
    f64 y, x, z, a, b, c, bx, cz, w;
    s32 cond;

    p = arg0->unk5C;
    if (func_8012CE9C(arg1, p, D_80248524, 0xA) == 0) {
        D_80010550(arg1, p);
        cond = (arg0->unk94++ % 120) == 0;
        if (cond) {
            s = arg0->unk24->unk2C;
            func_80127430(s->unk4, s->unk8, *(s32 *)&s->unkC, 0x669, 1.5f, 1.0f);
        }
        t = D_801BBCD0->unk2C;
        y = t->unk8;
        if (y < 0.0) {
            a = -y;
        } else {
            a = y;
        }
        x = t->unk4;
        if (x < 56.0) {
            b = -(x - 56.0);
        } else {
            b = x - 56.0;
        }
        z = t->unkC;
        if (z < D_8024AB00) {
            cz = z - D_8024AB08;
            c = -cz;
        } else {
            cz = z - D_8024AB10;
            c = cz;
        }
        if (c * 1.0 + (b + a) < 20.0) {
            func_8037BB4C(arg0->unk24->unk2C->unk12 + 0x800, 0.0f, 0.95f, D_8024AB46);
            return;
        }
        w = y + 20.0;
        if (w < 0.0) {
            a = -w;
        } else {
            a = w;
        }
        if (x < 56.0) {
            b = -(x - 56.0);
        } else {
            b = x - 56.0;
        }
        if (z < D_8024AB18) {
            c = -cz;
        } else {
            c = cz;
        }
        if (c * 1.0 + (b + a) < 20.0) {
            func_8037BB4C(arg0->unk24->unk2C->unk12 + 0x800, 0.0f, 0.95f, D_8024AB46);
        }
    }
}
#undef XQ
#undef XP




void func_80244F98(struct func_80244F98_Obj *arg0, void *arg1) {
    struct func_80244F98_Child *child;

    child = arg0->unk5C;
    child->unk78 = 1;
    arg0->unk2C = arg0->unk2C & ~0x80;
    func_800058DC(arg0, &func_80244FDC);
}


struct func_80244FDC_Obj {
    u8 pad0[0x5C];
    s32 unk5C;
};
extern struct func_80246828_Triple D_802484B8;

void func_80244FDC(struct func_80244FDC_Obj *arg0, s32 arg1) {
    s32 temp_a1;
    extern void func_80010550();

    temp_a1 = arg0->unk5C;
    if (func_8012CE9C(arg1, temp_a1, D_802484B8, 0xA) == 0) {
        func_80010550(arg1, temp_a1);
    }
}

#define func_80245144 func_80245144__func_80245048
#define func_80245144_Obj func_80245144_Obj__func_80245048
struct func_80245144_Obj {
    u8 pad0[0x5C];
    void *unk5C;
    u8 pad1[0x3C];
    s16 unk9C;
    s16 unk9E;
    s16 unkA0;
};
extern void func_80245144(struct func_80245144_Obj *arg0, s32 arg1);

struct func_80245048_StructInfo {
    u8 pad[0x10];
    u32 unk10;
};
struct func_80245048_StructObj {
    u8 pad[0x38];
    struct func_80245048_StructInfo *unk38;
    u8 pad2[0x20];
    struct func_80246478_Child *unk5C;
    u8 pad3[0x42];
    u16 unkA2;
};

void func_80245048(struct func_80245048_StructObj *arg0, s32 arg1)
{
  struct func_80246478_Child *sp2C;
  u16 new_var;
 sp2C = arg0->unk5C; if (func_8012CE9C(arg1, sp2C, *((struct func_802438E4_Table *) (&D_802484C4)), 10) == 0) {
    func_80010550(arg1, sp2C);
    new_var = (*arg0).unkA2--;
    if (new_var == 0)
    {
 do { } while (0);
      arg0->unkA2++;
      if ((arg0->unk38->unk10 >> 24) != 3)
      {
        if (func_8012A564(arg0, 0x43340000) != 0)
        {
          return;
        }
      }
      else
        if (func_8012A564(arg0, 0x42C80000) != 0)
      {
        return;
      }
      if (0, func_801268F4(0) != 0)
      {
        sp2C += 0;
        sp2C->unk78 = 1;
        func_801FBB30();
        func_800058DC(arg0, func_80245144);
      }
    }
  }
}
#undef func_80245144
#undef func_80245144_Obj

struct func_80245244_Obj {
    u8 pad0[0x5C];
    struct func_80246478_Child *unk5C;
    u8 pad1[0x34];
    s16 unk94;
    u8 pad2[0xE];
    u16 unkA4;
};
void func_80245244(struct func_80245244_Obj *arg0, s32 arg1);


struct func_80245144_Obj {
    u8 pad0[0x5C];
    void *unk5C;
    u8 pad1[0x3C];
    s16 unk9C;
    s16 unk9E;
    s16 unkA0;
};

void func_80245144(struct func_80245144_Obj *arg0, s32 arg1) {
    u8 pad[8];
    f32 sp5C[3];
    void *temp;

    temp = arg0->unk5C;
    func_8013A334(sp5C, arg1, temp, 6);
    if (!(func_8011AAF4(&D_8024A6E4, 0x43B, arg0, 0, 2, 8.0f, (f32) arg0->unk9C, (f32) arg0->unk9E, (f32) arg0->unkA0, 4294967296.0f, sp5C[0], sp5C[1], sp5C[2], 0.0f, 35.0f, -1, -1) & 0xFF)) {
        D_801BBFAC[0x78] = 1;
        func_800058DC(arg0, (void *) func_80245244);
    }
}


struct func_80245244_Child {
    u8 pad0[0x78];
    s16 unk78;
};



void func_80245244(struct func_80245244_Obj *arg0, s32 arg1) {
    struct func_80245244_Child *child;

    child = (struct func_80245244_Child *) arg0->unk5C;
    if (D_801BBFAC[0x78] != 2) {
        child->unk78 = 1;
        arg0->unk94 = arg0->unkA4;
        func_800058DC(arg0, func_80245290);
    }
}

#define CQ(p, l) p##_##l
#define CP(p, l) CQ(p, l)
#define func_80243820 CP(fA, __LINE__)
#define func_802448C8 CP(fB, __LINE__)
#define func_80244988 CP(fC, __LINE__)
#undef func_80243820
#undef func_802448C8
#undef func_80244988

struct func_80245290_Info {
    u8 pad0[0x10];
    u32 unk10;
};
struct func_80245290_Struct {
    u8 pad0[0x38];
    struct func_80245290_Info *unk38;
    u8 pad1[0x20];
    struct func_80246478_Child *unk5C;
    u8 pad2[0x34];
    s16 unk94;
    u8 pad3[0x6];
    s16 unk9C;
    s16 unk9E;
    s16 unkA0;
};
extern u8 D_8024A71C[];
extern struct func_802438E4_Table D_802484E8;
extern void func_8024541C();

void func_80245290(struct func_80245290_Struct *arg0, s32 arg1) {
    struct func_80246478_Child *s1;
    f32 sp60[3];
    s16 v;
    extern void func_80020744();

    s1 = arg0->unk5C;
    func_8013A334(sp60, arg1, s1, 6);
    func_8011AAF4(D_8024A71C, 0x457, arg0, 0, 1, 4294967296.0f, (f32) arg0->unk9C, (f32) arg0->unk9E, (f32) arg0->unkA0, 3.0f, sp60[0], sp60[1], sp60[2], 0.0f, 35.0f, -1, -1);
    if (func_8012CE9C(arg1, s1, D_802484E8, 0xA) == 0) {
        D_80010550(arg1, s1);
        if (arg0->unk94-- == 0) {
            s1->unk78 = 1;
            if ((arg0->unk38->unk10 >> 0x18) & 1) {
                func_80020744(0x668);
            } else {
                func_80020744(0x66B);
            }
            func_800058DC(arg0, func_8024541C);
        }
    }
}
#undef CQ
#undef CP

#define CP2(a, b) a##b
#define CP(a, b) CP2(a, b)
#define func_80243820 CP(func_80243820_, __LINE__)
#define func_802448C8 CP(func_802448C8_, __LINE__)
#define func_80244988 CP(func_80244988_, __LINE__)
#undef func_80243820
#undef func_802448C8
#undef func_80244988
extern u8 D_8024A754[];
extern struct func_802438E4_Table D_802484AC;
void func_802455D8();
struct func_8024541C_Info {
    u8 pad0[0x10];
    u32 unk10;
};
struct func_8024541C_Obj {
    u8 pad0[0x38];
    struct func_8024541C_Info *unk38;
    u8 pad1[0x20];
    struct func_80246478_Child *unk5C;
    u8 pad2[0x3C];
    s16 unk9C;
    s16 unk9E;
    s16 unkA0;
};

void func_8024541C(struct func_8024541C_Obj *arg0, s32 arg1) {
    struct func_80246478_Child *s1;
    f32 sp[3];

    s1 = arg0->unk5C;
    func_8013A334(sp, arg1, s1, 6);
    func_8011AAF4(D_8024A754, 0x477, arg0, 0, 1, 4294967296.0f, (f32) arg0->unk9C, (f32) arg0->unk9E, (f32) arg0->unkA0, 3.0f, sp[0], sp[1], sp[2], 0.0f, 35.0f, -1, -1);
    if ((arg0->unk38->unk10 >> 0x18) & 1) {
        if (func_8012CE9C(arg1, s1, *(struct func_802438E4_Table *)&D_802484B8, 0xA) != 0) {
            return;
        }
    } else {
        if (func_8012CE9C(arg1, s1, D_802484AC, 0xA) != 0) {
            return;
        }
    }
    if (D_80010550(arg1, s1) != 0) {
        D_801BBFAC[0x78] = 4;
        func_800058DC(arg0, func_802455D8);
        s1->unk78 = 1;
    }
}
#undef CP2
#undef CP




typedef struct {
    u8 pad0[0x10];
    u32 unk10;
} func_802455D8_Info;

typedef struct {
    u8 pad0[0x24];
    func_802455D8_Mid *unk24;
    u8 pad1[0x10];
    func_802455D8_Info *unk38;
    u8 pad2[0x20];
    struct func_80246478_Child *unk5C;
    u8 pad3[0x3C];
    s16 unk9C;
    s16 unk9E;
    s16 unkA0;
} func_802455D8_Obj;

typedef struct {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 pad3;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    f32 unk24;
    f32 unk28;
} func_802455D8_Params;

typedef struct {
    u8 pad0[0x194];
    s16 unk194;
    u8 pad1[0x29E];
    u8 unk434;
} func_802455D8_State;

extern func_802455D8_Params D_80163FEC;
extern func_802455D8_Params D_80164404;
extern func_802455D8_Params D_80164698;
extern func_802455D8_State D_801BBBF0;

void func_802455D8(func_802455D8_Obj *arg0, s32 arg1) {
    struct func_80246478_Child *child;
    f32 vec[3];
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    u32 kind;

    child = arg0->unk5C;
    func_8013A334(vec, arg1, child, 6);
    if ((arg0->unk38->unk10 >> 0x18) != 2) {
        func_8011AAF4(D_8024A78C, 0x496, arg0, 0, 1, 4294967296.0f, arg0->unk9C, arg0->unk9E, arg0->unkA0, 3.0f, vec[0], vec[1], vec[2], 0.0f, 35.0f, -1, -1);
    }
    if (func_8012CE9C(arg1, child, D_802484DC, 0xA) == 0) {
        D_801BBBF0.unk194 = 2;
        D_801BBBF0.unk434 = 4;
        func_800058DC(arg0, func_80243820);
        child->unk78 = 1;
        kind = arg0->unk38->unk10 >> 0x18;
        if (kind == 3) goto L3;
        if (kind == 5) goto L5;
        if (kind != 7) goto Ldef;
        goto L7;
L3:
        if (func_8011AAF4(D_8024A7C4, 0x4AC, arg0, D_80163FEC.unk1, D_80163FEC.unk2, D_80163FEC.unk4, D_80163FEC.unk8, D_80163FEC.unkC, D_80163FEC.unk10, D_80163FEC.unk14, D_80163FEC.unk18, D_80163FEC.unk1C, D_80163FEC.unk20, D_80163FEC.unk24, D_80163FEC.unk28, -1, -1) != 0) {
            return;
        }
        return;
L5:
        if (func_8011AAF4(D_8024A7FC, 0x4BD, arg0, D_80164404.unk1, D_80164404.unk2, D_80164404.unk4, D_80164404.unk8, D_80164404.unkC, D_80164404.unk10, D_80164404.unk14, D_80164404.unk18, D_80164404.unk1C, D_80164404.unk20, D_80164404.unk24, D_80164404.unk28, -1, -1) != 0) {
            return;
        }
        return;
L7:
        if (func_8011AAF4(D_8024A834, 0x4CE, arg0, D_80164698.unk1, D_80164698.unk2, D_80164698.unk4, D_80164698.unk8, D_80164698.unkC, D_80164698.unk10, D_80164698.unk14, D_80164698.unk18, D_80164698.unk1C, D_80164698.unk20, D_80164698.unk24, D_80164698.unk28, -1, -1) != 0) {
            return;
        }
        return;
Ldef:
        {
            if (func_801084C4(D_801BBCD0->unk2C->unk4, D_801BBCD0->unk2C->unk8 + 15.0, D_801BBCD0->unk2C->unkC, arg0->unk24->unk2C->unk4, arg0->unk24->unk2C->unk8, arg0->unk24->unk2C->unkC) != 0) {
                func_801178E4(&sp74, &sp70, &sp6C, &sp68, &sp64, &sp60);
                if (func_8011AAF4(D_8024A86C, 0x4DD, arg0, 2, 1, 4294967296.0f, sp74, sp70, sp6C, 4.0f, sp68, sp64, sp60, 0.0f, 35.0f, -1, -1) != 0) {
                    return;
                }
            } else {
                func_8011AAF4(D_8024A8A4, 0x4E5, arg0, 2, 1, 4294967296.0f, arg0->unk24->unk2C->unk4, arg0->unk24->unk2C->unk8, arg0->unk24->unk2C->unkC, 4.0f, D_801BBCD0->unk2C->unk4, D_801BBCD0->unk2C->unk8 + 15.0, D_801BBCD0->unk2C->unkC, 0.0f, 35.0f, -1, -1);
            }
        }
    }
}

struct func_80245B2C_Sub {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
};
struct func_80245B2C_Mid {
    u8 pad0[0x2C];
    struct func_80245B2C_Sub *unk2C;
};
struct func_80245B2C_Child {
    u8 pad0[0x78];
    s16 unk78;
};
struct func_80245B2C_Obj {
    u8 pad0[0x24];
    struct func_80245B2C_Mid *unk24;
    u8 pad1[0x16];
    u8 unk3E;
    u8 pad2[0x1D];
    struct func_80245B2C_Child *unk5C;
    u8 pad3[0x42];
    u16 unkA2;
};
void func_80245B2C(struct func_80245B2C_Obj *arg0, s32 arg1);

void func_80245AFC(struct func_80245B2C_Obj *arg0, s32 arg1) {
    arg0->unkA2 = 0x20;
    func_800058DC(arg0, func_80245B2C);
}




void func_80245B2C(struct func_80245B2C_Obj *arg0, s32 arg1)
{
  struct func_80245B2C_Child *sp24;
  u16 temp_t7;
  s32 temp_v0;
  sp24 = arg0->unk5C;
  temp_v0 = arg0->unkA2;
  temp_t7 = temp_v0 - 1;
 if (0 != 0) { }
  arg0->unkA2 = temp_t7;
  if (temp_v0 == 0)
  {
    arg0->unkA2 = temp_t7;
    arg0->unkA2 = arg0->unkA2 + 1;
    func_80133980(0x4D);
    arg0->unk24->unk2C->unk4 = 204.0f;
    arg0->unk24->unk2C->unk8 = 50.0f;
    arg0->unk24->unk2C->unkC = D_8024AB20;
    arg0->unk24->unk2C->unk12 = 0xDA3;
    arg0->unk3E = 0xA;
    func_801268F4(0);
    sp24->unk78 = 1;
    func_801FBB30();
    func_800058DC(arg0, func_80245BF8);
  }
}

extern struct func_802438E4_Table D_802484A0;

void func_80245BF8(struct func_80245B2C_Obj *arg0, s32 arg1) {
    struct func_80245B2C_Child *c;
    struct { f32 x, y, z; } sp58;

    c = arg0->unk5C;
    if (func_8012CE9C(arg1, c, D_802484A0, 10) == 0) {
        func_8013A334(&sp58.x, arg1, c, 6);
        if ((func_8011AAF4(D_8024A8DC, 0x519, arg0, 0, 1, 4294967296.0f, 144.0f, D_8024AB24, D_8024AB28, 4.0f, sp58.x, sp58.y, sp58.z, 0.0f, 35.0f, -1, -1) == 0) && (*(s32 *)((u8 *)arg0 + 0x30) & 4)) {
            func_80127430(((f32 *)((struct func_80246478_Obj *)arg0)->unk24->unk2C)[1], ((f32 *)((struct func_80246478_Obj *)arg0)->unk24->unk2C)[2], ((s32 *)((struct func_80246478_Obj *)arg0)->unk24->unk2C)[3], 0x13D, D_8024AB2C, 1.0f);
            *(s16 *)((u8 *)c + 0x78) = 1;
            func_800058DC(arg0, func_80245D74);
        }
    }
}

#undef func_80245D74
#define ZQ(p, l) p##_##l
#define ZP(p, l) ZQ(p, l)
#define func_80243820 ZP(zA, __LINE__)
#define func_802448C8 ZP(zB, __LINE__)
#define func_80244988 ZP(zC, __LINE__)
#define func_80245D74 ZP(zD, __LINE__)
#undef func_80243820
#undef func_802448C8
#undef func_80244988
#undef func_80245D74

struct func_80245D74_StructChild {
    u8 pad[0x78];
    s16 unk78;
};
struct func_80245D74_StructObj {
    u8 pad[0x3E];
    u8 unk3E;
    u8 pad2[0x1D];
    struct func_80245D74_StructChild *unk5C;
};
extern s16 D_801BBD84;
extern u8 D_8024A914[];
extern f32 D_8024AB30;
extern f32 D_8024AB34;

void func_80245D74(struct func_80245D74_StructObj *arg0, s32 arg1) {
    struct func_80245D74_StructChild *sp5C;
    f32 sp50[3];

    sp5C = arg0->unk5C;
    func_8013A334(sp50, arg1, sp5C, 6);
    func_8011AAF4(D_8024A914, 0x52E, arg0, 0, 1,
        4294967296.0f, 144.0f, D_8024AB30, D_8024AB34, 4.0f,
        sp50[0], sp50[1], sp50[2], 0.0f, 35.0f, -1, -1);
    if (D_80010550(arg1, sp5C) != 0) {
        sp5C->unk78 = 1;
        arg0->unk3E = 0x19;
        func_800058DC(arg0, func_802455D8);
        D_801BBD84 = 2;
    }
}
#undef ZQ
#undef ZP
#define func_80245D74 func_80245D74__decl


struct func_80245E80_StructObj {
    u8 pad0[0x5C];
    void *unk5C;
    u8 pad1[0x34];
    u16 unk94;
    u8 pad2[0xC];
    u16 unkA2;
    u16 unkA4;
};

void func_80245E80(struct func_80245E80_StructObj *arg0, s32 arg1)
{
    void *child;
    u16 old;
    u16 next;

    child = arg0->unk5C;
    if (func_8012CE9C(arg1, child, *(struct func_802438E4_Table *)&D_802484C4, 10) == 0) {
        func_80010550(arg1, child);
        old = arg0->unkA2;
        arg0->unkA2 = old - 1;
        if (old == 0) {
            arg0->unkA2++;
            func_801268F4(0);
            arg0->unk94 = arg0->unkA4;
            func_801FBB30();
            func_800058DC(arg0, func_80245FE4);
        }
    }
}


struct func_80245F30_Obj {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad1[0x34];
    u16 unk94;
    u8 pad2[0xE];
    u16 unkA4;
};


void func_80245F30(struct func_80245F30_Obj *arg0, s32 arg1) {
    s32 temp_a1;
    extern void func_80010550();
    extern void func_80020744();

    temp_a1 = arg0->unk5C;
    if (func_8012CE9C(arg1, temp_a1, D_802484C4, 0xA) == 0) {
        func_80010550(arg1, temp_a1);
        if (func_80133A24(0x4B) != 0) {
            func_801339D0(0x4B);
            func_801268F4(0);
            func_80020744(0x6B0);
            arg0->unk94 = arg0->unkA4;
            func_801FBB30();
            func_800058DC(arg0, func_80245FE4);
        }
    }
}

#define ZQ(p, l) p##_##l
#define ZP(p, l) ZQ(p, l)
#define func_80243820 ZP(zB, __LINE__)
#define func_802448C8 ZP(zC, __LINE__)
#define func_80244988 ZP(zD, __LINE__)
#undef func_80243820
#undef func_802448C8
#undef func_80244988

typedef struct {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_80245FE4_Sub;

typedef struct {
    u8 pad0[0x2C];
    func_80245FE4_Sub *unk2C;
} func_80245FE4_Mid;

typedef struct {
    u8 pad0[0x78];
    s16 unk78;
} func_80245FE4_Child;

typedef struct {
    u8 pad0[0x24];
    func_80245FE4_Mid *unk24;
    u8 pad1[0x34];
    func_80245FE4_Child *unk5C;
    u8 pad2[0x3C];
    s16 unk9C;
    s16 unk9E;
    s16 unkA0;
} func_80245FE4_Obj;

extern u8 D_8024A94C[];
extern void func_802460F0();
extern s32 D_8013A334(f32 *, s32, void *, s32);

void func_80245FE4(func_80245FE4_Obj *arg0, s32 arg1) {
    func_80245FE4_Child *child;
    f32 vec[3];

    child = arg0->unk5C;
    D_8013A334(vec, arg1, child, 6);
    if (func_8011AAF4(D_8024A94C, 0x569, arg0, 0, 2, 4294967296.0f,
                       (f32) arg0->unk9C, (f32) arg0->unk9E, (f32) arg0->unkA0,
                       4.0f, arg0->unk24->unk2C->unk4, arg0->unk24->unk2C->unk8,
                       arg0->unk24->unk2C->unkC, 0.0f, 35.0f, -1, -1) == 0) {
        child->unk78 = 1;
        func_800058DC(arg0, func_802460F0);
    }
}
#undef ZQ
#undef ZP

#define LP(p, l) LQ(p, l)
#define LQ(p, l) p##_##l
#define func_80243820 LP(fA, __LINE__)
#define func_802448C8 D_802448C8
#define func_80244988 D_80244988

struct func_802460F0_Sub {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
};
struct func_802460F0_Mid {
    u8 pad0[0x2C];
    struct func_802460F0_Sub *unk2C;
};
struct func_802460F0_Obj {
    u8 pad0[0x24];
    struct func_802460F0_Mid *unk24;
    u8 pad1[0x34];
    struct func_80246478_Child *unk5C;
    u8 pad2[0x34];
    s16 unk94;
    u8 pad3[6];
    s16 unk9C;
    s16 unk9E;
    s16 unkA0;
};
extern u8 D_8024A984[];
extern f32 D_8024AB38;
#define func_80246280 func_80246280__decl1740
extern u8 func_80246280[];

void func_802460F0(struct func_802460F0_Obj *arg0, s32 arg1) {
    struct func_80246478_Child *c;
    f32 sp[3];
    struct func_802460F0_Sub *s;

    c = arg0->unk5C;
    func_8013A334(sp, arg1, c, 6);
    func_8011AAF4(D_8024A984, 0x579, arg0, 0, 1, 4294967296.0f, (f32)arg0->unk9C, (f32)arg0->unk9E, (f32)arg0->unkA0, 4.0f, sp[0], sp[1], sp[2], 0.0f, 35.0f, -1, -1);
    if (func_8012CE9C(arg1, c, D_802484E8, 0xA) == 0) {
        D_80010550(arg1, c);
        if (arg0->unk94-- == 0) {
            c->unk78 = 1;
            s = arg0->unk24->unk2C;
            func_80127430(s->unk4, s->unk8, s->unkC, 0x66B, D_8024AB38, 1.0f);
            func_800058DC(arg0, func_80246280);
        }
    }
}
#undef func_80246280
#undef LP
#undef LQ
#undef func_80243820
#undef func_802448C8
#undef func_80244988

#define CPQ(p, l) p##_##l
#define CP(p, l) CPQ(p, l)
#define func_80243820 CP(fA, __LINE__)
#define func_802448C8 CP(fA, __LINE__)
#define func_80244988 CP(fA, __LINE__)
#undef func_80243820
#undef func_802448C8
#undef func_80244988

extern u8 D_8024A9BC[];

void func_80246280(struct func_80246478_Obj *arg0, s32 arg1) {
    struct func_80246478_Child *s1;
    f32 sp58[3];

    s1 = arg0->unk5C;
    func_8013A334(sp58, arg1, s1, 6);
    func_8011AAF4(D_8024A9BC, 0x58C, arg0, 0, 1, 4294967296.0f, (f32) *(s16 *)((u8 *)arg0 + 0x9C), (f32) *(s16 *)((u8 *)arg0 + 0x9E), (f32) *(s16 *)((u8 *)arg0 + 0xA0), 4.0f, sp58[0], sp58[1], sp58[2], 0.0f, 35.0f, -1, -1);
    if (func_8012CE9C(arg1, s1, D_802484AC, 10) == 0) {
        if (D_80010550(arg1, s1) != 0) {
            func_800058DC(arg0, func_802455D8);
            s1->unk78 = 1;
        }
    }
}
#undef CPQ
#undef CP

void func_80246478(struct func_80246478_Obj *arg0, s32 arg1);
struct func_80246828_Obj {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad1[0x34];
    u16 unk94;
    u8 pad2[0xE];
    u16 unkA4;
};

void func_802463CC(struct func_80246828_Obj *arg0, s32 arg1) {
    s32 temp_a1;

    temp_a1 = arg0->unk5C;
    if (func_8012CE9C(arg1, temp_a1, *(struct func_802438E4_Table *)&D_802484C4, 1) == 0) {
        func_80010550(arg1, temp_a1);
        if (func_80133A24(0x4E) == 0) {
            func_8012A94C(arg0, 0x80);
            return;
        }
        arg0->unk94 = 0xA0;
        func_801FBB30();
        func_800058DC(arg0, &func_80246478);
    }
}







void func_80246478(struct func_80246478_Obj *arg0, s32 arg1) {
    struct func_80246478_Child *temp_a1;
    struct func_80246478_Sub *temp_v0;
    s16 temp_v1;

    temp_a1 = arg0->unk5C;
    func_80010550(arg1, temp_a1, arg0, arg1);
    temp_v0 = arg0->unk24->unk2C;
    temp_v0->unk8 = (f32) ((f64) temp_v0->unk8 - 0.5);
    temp_v1 = arg0->unk94;
    arg0->unk94 = (s16) (temp_v1 - 1);
    if (temp_v1 == 0) {
        temp_a1->unk78 = 1;
        func_80020744(0x668, temp_a1, arg0);
        func_800058DC(arg0, &func_80246510);
    }
}

#define LP(p, l) LQ(p, l)
#define LQ(p, l) p##_##l
#define func_80243820 LP(fA, __LINE__)
#define func_802448C8 D_802448C8
#define func_80244988 D_80244988

extern u8 D_8024A9F4[];
#define func_8024664C func_8024664C__decl1853
extern u8 func_8024664C[];
struct func_80246510_Struct3 {
    u8 pad[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
};
struct func_80246510_Struct2 {
    u8 pad[0x2C];
    void *unk2C;
};
extern struct func_80246510_Struct2 *D_801BBCD8;

void func_80246510(struct func_80246478_Obj *arg0, s32 arg1) {
    struct func_80246478_Child *s0;
    f32 sp58[3];

    s0 = arg0->unk5C;
    D_8013A334(sp58, arg1, s0, 6);
    func_8011AAF4(D_8024A9F4, 0x5C0, arg0, 0, 1, 4294967296.0f, ((struct func_80246510_Struct3 *)D_801BBCD8->unk2C)->unk30, -544.0f, ((struct func_80246510_Struct3 *)D_801BBCD8->unk2C)->unk38, 4.0f, sp58[0], sp58[1], sp58[2], 0.0f, 35.0f, -1, -1);
    if ((func_8012CE9C(arg1, s0, *(struct func_802438E4_Table *)&D_802484B8, 0xA) == 0) && (D_80010550(arg1, s0) != 0)) {
        s0->unk78 = 1;
        func_800058DC(arg0, func_8024664C);
    }
}
#undef func_8024664C
#undef LP
#undef LQ
#undef func_80243820
#undef func_802448C8
#undef func_80244988

#define D_801BBCD8 D_801BBCD8__func_8024664C
#define func_80243820 func_80243820__func_8024664C
#define CQ(p, l) p##_##l
#define CP(p, l) CQ(p, l)
#define func_80243820 CP(fA, __LINE__)
#define func_802448C8 CP(fA, __LINE__)
#define func_80244988 CP(fA, __LINE__)
#undef func_80243820
#undef func_802448C8
#undef func_80244988

extern u8 D_8024AA2C[];
extern u8 D_8024AA64[];
extern void func_80243820();
typedef struct { u8 pad0[0x30]; f32 unk30; u8 pad1[4]; f32 unk38; } func_8024664C_Sub;
typedef struct { u8 pad0[0x2C]; func_8024664C_Sub *unk2C; } func_8024664C_Mid;
extern func_8024664C_Mid *D_801BBCD8;
typedef struct { u8 pad0[0x24]; func_802455D8_Mid *unk24; u8 pad1[0x34]; void *unk5C; } func_8024664C_Obj;

void func_8024664C(func_8024664C_Obj *arg0, s32 arg1) {
    void *sp64;
    f32 sp58[3];

    sp64 = arg0->unk5C;
    D_8013A334(sp58, arg1, sp64, 6);
    func_8011AAF4(D_8024AA2C, 0x5D1, arg0, 0, 1, 4294967296.0f, D_801BBCD8->unk2C->unk30, -544.0f, D_801BBCD8->unk2C->unk38, 4.0f, sp58[0], sp58[1], sp58[2], 0.0f, 35.0f, -1, -1);
    if (func_8012CE9C(arg1, sp64, D_802484DC, 0xA) == 0) {
        func_8011AAF4(D_8024AA64, 0x5D6, arg0, 2, 1, 4294967296.0f, arg0->unk24->unk2C->unk4, arg0->unk24->unk2C->unk8, arg0->unk24->unk2C->unkC, 4.0f, D_801BBCD0->unk2C->unk4, D_801BBCD0->unk2C->unk8 + 15.0f, D_801BBCD0->unk2C->unkC, 0.0f, 35.0f, -1, -1);
        D_801BBD84 = 2;
        func_800058DC(arg0, func_80243820);
    }
}
#undef CQ
#undef CP
#undef D_801BBCD8
#undef func_80243820



void func_80246828(struct func_80246828_Obj *arg0, s32 arg1) {
    s32 temp_a1;
    extern void func_80010550();

    temp_a1 = arg0->unk5C;
    if (func_8012CE9C(arg1, temp_a1, D_802484C4, 0xA) == 0) {
        func_80010550(arg1, temp_a1);
        func_801268F4(0);
        arg0->unk94 = arg0->unkA4;
        func_801FBB30();
        func_800058DC(arg0, func_80245FE4);
    }
}


struct func_802468BC_Inner {
    u8 pad0[0x2C];
    s32 unk2C;
};

struct func_802468BC_Struct {
    u8 pad0[0x24];
    struct func_802468BC_Inner *unk24;
};


void func_802468BC(struct func_802468BC_Struct *volatile arg0, s32 *arg1) {
    s32 temp_a0;
    s32 temp_v0;

    temp_a0 = *arg1;
    temp_v0 = arg0->unk24->unk2C;
    func_8013E5C4(temp_a0, 0, temp_v0 + 4, temp_v0 + 8, temp_v0 + 0xC);
    func_800058DC(arg0, func_80127014);
}

