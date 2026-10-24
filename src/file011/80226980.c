#include "common.h"


extern u8 D_802407DC[];

s32 func_80226980(s32 arg0) {
    s32 *p;

    p = &arg0;
    arg0 &= 0xFF;
    if (D_802407DC[arg0] != 0) {
        return 1;
    }
    return 0;
}


extern s8 D_8023C920;

void func_802269B0(s32 arg0) {
    s32 *p = &arg0;
    D_8023C920 = arg0;
}



u8 func_802269C0(void) {
    return D_8023C920;
}


extern u8 D_802407DA;

u8 func_802269CC(void) {
    return D_802407DA;
}


s32 func_80126944();                                /* extern */
extern u16 D_801BBC1C;

void func_802269D8(void) {
    if (func_80126944() == 1) {
        D_802407DA = 0;
    }
    if ((D_801BBC1C == 0xA) || (D_801BBC1C == 0xB)) {
        D_802407DA = 1;
    }
}


struct func_80226A2C_StructState {
    u8 pad[0x1E];
    u8 start;
    u8 end;
};

struct func_80226A2C_StructEntry {
    u8 pad[0x22];
    u8 value;
};

extern struct func_8022811C_Glob D_801BEC68;

#define STATE ((struct func_80226A2C_StructState *)&D_801BEC68)

void func_80226A2C(s32 arg0) {
    u8 i;

    for (i = STATE->start; i < STATE->end; i++) {
        ((struct func_80226A2C_StructEntry **)arg0)[i]->value = func_802269CC();
    }
}

extern u8 D_801BBBF0[];

extern u8 func_80006214(s32);
extern void func_801451C0(void *, s32);
extern void func_80145310(void *, s32, s32);
extern s32 func_80146178(s32, u8 *, s16, s32, s32, s32, s32, s32, s32, s32, s32);
extern s32 func_80146208(s32, u8 *, s32, s16, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_801465A0(s32, s32, u16, s32, s32);
extern s32 func_80146894(s32, s32, u8 *, s32, f32, s32);
extern f32 D_8023F090;

struct func_80226AA4_Struct { u8 pad[0x28]; s16 unk28; };

u8 func_80226AA4(void *arg0p, s32 arg1p, s8 *arg2p) {
#define arg0 ((s32)arg0p)
#define arg1 ((s32 *)arg1p)
#define arg2 ((u8 *)arg2p)
#define g ((u8 *)&D_801BEC68)
#define O(x) ((struct func_80226AA4_Struct *)(x))
    u32 s1;
#define k2 s1
#define k3 s1
#define k4 s1
    u8 s2;
#define t s1
#define t2 s1
    s8 i;

    s2 = 0;
    g[0] = *arg2;
    for (i = 0; i < 3; i++) {
        s1 = func_80006214(arg0) & 0xFF;
        if (func_80147598() != 0) {
            s2 += (func_80146208(arg0, arg2, 0x66, (s16)((i << 6) + 0x144), 0x17, 0x40, 0x20, 0, 0, 0xFF, 0x20C, i + 2));
        } else {
            s2 += (func_80146208(arg0, arg2, 0x66, (s16)((i << 6) + 0x144), 0x17, 0x40, 0x20, 0, 0, 0xFF, 0x20A, i));
        }
        func_80145310((void *)arg1[s1], 1, 0);
    }
    g[5] = *arg2;
    s2 += (func_80146178(arg0, arg2, 0x16C, 0x22, 0x50, 4, 2, 0, 0, 0xFF, 0x80));
    g[4] = *arg2;
    s2 += (func_80146208(arg0, arg2, 0x66, 0x16C, 0x22, 0x20, 4, 0, 0, 0xFF, 0x209, 4));
    func_80145310((void *)arg1[g[4]], 5, 3);
    g[1] = *arg2;
    s2 += (func_80146178(arg0, arg2, 0x16C, 0x18, 0x77, 3, 2, 0xFA, 0x14, 0xA, 0xA0));
    g[2] = *arg2;
    s2 += (func_80146178(arg0, arg2, 0x16C, 0x18, 0x77, 3, 2, 0x80, 0x80, 0, 0x80));
    i = 0;
    g[0x1C] = *arg2;
    do {
        t = func_80146178(arg0, arg2, (s16)(i * 0x1E + 0x16C), 0x1C, 0x1C, 2, 0, 0, 0, 0x80, 0xFF);
        i += 1;
        s2 = (s2 + t) & 0xFF;
    } while (i < 4);
    i = 0;
    g[0x1A] = *arg2;
    do {
        t = func_80146178(arg0, arg2, (s16)(i * 0x1E + 0x16C), 0x1C, 0x1C, 2, 0, 0xFF, 0, 0, 0xFF);
        i += 1;
        s2 = (s2 + t) & 0xFF;
    } while (i < 4);
    if (func_80147598() == 0) {
        g[6] = *arg2;
        func_801465A0(arg0, arg1p, *(u16 *)(D_801BBBF0 + 0x44E), 0x193, 0x2D);
        *arg2 = *arg2 + 4;
        g[7] = *arg2;
        func_801465A0(arg0, arg1p, *(u16 *)(D_801BBBF0 + 0x44C), 0x1BB, 0x2D);
        *arg2 += 4;
    } else {
    }
    if (func_80147598() != 0) {
        g[0xA] = *arg2;
        k2 = func_80006214(arg0) & 0xFF;
        s2 += (func_80146208(arg0, arg2, 0x26, 0x147, 0x13, 0x20, 0x20, 0, 0, 0xFF, 0x209, 0));
        O(arg1[k2])->unk28 = 0x800;
        func_801451C0((void *)arg1[k2], 0);
        g[0xB] = *arg2;
        s2 += (func_80146894(arg0, 1, arg2, 0x43AB0000, 35.0f, 0xB));
        g[0xC] = *arg2;
        s2 += (func_80146208(arg0, arg2, 4, 0x147, 0x13, 0x20, 0x20, 0, 0, 0xFF, 0x209, 2));
    }
    i = 0;
    g[0x1E] = *arg2;
    g[0xD] = *arg2;
    do {
        k3 = func_80006214(arg0) & 0xFF;
        s2 += (func_80146208(arg0, arg2, 0x66, (s16)((i << 6) - 0xC4), 0xB9, 0x40, 0x20, 0, 0, 0xFF, 0x20C, i + 5));
        func_80145310((void *)arg1[k3], 1, 0);
        i += 1;
    } while (i < 3);
    g[0x12] = *arg2;
    s2 += (func_80146178(arg0, arg2, -0x7C, 0xCA, 0x50, 4, 2, 0, 0, 0xFF, 0x80));
    g[0x11] = *arg2;
    s2 += (func_80146208(arg0, arg2, 0xE6, -0x7C, 0xCA, 0x20, 4, 0x20, 0, 0xFF, 0x209, 4));
    func_80145310((void *)arg1[g[0x11]], 5, 3);
    g[0xE] = *arg2;
    s2 += (func_80146178(arg0, arg2, -0xA3, 0xD2, 0x77, 3, 2, 0xFA, 0x14, 0xA, 0xA0));
    g[0xF] = *arg2;
    s2 += (func_80146178(arg0, arg2, -0xA3, 0xD2, 0x77, 3, 2, 0x80, 0x80, 0, 0x80));
    i = 0;
    g[0x1D] = *arg2;
    do {
        t2 = func_80146178(arg0, arg2, (s16)(-0x48 - i * 0x1E), 0xD6, 0x1C, 2, 0, 0, 0, 0x80, 0xFF);
        i += 1;
        s2 = (s2 + t2) & 0xFF;
    } while (i < 4);
    i = 0;
    g[0x1B] = *arg2;
    do {
        t2 = func_80146178(arg0, arg2, (s16)(-0x48 - i * 0x1E), 0xD6, 0x1C, 2, 0, 0xFF, 0, 0, 0xFF);
        i += 1;
        s2 = (s2 + t2) & 0xFF;
    } while (i < 4);
    g[0x17] = *arg2;
    k4 = func_80006214(arg0) & 0xFF;
    s2 += (func_80146208(arg0, arg2, 0x26, -0x27, 0xBB, 0x20, 0x20, 0, 0, 0xFF, 0x209, 0));
    O(arg1[k4])->unk28 = 0x800;
    func_801451C0((void *)arg1[k4], 0);
    g[0x18] = *arg2;
    s2 += (func_80146894(arg0, 1, arg2, 0xC1C40000, D_8023F090, 0x18));
    g[0x19] = *arg2;
    s2 += (func_80146208(arg0, arg2, 4, -0x27, 0xBB, 0x20, 0x20, 0, 0, 0xFF, 0x209, 2));
    g[0x1F] = *arg2;
    func_80006214(arg0);
    return s2;
#undef arg0
#undef arg1
#undef arg2
#undef g
#undef O
#undef k2
#undef k3
#undef k4
#undef t
#undef t2
}

#define func_801451C0 func_801451C0__func_80227484

struct func_80227484_Struct2 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    u8 pad[0x2E];
    f32 unk34;
};
struct func_80227484_Struct1 {
    u8 pad[0x22];
    u8 unk22;
    u8 pad2[0xD];
    struct func_80227484_Struct2 *unk30;
};
struct func_80227484_Struct3 {
    u8 pad[8];
    s16 unk8;
    s16 unkA;
    u8 pad2[0x36];
    s16 unk42;
    u8 pad3[6];
    s16 unk4A;
};
struct func_80227484_List {
    struct func_80227484_Struct1 *e[1];
};

extern void func_801451C0();
extern void func_801453CC(void *, s32, s32, s32, s32, s32, s32);
extern u8 D_801BCC21;

void func_80227484(struct func_80227484_List *arg0, struct func_80227484_Struct3 *arg1, s8 arg2) {
    u8 idx;
    u8 sp4E;
    s16 c;
    s16 a;
    s16 b;
    u8 r;
    struct func_80227484_Struct1 **s0;
    struct func_80227484_Struct1 **v1;

    a = arg1->unkA;
    b = arg1->unk4A;
    if (arg2 == 0) {
        idx = ((u8 *)&D_801BEC68)[4];
        sp4E = ((u8 *)&D_801BEC68)[5];
    } else {
        idx = ((u8 *)&D_801BEC68)[0x11];
        sp4E = ((u8 *)&D_801BEC68)[0x12];
    }
    if (a < b && arg1->unk42 > 0) {
        arg1->unk4A = a;
    }
    if (D_801BCC21 != 5 && a < b) {
        s0 = &arg0->e[idx];
        func_801453CC(*s0, 0x100, (arg2 + 2) & 0xFF, 0x14, 0xE, 0x14, 0xE);
    } else if (a < b) {
        s0 = &arg0->e[idx];
        func_80145310(*s0, 0x14, 0x14);
    } else {
        s0 = &arg0->e[idx];
        func_801451C0(*s0, 0x14);
        func_801453CC(*s0, 0x100, (arg2 + 2) & 0xFF, 0x22, 0x22, 0x14, 3);
    }
    if (arg2 == 0) {
        v1 = &arg0->e[sp4E];
        (*v1)->unk22 = 1;
        (*s0)->unk22 = (*v1)->unk22;
    } else {
        r = func_802269CC();
        v1 = &arg0->e[sp4E];
        (*v1)->unk22 = r;
        (*s0)->unk22 = r;
    }
    c = (s32)(((f32)arg1->unkA / (f32)arg1->unk8) * 80.0f);
    (*s0)->unk30->unk34 = (f32)c / 32;
    a = (s32)(((f32)arg1->unk4A / (f32)arg1->unk8) * 80.0f);
    (*v1)->unk30->unk4 = a - c;
    (*v1)->unk30->unk0 = c + 0x40;
    func_801451C0(*v1, 0x15, c);
    if (arg2 == 1) {
        (*s0)->unk30->unk0 = 0x100 - c;
        (*v1)->unk30->unk0 = (*s0)->unk30->unk0 - (*v1)->unk30->unk4;
    }
}
#undef func_801451C0


struct func_80227750_Inner {
    u8 pad[8];
    u8 unk8;
    u8 unk9;
    u8 unkA;
};

struct func_80227750_Outer {
    u8 pad[0x30];
    struct func_80227750_Inner *unk30;
};

extern s8 func_8012C6B4(s32 arg0);

void func_80227750(struct func_80227750_Outer *arg0) {
    struct func_80227750_Inner *sp1C;

    sp1C = arg0->unk30;
    sp1C->unk8 = func_8012C6B4(0xFF);
    sp1C->unk9 = func_8012C6B4(0xFF);
    sp1C->unkA = func_8012C6B4(0xFF);
}

#define D_801BEC60 D_801BEC60__func_802277A0
#define func_80228ABC func_80228ABC__func_802277A0
#define func_80228ABC_Struct func_80228ABC_Struct__func_802277A0
typedef struct func_80228ABC_Struct { u8 pad0[0x24]; s32 u24; u8 pad[0x6C]; u16 u94; u16 u96; } func_80228ABC_Struct;
extern void func_80228ABC(func_80228ABC_Struct *arg0, u8 *arg1);
extern f32 D_801BEC60[];
extern u8 D_802407C8[];
#define LP2(a, b) a##b
#define LP(a, b) LP2(a, b)
#define func_80228ABC LP(fA, __LINE__)
#undef func_80228ABC

typedef struct func_802277A0_Struct {
    u8 pad0[4];
    s16 unk4;
    u8 pad6[0x46];
    s16 unk4C;
} func_802277A0_Struct;

typedef struct func_802277A0_Ent {
    u8 pad[0x22];
    u8 unk22;
} func_802277A0_Ent;

extern void func_80020744(s32);
extern u8 D_802407D0[][5];
#define T2 ((u8 (*)[4])D_802407C8)

void func_802277A0(u8 *arg0, func_802277A0_Ent **arg1, func_802277A0_Struct *arg2) {
    s32 s7;
    u8 s5;
    u8 *sp54;
    u8 *sp50;
    u16 *sp4C;
    s8 i;

    if (arg2 == (func_802277A0_Struct *)(D_801BBBF0 + 0x44C)) {
        s7 = ((u8 *)&D_801BEC60)[0x22];
        sp54 = arg0 + 0x98;
        sp50 = arg0 + 0x9A;
        sp4C = (u16 *)(arg0 + 0x94);
        s5 = 0;
    } else {
        s7 = ((u8 *)&D_801BEC60)[0x23];
        sp54 = arg0 + 0x99;
        sp50 = arg0 + 0x9B;
        sp4C = (u16 *)(arg0 + 0x96);
        s5 = 1;
    }
    for (i = 0; i < 5; i++) {
    if (arg2->unk4C >= i * 0x64 + 0x64) {
        if (D_802407D0[s5][i] == 0) {
            if (s5 == 0) {
                func_80020744(0x3BE);
            } else if (s5 == 1 && (D_801BBC1C == 0xA || D_801BBC1C == 0xB)) {
                func_80020744(0x3BE);
            }
            D_802407D0[s5][i] = 1;
        }
    } else {
        D_802407D0[s5][i] = 0;
    }
    }
    for (i = 0; i < 4; i++) {
        if (i * 0x64 + 0x64 < arg2->unk4C) {
            if (T2[s5][i] == 0) {
                *sp4C = 0;
                *sp54 = 1;
                *sp50 = i;
            }
            T2[s5][i] = 1;
            if (arg2->unk4C < arg2->unk4) {
                if (s5 == 0) {
                    (arg1 + s7)[i]->unk22 = 1;
                } else {
                    (arg1 + s7)[i]->unk22 = func_802269CC();
                }
            }
        } else {
            T2[s5][i] = 0;
            (arg1 + s7)[i]->unk22 = 0;
        }
    }
    if (*sp54 == 1) {
        if (*sp4C < 0x28) {
            func_80227750((void *)(arg1 + *sp50)[s7]);
            return;
        }
        if (*sp4C >= 0x28) {
            func_801451C0((arg1 + *sp50)[s7], 3);
            *sp54 = 0;
        }
    }
}
#undef LP2
#undef LP
#undef T2
#undef D_801BEC60
#undef func_80228ABC
#undef func_80228ABC_Struct

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80226980/func_80227A80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80226980/func_80227D44.s")


struct func_8022811C_Inner {
    s16 unk0;
    s16 unk2;
    s16 unk4;
};

struct func_8022811C_Outer {
    u8 pad[0x30];
    struct func_8022811C_Inner *unk30;
};

struct func_8022811C_Glob {
    u8 pad[0xE];
    u8 unkE;
    u8 unkF;
};

extern void func_80227D44(void *arg0, void *arg1, void *arg2);
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];

void func_8022811C(void *arg0, struct func_8022811C_Outer **arg1) {
    struct func_8022811C_Inner *temp_v0;
    struct func_8022811C_Inner *sp18;

    temp_v0 = arg1[D_801BEC68.unkE]->unk30;
    sp18 = arg1[D_801BEC68.unkF]->unk30;
    func_80227D44(arg0, arg1, D_801BC03C);
    func_80227D44(arg0, arg1, D_801BC3D8);
    temp_v0->unk0 = 0x100 - temp_v0->unk4;
    sp18->unk0 = temp_v0->unk0 - sp18->unk4;
}

#define func_80228ABC func_80228ABC__func_802281BC
#define func_80228ABC_Struct func_80228ABC_Struct__func_802281BC
typedef struct func_80228ABC_Struct { u8 pad0[0x24]; s32 u24; u8 pad[0x6C]; u16 u94; u16 u96; } func_80228ABC_Struct;
extern void func_80228ABC(func_80228ABC_Struct *arg0, u8 *arg1);
#define LP(p, l) LQ(p, l)
#define LQ(p, l) p##_##l
#define func_80228ABC LP(fA, __LINE__)
#undef func_80228ABC
extern void func_801470E8(s32 a, s32 b, s32 c, u8 d);
extern u8 B_801BEC68[];

void func_802281BC(s32 arg0, u8 arg1)
{
    func_801470E8(arg0, B_801BEC68[5], 2, arg1);
    func_801470E8(arg0, B_801BEC68[1], 2, arg1);
    func_801470E8(arg0, B_801BEC68[0x1A], 4, arg1);
    func_801470E8(arg0, B_801BEC68[0x1C], 4, arg1);
    func_801470E8(arg0, B_801BEC68[0x12], 2, arg1);
    func_801470E8(arg0, B_801BEC68[0xE], 2, arg1);
    func_801470E8(arg0, B_801BEC68[0x1B], 4, arg1);
    func_801470E8(arg0, B_801BEC68[0x1D], 4, arg1);
}
#undef LP
#undef LQ
#undef func_80228ABC
#undef func_80228ABC_Struct

extern u8 D_801BBBF0[];

extern u8 D_802407C8[];

void func_80228298(void *arg0) {
    u8 i;
    s32 k;

    if (arg0 == D_801BBBF0 + 0x44C) {
        k = 0;
    } else {
        k = 1;
    }
    for (i = 0; i < 4; i++) {
        if (i * 100 + 100 < *(s16 *)((u8 *)arg0 + 6)) {
            (D_802407C8 + k * 4)[i] = 1;
        } else {
            (D_802407C8 + k * 4)[i] = 0;
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80226980/func_80228320.s")


struct func_80228484_Struct { f32 f0; f32 f4; u8 pad[0xB]; u8 u13; u8 pad2[0xC]; u8 u20; };
extern struct func_80228484_Struct D_801BEC60;
extern void func_80002364(s32, s32, s32, s32);
extern void func_80005700(void *);
extern void func_800058DC(void *, void *);
extern void func_80116E80(s32);
extern void func_801170DC(s32);
extern void func_80146AE4(s32);
extern void func_80146AF4(s32);
extern void func_80146BE0(s16, s32);
extern void func_80146CD4(s16, s32);
extern s32 func_80147598();
extern u8 func_80226AA4(void *, s32, s8 *);
extern u8 func_802286D0[];

#define H(o) (*(s16 *)(D_801BBBF0 + (o)))

void func_80228484(u8 *arg0, s32 arg1)
{
  u8 sp2F;
  s8 sp2E;
  s16 sp2C;
  u8 pad[8];
  sp2E = 0;
  func_80002364(0x0F000000, 8, 2, 3);
  *((u16 *) (arg0 + 0x94)) = (*((u16 *) (arg0 + 0x96)) = 0);
  arg0[0x98] = (arg0[0x99] = 0);
  arg0[0x9A] = (arg0[0x9B] = 0);
  func_80228298(D_801BC03C);
  func_80228298(D_801BC3D8);
  arg0[0x90] = 0;
  D_801BEC60.f0 = (f32) (*((s16 *) (D_801BBBF0 + 0x492)));
  D_801BEC60.f4 = (f32) (*((s16 *) (D_801BBBF0 + 0x82E)));
  func_802269B0(0);
  func_802269D8();
  func_80146AF4(0);
  func_80146AE4(0);
  func_80116E80(0x200);
  func_80116E80(0x400);
  func_80116E80(0x800);
  sp2F = func_80226AA4(arg0, arg1, &sp2E);
  func_80226A2C(arg1);
  if (func_80147598() != 0)
  {
    if ((*((s16 *) (D_801BBBF0 + 0x44C))) != 0)
    {
      sp2C = (s16) ((s32) ((((f32) (*((s16 *) (D_801BBBF0 + 0x44E)))) / ((f32) (*((s16 *) (D_801BBBF0 + 0x44C))))) * 8192.0f));
    }
    func_80146CD4(sp2C, 0);
    func_80146BE0(sp2C, ((s32 *) arg1)[D_801BEC60.u13]);
  }
  if ((*((s16 *) (D_801BBBF0 + 0x7E8))) != 0)
  {
    sp2C = (s16) ((s32) ((((f32) (*((s16 *) (D_801BBBF0 + 0x7EA)))) / ((f32) (*((s16 *) (D_801BBBF0 + 0x7E8))))) * 8192.0f));
  }
  func_80146CD4(sp2C, 1);
  func_80146BE0(sp2C, ((s32 *) arg1)[D_801BEC60.u20]);
  *((s16 *) (D_801BBBF0 + 0x494)) = *((s16 *) (D_801BBBF0 + 0x456));
  *((s16 *) (D_801BBBF0 + 0x496)) = *((s16 *) (D_801BBBF0 + 0x494));
  *((s16 *) (D_801BBBF0 + 0x830)) = *((s16 *) (D_801BBBF0 + 0x7F2));
  *((s16 *) (D_801BBBF0 + 0x832)) = *((s16 *) (D_801BBBF0 + 0x830));
  *((s16 *) (D_801BBBF0 + 0x498)) = *((s16 *) (D_801BBBF0 + 0x452));
  *((s16 *) (D_801BBBF0 + 0x834)) = *((s16 *) (D_801BBBF0 + 0x7EE));
  if (sp2F != 0)
  {
    func_80005700(arg0);
    func_801170DC(0x200);
    func_801170DC(0x400);
    return;
  }
  *((s16 *) (arg0 + 0x3C)) = 0;
  func_800058DC(arg0, func_802286D0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80226980/func_802286D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80226980/func_80228710.s")


struct func_80228884_Struct {
    u8 pad[0x90];
    u8 unk90;
    u8 pad91[3];
    u16 unk94;
};
struct func_80228884_Obj {
    u8 pad[0x2A];
    u16 unk2A;
    u8 pad2C[4];
    void *unk30;
};
struct func_80228884_F {
    s16 s0;
    s16 s2;
    f32 f4;
};
extern s16 D_80240760[];
extern s8 D_801BCC25;
#define func_80228ABC func_80228ABC__decl489
extern u8 func_80228ABC[];

void func_80228884(struct func_80228884_Struct *arg0, struct func_80228884_Obj **arg1) {
    s8 i;
    f32 v;
    f32 a;
    struct func_80228884_F *fp;
    s16 *sp;
    s16 s;

    arg0->unk94 = arg0->unk94 + 1;
    for (i = 0; i < ((u8 *)&D_801BEC60)[0x27]; i++) {
        if (arg1[i]->unk2A == 0xC) {
            fp = arg1[i]->unk30;
            a = fp->f4;
            v = (f32)(D_80240760[i] - (s16)(s32)a) / 12.0f;
            if (v != 0.0f) {
                if ((v < 0.0f ? -v : v) < 1.0f) {
                    v /= (v < 0.0f ? -v : v);
                }
            }
            fp->f4 = a * 1.0f + (f32)(s16)(s32)v;
        } else if (arg1[i]->unk2A == 0xD) {
            sp = (s16 *)arg1[i]->unk30;
            s = *sp;
            v = (f32)(D_80240760[i] - s) / 12.0f;
            if (v != 0.0f) {
                if ((v < 0.0f ? -v : v) < 1.0f) {
                    v /= (v < 0.0f ? -v : v);
                }
            }
            *sp = s + (s16)(s32)v;
        }
    }
    if (arg0->unk94 >= 0x3D) {
        arg0->unk90 = 1;
        func_800058DC(arg0, func_80228ABC);
    }
    D_801BCC25 = 0;
}
#undef func_80228ABC

#define D_801BEC60 D_801BEC60__func_80228ABC
extern s32 func_80236BA4();
extern void func_80147148(s32, s32);
extern void func_80228320(u8 *, u8 *);
extern u8 D_801BEC60[];

typedef struct func_80228ABC_Struct { u8 pad0[0x24]; s32 u24; u8 pad[0x6C]; u16 u94; u16 u96; } func_80228ABC_Struct;

void func_80228ABC(func_80228ABC_Struct *arg0, u8 *arg1)
{
  u8 i;
  u8 *p;
  s32 off;
  u8 one;
  u8 *new_var;
  new_var = D_801BEC60;
  arg0->u94 = arg0->u94 + 1;
  arg0->u96 = arg0->u96 + 1;
  func_8022811C(arg0, (void *) arg1);
  if (func_80236BA4() == 0)
  {
    func_80147148(arg0->u24, 0);
    func_802269B0(0);
    return;
  }
  if (func_802269C0() == 0)
  {
    func_80228320(arg1, D_801BC03C);
    func_80228320(arg1, D_801BC3D8);
    p = new_var + 8;
 i = 0; one = 1; do { off = i << 2; (*((u8 **) ((arg1 + (p[0] << 2)) + off)))[0x22] = one; (*((u8 **) ((arg1 + (p[0xD] << 2)) + off)))[0x22] = func_802269CC(); (*((u8 **) ((arg1 + (p[0x17] << 2)) + off)))[0x22] = func_802269CC();
      if (func_80147598() != 0)
      {
        (*((u8 **) ((arg1 + (p[0xA] << 2)) + off)))[0x22] = one;
      }
      i++;
    }
    while (i < 3);
    func_802269B0(1);
  }
}
#undef D_801BEC60

