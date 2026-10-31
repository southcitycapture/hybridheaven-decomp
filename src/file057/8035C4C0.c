#include "common.h"

extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];

typedef struct func_8035C4C0_Struct {
    u8 pad0[0x4C];
    u16 unk4C;
    u16 unk4E;
} func_8035C4C0_Struct;

extern s32 D_801BBCCC;
extern s32 D_8038CC10;
extern void *D_8038CC14;
extern void func_8013AE20();
extern void func_800058DC();
extern void func_80222708();

void func_8035C4C0(s32 arg0, s32 arg1) {
    u8 *v0;
    u8 *a3;
    func_8035C4C0_Struct *p;

    if (arg0 == D_801BBCCC) {
        v0 = D_801BC03C;
    } else {
        v0 = D_801BC3D8;
    }
    if (arg0 != D_801BBCCC) {
        a3 = D_801BC03C;
    } else {
        a3 = D_801BC3D8;
    }
    v0[0x392] = 0;
    if (D_8038CC10 != NULL) {
        return;
    }
    p = (func_8035C4C0_Struct *)D_8038CC14;
    if (p != NULL) {
        if (p->unk4C >= p->unk4E) {
            p->unk4C |= 0x8000;
        }
        return;
    }
    v0[0x2FA] = 0;
    v0[0x31] &= 0xFFF8;
    v0[0x30] &= 0xFF7F;
    v0[0x30] &= 0xFE;
    v0[0x31] &= 0x7F;
    func_8013AE20((void *)arg0, arg1, 0, a3);
    v0[0x394] = 1;
    if (v0[0x2DA] != 0 || (a3[0x2D8] != 0 && a3[0x2D8] != 1 && a3[0x2D8] != 9 && a3[0x2D8] != 0xA && a3[0x2D8] != 0xF && a3[0x2D8] != 0xD)) {
        a3[0x31] &= 0xFFF8;
        a3[0x30] &= 0xFF7F;
        a3[0x30] &= 0xFE;
        a3[0x31] &= 0x7F;
    }
    p = (func_8035C4C0_Struct *)D_8038CC14;
    if (p != NULL) {
        p->unk4C |= 0x8000;
    }
    func_800058DC((void *)arg0, func_80222708);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8035C4C0/func_8035C638.s")

extern u8 D_801BBBF0[];

typedef struct func_8035C7E8_Globals {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xEC - 0xE0];
    s32 unkEC;
} func_8035C7E8_Globals;

typedef struct func_8035C7E8_Obj {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad1[0x30 - 0x4];
    u32 unk30;
    u8 pad2[0x2F8 - 0x34];
    u8 unk2F8;
    u8 pad3[0x320 - 0x2F9];
    u8 unk320;
    u8 pad4[0x32D - 0x321];
    u8 unk32D;
    u8 pad5[0x392 - 0x32E];
    u8 unk392;
} func_8035C7E8_Obj;

typedef struct func_8035C7E8_Entry {
    u8 pad0[0x36];
    u16 unk36;
} func_8035C7E8_Entry;

extern void func_8036445C(s32, s32, u8, s32);

void func_8035C7E8(s32 arg0, s32 arg1) {
    func_8035C7E8_Entry *var_a1;
    func_8035C7E8_Obj *var_v1;

    if (arg0 != ((func_8035C7E8_Globals *) D_801BBBF0)->unkDC) {
        var_a1 = (func_8035C7E8_Entry *) ((func_8035C7E8_Globals *) D_801BBBF0)->unkDC;
    } else {
        var_a1 = (func_8035C7E8_Entry *) ((func_8035C7E8_Globals *) D_801BBBF0)->unkEC;
    }
    if (arg0 == ((func_8035C7E8_Globals *) D_801BBBF0)->unkDC) {
        var_v1 = (func_8035C7E8_Obj *) D_801BC03C;
    } else {
        var_v1 = (func_8035C7E8_Obj *) D_801BC3D8;
    }
    {
        func_8035C7E8_Obj *var_a0;

        if (arg0 != ((func_8035C7E8_Globals *) D_801BBBF0)->unkDC) {
            var_a0 = (func_8035C7E8_Obj *) D_801BC03C;
        } else {
            var_a0 = (func_8035C7E8_Obj *) D_801BC3D8;
        }
        var_v1->unk392 = 0;
        if ((((u32) (var_v1->unk30 * 2) >> 0x1E) == 0) && (var_v1->unk2 > 0)) {
            if (var_v1->unk2F8 == 6) {
                var_v1->unk2F8 = 6;
            } else if (var_a0->unk32D == 3) {
                var_v1->unk2F8 = 4;
            } else {
                if ((func_8035A434(var_a0) == 4) || (var_a1->unk36 == 0x148)) {
                    var_v1->unk2F8 = 3;
                } else {
                    var_v1->unk2F8 = 2;
                }
            }
        } else {
            var_v1->unk2F8 = 4;
        }
    }
    func_8036445C(arg0, arg1, var_v1->unk320, 1);
}


typedef struct func_8035C910_Leaf {
    u8 pad0[0x6C];
    u16 unk6C;
} func_8035C910_Leaf;

typedef struct func_8035C910_Mid {
    u8 pad0[0x2C];
    func_8035C910_Leaf *unk2C;
} func_8035C910_Mid;

typedef struct func_8035C910_Struct {
    u8 pad0[0x1C];
    func_8035C910_Mid *unk1C;
    func_8035C910_Mid *unk20;
    func_8035C910_Mid *unk24;
    func_8035C910_Mid *unk28;
    func_8035C910_Mid *unk2C;
    func_8035C910_Mid *unk30;
} func_8035C910_Struct;

void func_8035C910(func_8035C910_Struct *arg0)
{
  short new_var;
  new_var = 0xFDFF;
  {
    func_8035C910_Leaf *temp_v0 = arg0->unk1C->unk2C;
    temp_v0->unk6C = (u16) (temp_v0->unk6C & new_var);
  }
  {
    func_8035C910_Leaf *temp_v1 = arg0->unk20->unk2C;
    temp_v1->unk6C = (u16) (temp_v1->unk6C & new_var);
  }
  {
    func_8035C910_Leaf *temp_a1 = arg0->unk24->unk2C;
    temp_a1->unk6C = (u16) (temp_a1->unk6C & new_var);
  }
  {
    func_8035C910_Leaf *temp_a2 = arg0->unk28->unk2C;
    temp_a2->unk6C = (u16) (temp_a2->unk6C & new_var);
  }
  {
    func_8035C910_Leaf *temp_a3 = arg0->unk2C->unk2C;
    temp_a3->unk6C = (u16) (temp_a3->unk6C & new_var);
  }
  {
    func_8035C910_Leaf *temp_t0 = arg0->unk30->unk2C;
    temp_t0->unk6C = (u16) (temp_t0->unk6C & new_var);
  }
}

#define func_8035C9D0 func_8035C9D0__func_8035C98C

extern void func_80011198(void *arg0, s32 arg1, void *arg2, s32 arg3);
extern void func_8035C9D0();

void func_8035C98C(void *arg0, void *arg1)
{
  s32 temp_a3;
  void *temp_a0;
  u8 *new_var;
  u8 *new_var2;
  temp_a0 = arg1;
  temp_a3 = *((s32 *) (((u8 *) arg0) + 0x5C));
  new_var = ((u8 *) arg0) + 0x5C;
  new_var2 = new_var;
  func_80011198(temp_a0, temp_a3 ^ 0, arg0, *((s32 *) new_var2));
  func_800058DC(arg0, func_8035C9D0);
}
#undef func_8035C9D0


typedef struct func_8035C9D0_Struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad4[0x30 - 0x4];
    u32 b31 : 1;
    u32 A : 2;
    u32 C : 4;
    u32 D : 1;
    u32 b23 : 1;
    u32 E : 2;
    u32 b19 : 2;
    u16 B : 3;
    u16 F : 3;
    u16 b12 : 5;
    u16 L : 1;
    u16 b6 : 7;
    u8 pad34[0x38 - 0x34];
    u32 H : 1;
    u32 G : 2;
    u32 J : 1;
    u32 I : 2;
    u32 K : 3;
    u32 b22 : 23;
    u8 pad3C[0x2E8 - 0x3C];
    u8 unk2E8;
    u8 pad2E9[0x2EC - 0x2E9];
    f32 unk2EC;
    u8 pad2F0[0x2F9 - 0x2F0];
    u8 unk2F9;
    u8 pad2FA[0x308 - 0x2FA];
    f32 unk308;
    u8 pad30C[0x384 - 0x30C];
    u8 unk384;
    u8 pad385[0x392 - 0x385];
    u8 unk392;
} func_8035C9D0_Struct;

typedef struct func_8035C9D0_Copy {
    s32 unk0;
    u16 unk4;
    u16 unk6;
    f32 unk8;
} func_8035C9D0_Copy;

typedef struct func_8035C9D0_Leaf {
    u8 pad0[0x12];
    s16 unk12;
} func_8035C9D0_Leaf;

typedef struct func_8035C9D0_Mid {
    u8 pad0[0x2C];
    func_8035C9D0_Leaf *unk2C;
} func_8035C9D0_Mid;

typedef struct func_8035C9D0_Obj {
    u8 pad0[0x24];
    func_8035C9D0_Mid *unk24;
    u8 pad28[0x5C - 0x28];
    void *unk5C;
} func_8035C9D0_Obj;

typedef struct func_8035C9D0_Globals {
    u8 pad0[0xDC];
    func_8035C9D0_Obj *unkDC;
    u8 padE0[0xEC - 0xE0];
    func_8035C9D0_Obj *unkEC;
    u8 padF0[0xB98 - 0xF0];
    s16 unkB98;
    u8 padB9A[0x1031 - 0xB9A];
    u8 unk1031;
} func_8035C9D0_Globals;

#define GL9 ((func_8035C9D0_Globals *)D_801BBBF0)
#define W13(x) (((x) & 0x1000) ? (((x) & 0x1FFF) - 0x2000) : ((x) & 0x1FFF))

extern func_8035C9D0_Copy D_8038565C;
extern s32 D_80011140(s32, s32, func_8035C9D0_Copy, s32);

void func_8035C9D0(func_8035C9D0_Obj *arg0, func_8035C910_Struct *arg1) {
    s32 sp54;
    func_8035C9D0_Struct *t;
    func_8035C9D0_Obj *o;
    s16 a3;
    s16 t1;
    struct {
        func_8035C9D0_Copy d;
    } v;
    extern s32 func_802233B0();
    extern s32 func_8022397C();
    extern void func_8022310C();
    extern void func_802237B0();
    extern void func_8035CDA8();

    sp54 = (s32)arg0->unk5C;
    if (arg0 == GL9->unkDC) {
        t = (func_8035C9D0_Struct *)D_801BC03C;
    } else {
        t = (func_8035C9D0_Struct *)D_801BC3D8;
    }
    if (arg0 != GL9->unkDC) {
        o = GL9->unkDC;
    } else {
        o = GL9->unkEC;
    }
    a3 = (s16)(((arg0 == GL9->unkDC) ? 0 : 0x1000) + GL9->unkB98) & 0x1FFF;
    t1 = o->unk24->unk2C->unk12;
    v.d = D_8038565C;
    if (t->unk2 <= 0 || t->A != 0) {
        func_802233B0(arg0, arg1, GL9, a3);
        return;
    }
    if (GL9->unk1031 >= 10 && GL9->unk1031 != 0xF) {
        func_8022310C(arg0, arg1, GL9, a3);
        return;
    }
    if (GL9->unk1031 != 0xF) {
        if (t->B == 5) {
            func_8022397C(arg0);
            return;
        }
        func_802237B0(arg0, 1, GL9, a3);
        if (((W13((s16)(a3 - t1)) < 0) ? -W13((s16)(a3 - t1)) : W13((s16)(a3 - t1))) >= 0x801) {
            v.d.unk0 = 0x019000AF;
        } else {
            v.d.unk0 = 0x019000C1;
        }
        v.d.unk8 = (f32)t->unk384 / 100.0;
        if (v.d.unk8 <= 0.0) {
            v.d.unk8 = 1.0f;
        }
        if (t->E == 0) {
            t->E = t->unk2F9 + 2;
        }
        if (t->E == 3) {
            v.d.unk6 ^= 0x10;
        }
        t->G = 1;
        t->F = 1;
        func_802237B0(arg0, 1);
        if (D_80011140((s32)arg1, sp54, v.d, 3) != 0) {
            arg1->unk1C->unk2C->unk6C |= 0x200;
            arg1->unk20->unk2C->unk6C |= 0x200;
            arg1->unk24->unk2C->unk6C |= 0x200;
            arg1->unk28->unk2C->unk6C |= 0x200;
            arg1->unk2C->unk2C->unk6C |= 0x200;
            arg1->unk30->unk2C->unk6C |= 0x200;
            if (t->unk308 == 0.0f) {
                t->unk308 = 1.0f;
            }
            t->unk2EC = t->unk308;
            t->unk2E8 = 0;
            func_800058DC(arg0, func_8035CDA8);
        }
        t->unk392 = 4;
    }
}

#define func_8035D3C8 func_8035D3C8__func_8035CDA8
#define func_8035DF74 func_8035DF74__func_8035CDA8
extern u8 D_8008DA88[];

typedef struct func_8035CDA8_Entry {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad4[0x30 - 0x4];
    u32 b31 : 1;
    u32 A : 2;
    u32 C : 4;
    u32 D : 1;
    u32 b23 : 1;
    u32 E : 2;
    u32 b19 : 2;
    u16 B : 3;
    u16 F : 3;
    u16 b12 : 5;
    u16 L : 1;
    u16 b6 : 7;
    u8 pad34[0x38 - 0x34];
    u32 H : 1;
    u32 G : 2;
    u32 J : 1;
    u32 I : 2;
    u32 K : 3;
    u32 b22 : 23;
    u8 pad3C[0x44 - 0x3C];
    s16 unk44;
    u8 pad46[0x2D8 - 0x46];
    u8 unk2D8;
    u8 pad2D9[0x2DE - 0x2D9];
    u8 unk2DE;
    u8 pad2DF[0x2E8 - 0x2DF];
    u8 unk2E8;
    u8 pad2E9[0x392 - 0x2E9];
    u8 unk392;
    u8 pad393;
    u8 unk394;
} func_8035CDA8_Entry;

typedef struct func_8035CDA8_Copy {
    s32 unk0;
    u16 unk4;
    u16 unk6;
    f32 unk8;
} func_8035CDA8_Copy;

typedef struct func_8035CDA8_Words {
    s32 w0;
    s32 w4;
    s32 w8;
} func_8035CDA8_Words;

typedef struct func_8035CDA8_Sub {
    u8 pad0[0x1C];
    func_8035CDA8_Copy unk1C;
} func_8035CDA8_Sub;

typedef struct func_8035CDA8_Leaf {
    u8 pad0[0x12];
    s16 unk12;
} func_8035CDA8_Leaf;

typedef struct func_8035CDA8_Mid {
    u8 pad0[0x2C];
    func_8035CDA8_Leaf *unk2C;
} func_8035CDA8_Mid;

typedef struct func_8035CDA8_Obj {
    u8 pad0[0x24];
    func_8035CDA8_Mid *unk24;
    u8 pad28[0x5C - 0x28];
    func_8035CDA8_Sub *unk5C;
} func_8035CDA8_Obj;

typedef struct func_8035CDA8_Globals {
    u8 pad0[0x2C];
    u16 unk2C;
    u8 pad2E[0xDC - 0x2E];
    func_8035CDA8_Obj *unkDC;
    u8 padE0[0xEC - 0xE0];
    func_8035CDA8_Obj *unkEC;
    u8 padF0[0x47C - 0xF0];
    u32 b47C : 9;
    u32 M : 2;
    u32 r47C : 21;
    u8 pad480[0x745 - 0x480];
    u8 unk745;
    u8 pad746[0x818 - 0x746];
    u32 b818 : 9;
    u32 N : 2;
    u32 r818 : 21;
    u8 pad81C[0xB98 - 0x81C];
    s16 unkB98;
    u8 padB9A[0x1031 - 0xB9A];
    u8 unk1031;
} func_8035CDA8_Globals;

#define GL ((func_8035CDA8_Globals *)D_801BBBF0)
#define WRAP13(x) (((x) & 0x1000) ? (((x) & 0x1FFF) - 0x2000) : ((x) & 0x1FFF))

extern s32 func_802233B0();
extern void func_802237B0(void *arg0, s32 arg1);
extern s32 func_8022397C();
extern void func_8022310C(void *arg0, s32 arg1);
extern s32 func_80010550(s32, s32);
extern s32 func_80232008(void *);
extern void func_802264D0(void *, s32);
extern void func_802254F8(void *, s32, s32);
extern void func_803711E8(void *, s32, s32);
extern void func_8035D3C8();
extern void func_8035D9FC();
extern void func_8035DF74();

void func_8035CDA8(func_8035CDA8_Obj *arg0, s32 arg1) {
    func_8035CDA8_Obj *other;
    func_8035CDA8_Sub *sub;
    func_8035CDA8_Sub *otherSub;
    func_8035CDA8_Entry *ent;
    func_8035CDA8_Entry *opp;
    func_8035CDA8_Copy *copy;
    s16 angA;
    s16 angB;
    extern void func_80011198();
    extern void func_8013A28C();

    other = (arg0 != GL->unkDC) ? GL->unkDC : GL->unkEC;
    sub = arg0->unk5C;
    copy = &sub->unk1C;
    otherSub = other->unk5C;
    ent = (arg0 == GL->unkDC) ? (func_8035CDA8_Entry *)D_801BC03C : (func_8035CDA8_Entry *)D_801BC3D8;
    opp = (arg0 != GL->unkDC) ? (func_8035CDA8_Entry *)D_801BC03C : (func_8035CDA8_Entry *)D_801BC3D8;
    angA = (s16)(((arg0 == GL->unkDC) ? 0 : 0x1000) + GL->unkB98) & 0x1FFF;
    angB = other->unk24->unk2C->unk12;
    if (ent->unk2 <= 0 || ent->A != 0) {
        func_802233B0(arg0, arg1);
        return;
    }
    if (GL->unk1031 >= 10 && GL->unk1031 != 15) {
        func_8022310C(arg0, arg1);
        return;
    }
    if (GL->unk1031 == 15) {
        return;
    }
    if (ent->B == 5) {
        func_8022397C(arg0);
    } else {
    func_802237B0(arg0, 1);
    if (copy->unk4 == 2) {
        ent->unk2DE = 1;
    }
    if (func_80010550(arg1, (s32)sub) != 0) {
        if (ent->unk2E8 >= 2 && func_80232008(ent) != 0) {
            func_802264D0(arg0, 0x3BD);
            func_802254F8(other, 20, 5);
            func_802254F8(arg0, 5, 7);
            func_803711E8(arg0, arg1, 0);
            opp->L = 0;
            if (opp->C == 3) {
                opp->C = 0;
            }
            if (GL->unk2C == 10 || GL->unk2C == 11) {
                opp->E = ent->E;
            } else {
                if (GL->M == 0) {
                    GL->M = GL->unk745 + 2;
                }
                GL->N = GL->M;
            }
            ent->G = 1;
            opp->G = ent->G;
            ent->H = 1;
            opp->H = ent->H;
            ent->K = 0;
            opp->K = ent->K;
            ent->F = 1;
            opp->F = ent->F;
            ent->I = 1;
            opp->I = 2;
            opp->unk44 += 10;
            if (((WRAP13((s16)(angA - angB)) < 0) ? -WRAP13((s16)(angA - angB)) : WRAP13((s16)(angA - angB))) > 0x800) {
                opp->J = 0;
                ent->J = opp->J;
            } else {
                opp->J = 1;
                ent->J = opp->J;
            }
            func_80011198(arg1, sub);
            func_80006214(other);
            func_80011198(D_8008DA88, otherSub);
            func_800113D0(D_8008DA88, (u8 *)otherSub + 0x22);
            func_80006214(arg0);
            func_800058DC(arg0, func_8035D3C8);
            func_800058DC(other, func_8035DF74);
            ent->unk2E8 = 0;
        } else {
            if (GL->unk1031 == 7 && ent->unk2D8 == 2) {
                ent->D = 0;
                ent->unk394 = 1;
            }
            ent->G = 0;
            if (copy->unk0 == 0x019000AF) {
                copy->unk0 = 0x019000B4;
            } else {
                copy->unk0 = 0x019000C4;
            }
            copy->unk4 = 0;
            copy->unk6 = 0;
            copy->unk8 = 1.0f;
            if (ent->E == 3) {
                copy->unk6 ^= 0x10;
            }
            func_8013A28C(arg1, *(func_8035CDA8_Words *)copy);
            ent->E ^= 1;
            func_800058DC(arg0, func_8035D9FC);
            ent->unk2E8 = 0;
        }
        func_8035C910((func_8035C910_Struct *)arg1);
        ent->unk2DE = 0;
    }
    ent->unk392 = 4;
    }
}
#undef func_8035D3C8
#undef func_8035DF74

#define func_8035D660 func_8035D660__func_8035D3C8
typedef struct func_8035F544_Globals {
    u8 pad0[0xDC];
    void *unkDC;
    u8 pad1[0x1031 - 0xE0];
    u8 unk1031;
} func_8035F544_Globals;
typedef struct func_8035F544_Copy {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8035F544_Copy;
extern s32 func_80011140(s32, s32, func_8035F544_Copy, s32);

typedef struct func_8035D3C8_StructBF {
    u8 pad0[0x30];
    u32 b0 : 1;
    u32 bf2 : 2;
    u32 b1 : 6;
    u32 bf1 : 2;
    u32 b2 : 21;
    u8 pad1[0x38 - 0x34];
    u32 hi : 3;
    u32 flag : 1;
    u32 rest : 28;
} func_8035D3C8_StructBF;

typedef struct func_8035D3C8_Hw {
    u8 pad0[2];
    s16 unk2;
    u8 pad1[0x5C - 4];
    s32 unk5C;
} func_8035D3C8_Hw;

extern func_8035F544_Copy D_80385668;
extern func_8035F544_Copy D_80385674;
extern void func_8035DD80();
extern void func_8035D660();

void func_8035D3C8(void *arg0, s32 arg1) {
    void *sp54;
    s32 temp_a1;
    s32 sp4C;
    u8 *var_v1;
    u8 *var_v0;
    func_8035F544_Copy sp38;
    func_8035F544_Copy sp2C;
    u8 sp2B;

    if (arg0 != ((func_8035F544_Globals *)D_801BBBF0)->unkDC) {
        sp54 = ((func_8035F544_Globals *)D_801BBBF0)->unkDC;
    } else {
        sp54 = *(void **)(D_801BBBF0 + 0xEC);
    }
    temp_a1 = *(s32 *)((u8 *)arg0 + 0x5C);
    sp4C = *(s32 *)((u8 *)sp54 + 0x5C);
    if (arg0 == ((func_8035F544_Globals *)D_801BBBF0)->unkDC) {
        var_v1 = D_801BC03C;
    } else {
        var_v1 = D_801BC3D8;
    }
    if (arg0 == ((func_8035F544_Globals *)D_801BBBF0)->unkDC) {
        var_v0 = D_801BC03C;
    } else {
        var_v0 = D_801BC3D8;
    }
    sp38 = D_80385668;
    sp2C = D_80385674;
    if ((((func_8035D3C8_Hw *)var_v1)->unk2 <= 0) || (((func_8035D3C8_StructBF *)var_v1)->bf2 != 0)) {
        func_802233B0(arg0, arg1);
        func_80006214(sp54);
        func_8022310C(sp54, (s32)D_8008DA88);
        func_80006214(arg0);
        return;
    }
    if ((((func_8035D3C8_Hw *)var_v0)->unk2 <= 0) || (((func_8035D3C8_StructBF *)var_v0)->bf2 != 0)) {
        func_80006214(sp54);
        func_802233B0(sp54, D_8008DA88);
        func_80006214(arg0);
        func_8022310C(arg0, arg1);
        return;
    }
    if (((func_8035F544_Globals *)D_801BBBF0)->unk1031 != 0xF) {
        if (!((func_8035D3C8_StructBF *)var_v1)->flag) {
            sp38.unk0 = 0x019000B1;
            sp2C.unk0 = 0x019000B0;
        } else {
            sp38.unk0 = 0x019000C2;
            sp2C.unk0 = 0x019000C3;
        }
        if (((func_8035D3C8_StructBF *)var_v1)->bf1 == 3) {
            ((u16 *)&sp2C)[3] = ((u16 *)&sp38)[3] = ((u16 *)&sp2C)[3] ^ 0x10;
        }
        sp2B = func_80011140(arg1, temp_a1, sp38, 3);
        func_80006214(sp54);
        sp2B += func_80011140((s32)D_8008DA88, sp4C, sp2C, 3);
        func_8035DD80(sp54, 1);
        func_80006214(arg0);
        if (sp2B == 2) {
            func_800058DC(arg0, func_8035D660);
        }
    }
}
#undef func_8035D660

extern u8 D_801BCC21;

typedef struct func_8035D660_Struct {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x30 - 4];
    u32 p0 : 1;
    u32 m30 : 2;
    u32 p1 : 6;
    u32 c30 : 2;
    u32 p2 : 5;
    u16 f32 : 3;
    u16 r32 : 13;
    u8 pad34[4];
    u32 q0 : 1;
    u32 m38 : 2;
    u32 flag38 : 1;
    u32 q2 : 28;
    u8 pad3C[0x2D8 - 0x3C];
    u8 unk2D8;
    u8 pad2D9;
    u8 unk2DA;
} func_8035D660_Struct;

typedef struct func_8035D660_Vec {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8035D660_Vec;

typedef struct func_8035D660_Sub {
    u8 pad0[0x1C];
    func_8035D660_Vec unk1C;
} func_8035D660_Sub;

typedef struct func_8035D660_Obj {
    u8 pad0[0x5C];
    func_8035D660_Sub *unk5C;
} func_8035D660_Obj;

extern s32 func_80225540(void *);
extern void func_80367914(void *, s32);
extern void D_8035DF80(void);
extern void D_8013A28C(s32, func_8035D660_Vec);
extern u8 D_80385650[];

void func_8035D660(func_8035D660_Obj *arg0, s32 arg1) {
    func_8035D660_Obj *sp4C;
    func_8035D660_Sub *sp48;
    func_8035D660_Sub *sp44;
    func_8035D660_Struct *t0;
    func_8035D660_Struct *a2;
    func_8035D660_Vec *v1;
    func_8035D660_Vec *t1;
    u8 sp33;
    func_8035D660_Vec sp24;

    if (arg0 != (func_8035D660_Obj *)GL->unkDC) {
        sp4C = (func_8035D660_Obj *)GL->unkDC;
    } else {
        sp4C = (func_8035D660_Obj *)GL->unkEC;
    }
    sp48 = arg0->unk5C;
    sp44 = sp4C->unk5C;
    if (arg0 == (func_8035D660_Obj *)GL->unkDC) {
        t0 = (func_8035D660_Struct *)D_801BC03C;
    } else {
        t0 = (func_8035D660_Struct *)D_801BC3D8;
    }
    if (arg0 != (func_8035D660_Obj *)GL->unkDC) {
        a2 = (func_8035D660_Struct *)D_801BC03C;
    } else {
        a2 = (func_8035D660_Struct *)D_801BC3D8;
    }
    if (t0->unk2 <= 0 || t0->m30 != 0) {
        func_802233B0(arg0, arg1);
        func_80006214(sp4C);
        func_8022310C(sp4C, (s32)D_8008DA88);
        func_80006214(arg0);
        return;
    }
    if (a2->unk2 <= 0 || a2->m30 != 0) {
        func_80006214(sp4C);
        func_802233B0(sp4C, D_8008DA88);
        func_80006214(arg0);
        func_8022310C(arg0, arg1);
        return;
    }
    if (GL->unk1031 != 0xF) {
        sp33 = func_80010550(arg1, (s32)sp48);
        func_80006214(sp4C);
        v1 = (func_8035D660_Vec *)func_80010550((u32)D_8008DA88, (s32)sp44);
        sp33 += (s32)v1;
        func_8035DD80(sp4C, 1);
        func_80006214(arg0);
        if (sp33 == 2) {
            func_80225540(sp4C);
            t0->m38 = 0;
            a2->m38 = t0->m38;
            t0->f32 = 0;
            a2->f32 = t0->f32;
            sp24 = *(func_8035D660_Vec *)D_80385650;
            sp48->unk1C = sp24;
            v1 = &sp48->unk1C;
            sp44->unk1C = sp24;
            t1 = &sp44->unk1C;
            if (t0->flag38 == 1) {
                v1->unk0 = 0x019000C9;
                t1->unk0 = 0x019000CA;
            }
            if (t0->c30 == 3) {
                ((u16 *)t1)[3] = ((u16 *)v1)[3] ^= 0x10;
            }
            D_8013A28C(arg1, *v1);
            func_80006214(sp4C);
            D_8013A28C((s32)D_8008DA88, *t1);
            func_80006214(arg0);
            if (D_801BCC21 == 7 && t0->unk2D8 == 2) {
                t0->unk2DA = 1;
                func_80367914(arg0, arg1);
                return;
            }
            func_800058DC(arg0, (void *)D_8035DF80);
            func_800058DC(sp4C, (void *)D_8035DF80);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8035C4C0/func_8035D9FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8035C4C0/func_8035DB6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8035C4C0/D_8038A0E0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/file057/8035C4C0/func_8035DD80.s")


void func_8035DF74(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#define func_802237EC func_802237EC__func_8035DF80
#define func_8022518C func_8022518C__func_8035DF80
#define func_8035E290 func_8035E290__func_8035DF80
#define func_8035E438 func_8035E438__func_8035DF80
#define func_8035EF60 func_8035EF60__func_8035DF80
#define func_8035F994 func_8035F994__func_8035DF80


typedef struct func_8035DF80_StructP {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad4[0x2];
    s16 unk6;
    u8 pad8[0x30 - 0x8];
    union {
        struct {
            u32 b31 : 1;
            u32 b29 : 2;
            u32 b25 : 4;
            u32 pad : 25;
        } w;
        struct {
            u16 pad : 13;
            u16 b16 : 3;
            u16 hi : 3;
            u16 pad2 : 13;
        } h;
    } u30;
    u32 pad34;
    u32 f7 : 1;
    u32 f56 : 2;
    u32 f4 : 1;
    u32 f2 : 2;
    u32 pad38 : 26;
    u8 pad3C[0x328 - 0x3C];
    u8 unk328;
} func_8035DF80_StructP;

typedef struct func_8035DF80_StructT {
    u8 pad0[0x4];
    u16 unk4;
} func_8035DF80_StructT;

typedef struct func_8035DF80_StructObj {
    u8 pad0[0x68];
    func_8035DF80_StructT *unk68;
} func_8035DF80_StructObj;

typedef struct func_8035DF80_StructG {
    u8 pad0[0xDC];
    void *unkDC;
    u8 padE0[0x1031 - 0xE0];
    u8 unk1031;
} func_8035DF80_StructG;

#define b31 u30.w.b31
#define b29 u30.w.b29
#define b25 u30.w.b25
#define b16 u30.h.b16
#define hi u30.h.hi

#define GG ((func_8035DF80_StructG *)D_801BBBF0)
extern void func_8022518C();
extern void func_802237EC();
extern void func_8035E290();
extern void func_8035E438();
extern void func_8035EF60();
extern void func_8035F994();

void func_8035DF80(func_8035DF80_StructObj *arg0, s32 arg1) {
    s32 padA[2];
    func_8035DF80_StructT *t;
    s32 padB[2];
    func_8035DF80_StructP *p;
    func_8035DF80_StructP *q;
    s32 c;

    t = arg0->unk68;
    if (GG->unkDC) {
    }
    if (arg0 == GG->unkDC) {
        p = (func_8035DF80_StructP *)D_801BC03C;
    } else {
        p = (func_8035DF80_StructP *)D_801BC3D8;
    }
    if (arg0 != GG->unkDC) {
        q = (func_8035DF80_StructP *)D_801BC03C;
    } else {
        q = (func_8035DF80_StructP *)D_801BC3D8;
    }
    if (p->unk2 <= 0 || p->b29 != 0) {
        func_802233B0(arg0, arg1);
        return;
    }
    c = GG->unk1031;
    if (c >= 10 && c != 15) {
        func_8022310C(arg0, arg1);
        return;
    }
    if (c == 5 && !p->b31) {
        p->f56 = 0;
        if (!p->f4) {
            func_8022518C(arg0);
        } else {
            p->unk328 = 0;
        }
        if (p->b16 == 5) {
            p->unk328 = 0;
            func_8022397C(arg0);
            return;
        }
        if (p->b25 == 3 || p->b25 == 2) {
            p->b25 = 0;
        }
        if (p->b25 == 4 || p->b25 == 1) {
            func_8035E438(arg0, arg1);
            return;
        }
        if ((t->unk4 & 0x8000) && p->f7 && q->f56 == 0 && (p->f4 != 1 || p->f2 != 2) &&
            p->unk6 >= 0x1F && q->unk2 != 0) {
            p->unk328 = 0;
            func_802237EC(arg0);
            return;
        }
        if ((t->unk4 & 0x10) && q->f56 == 0 && (p->f4 != 1 || p->f2 != 1)) {
            p->unk328 = 0;
            q->f56 = 2;
            p->f56 = q->f56;
            q->hi = 2;
            p->hi = q->hi;
            func_8035EF60((void *)arg0, arg1);
            return;
        }
        if (p->unk328 == 3) {
            func_8035F994(arg0, arg1);
            return;
        }
        func_8035E290(arg0, arg1);
    }
}
#undef b31
#undef b29
#undef b25
#undef b16
#undef hi
#undef GG
#undef func_802237EC
#undef func_8022518C
#undef func_8035E290
#undef func_8035E438
#undef func_8035EF60
#undef func_8035F994

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8035C4C0/func_8035E290.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8035C4C0/func_8035E438.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8035C4C0/func_8035E89C.s")

