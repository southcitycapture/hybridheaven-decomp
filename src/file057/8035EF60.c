#include "common.h"

extern f32 D_8036153C(void *);
extern s32 D_801BBCCC;
extern s32 func_80010550(s32, s32);
extern s32 func_80224AC4();
extern s32 func_80224F5C(s32, s32);
extern s32 func_80367288(void *, s32, s32, void *);
extern s8 D_80360588(s32, s32);
extern u16 D_80385E64[];
extern u8 D_801BBBF0[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 D_80385E6C[];
extern void *func_8035FF0C(u8);
extern void *func_8035FFA8(void *arg0);
extern void D_8013AE20(void *, s32, s32);
extern void func_800058DC(s32 arg0, void (*arg1)(void));
extern void func_800112B0(s32, s32, s32, void *);
extern void func_80020718(s32 arg0);
extern void func_8013A334(void *, s32, s32, u16);
extern void func_80222708();
extern void func_8022310C(void *arg0, s32 arg1);
extern void func_8022C0A0(s32 arg0);
extern void func_80231CEC(s32 arg0);
extern void func_8035FEC0(s32 arg0);
#define func_8035FEC8 func_8035FEC8__decl
extern void func_8035FEC8(u8 arg0, void *arg1);
extern void func_803602D4(s32 arg0, s32 arg1);
#define func_8036048C func_8036048C__decl
extern void func_8036048C();
extern void func_80360818(s32 arg0, s32 arg1);
extern void func_80360D0C();
extern void func_8036153C();
extern void func_80362234();
extern void func_803622EC();
extern void func_803639F0();
extern void func_80363D5C();
extern void func_80363FFC(s32 arg0, s32 arg1);
extern void func_80364024();
extern void func_80364D2C();
extern void func_803673B4(void *, s32, s32);
extern void func_8036CA40();

#define D_8008DA88 D_8008DA88__func_8035EF60
#define func_800058DC func_800058DC__func_8035EF60
#define func_80006214 func_80006214__func_8035EF60
#define func_802237B0 func_802237B0__func_8035EF60
#define func_802264D0 func_802264D0__func_8035EF60
#define func_8035F224 func_8035F224__func_8035EF60
#define func_8035F6B4 func_8035F6B4__func_8035EF60
#define func_803711E8 func_803711E8__func_8035EF60

typedef struct func_8035EF60_StructB {
    u8 pad0[0x30];
    u32 pad30 : 9;
    u32 mode : 2;
    u32 pad30b : 5;
    u32 hi : 3;
    u32 pad30c : 13;
    u32 pad34;
    u32 f7 : 1;
    u32 f56 : 2;
    u32 f4 : 1;
    u32 pad38b : 28;
} func_8035EF60_StructB;

typedef struct func_8035EF60_Obj {
    u8 pad[0x5C];
    u8 *unk5C;
} func_8035EF60_Obj;

typedef struct func_8035EF60_Arg {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8035EF60_Arg;

typedef struct func_8035EF60_Globals {
    u8 pad0[0xDC];
    void *unkDC;
    u8 padE0[0xEC - 0xE0];
    void *unkEC;
} func_8035EF60_Globals;

extern void func_803711E8();
extern void func_802264D0();
extern void func_80006214();
extern void func_802237B0();
extern void func_800058DC();
extern void func_8035F224();
extern void func_8035F6B4();
extern u8 D_8008DA88[];
extern void B_8013A28C(s32, func_8035EF60_Arg);

typedef struct func_8035EF60_P {
    s32 unk0;
    s16 unk4;
    u16 unk6;
    f32 unk8;
    u8 padC[0x1C - 0xC];
    s32 unk1C;
} func_8035EF60_P;


void func_8035EF60(func_8035EF60_Obj *arg0, s32 arg1) {
    s32 o[1];
    func_8035EF60_StructB *b;
    func_8035EF60_StructB *a;
    func_8035EF60_Obj *dc;
    func_8035EF60_Obj *other;
    u8 *volatile o2;
    func_8035EF60_P *p;
#define g ((func_8035EF60_Globals *)D_801BBBF0)

    o[0] = (s32)arg0->unk5C;
    dc = (func_8035EF60_Obj *)g->unkDC;
    if (arg0 == dc) {
        b = (func_8035EF60_StructB *)D_801BC03C;
    } else {
        b = (func_8035EF60_StructB *)D_801BC3D8;
    }
    if (arg0 == dc) {
        a = (func_8035EF60_StructB *)D_801BC3D8;
    } else {
        a = (func_8035EF60_StructB *)D_801BC03C;
    }
    if (arg0 != dc) {
        other = dc;
    } else {
        other = (func_8035EF60_Obj *)g->unkEC;
    }
    o2 = other->unk5C;
    func_803711E8(arg0, arg1, 1);
    func_802264D0(arg0, 0x3AB);
    a->f7 = 0;
    b->f7 = a->f7;
    a->f56 = 2;
    b->f56 = a->f56;
    a->hi = 1;
    b->hi = a->hi;
    func_802237B0(arg0, 1);
    if (!b->f4) {
        p = (func_8035EF60_P *)o[0];
        p->unk1C = 0x190007E;
        p = (func_8035EF60_P *)((u8 *)p + 0x1C);
    } else {
        p = (func_8035EF60_P *)((u8 *)o[0] + 0x1C);
        p->unk0 = 0x19000C8;
    }
    p->unk4 = 0;
    p->unk8 = 1.0f;
    p->unk6 = 0;
    if (b->mode == 3) {
        p->unk6 ^= 0x10;
    }
    B_8013A28C(arg1, *(func_8035EF60_Arg *)p);
    func_800058DC(arg0, func_8035F6B4);
    p = (func_8035EF60_P *)(o2 + 0x1C);
    if (!b->f4) {
        p = (func_8035EF60_P *)o2;
        p->unk1C = 0x190007F;
        p = (func_8035EF60_P *)((u8 *)p + 0x1C);
    } else {
        p->unk0 = 0x19000C7;
    }
    p->unk4 = 0;
    p->unk8 = 1.0f;
    p->unk6 = 0;
    if (a->mode == 3) {
        p->unk6 ^= 0x10;
    }
    func_80006214(other);
    B_8013A28C((s32)D_8008DA88, *(func_8035EF60_Arg *)p);
    func_80006214(arg0);
    func_800058DC(other, func_8035F224);
}
#undef g
#undef D_8008DA88
#undef func_800058DC
#undef func_80006214
#undef func_802237B0
#undef func_802264D0
#undef func_8035F224
#undef func_8035F6B4
#undef func_803711E8

#define func_80011590 func_80011590__func_8035F224
#define func_802233B0 func_802233B0__func_8035F224
#define func_802237B0 func_802237B0__func_8035F224
#define func_802320DC func_802320DC__func_8035F224
#define func_8035F544 func_8035F544__func_8035F224
#define func_8035F6B4 func_8035F6B4__func_8035F224
#define func_8035F8D8 func_8035F8D8__func_8035F224
extern s32 func_802233B0();
extern void func_802237B0(void *arg0, s32 arg1);

extern s32 func_802320DC();
extern u16 func_80011590();
extern void func_8035F8D8();
extern void func_8035F544();
extern void func_8035F6B4();

typedef struct func_8035F224_Globals {
    u8 pad0[0xDC];
    void *unkDC;
    u8 pad1[0x1031 - 0xE0];
    u8 unk1031;
} func_8035F224_Globals;

typedef struct func_8035F224_Arg {
    u8 pad[0x5C];
    s32 unk5C;
} func_8035F224_Arg;

typedef struct func_8035F224_StructE {
    u8 pad0[2];
    s16 unk2;
    u8 pad1[0x2C];
    u32 b0 : 1;
    u32 bf2 : 2;
    u32 r30 : 29;
    u8 pad2[4];
    u32 hi : 1;
    u32 mode : 2;
    u32 flag : 1;
    u32 rest : 28;
} func_8035F224_StructE;

typedef struct func_8035F224_Sub {
    u8 pad0[4];
    u16 unk4;
} func_8035F224_Sub;

typedef struct func_8035F224_Obj {
    u8 pad0[0x24];
    f32 unk24;
} func_8035F224_Obj;

void func_8035F224(void *arg0, s32 arg1) {
    s32 objSave[1];
    func_8035F224_StructE *entry;
    void *other;
    func_8035F224_Sub *sub;
    u16 sp1E;
    s32 objPtr;

    objSave[0] = ((func_8035F224_Arg *)arg0)->unk5C;
    entry = (func_8035F224_StructE *)(((void *)arg0 == ((func_8035F224_Globals *)D_801BBBF0)->unkDC) ? D_801BC03C : D_801BC3D8);
    if ((void *)arg0 != ((func_8035F224_Globals *)D_801BBBF0)->unkDC) {
        other = D_801BC03C;
    } else {
        other = D_801BC3D8;
    }
    if (entry->unk2 <= 0 || entry->bf2 != 0) {
        func_802233B0(arg0, arg1, entry);
        return;
    }
    if (((func_8035F224_Globals *)D_801BBBF0)->unk1031 != 0xF) {
        func_802237B0(arg0, 1);
        entry->mode = 2;
        sp1E = func_80010550(arg1, objSave[0]);
        objPtr = objSave[0];
        if (!entry->flag) {
            if (func_80011590((u16)(u32)(((func_8035F224_Obj *)((objPtr += 0x1C) - 0x1C))->unk24 * 30.0f)) < ((func_8035F224_Sub *)objPtr)->unk4) {
                if (func_802320DC(other) == 0) {
                    func_8035F8D8(arg0, arg1);
                    return;
                }
                func_800058DC(arg0, func_8035F544);
                return;
            }
        }
        objPtr = objSave[0];
        if (entry->flag == 1) {
            if (func_80011590((u16)(u32)(((func_8035F224_Obj *)((objPtr += 0x1C) - 0x1C))->unk24 * 13.0f)) == ((func_8035F224_Sub *)objPtr)->unk4 && func_802320DC(other) == 0) {
                func_8035F8D8(arg0, arg1);
                return;
            }
            if (sp1E != 0) {
                func_800058DC(arg0, func_8035F6B4);
            }
        }
    }
}
#undef func_80011590
#undef func_802233B0
#undef func_802237B0
#undef func_802320DC
#undef func_8035F544
#undef func_8035F6B4
#undef func_8035F8D8

#define D_80385680 D_80385680__func_8035F544
#define func_80011140 func_80011140__func_8035F544
#define func_802233B0 func_802233B0__func_8035F544
#define func_802237B0 func_802237B0__func_8035F544
#define func_8022397C func_8022397C__func_8035F544
#define func_8035CDA8_Obj func_8035CDA8_Obj__func_8035F544
#define func_8035F544_Copy func_8035F544_Copy__func_8035F544
#define func_8035F6B4 func_8035F6B4__func_8035F544
extern void func_802237B0(void *arg0, s32 arg1);
typedef struct func_8035F544_Copy { s32 unk0; s32 unk4; s32 unk8; } func_8035F544_Copy;
typedef struct func_8035CDA8_Obj { u8 pad[0x5C]; s32 unk5C; } func_8035CDA8_Obj;
typedef struct func_8035CDA8_Words { s32 unk0; s32 unk4; s32 unk8; } func_8035CDA8_Words;
typedef struct func_8035CDA8_Sub { u8 pad[0x12]; u16 unk12; } func_8035CDA8_Sub;
typedef struct func_8035CDA8_Mid { u8 pad[0x2C]; func_8035CDA8_Sub *unk2C; } func_8035CDA8_Mid;

typedef struct func_8035F544_Obj {
    u8 pad[0x5C];
    s32 unk5C;
} func_8035F544_Obj;

typedef struct func_8035F544_Entry {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad1[0x2C];
    u32 unk30;
    u8 pad2[0x4];
    u8 unk38;
    u8 pad3[0x392 - 0x39];
    u8 unk392;
} func_8035F544_Entry;



extern s32 func_802233B0();
extern s32 func_8022397C();
extern s32 func_80011140(s32, s32, func_8035F544_Copy, s32);
extern void func_8035F6B4();
extern func_8035F544_Copy D_80385680;

void func_8035F544(func_8035F544_Obj *arg0, s32 arg1) {
    s32 sp3C;
    func_8035F544_Entry *var_v0;
    func_8035F544_Copy sp2C;

    sp3C = arg0->unk5C;
    if (arg0 == *(void **) (D_801BBBF0 + 0xDC)) {
        var_v0 = (func_8035F544_Entry *) D_801BC03C;
    } else {
        var_v0 = (func_8035F544_Entry *) D_801BC3D8;
    }
    sp2C = D_80385680;
    var_v0->unk392 = 0;
    if ((var_v0->unk2 <= 0) || (((u32) (var_v0->unk30 * 2) >> 0x1E) != 0)) {
        func_802233B0(arg0, arg1);
        return;
    }
    if (D_801BBBF0[0x1031] != 0xF) {
        func_802237B0(arg0, 1);
        var_v0->unk38 = (var_v0->unk38 & 0xFF9F) | 0x40;
        if ((((u16 *) &var_v0->unk30)[0] & 7) == 5) {
            var_v0->unk38 = (u8) (var_v0->unk38 & 0x9F);
            func_8022397C(arg0);
            return;
        }
        if (((u32) (var_v0->unk30 << 9) >> 0x1E) == 3) {
            ((u16 *) &sp2C.unk4)[1] ^= 0x10;
        }
        if (func_80011140(arg1, sp3C, sp2C, 6) != 0) {
            func_800058DC(arg0, func_8035F6B4);
        }
    }
}
#undef D_80385680
#undef func_80011140
#undef func_802233B0
#undef func_802237B0
#undef func_8022397C
#undef func_8035CDA8_Obj
#undef func_8035F544_Copy
#undef func_8035F6B4

#define D_8013A28C D_8013A28C__func_8035F6B4
#define func_802233B0 func_802233B0__func_8035F6B4
#define func_802237B0 func_802237B0__func_8035F6B4
#define func_8022397C func_8022397C__func_8035F6B4
extern s32 func_802233B0();
extern void func_802237B0();
extern s32 func_8022397C();

typedef struct func_8035F6B4_Flags {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x30 - 4];
    u32 a30 : 1;
    u32 b30 : 2;
    u32 c30 : 6;
    u32 d30 : 2;
    u32 e30 : 2;
    u32 f30 : 3;
    u8 g32 : 3;
    u8 h32 : 5;
    u8 pad33;
    u8 pad34[4];
    u32 x38 : 3;
    u32 t38 : 1;
    u32 u38 : 2;
    u32 rest38 : 26;
} func_8035F6B4_Flags;

typedef struct func_8035F6B4_Sub {
    s32 a;
    s16 b;
    s16 c;
    f32 d;
} func_8035F6B4_Sub;

typedef struct func_8035F6B4_Arg {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8035F6B4_Arg;

extern void D_8013A28C(s32, func_8035F6B4_Arg);

#define B38 (*((u8 *)p + 0x38))

void func_8035F6B4(void *arg0, void **arg1)
{
    s32 sp1C_[1];
#define sp1C sp1C_[0]
    func_8035F6B4_Flags *p;
    func_8035F6B4_Sub *q;
    s16 t;

    sp1C = *(s32 *)((u8 *)arg0 + 0x5C);
    if (arg0 == *(void **)(D_801BBBF0 + 0xDC)) {
        p = (func_8035F6B4_Flags *)D_801BC03C;
    } else {
        p = (func_8035F6B4_Flags *)D_801BC3D8;
    }
    ((u8 *)p)[0x392] = 0;
    if (p->unk2 <= 0 || p->b30 != 0) {
        func_802233B0(arg0, arg1);
        return;
    }
    if (D_801BBBF0[0x1031] != 0xF) {
        func_802237B0(arg0, 1);
        B38 = (B38 & 0xFF9F) | 0x40;
        if (p->f30 == 5) {
            B38 = B38 & 0x9F;
            p->g32 = 0;
            func_8022397C(arg0);
            return;
        }
        if (func_80010550((s32)arg1, (s32)sp1C) != 0) {
            if (*(f32 *)(*(u8 **)((u8 *)*arg1 + 0x2C) + 0x50) == 0.0f) {
                if (p->t38 == 1 && p->u38 == 2) {
                    q = (func_8035F6B4_Sub *)(sp1C + 0x1C);
                    q->a = 0x019000CB;
                    q->b = 0;
                    q->c = 0;
                    q->d = 1.0f;
                    if (p->d30 == 3) {
                        *(u16 *)&q->c ^= 0x10;
                    }
                    D_8013A28C((s32)arg1, *(func_8035F6B4_Arg *)q);
                    func_80010550((s32)arg1, (s32)sp1C);
                    *(s16 *)(*(u8 **)((u8 *)*arg1 + 0x2C) + 0x12) += 0x1000;
                    *(s16 *)(*(u8 **)((u8 *)*arg1 + 0x2C) + 0x12) &= 0x1FFF;
                }
            }
            B38 = B38 & 0xFF9F;
            B38 = B38 & 0x7F;
            B38 = B38 & 0xEF;
            p->g32 = 0;
            func_800058DC(arg0, func_80222708);
        }
    }
}
#undef sp1C
#undef B38
#undef D_8013A28C
#undef func_802233B0
#undef func_802237B0
#undef func_8022397C

#define D_8008DA88 D_8008DA88__func_8035F8D8
#define func_80006214 func_80006214__func_8035F8D8
#define func_8035D660 func_8035D660__func_8035F8D8
#define func_8035DF74 func_8035DF74__func_8035F8D8
extern u8 D_8008DA88[];
extern void func_80006214();
typedef struct func_8035F8D8_Struct { u8 pad[0x5C]; s32 unk5C; } func_8035F8D8_Struct;
extern void func_8035D660();
extern void func_8035DF74();
void func_8035F8D8(func_8035F8D8_Struct *arg0, s32 arg1) {
    s32 pad;
    s32 sp28;
    s32 sp24;
    func_8035F8D8_Struct *s0;
    extern void func_800112B0();

    if (arg0 != *(func_8035F8D8_Struct **)(D_801BBBF0 + 0xDC)) {
        s0 = *(func_8035F8D8_Struct **)(D_801BBBF0 + 0xDC);
    } else {
        s0 = *(func_8035F8D8_Struct **)(D_801BBBF0 + 0xEC);
    }
    sp28 = arg0->unk5C;
    sp24 = s0->unk5C;
    func_802254F8(s0, 0x14, 2);
    func_800112B0(arg1, sp28 + 0x22);
    func_80006214(s0);
    func_800112B0(D_8008DA88, sp24 + 0x22);
    func_80006214(arg0);
    func_800058DC(arg0, func_8035D660);
    func_800058DC(s0, func_8035DF74);
}
#undef D_8008DA88
#undef func_80006214
#undef func_8035D660
#undef func_8035DF74

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8035EF60/func_8035F994.s")

#define D_80385650 D_80385650__func_8035FCF8
#define func_800058DC func_800058DC__func_8035FCF8
#define func_8013A28C func_8013A28C__func_8035FCF8
#define func_802233B0 func_802233B0__func_8035FCF8
#define func_802237B0 func_802237B0__func_8035FCF8
#define func_8035CDA8_Obj func_8035CDA8_Obj__func_8035FCF8
#define func_8035CDA8_Words func_8035CDA8_Words__func_8035FCF8
#define func_8035DF80 func_8035DF80__func_8035FCF8
#define func_80360EF8_Struct func_80360EF8_Struct__func_8035FCF8
typedef struct func_80360EF8_Struct { int unk0; int unk4; int unk8; } func_80360EF8_Struct;
void func_800058DC(void *arg0, void *arg1);
extern void func_8013A28C(s32, func_80360EF8_Struct);
extern s32 func_802233B0();
extern void func_802237B0(void *arg0, s32 arg1);
typedef struct func_8035CDA8_Obj { u8 pad[0x5C]; s32 unk5C; } func_8035CDA8_Obj;
typedef struct func_8035CDA8_Words { s32 unk0; s32 unk4; s32 unk8; } func_8035CDA8_Words;

typedef struct func_8035FCF8_StructV {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x2C];
    u32 f30a : 1;
    u32 f30b : 2;
    u32 f30c : 6;
    u32 f30d : 2;
    u32 f30e1 : 5;
    u32 f32 : 3;
    u32 f30e2 : 13;
    u8 pad34[2];
    u8 unk36;
    u8 unk37;
    u32 f38a : 1;
    u32 f38b : 2;
    u32 f38c : 1;
    u32 f38d : 2;
    u32 f38e : 26;
    u8 pad3C[0x328 - 0x3C];
    u8 unk328;
} func_8035FCF8_StructV;

typedef struct func_8035FCF8_Copy {
    s32 unk0;
    u16 unk4;
    u16 unk6;
    f32 unk8;
} func_8035FCF8_Copy;

typedef struct func_8035FCF8_Sub {
    u8 pad0[0x1C];
    func_8035FCF8_Copy unk1C;
} func_8035FCF8_Sub;

typedef struct func_8035FCF8_Glob {
    u8 pad0[0xDC];
    func_8035CDA8_Obj *unkDC;
    u8 padE0[0x1031 - 0xE0];
    u8 unk1031;
} func_8035FCF8_Glob;

typedef struct func_8035FCF8_S12 {
    u8 pad0[0x12];
    s16 unk12;
} func_8035FCF8_S12;

typedef struct func_8035FCF8_Mid {
    u8 pad0[0x2C];
    func_8035FCF8_S12 *unk2C;
} func_8035FCF8_Mid;

extern u8 D_80385650[];
extern u8 func_8035DF80[];

void func_8035FCF8(func_8035CDA8_Obj *arg0, s32 *arg1) {
    func_8035FCF8_Sub *sp1C;
    func_8035FCF8_StructV *v;
    func_8035FCF8_Copy *t0;

    sp1C = (func_8035FCF8_Sub *)arg0->unk5C;
    if (arg0 == ((func_8035FCF8_Glob *)D_801BBBF0)->unkDC) {
        v = (func_8035FCF8_StructV *)D_801BC03C;
    } else {
        v = (func_8035FCF8_StructV *)D_801BC3D8;
    }
    if (v->unk2 <= 0 || v->f30b != 0) {
        func_802233B0(arg0, arg1);
        return;
    }
    if (((func_8035FCF8_Glob *)D_801BBBF0)->unk1031 != 0xF) {
        v->f38b = 1;
        func_802237B0(arg0, 1);
        if (func_80010550((s32)arg1, (s32)sp1C) != 0) {
            v->unk328 = 0;
            v->f32 = 0;
            v->f38c = 1;
            *(func_8035CDA8_Words *)&sp1C->unk1C = *(func_8035CDA8_Words *)D_80385650;
            t0 = &sp1C->unk1C;
            if (v->f38d == 1) {
                t0->unk0 = 0x19000C9;
                (*(func_8035FCF8_Mid **)arg1)->unk2C->unk12 += 0x1000;
                (*(func_8035FCF8_Mid **)arg1)->unk2C->unk12 &= 0x1FFF;
            } else {
                t0->unk0 = 0x19000CA;
            }
            t0->unk8 = 1.0f;
            if (v->f30d == 3) {
                t0->unk6 ^= 0x10;
            }
            func_8013A28C((s32)arg1, *(func_80360EF8_Struct *)t0);
            func_80010550((s32)arg1, (s32)sp1C);
            func_800058DC(arg0, func_8035DF80);
        }
    }
}
#undef D_80385650
#undef func_800058DC
#undef func_8013A28C
#undef func_802233B0
#undef func_802237B0
#undef func_8035CDA8_Obj
#undef func_8035CDA8_Words
#undef func_8035DF80
#undef func_80360EF8_Struct


void func_8035FEC0(s32 arg0) {

}

#undef func_8035FEC8
#define LP(p, l) LQ(p, l)
#define LQ(p, l) p##_##l
#define func_8035AFEC LP(fA, __LINE__)
#define func_8035FEC8 func_8035FEC8_decl
#define LQ(p, l) p##_##l
#define LP(p, l) LQ(p, l)
#define func_8035AFEC LP(fA, __LINE__)
#undef func_8035FEC8
#undef func_8035AFEC

u8 *func_8035FEC8(u8 arg0, u8 *arg1) {
    while (*arg1 != 0x57) {
        if (arg0 == *arg1) {
            return arg1;
        }
        arg1 += 0x20;
    }
    return NULL;
}
#undef LP
#undef LQ
#define func_8035FEC8 func_8035FEC8__decl



void *func_8035FF0C(u8 arg0) {
    func_8035FEC8(arg0, D_80385E6C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8035EF60/func_8035FF38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8035EF60/func_8035FFA8.s")



typedef struct func_80360020_Struct0 {
    u8 pad[0x36];
    u16 unk36;
} func_80360020_Struct0;

typedef struct func_80360020_Struct1 {
    u8 pad[0x2D9];
    u8 unk2D9;
} func_80360020_Struct1;

void func_80360020(func_80360020_Struct0 *arg0, func_80360020_Struct1 *arg1) {
    s32 var_a0;
    u16 temp_v0;
    u8 temp_v0_2;

    temp_v0 = arg0->unk36;
    if (temp_v0 == 0xF6 || temp_v0 == 0xF4 || temp_v0 == 0xF5) {
        var_a0 = 0x229;
    } else {
        temp_v0_2 = arg1->unk2D9;
        if ((s32) temp_v0_2 < 0xE || temp_v0_2 == 0x54 || temp_v0_2 == 0x55) {
            var_a0 = 0x3BA;
        } else {
            var_a0 = 0x3B6;
        }
    }
    func_80020718(var_a0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8035EF60/D_8038A280.s")
#pragma GLOBAL_ASM("asm/nonmatchings/file057/8035EF60/func_80360090.s")


typedef struct func_803602D4_StructCount {
    u8 pad[0xC];
    u16 count;
} func_803602D4_StructCount;

typedef struct func_803602D4_StructArg {
    u8 pad[0x5C];
    func_803602D4_StructCount *data;
} func_803602D4_StructArg;

typedef struct func_803602D4_StructFlags {
    u8 pad[0x6C];
    u16 flags;
} func_803602D4_StructFlags;

typedef struct func_803602D4_StructEntry {
    u8 pad[0x2C];
    func_803602D4_StructFlags *data;
} func_803602D4_StructEntry;

void func_803602D4(s32 arg0, s32 arg1) {
    s32 i;
    s32 count;
    func_803602D4_StructCount *header;
    func_803602D4_StructFlags *data;

    header = ((func_803602D4_StructArg *)arg0)->data;
    count = header->count;
    for (i = 0; i < count; i++) {
        ((func_803602D4_StructEntry **)arg1)[i]->data->flags &= ~0x200;
    }
}


typedef struct func_80360394_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_80360394_Struct;

typedef struct func_80360394_Quad {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} func_80360394_Quad;

extern func_80360394_Quad D_803863EC;

void func_80360394(void *arg0, func_80360394_Struct *arg1, s32 arg2, u8 arg3) {
    s32 val;
    func_80360394_Quad local;

    val = arg1->unk5C;
    local = D_803863EC;
    func_8013A334(arg0, arg2, val, ((u16 *) &local)[arg3]);
}


typedef struct func_80360400_Struct {
    u8 pad[0x30];
    s32 unk30;
} func_80360400_Struct;


void func_80360400(struct func_80360588_Struct *arg0, s32 arg1, s32 arg2) {
    func_80360400_Struct *sp1C;
    u8 var_a3;

    if (arg1 == D_801BBCCC) {
        sp1C = (func_80360400_Struct *) D_801BC03C;
    } else {
        sp1C = (func_80360400_Struct *) D_801BC3D8;
    }
    var_a3 = ((u8 *) func_8035FFA8(sp1C))[1];
    if ((((u32) sp1C->unk30 << 9) >> 0x1E) == 3 && (s32) var_a3 < 4) {
        var_a3 = (var_a3 ^ 1) & 0xFF;
    }
    func_80360394((void *) arg0, (func_80360394_Struct *) arg1, arg2, var_a3);
}

#undef func_8036048C
#define func_8001EF38 func_8001EF38__func_8036048C
#define LP(p, l) LQ(p, l)
#define LQ(p, l) p##_##l
#define func_8035AFEC LP(fA, __LINE__)
#define LQ(p, l) p##_##l
#define LP(p, l) LQ(p, l)

typedef struct func_8036048C_Leaf {
    u8 pad0[0x12];
    s16 unk12;
} func_8036048C_Leaf;
typedef struct func_8036048C_Mid {
    u8 pad0[0x2C];
    func_8036048C_Leaf *unk2C;
} func_8036048C_Mid;
typedef struct func_8036048C_Obj {
    u8 pad0[0x24];
    func_8036048C_Mid *unk24;
} func_8036048C_Obj;
typedef struct func_8036048C_Globals {
    u8 pad0[0xDC];
    func_8036048C_Obj *unkDC;
    u8 pad1[0xEC - 0xE0];
    func_8036048C_Obj *unkEC;
    u8 pad2[0x1038 - 0xF0];
    f32 unk1038;
    f32 unk103C;
    f32 unk1040;
} func_8036048C_Globals;
typedef struct func_8036048C_Table {
    u8 pad0[0x314];
    f32 unk314;
    f32 unk318;
    f32 unk31C;
} func_8036048C_Table;
extern s32 func_8001EF38(f32, f32);

#define G8C ((func_8036048C_Globals *) D_801BBBF0)

s32 func_8036048C(func_8036048C_Obj *arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    func_8036048C_Table *tbl;
    func_8036048C_Obj *obj;
    s32 pad;
    s16 ang;
    s32 ret;

    if (arg0 != G8C->unkDC) {
        obj = G8C->unkDC;
    } else {
        obj = G8C->unkEC;
    }
    if (arg0 == G8C->unkDC) {
        tbl = (func_8036048C_Table *) D_801BC03C;
    } else {
        tbl = (func_8036048C_Table *) D_801BC3D8;
    }
    ang = obj->unk24->unk2C->unk12;
    G8C->unk1038 = arg2 - tbl->unk314;
    G8C->unk103C = arg3 - tbl->unk318;
    G8C->unk1040 = arg4 - tbl->unk31C;
    if (G8C->unk1038 * G8C->unk1038 + G8C->unk1040 * G8C->unk1040 != 0.0f) {
        ret = ((s16) (ang - func_8001EF38(G8C->unk1038, G8C->unk1040) + 0x400) & 0x1FFF) / 2048 & 0xFF;
    } else {
        ret = 2;
    }
    return ret;
}
#undef LP
#undef LQ
#undef func_8035AFEC
#undef G8C
#undef func_8001EF38
#define func_8036048C func_8036048C__decl

#define func_80360400 func_80360400__func_80360588

typedef struct func_80360588_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80360588_Struct;

extern void func_80360400(func_80360588_Struct *arg0, s32 arg1, s32 arg2);

void func_80360588(s32 arg0, s32 arg1) {
    func_80360588_Struct sp24;

    func_80360400(&sp24, arg0, arg1);
    func_8036048C(arg0, arg1, sp24);
}
#undef func_80360400

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8035EF60/func_803605E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8035EF60/func_80360818.s")

#define func_80360BDC func_80360BDC__func_80360AA8
extern void func_80360BDC(void *arg0, void *arg1);
typedef struct { int unk0; int unk4; int unk8; } func_8035F544_Copy;
typedef struct { int unk0; } func_8035CDA8_Obj;

typedef struct func_80360AA8_Struct {
    u8 pad[0x30];
    u32 pad0 : 9;
    u32 f : 2;
    u32 pad1 : 21;
    u8 pad3[0x2F9 - 0x34];
    u8 unk2F9;
    u8 pad2[0x392 - 0x2FA];
    u8 unk392;
} func_80360AA8_Struct;

void func_80360AA8(void *arg0, s32 arg1) {
    s32 sp44;
    func_80360AA8_Struct *v;
    s32 pad[2];
    func_8035F544_Copy sp2C;

    sp44 = *(s32 *) ((u8 *) arg0 + 0x5C);
    v = (func_80360AA8_Struct *) ((s32) arg0 == D_801BBCCC ? D_801BC03C : D_801BC3D8);
    if (*(u16 *) ((u8 *) arg0 + 0x36) != 0x11D) {
        func_80224AC4(arg0, 0);
    }
    if (v->f == 0) {
        v->f = v->unk2F9 + 2;
    }
    func_802256E4((void *) &sp2C, (s32) arg0, 0);
    if (func_80011140(arg1, sp44, sp2C, v->f != 0 ? 3 : 0xA) & 0xFF) {
        func_800058DC(arg0, (void *) func_80360BDC);
    }
    v->unk392 = 0;
}
#undef func_80360BDC

typedef struct func_8036104C_Node {
    u8 pad0[6];
    s16 unk6;
    struct func_8036104C_Node *unk8;
} func_8036104C_Node;
typedef struct func_8036104C_Sub {
    u8 pad0[0x7C];
    func_8036104C_Node *unk7C;
    s16 unk80;
    u16 unk82;
} func_8036104C_Sub;
typedef struct func_8036104C_Arg {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad1[0x5C - 0x38];
    func_8036104C_Sub *unk5C;
} func_8036104C_Arg;
void func_8036104C(func_8036104C_Arg *arg0, s32 arg1);


void func_80360BDC(void *arg0, void *arg1) {
    u8 *var_a3;
    u8 *var_a2;
    s32 var_v1;

    if (arg0 == *(void **)(D_801BBBF0 + 0xDC)) {
        var_a3 = D_801BC03C;
    } else {
        var_a3 = D_801BC3D8;
    }
    if (arg0 != *(void **)(D_801BBBF0 + 0xDC)) {
        var_a2 = D_801BC03C;
    } else {
        var_a2 = D_801BC3D8;
    }
    var_a3[0x392] = 0;
    if (*(u16 *)((u8 *)arg0 + 0x36) == 0x11D) {
        var_v1 = 0;
    } else {
        var_v1 = func_80224F5C((s32)arg0, (s32)arg1) & 0xFFFF;
    }
    if (!(var_a2[0x30] & 1) && (var_v1 == 0)) {
        if (arg0 == *(void **)(D_801BBBF0 + 0xDC)) {
            D_801BBBF0[0x1030] = 0;
        } else {
            D_801BBBF0[0x1030] = 1;
        }
        var_a3[0x2DD] = 0;
        if (var_a2[0x393] != 0) {
            var_a2[0x393] = 0;
            func_8022C0A0((s32)arg0);
        }
        if (var_a3[0x391] != 0) {
            func_800058DC(arg0, func_80360D0C);
        } else {
            func_800058DC(arg0, func_8036104C);
        }
    }
    var_a3[0x392] = 0;
}

#define func_800058DC func_800058DC__func_80360D0C
#define func_80011140 func_80011140__func_80360D0C
#define func_8013A28C func_8013A28C__func_80360D0C
#define func_802237B0 func_802237B0__func_80360D0C
#define func_80224BEC func_80224BEC__func_80360D0C
#define func_8022560C func_8022560C__func_80360D0C
#define func_802256E4 func_802256E4__func_80360D0C
#define func_8035AFEC func_8035AFEC__func_80360D0C
#define func_8035F544_Copy func_8035F544_Copy__func_80360D0C
#define func_80360020_Struct0 func_80360020_Struct0__func_80360D0C
#define func_80360394_Struct func_80360394_Struct__func_80360D0C
#define func_80360AA8_Struct func_80360AA8_Struct__func_80360D0C
#define func_80360EF8 func_80360EF8__func_80360D0C
#define func_80360EF8_Struct func_80360EF8_Struct__func_80360D0C
#define func_80360F9C func_80360F9C__func_80360D0C
#define ZQ(a, b) a##_##b
#define ZP(a, b) ZQ(a, b)
#define zA_513 func_8035AFEC_ctx513
#define zA_566 func_8035AFEC
typedef union func_80359F54_Flags {
    s32 word;
    struct {
        u8 bit7 : 1;
        u8 rest0 : 6;
        u8 bit0 : 1;
        u8 bit15 : 1;
        u8 rest1 : 4;
        u8 low3 : 3;
        u8 pad[2];
    } b;
} func_80359F54_Flags;
void func_800058DC(void *arg0, void *arg1);
typedef struct func_8035F544_Copy {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8035F544_Copy;
extern s32 func_80011140(s32, s32, func_8035F544_Copy, s32);
typedef struct func_80360EF8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80360EF8_Struct;
extern void func_8013A28C(s32, func_80360EF8_Struct);
extern void func_802237B0(void *arg0, s32 arg1);
extern void func_802256E4(func_80360EF8_Struct *, s32, s32);
extern void func_8035AFEC();
typedef struct func_80360020_Struct0 {
    u8 pad[0x36];
    u16 unk36;
} func_80360020_Struct0;
typedef struct func_80360394_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_80360394_Struct;
typedef struct func_80360AA8_Struct {
    u8 pad[0x30];
    u32 pad0 : 9;
    u32 f : 2;
    u32 pad1 : 21;
    u8 pad3[0x2F9 - 0x34];
    u8 unk2F9;
    u8 pad2[0x392 - 0x2FA];
    u8 unk392;
} func_80360AA8_Struct;
void func_80360EF8(s32 arg0, s32 arg1);
extern void func_80360F9C();
extern s32 func_8022560C(s32);
extern void func_80224BEC(void *, s32);

void func_80360D0C(func_80360020_Struct0 *arg0, s32 arg1) {
    s32 sp44;
    s32 var_v0;
    u16 var_v1;
    u8 sp3D;
    func_80360AA8_Struct *var_s0;
    func_80360EF8_Struct sp2C;

    sp44 = ((func_80360394_Struct *)arg0)->unk5C;
    if ((s32)arg0 == D_801BBCCC) {
        var_s0 = (func_80360AA8_Struct *)D_801BC03C;
    } else {
        var_s0 = (func_80360AA8_Struct *)D_801BC3D8;
    }
    func_802237B0(arg0, 1);
    if (arg0->unk36 == 0x11D) {
        sp3D = 0;
    } else {
        sp3D = func_80224AC4(arg0, 0);
    }
    if (func_8022560C(sp44) == 0) {
        var_v1 = 1;
    } else {
        if (var_s0->f == 0) {
            var_s0->f = var_s0->unk2F9 + 2;
        }
        func_802256E4(&sp2C, (s32)arg0, 0);
        var_v1 = func_80011140(arg1, sp44, *(func_8035F544_Copy *)&sp2C, (var_s0->f != 0) ? 3 : 10);
    }
    if (var_v1 != 0) {
        if (var_s0->f == 0) {
            var_s0->f = var_s0->unk2F9 + 2;
        }
        if (sp3D != 0) {
            func_80224BEC(arg0, arg1);
            func_800058DC(arg0, func_80360EF8);
        } else {
            func_802256E4(&sp2C, (s32)arg0, 0x1D);
            func_8013A28C(arg1, sp2C);
            func_800058DC(arg0, func_80360F9C);
        }
    }
    var_s0->unk392 = 0;
}
#undef ZQ
#undef ZP
#undef zA_513
#undef zA_566
#undef func_800058DC
#undef func_80011140
#undef func_8013A28C
#undef func_802237B0
#undef func_80224BEC
#undef func_8022560C
#undef func_802256E4
#undef func_8035AFEC
#undef func_8035F544_Copy
#undef func_80360020_Struct0
#undef func_80360394_Struct
#undef func_80360AA8_Struct
#undef func_80360EF8
#undef func_80360EF8_Struct
#undef func_80360F9C

#define func_802256E4 func_802256E4__func_80360EF8
#define func_80360F9C func_80360F9C__func_80360EF8
typedef struct func_80360EF8_Struct { int unk0; int unk4; int unk8; } func_80360EF8_Struct;
typedef struct func_80360F9C_StructArg {
    u8 pad[0x5C];
    s32 unk5C;
} func_80360F9C_StructArg;
extern void func_80360F9C(func_80360F9C_StructArg *arg0, s32 arg1);

extern void func_802256E4(func_80360EF8_Struct *, s32, s32);

void func_80360EF8(s32 arg0, s32 arg1) {
    u8 *sp24;
    func_80360EF8_Struct sp18;

    if (arg0 == D_801BBCCC) {
        sp24 = D_801BC03C;
    } else {
        sp24 = D_801BC3D8;
    }
    if (func_80224F5C(arg0, arg1) == 0) {
        func_802256E4(&sp18, arg0, 0x1D);
        func_8013A28C(arg1, sp18);
        func_800058DC(arg0, (void (*)(void))func_80360F9C);
    }
    sp24[0x392] = 0;
}
#undef func_802256E4
#undef func_80360F9C

#define func_802256E4 func_802256E4__func_80360F9C
#define func_8035CDA8_Obj func_8035CDA8_Obj__func_80360F9C
#define func_8035F544_Copy func_8035F544_Copy__func_80360F9C
#define func_80360F9C_StructArg func_80360F9C_StructArg__func_80360F9C
extern void func_802256E4(func_80360EF8_Struct *, s32, s32);
typedef struct func_8035F544_Copy { s32 a; s32 b; s32 c; } func_8035F544_Copy;
typedef struct func_8035CDA8_Obj { u8 pad[0x5C]; s32 unk5C; } func_8035CDA8_Obj;

typedef struct func_80360F9C_StructArg {
    u8 pad[0x5C];
    s32 unk5C;
} func_80360F9C_StructArg;

void func_80360F9C(func_80360F9C_StructArg *arg0, s32 arg1) {
    s32 pad0;
    u8 *state;
    s32 temp_a2;
    func_80360EF8_Struct position;

    temp_a2 = arg0->unk5C;
    if ((s32)arg0 == D_801BBCCC) {
        state = D_801BC03C;
    } else {
        state = D_801BC3D8;
    }
    if (func_80010550(arg1, temp_a2) != 0) {
        func_802256E4(&position, (s32)arg0, 0);
        func_8013A28C(arg1, position);
        func_800058DC(arg0, func_8036104C);
    }
    state[0x392] = 0;
}
#undef func_802256E4
#undef func_8035CDA8_Obj
#undef func_8035F544_Copy
#undef func_80360F9C_StructArg

#define D_803863FC D_803863FC__func_8036104C
#define func_80360090 func_80360090__func_8036104C
#define func_803605E4 func_803605E4__func_8036104C
#define func_80361BCC func_80361BCC__func_8036104C
#define func_80363340 func_80363340__func_8036104C


typedef struct func_8036104C_Tbl {
    func_8036104C_Node *e[5][3];
} func_8036104C_Tbl;



typedef struct func_8036104C_Info {
    u8 pad0;
    u8 unk1;
    u8 pad2[6];
    u16 unk8;
    u8 padA[6];
    func_8036104C_Node *unk10;
} func_8036104C_Info;

typedef struct func_8036104C_Data {
    u8 pad0[0x12];
    u16 unk12;
} func_8036104C_Data;

typedef struct func_8036104C_State {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    u8 pad20[0x10];
    u32 pad30 : 9;
    u32 f : 2;
    u32 pad31 : 21;
    u8 pad34[0x2D4 - 0x34];
    func_8036104C_Data *unk2D4;
    u8 unk2D8;
    u8 unk2D9;
    u8 pad2DA[2];
    u8 unk2DC;
    u8 pad2DD;
    u8 unk2DE;
    u8 pad2DF[0x2EC - 0x2DF];
    f32 unk2EC;
    u8 pad2F0[0x2F9 - 0x2F0];
    u8 unk2F9;
    u8 pad2FA[0x314 - 0x2FA];
    func_80360588_Struct unk314;
    u8 pad320[0x392 - 0x320];
    u8 unk392;
} func_8036104C_State;

extern func_8036104C_Tbl D_803863FC;
extern s32 func_80360090(void *, u8);
extern void func_803605E4(s32, void *, u8);
extern void func_80361BCC();
extern void func_80363340();

void func_8036104C(func_8036104C_Arg *arg0, s32 arg1) {
    func_8036104C_Sub *sub;
    func_8036104C_State *s;
    func_8036104C_Info *info;
    u16 ok;
    s32 ret;
    func_8036104C_Tbl tbl;
    func_8036104C_Node *old;
    u16 n;
    u8 res;
    func_8035F544_Copy pos;
    extern void func_8013AE20();

    sub = arg0->unk5C;
    if (arg0 == (func_8036104C_Arg *)D_801BBCCC) {
        s = (func_8036104C_State *)D_801BC03C;
    } else {
        s = (func_8036104C_State *)D_801BC3D8;
    }
    if (s->f == 0) {
        func_802256E4((func_80360EF8_Struct *)&pos, (s32)arg0, 0);
        ret = func_80011140(arg1, (s32)sub, pos, 0xA);
        ok = ret;
        if (ret != 0) {
            if (s->f == 0) {
                s->f = s->unk2F9 + 2;
            }
        } else if (arg0->unk36 == 0x11D) {
        } else {
            func_80224AC4(arg0, 0);
        }
    } else {
        ok = 1;
    }
    if (ok != 0) {
        if (arg0->unk36 == 0x11D) {
            res = 0;
        } else {
            res = func_80224F5C((s32)arg0, arg1);
        }
        if (res == 0) {
            if (s->f == 0) {
                s->f = s->unk2F9 + 2;
            }
            info = func_8035FFA8(s);
            func_803605E4(arg1, s, info->unk1);
            sub->unk7C = info->unk10;
            sub->unk80 = info->unk8 != 0 ? 3 : 2;
            sub->unk82 = info->unk8;
            func_80360400(&s->unk314, (s32)arg0, arg1);
            func_8013AE20(arg0, arg1, 0);
            s->unk2DE = 0;
            s->unk2EC = (f32)s->unk2D4->unk12 / 100.0;
            if (s->unk2D9 != 0x24) {
                tbl = D_803863FC;
                ret = func_80360090(arg0, s->unk2D9);
                if (ret == 3) {
                    s->unk2DC = 0;
                    n = 5;
                } else if ((u8)ret == 2) {
                    s->unk2DC = 1;
                    n = 3;
                    if (((u8 *)func_8035FF0C(s->unk2D9))[1] == 0) {
                        n = 4;
                    }
                } else {
                    s->unk2DC = 2;
                    n = 5;
                }
                old = sub->unk7C;
                sub->unk7C = tbl.e[info->unk1 % 5][s->unk2DC];
                sub->unk7C->unk8 = old;
                sub->unk7C->unk6 = 0;
                sub->unk80 = 3;
                if (info->unk1 == 1 || info->unk1 == 0) {
                    sub->unk82 = n * s->unk18;
                } else {
                    sub->unk82 = n * s->unk1C;
                }
            }
            if (s->unk2D8 == 0xA || s->unk2D8 == 9) {
                func_800058DC(arg0, func_80363340);
            } else {
                func_800058DC(arg0, func_80361BCC);
            }
        }
    }
    s->unk392 = 0;
}
#undef D_803863FC
#undef func_80360090
#undef func_803605E4
#undef func_80361BCC
#undef func_80363340

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8035EF60/func_8036153C.s")



void func_803618B0(s32 arg0) {
    u8 *var_v0;

    if (arg0 == D_801BBCCC) {
        var_v0 = D_801BC03C;
    } else {
        var_v0 = D_801BC3D8;
    }
    if (var_v0[0x2D8] == 8) {
        func_8036CA40();
        return;
    }
    func_8036153C();
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8035EF60/func_80361910.s")

#define func_803602D4 func_803602D4__func_80361B50

typedef struct func_80361B50_Struct {
    u8 pad0[0x2DE];
    u8 unk2DE;
    u8 pad1[0x2EC - 0x2DF];
    f32 unk2EC;
} func_80361B50_Struct;

extern void func_803602D4(s32 arg0, s32 arg1);

void func_80361B50(s32 arg0, s32 arg1, func_80361B50_Struct *arg2) {
    arg2->unk2DE = 0;
    arg2->unk2EC = 1.0f;
    func_803602D4(arg0, arg1);
}
#undef func_803602D4


typedef struct func_80361B7C_StructA {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 pad1[2];
    u8 unk2DB;
} func_80361B7C_StructA;

typedef struct func_80361B7C_StructB {
    u8 pad0[0x7C];
    s32 unk7C;
    s16 unk80;
    u8 pad1[2];
    u8 unk84;
} func_80361B7C_StructB;

typedef struct func_80361B7C_StructC {
    u8 pad0[0x14];
    s32 unk14;
    u8 pad1[4];
    s32 unk1C;
} func_80361B7C_StructC;

void func_80361B7C(func_80361B7C_StructA *arg0, func_80361B7C_StructB *arg1, func_80361B7C_StructC *arg2) {
    arg1->unk80 = 2;
    if (arg0->unk2D8 == 0xD && arg0->unk2DB != 0) {
        arg1->unk7C = arg2->unk1C;
        arg1->unk84 = 4;
        return;
    }
    arg1->unk7C = arg2->unk14;
    arg1->unk84 = 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8035EF60/func_80361BCC.s")



void func_803621A8(u8 *arg0, s32 arg1) {
    s32 temp_a2;
    s32 sp24;
    u8 *sp1C;

    temp_a2 = *(s32 *)(arg0 + 0x5C);
    if ((s32)arg0 == D_801BBCCC) {
        sp1C = D_801BC03C;
    } else {
        sp1C = D_801BC3D8;
    }
    sp24 = temp_a2;
    func_800112B0(arg1, temp_a2 + 0x22, temp_a2, arg0);
    if (func_80010550(arg1, sp24) != 0) {
        func_800058DC(arg0, func_80362234);
    }
    sp1C[0x392] = 0;
}

#define func_800058DC func_800058DC__func_80362234
#define func_80011140 func_80011140__func_80362234
#define func_80225664 func_80225664__func_80362234
#define func_8035CDA8_Obj func_8035CDA8_Obj__func_80362234
#define func_8035F544_Copy func_8035F544_Copy__func_80362234
#define func_8036265C func_8036265C__func_80362234
#define func_8036265C_Arg func_8036265C_Arg__func_80362234
#define func_8036265C_Inner func_8036265C_Inner__func_80362234
typedef struct func_8035F544_Copy { int a; int b; int c; } func_8035F544_Copy;
typedef struct func_8035CDA8_Obj { char pad[0x5C]; } func_8035CDA8_Obj;
typedef struct func_8036265C_Inner { char pad[0x7C]; char *unk7C; } func_8036265C_Inner;
typedef struct func_8036265C_Arg { char pad[0x5C]; func_8036265C_Inner *unk5C; } func_8036265C_Arg;
void func_800058DC(void *arg0, void *arg1);
extern s32 func_80011140(s32, s32, func_8035F544_Copy, s32);
void func_8036265C(func_8036265C_Arg *arg0, s32 arg1);
typedef struct func_80362234_StructArg {
    u8 pad[0x5C];
    s32 unk5C;
} func_80362234_StructArg;

extern void func_80225664(func_8035F544_Copy *, void *, s32);

void func_80362234(func_80362234_StructArg *arg0, s32 arg1) {
    s32 sp34;
    u8 *sp30;
    func_8035F544_Copy sp24;

    sp34 = arg0->unk5C;
    if ((s32)arg0 == D_801BBCCC) {
        sp30 = D_801BC03C;
    } else {
        sp30 = D_801BC3D8;
    }
    func_80225664(&sp24, arg0, 0x01900157);
    if (func_80011140(arg1, sp34, sp24, 10) != 0) {
        func_800058DC(arg0, func_8036265C);
    }
    sp30[0x392] = 0;
}
#undef func_800058DC
#undef func_80011140
#undef func_80225664
#undef func_8035CDA8_Obj
#undef func_8035F544_Copy
#undef func_8036265C
#undef func_8036265C_Arg
#undef func_8036265C_Inner

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8035EF60/func_803622EC.s")

#define func_80222450 func_80222450__func_8036265C
#define func_802237B0 func_802237B0__func_8036265C
typedef struct func_8036265C_Inner { char pad[0x7C]; char *unk7C; } func_8036265C_Inner;
typedef struct func_8036265C_Arg { char pad[0x5C]; func_8036265C_Inner *unk5C; } func_8036265C_Arg;

extern void func_802237B0(void *arg0, s32 arg1);
extern void func_80222450(void *arg0, s32 arg1, u16 arg2, void *arg3);

typedef struct func_8036265C_Struct {
    u8 pad[0x38];
    u8 unk38_7 : 1;
    u8 unk38_56 : 2;
    u8 unk38_rest : 5;
} func_8036265C_Struct;



void func_8036265C(func_8036265C_Arg *arg0, s32 arg1)
{
  func_8036265C_Inner *temp_a3;
  func_8036265C_Struct *var_v0;
  s32 temp_v1;
  temp_v1 = D_801BBCCC;
  temp_a3 = arg0->unk5C;
  if (var_v0)
  {
  }
  if (((s32) arg0) == temp_v1)
  {
    var_v0 = (func_8036265C_Struct *) D_801BC03C;
  }
  else
  {
    var_v0 = (func_8036265C_Struct *) D_801BC3D8;
  }
  func_802237B0(arg0, 0);
  var_v0->unk38_7 = 0;
  var_v0->unk38_56 = 0;
  func_80222450(arg0, arg1, ((u16 *) temp_a3->unk7C)[3], temp_a3);
}
#undef func_80222450
#undef func_802237B0

#define func_8035FF0C func_8035FF0C__func_803626E0

void *func_8035FF0C(u8);

u8 func_803626E0(s32 arg0) {
    u8 *var_v1;
    s32 temp_v0;
    u8 var_v1_2;

    if (arg0 != D_801BBCCC) {
        var_v1 = D_801BC03C;
    } else {
        var_v1 = D_801BC3D8;
    }
    temp_v0 = var_v1[0x2D8];
    if (temp_v0 == 0 || temp_v0 == 1 || temp_v0 == 0xA || temp_v0 == 9) {
        var_v1_2 = ((u8 *)func_8035FF0C(var_v1[0x2D9]))[3];
    } else {
        var_v1_2 = 4;
    }
    return var_v1_2;
}
#undef func_8035FF0C


typedef struct func_80362758_Struct {
    u8 pad[0x2BC];
    s16 unk2BC;
    s16 unk2BE;
    s16 unk2C0;
    s16 unk2C2;
} func_80362758_Struct;

u8 func_80362758(func_80362758_Struct *arg0, u8 arg1) {
    s32 temp;
    u8 result;

    temp = arg1 & 0xF0;
    result = 1;
    if (temp == 0) goto case0;
    if (temp == 0x10) goto case10;
    if (temp == 0x20) goto case20;
    if (temp != 0x30) goto end;
    goto case30;
case0:
    return (u8) (arg0->unk2BC < 0 ? 1 : 0);
case10:
    return (u8) (arg0->unk2BE < 0 ? 1 : 0);
case20:
    return (u8) (arg0->unk2C0 < 0 ? 1 : 0);
case30:
    return (u8) (arg0->unk2C2 < 0 ? 1 : 0);
end:
    return result;
}



u16 func_80362820(func_80362758_Struct *arg0, u8 arg1) {
    u8 mask;
    u8 i;

    mask = arg1 & 0xF0;
    if (func_80362758(arg0, mask) != 0) {
        i = 0;
        if (func_80362758(arg0, i) != 0) {
            do {
                i += 0x10;
                if (func_80362758(arg0, i) == 0) {
                    break;
                }
            } while (i < 0x30);
        }
    }
    return D_80385E64[mask >> 4];
}

#define D_801842A0 D_801842A0__func_803628B8
#define D_80385E50 D_80385E50__func_803628B8
#define func_80011590 func_80011590__func_803628B8
#define func_802237B0 func_802237B0__func_803628B8
#define func_80362758_Struct func_80362758_Struct__func_803628B8
#define func_80362A54 func_80362A54__func_803628B8
extern u16 func_80011590();
extern void func_802237B0(void *arg0, s32 arg1);
typedef struct func_80362758_Struct {
    u8 pad[0x2BC];
    s16 unk2BC;
    s16 unk2BE;
    s16 unk2C0;
    s16 unk2C2;
} func_80362758_Struct;

typedef struct func_803628B8_Node {
    s32 unk0;
    u16 unk4;
    u8 pad6[6];
    u16 unkC;
} func_803628B8_Node;
typedef struct func_803628B8_Out {
    s32 unk0;
    u16 unk4;
    u16 unk6;
    f32 unk8;
} func_803628B8_Out;
typedef struct func_803628B8_Sub {
    u8 pad0[0x1C];
    func_803628B8_Out unk1C;
    u8 pad28[0x7C - 0x28];
    func_803628B8_Node *unk7C;
} func_803628B8_Sub;
typedef struct func_803628B8_Arg {
    u8 pad0[0x5C];
    func_803628B8_Sub *unk5C;
} func_803628B8_Arg;
typedef struct func_803628B8_State {
    u8 pad0[0x10];
    f32 unk10;
    u8 pad14[0x1C];
    u32 pad30 : 9;
    u32 f : 2;
    u32 pad31 : 21;
    u8 pad34[0x2D4 - 0x34];
    void *unk2D4;
    u8 pad2D8;
    u8 unk2D9;
    u8 pad2DA[2];
    u8 unk2DC;
    u8 pad2DD;
    u8 unk2DE;
    u8 pad2DF[0x2E8 - 0x2DF];
    u8 unk2E8;
    u8 pad2E9[3];
    f32 unk2EC;
} func_803628B8_State;

extern func_803628B8_Node *D_80385E50[];
extern u8 D_801842A0[];
extern void func_80362A54();

void func_803628B8(func_803628B8_Arg *arg0, s32 arg1) {
    func_803628B8_State *s;
    s32 pad0;
    func_803628B8_Sub *sub[1];
    u8 pad[8];
    func_803628B8_Node *n;
    s32 pad1;
    func_803628B8_Out *o;
    u8 r;
    s32 a;
    u8 b;
    u8 id;
    u16 t;
    s32 g;

    g = D_801BBCCC;
    if ((s32)arg0 == g) {
        s = (func_803628B8_State *)D_801BC03C;
    } else {
        s = (func_803628B8_State *)D_801BC3D8;
    }
    sub[0] = arg0->unk5C;
    s->unk2E8 = 0;
    s->unk2DE = 0;
    s->unk2DC = 0;
    s->unk2EC = 1.0f;
    func_803602D4((s32)arg0, arg1);
    r = func_803626E0((s32)arg0);
    a = r & 0xF;
    b = a;
    if (((a & 0xFF) < 4) && (s->f == 3)) {
        b = (a & 0xFF) ^ 1;
    }
    sub[0]->unk7C = D_80385E50[b];
    id = func_80362820((func_80362758_Struct *)s, r);
    s->unk2D9 = id;
    s->unk2D4 = &D_801842A0[id * 0x1C];
    n = sub[0]->unk7C;
    o = &sub[0]->unk1C;
    o->unk0 = n->unk0;
    o->unk4 = func_80011590(n->unkC);
    o->unk6 = n->unk4;
    o->unk8 = s->unk10;
    if (s->f == 3) {
        o->unk6 |= 0x10;
    }
    func_8013A28C(arg1, *(func_80360EF8_Struct *)o);
    func_802237B0(arg0, 1);
    func_800058DC(arg0, func_80362A54);
}
#undef D_801842A0
#undef D_80385E50
#undef func_80011590
#undef func_802237B0
#undef func_80362758_Struct
#undef func_80362A54

#define func_80011380 func_80011380__func_80362A54
#define func_80011590 func_80011590__func_80362A54
#define func_8013A28C func_8013A28C__func_80362A54
#define func_80224E00 func_80224E00__func_80362A54
#define func_80225664 func_80225664__func_80362A54
#define func_802256E4 func_802256E4__func_80362A54
#define func_80362DF4 func_80362DF4__func_80362A54
#define HZP2(a,b) a##b
#define HZP(a,b) HZP2(a,b)
#define func_8035AFEC HZP(func_8035AFEC_L,__LINE__)
extern u16 func_80011590();
extern void func_8013A28C(s32, func_80360EF8_Struct);
extern void func_80225664(func_8035F544_Copy *, void *, s32);
extern void func_802256E4(func_80360EF8_Struct *, s32, s32);
#define LQ(p, l) p##_##l
#define LP(p, l) LQ(p, l)
#define func_8035AFEC LP(fA, __LINE__)
extern void func_80362DF4(s32 arg0, s32 arg1);
#undef func_8035AFEC

typedef struct func_80362A54_Actor {
    u8 pad[0x36];
    u16 f36;
    u8 pad2[0x24];
    void *f5C;
} func_80362A54_Actor;

typedef struct func_80362A54_Entry {
    s32 f0;
    u16 f4;
    u8 pad[2];
    f32 f8;
} func_80362A54_Entry;

typedef struct func_80362A54_Obj {
    u8 pad[0x1C];
    func_80362A54_Entry e;
} func_80362A54_Obj;

typedef struct func_80362A54_Sub {
    u8 pad[0x12];
    s16 f12;
} func_80362A54_Sub;

typedef struct func_80362A54_Holder {
    u8 pad[0x2C];
    func_80362A54_Sub *f2C;
} func_80362A54_Holder;
extern void func_80224E00(void *arg0, s16 arg1);
extern void func_80011380(void *arg0, void *arg1);

void func_80362A54(func_80362A54_Actor *arg0, void **arg1) {
    u8 *sp3C;
    u8 *sp38;
    func_80362A54_Obj *sp34;
    s32 temp_v0;
    func_80360EF8_Struct sp24;
    s16 sp22;
    u8 pad21;
    u8 sp20;
    func_80362A54_Entry *var_v1;

    if ((s32) arg0 == D_801BBCCC) {
        sp3C = D_801BC03C;
    } else {
        sp3C = D_801BC3D8;
    }
    if ((s32) arg0 != D_801BBCCC) {
        sp38 = D_801BC03C;
    } else {
        sp38 = D_801BC3D8;
    }
    sp34 = arg0->f5C;
    sp22 = 0;
    if (arg0->f36 != 0x11D) {
        func_80224AC4(arg0, 0);
    }
    sp20 = func_803626E0((s32) arg0) & 0xF;
    if (func_80010550((s32) arg1, (s32) sp34) != 0) {
        if (sp38[0x394] != 0) {
            if (sp20 == 0) {
                sp22 = 0x800;
            } else if (sp20 == 1) {
                sp22 = 0x1800;
            }
            if (sp34->e.f0 == 0x0190007A) {
                func_80225664((func_8035F544_Copy *) &sp24, arg0, 0x0190007C);
            } else if (sp34->e.f0 == 0x0190007B) {
                func_80225664((func_8035F544_Copy *) &sp24, arg0, 0x0190007D);
            } else {
                func_802256E4(&sp24, (s32) arg0, 0);
            }
            ((func_80362A54_Holder *) *arg1)->f2C->f12 = (s16) (((func_80362A54_Holder *) *arg1)->f2C->f12 + sp22);
            ((func_80362A54_Holder *) *arg1)->f2C->f12 = (s16) (((func_80362A54_Holder *) *arg1)->f2C->f12 & 0x1FFF);
            func_80224E00(arg0, sp22);
            func_8013A28C((s32) arg1, sp24);
            func_80010550((s32) arg1, (s32) sp34);
            func_800058DC(arg0, (void *) func_80362DF4);
        }
    } else {
        var_v1 = (func_80362A54_Entry *) sp34;
        sp34 = NULL;
        temp_v0 = ((func_80362A54_Obj *) var_v1)->e.f0;
        var_v1 = &((func_80362A54_Obj *) var_v1)->e;
        if ((temp_v0 == 0x01900013) || (temp_v0 == 0x01900014)) {
            if (var_v1->f4 == func_80011590((u32) (var_v1->f8 * 7.0f) & 0xFFFF)) {
                goto block_26;
            }
            temp_v0 = var_v1->f0;
        }
        if (temp_v0 == 0x01900015) {
            if (var_v1->f4 == func_80011590((u32) (var_v1->f8 * 10.0f) & 0xFFFF)) {
block_26:
                func_80011380(arg1, (u8 *) var_v1 + 6);
            }
        }
        if (sp38[0x394] != 0) {
            func_800113D0(arg1, (u8 *) var_v1 + 6);
        }
        sp3C[0x392] = 0;
    }
}
#undef HZP2
#undef HZP
#undef LQ
#undef LP
#undef func_80011380
#undef func_80011590
#undef func_8013A28C
#undef func_80224E00
#undef func_80225664
#undef func_802256E4
#undef func_80362DF4


/* context.h declares D_801BC03C / D_801BC3D8 as u8 arrays, so access
   their fields through offsets instead of a struct type. */

void func_80362DF4(s32 arg0, s32 arg1) {
    u8 *var_v1;
    u8 *var_v0;

    if (arg0 == *(s32 *) &D_801BBBF0[0xDC]) {
        var_v1 = D_801BC03C;
    } else {
        var_v1 = D_801BC3D8;
    }
    if (arg0 != *(s32 *) &D_801BBBF0[0xDC]) {
        var_v0 = D_801BC03C;
    } else {
        var_v0 = D_801BC3D8;
    }
    var_v1[0x392] = 0;
    if (var_v0[0x394] != 0) {
        if (arg0 == *(s32 *) &D_801BBBF0[0xDC]) {
            D_801BBBF0[0x1030] = 0;
        } else {
            D_801BBBF0[0x1030] = 1;
        }
        func_8022C0A0(arg0);
        if (var_v1[0x2D9] < 0xE) {
            var_v1[0x2D8] = 0;
        } else {
            var_v1[0x2D8] = 1;
        }
        var_v1[0x2DD] = 1;
        func_80231CEC(arg0);
        func_80360818(arg0, arg1);
    }
}

#define func_80363018 func_80363018__func_80362EC8
void func_80363018(void *arg0, s32 arg1);

typedef struct func_80362EC8_StructA {
    u8 pad0[0x2];
    u16 unk2;
} func_80362EC8_StructA;

typedef struct func_80362EC8_Struct {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad1[0x5C - 0x38];
    s32 unk5C;
    u8 pad2[0x68 - 0x60];
    func_80362EC8_StructA *unk68;
} func_80362EC8_Struct;

void func_80362EC8(func_80362EC8_Struct *arg0, s32 arg1) {
    s32 sp24;
    func_80362EC8_StructA *temp_a3;
    u8 *var_v0;
    s32 temp_v1;

    sp24 = arg0->unk5C;
    temp_a3 = arg0->unk68;
    if ((s32)arg0 == D_801BBCCC) {
        var_v0 = D_801BC03C;
    } else {
        var_v0 = D_801BC3D8;
    }
    if (arg0->unk36 == 0x11D) {
        var_v0[0x32] = (var_v0[0x32] & 0xFFFC) | 2;
        var_v0[0x32] = var_v0[0x32] & 0x1F;
        var_v0[0x32] = var_v0[0x32] & 0xF3;
        func_800058DC(arg0, func_80222708);
        return;
    }
    var_v0[0x328] = 0;
    var_v0[0x2E8] = 0;
    var_v0[0x2DE] = 0;
    *(f32 *)(var_v0 + 0x2EC) = 1.0f;
    func_803602D4((s32)arg0, arg1);
    temp_v1 = temp_a3->unk2;
    if (temp_v1 & 1) {
        var_v0[0x32] = var_v0[0x32] & 0xFFF3;
    } else if (temp_v1 & 8) {
        var_v0[0x32] = (var_v0[0x32] & 0xFFF3) | 4;
    } else if (temp_v1 & 4) {
        var_v0[0x32] = (var_v0[0x32] & 0xFFF3) | 8;
    } else {
        var_v0[0x32] = (var_v0[0x32] & 0xFF) | 0xC;
    }
    func_80011198((void *)arg1, sp24, arg0, (s32)temp_a3);
    func_800058DC(arg0, func_80363018);
}
#undef func_80363018

#define D_80386438 D_80386438__func_80363018
#define func_800058DC func_800058DC__func_80363018
#define func_80011140 func_80011140__func_80363018
#define func_802233B0 func_802233B0__func_80363018
#define func_8022397C func_8022397C__func_80363018
#define func_802256E4 func_802256E4__func_80363018
#define func_8035CDA8_Obj func_8035CDA8_Obj__func_80363018
#define func_8035F544_Copy func_8035F544_Copy__func_80363018
#define func_80360EF8_Struct func_80360EF8_Struct__func_80363018
#define func_80363204 func_80363204__func_80363018
typedef struct func_8035F544_Copy { int a; int b; int c; } func_8035F544_Copy;
typedef struct func_8035CDA8_Obj { int a; } func_8035CDA8_Obj;
void func_800058DC(void *arg0, void *arg1);
extern s32 func_80011140(s32, s32, func_8035F544_Copy, s32);
extern s32 func_802233B0();
extern s32 func_8022397C();
typedef struct func_80360EF8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80360EF8_Struct;
extern void func_802256E4(func_80360EF8_Struct *, s32, s32);
void func_80363204(void *arg0, s32 arg1);

typedef struct func_80363018_Struct4 {
    u8 b[4];
} func_80363018_Struct4;

extern func_80363018_Struct4 D_80386438;

void func_80363018(void *arg0, s32 arg1) {
    s32 sp44;
    u8 *t0;
    func_8035F544_Copy sp34;
    func_80363018_Struct4 sp30;
    u32 w;

    sp44 = *(s32 *)((u8 *)arg0 + 0x5C);
    if ((u8 *)arg0 == *(u8 **)(D_801BBBF0 + 0xDC)) {
        t0 = D_801BC03C;
    } else {
        t0 = D_801BC3D8;
    }
    sp30 = D_80386438;
    if (*(s16 *)(t0 + 2) <= 0 || ((*(u32 *)(t0 + 0x30) * 2) >> 30) != 0) {
        func_802233B0(arg0, arg1);
        return;
    }
    if (D_801BBBF0[0x1031] >= 0xA && D_801BBBF0[0x1031] != 0xF) {
        func_8022310C(arg0, arg1);
        return;
    }
    if (D_801BBBF0[0x1031] != 0xF) {
        if ((*(u16 *)(t0 + 0x30) & 7) == 5) {
            func_8022397C(arg0);
            return;
        }
        t0[0x32] = (t0[0x32] & 0xFFFC) | 1;
        t0[0x32] = (t0[0x32] & 0x1F) | 0x20;
        func_80224AC4(arg0, 0, arg1, &sp30);
        w = *(u32 *)(t0 + 0x30);
        {
            extern void func_802256E4();
            if (((w << 9) >> 30) == 3) {
                func_802256E4(&sp34, arg0, sp30.b[((w << 20) >> 30) ^ 1], &sp30);
            } else {
                func_802256E4(&sp34, arg0, sp30.b[(w << 20) >> 30], &sp30);
            }
        }
        if (func_80011140(arg1, sp44, sp34, 3) != 0) {
            func_800058DC(arg0, func_80363204);
        }
        t0[0x392] = 0;
    }
}
#undef D_80386438
#undef func_800058DC
#undef func_80011140
#undef func_802233B0
#undef func_8022397C
#undef func_802256E4
#undef func_8035CDA8_Obj
#undef func_8035F544_Copy
#undef func_80360EF8_Struct
#undef func_80363204



typedef struct func_80363204_Obj {
    u8 pad0[0x5C];
    s32 unk5C;
} func_80363204_Obj;

typedef struct func_80363204_Entry {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad1[0x2C];
    u8 unk30[4];
    u8 pad2[0x392 - 0x34];
    u8 unk392;
} func_80363204_Entry;

void func_80363204(void *arg0, s32 arg1) {
    s32 sp1C;
    func_80363204_Entry *var_v1;

    sp1C = ((func_80363204_Obj *) arg0)->unk5C;
    if (arg0 == *(void **) &D_801BBBF0[0xDC]) {
        var_v1 = (func_80363204_Entry *) D_801BC03C;
    } else {
        var_v1 = (func_80363204_Entry *) D_801BC3D8;
    }
    if ((var_v1->unk2 <= 0) || (((u32) (*(u32 *) var_v1->unk30 * 2) >> 0x1E) != 0)) {
        func_802233B0(arg0, arg1);
        return;
    }
    if (((s32) D_801BBBF0[0x1031] >= 0xA) && (D_801BBBF0[0x1031] != 0xF)) {
        func_8022310C(arg0, arg1);
        return;
    }
    if (D_801BBBF0[0x1031] != 0xF) {
        func_80224AC4(arg0, 0);
        if ((*(u16 *) var_v1->unk30 & 7) == 5) {
            func_8022397C(arg0);
            return;
        }
        if (func_80010550(arg1, sp1C) != 0) {
            var_v1->unk30[2] = (u8) (var_v1->unk30[2] & 0xFF1F);
            func_800058DC(arg0, (void *) func_80222708);
        }
        var_v1->unk392 = 0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8035EF60/func_80363340.s")

#define func_80363D5C func_80363D5C__func_80363904

typedef struct func_80363904_Struct {
    u8 pad0[0x5C];
    u8 *unk5C;
} func_80363904_Struct;

extern void func_80363D5C();

void func_80363904(func_80363904_Struct *arg0) {
    u8 *var_a1;
    u8 *var_v1;
    u8 *temp_a2;

    temp_a2 = arg0->unk5C;
    if ((s32) arg0 == D_801BBCCC) {
        var_a1 = D_801BC03C;
    } else {
        var_a1 = D_801BC3D8;
    }
    if ((s32) arg0 != D_801BBCCC) {
        var_v1 = D_801BC03C;
    } else {
        var_v1 = D_801BC3D8;
    }
    if ((temp_a2[0x84] == 2) && (var_a1[0x375] == 0) && ((var_v1[0x2D8] == 0xF) || (var_v1[0x2D8] == 0) || (var_v1[0x2D8] == 1))) {
        func_800058DC(arg0, func_803639F0);
        return;
    }
    if ((var_a1[0x2D9] != 6) && (var_a1[0x2D9] != 7) && (var_a1[0x2D9] != 0x20) && (var_a1[0x2D9] != 0x21)) {
        func_800058DC(arg0, func_80363D5C);
        return;
    }
    func_800058DC(arg0, func_803639F0);
}
#undef func_80363D5C

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8035EF60/func_803639F0.s")

#define func_8035FEC0 func_8035FEC0__func_80363D5C
#define func_80360020 func_80360020__func_80363D5C
#define func_80361B50 func_80361B50__func_80363D5C
#define func_80361B7C func_80361B7C__func_80363D5C
#define func_80363FFC func_80363FFC__func_80363D5C
void func_8035FEC0(s32 arg0);
void func_80360020(func_80360020_Struct0 *arg0, func_80360020_Struct1 *arg1);
void func_80361B50(s32 arg0, s32 arg1, func_80361B50_Struct *arg2);
void func_80361B7C(func_80361B7C_StructA *arg0, func_80361B7C_StructB *arg1, func_80361B7C_StructC *arg2);
void func_80363FFC(s32 arg0, s32 arg1);

typedef struct func_80363D5C_StructA {
    u8 pad0[0x5C];
    u8 *unk5C;
} func_80363D5C_StructA;
typedef struct func_80363D5C_StructS {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x30 - 4];
    u32 pad30a : 1;
    u32 f30 : 2;
    u32 pad30b : 29;
    u8 pad34[0x2D8 - 0x34];
    u8 unk2D8;
    u8 pad2D9[2];
    u8 unk2DB;
    u8 pad2DC[0x2E8 - 0x2DC];
    u8 unk2E8;
    u8 pad2E9[0x2F4 - 0x2E9];
    f32 unk2F4;
    u8 pad2F8[0x314 - 0x2F8];
    u8 unk314[0xC];
    u8 unk320;
    u8 pad321[0x32C - 0x321];
    u8 unk32C;
    u8 pad32D[0x392 - 0x32D];
    u8 unk392;
} func_80363D5C_StructS;

void func_80363D5C(func_80363D5C_StructA *arg0, s32 arg1) {
    u8 *sp34;
    func_80363D5C_StructS *s1;
    func_80363D5C_StructS *sp2C;
    s32 pad;
    void *sp20;
    void *a3;

    sp34 = arg0->unk5C;
    if (arg0 == (void *)D_801BBCCC) {
        s1 = (void *)D_801BC03C;
    } else {
        s1 = (void *)D_801BC3D8;
    }
    if (arg0 != (void *)D_801BBCCC) {
        sp2C = (void *)D_801BC03C;
    } else {
        sp2C = (void *)D_801BC3D8;
    }
    if (sp34[0x84] == 2) {
        if (s1->unk2E8 >= 2 && s1->unk32C == 0) {
            s1->unk32C = 1;
            func_802254F8(arg0, 5, (u8)(u32)(D_8036153C(arg0) * 7.0f));
            func_8035FEC0((s32)arg0);
            sp2C->unk320 = D_80360588((s32)arg0, arg1);
            if (sp2C->unk2D8 == 0xD && sp2C->unk2DB != 0) {
                func_803673B4(arg0, arg1, 0xA);
            } else {
                if ((void *)arg0 == *(void **)(D_801BBBF0 + 0xDC)) {
                    a3 = *(void **)(D_801BBBF0 + 0xEC);
                } else {
                    a3 = *(void **)(D_801BBBF0 + 0xDC);
                }
                sp20 = a3;
                func_80367288(arg0, arg1, 0xF, a3);
                func_800058DC(sp20, func_80364D2C);
            }
            func_80361B7C((void *)sp2C, (void *)sp34, func_8035FFA8(s1));
            if (sp2C->unk2 <= 0 || sp2C->f30 != 0) {
                func_800058DC(arg0, func_803622EC);
            }
        } else {
            sp34[0x84] = 2;
            func_80360020((void *)arg0, (void *)s1);
            s1->unk2F4 = 0.0f;
        }
        func_80361B50((s32)arg0, arg1, (void *)s1);
        D_8013AE20(arg0, arg1, 0);
        func_80360400((void *)s1->unk314, (s32)arg0, arg1);
    }
    s1->unk392 = 4;
    func_800058DC(arg0, func_80363FFC);
}
#undef func_8035FEC0
#undef func_80360020
#undef func_80361B50
#undef func_80361B7C
#undef func_80363FFC



void func_80363FFC(s32 arg0, s32 arg1) {
    func_800058DC(arg0, func_80364024);
}

#define func_800058DC func_800058DC__func_80364024
#define func_8013D09C func_8013D09C__func_80364024
#define func_80236744 func_80236744__func_80364024
#define func_8036265C func_8036265C__func_80364024
#define func_80364174 func_80364174__func_80364024
extern void func_8013D09C();
extern void func_80236744();
void func_800058DC(void *arg0, void *arg1);
void func_8036265C();
void func_80364174();
typedef struct func_80364024_Bits {
    u32 b31 : 1;
    u32 rest : 31;
} func_80364024_Bits;

void func_80364024(s32 arg0, s32 arg1) {
    u8 *a1;
    u8 *v0;

    if (arg0 == D_801BBCCC) {
        a1 = D_801BC03C;
    } else {
        a1 = D_801BC3D8;
    }
    if (*(s16 *)((v0 = (arg0 != D_801BBCCC) ? D_801BC03C : D_801BC3D8) + 2) <= 0 || ((*(u32 *)(v0 + 0x30) << 1) >> 30) != 0 || a1[0x375] >= a1[0x376]) {
        func_800058DC((void *)arg0, (void *)func_8036265C);
        return;
    }
    if (a1[0x375] != 0 || (v0[0x2D8] != 0xF && v0[0x2D8] != 0 && v0[0x2D8] != 1) || (v0[0x30] & 1) != 1) {
        if (a1[0x2D8] == 9) {
            a1[0x31] = (a1[0x31] & 0xFFF8) | 2;
            ((func_80364024_Bits *)(v0 + 0x30))->b31 = 1;
            func_80236744(arg0, a1);
            func_800058DC((void *)arg0, (void *)func_80364174);
            return;
        }
        func_8013D09C(a1);
        {
            extern void func_8022C0A0();
            func_8022C0A0();
        }
        func_80360818(arg0, arg1);
    }
}
#undef func_800058DC
#undef func_8013D09C
#undef func_80236744
#undef func_8036265C
#undef func_80364174

#define func_800058DC func_800058DC__func_80364174
#define func_8013D09C func_8013D09C__func_80364174
#define func_8035CDA8_Obj func_8035CDA8_Obj__func_80364174
#define func_8035F544_Copy func_8035F544_Copy__func_80364174
#define func_80360020 func_80360020__func_80364174
#define func_80360020_Struct0 func_80360020_Struct0__func_80364174
#define func_80360020_Struct1 func_80360020_Struct1__func_80364174
#define func_80361B50 func_80361B50__func_80364174
#define func_80361B50_Struct func_80361B50_Struct__func_80364174
#define func_8036265C func_8036265C__func_80364174
#define func_8036265C_Arg func_8036265C_Arg__func_80364174
#define func_8036265C_Inner func_8036265C_Inner__func_80364174
typedef struct func_8035F544_Copy { s32 a; s32 b; s32 c; } func_8035F544_Copy;
typedef struct func_8035CDA8_Obj { s32 a; } func_8035CDA8_Obj;
void func_800058DC(void *arg0, void *arg1);
typedef struct func_80360020_Struct0 {
    u8 pad[0x36];
    u16 unk36;
} func_80360020_Struct0;
typedef struct func_80360020_Struct1 {
    u8 pad[0x2D9];
    u8 unk2D9;
} func_80360020_Struct1;
void func_80360020(func_80360020_Struct0 *arg0, func_80360020_Struct1 *arg1);
typedef struct func_80361B50_Struct {
    u8 pad0[0x2DE];
    u8 unk2DE;
    u8 pad1[0x2EC - 0x2DF];
    f32 unk2EC;
} func_80361B50_Struct;
void func_80361B50(s32 arg0, s32 arg1, func_80361B50_Struct *arg2);
typedef struct func_8036265C_Inner {
    u8 pad[0x7C];
    u8 *unk7C;
} func_8036265C_Inner;
typedef struct func_8036265C_Arg {
    u8 pad[0x5C];
    func_8036265C_Inner *unk5C;
} func_8036265C_Arg;
void func_8036265C(func_8036265C_Arg *arg0, s32 arg1);


typedef struct func_80364174_StructInner {
    u8 pad0[0x80];
    u16 unk80;
    u8 pad82[2];
    u8 unk84;
} func_80364174_StructInner;
typedef struct func_80364174_StructArg {
    u8 pad0[0x5C];
    func_80364174_StructInner *unk5C;
} func_80364174_StructArg;
typedef struct func_80364174_StructA {
    u8 pad0[0x30];
    u16 unk30;
    u8 pad32[0x2D8 - 0x32];
    u8 unk2D8;
    u8 pad2D9[2];
    u8 unk2DB;
    u8 pad2DC[0x2F4 - 0x2DC];
    f32 unk2F4;
    u8 pad2F8[0x375 - 0x2F8];
    u8 unk375;
    u8 unk376;
} func_80364174_StructA;
extern void func_8013D09C();

void func_80364174(func_80364174_StructArg *arg0, s32 arg1) {
    func_80364174_StructA *a;
    func_80364174_StructA *b;
    func_80364174_StructInner *sp24;

    if ((void *)arg0 == ((void **)(D_801BBBF0 + 0xDC))[0]) {
        a =(func_80364174_StructA *)D_801BC03C;
    } else {
        a = (func_80364174_StructA *)D_801BC3D8;
    }
    if ((void *)arg0 != ((void **)(D_801BBBF0 + 0xDC))[0]) {
        b = (func_80364174_StructA *)D_801BC03C;
    } else {
        b = (func_80364174_StructA *)D_801BC3D8;
    }
    sp24 = arg0->unk5C;
    if (!(a->unk30 & 7) && (((u8 *)a)[0x30] & 1)) {
        if (a->unk375 < a->unk376) {
            ((u8 *)a)[0x31] = ((u8 *)a)[0x31] & 0xFF7F;
            func_8013D09C(a);
            {
extern void func_8022C0A0();
                func_8022C0A0();
            }
            func_80360818((s32)arg0, arg1);
            return;
        }
        if (sp24->unk84 == 2) {
            func_80361B50((s32)arg0, arg1, (void *)a);
            {
extern void func_8013AE20();
                func_8013AE20(arg0, arg1, 0);
            }
            func_80360020((void *)arg0, (void *)a);
            a->unk2F4 = 0.0f;
        } else if (b->unk2D8 != 0xD || b->unk2DB == 0) {
            void *v;
            if ((void *)arg0 == ((void **)(D_801BBBF0 + 0xDC))[0]) {
                v = ((void **)(D_801BBBF0 + 0xEC))[0];
            } else {
                v = ((void **)(D_801BBBF0 + 0xDC))[0];
            }
            func_800058DC(v, func_80364D2C);
        }
        if (sp24->unk80 == 2) {
            func_80361B50((s32)arg0, arg1, (void *)a);
            func_800058DC(arg0, func_803622EC);
            return;
        }
        func_800058DC(arg0, func_8036265C);
    }
}
#undef func_800058DC
#undef func_8013D09C
#undef func_8035CDA8_Obj
#undef func_8035F544_Copy
#undef func_80360020
#undef func_80360020_Struct0
#undef func_80360020_Struct1
#undef func_80361B50
#undef func_80361B50_Struct
#undef func_8036265C
#undef func_8036265C_Arg
#undef func_8036265C_Inner

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8035EF60/_pad_16.s")
