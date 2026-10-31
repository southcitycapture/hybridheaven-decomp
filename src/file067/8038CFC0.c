#include "common.h"


extern s32 func_800058DC(s32, void *);
extern s32 func_80229500();
extern void func_8038CFF4();

void func_8038CFC0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038CFF4);
}

#define D_801BBBF0 D_801BBBF0__func_8038CFF4
#define D_801BBC8C D_801BBC8C__func_8038CFF4
#define D_801BBCAC D_801BBCAC__func_8038CFF4
#define D_801BC03C D_801BC03C__func_8038CFF4
#define D_801BC3D8 D_801BC3D8__func_8038CFF4
#define func_8001EAD0 func_8001EAD0__func_8038CFF4
#define func_8001EB64 func_8001EB64__func_8038CFF4
#define func_8010843C func_8010843C__func_8038CFF4
#define func_80228C20 func_80228C20__func_8038CFF4
#define func_80228D90 func_80228D90__func_8038CFF4
#define func_80228FD0 func_80228FD0__func_8038CFF4
#define func_802291FC func_802291FC__func_8038CFF4
#define func_802292D0 func_802292D0__func_8038CFF4
#define func_8038DA54_G func_8038DA54_G__func_8038CFF4
typedef struct func_8038DA54_G {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0x1031 - 0xE0];
    u8 unk1031;
} func_8038DA54_G;
extern func_8038DA54_G D_801BBBF0;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];


struct func_8038CFF4_Obj {
    u8 pad0[0xA0];
    u8 unkA0;
};
struct func_8038CFF4_Ent {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
};
struct func_8038CFF4_Self {
    u8 pad0[0xC];
    struct func_8038CFF4_Obj *unkC;
    u8 pad10[0x90 - 0x10];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 pad93[2];
    u8 unk95;
    s16 unk96;
    u8 pad98[2];
    s16 unk9A;
    s32 unk9C;
};
struct func_8038CFF4_Mov {
    s16 unk0;
    s16 unk2;
    u16 unk4;
    s16 unk6;
    s16 unk8;
};
struct func_8038CFF4_Pl {
    s16 unk0;
    s16 unk2;
    u8 pad4[2];
    s16 unk6;
    u8 pad8[0x30 - 8];
    u32 b0 : 3;
    u32 b1 : 4;
    u32 b2 : 2;
    u32 b3 : 2;
    u32 b4 : 2;
    u32 b5 : 3;
    u32 b6 : 6;
    u32 b7 : 2;
    u32 b8 : 8;
    u8 pad34[4];
    u32 c0 : 1;
    u32 c1 : 31;
    u8 pad3C[0x2D8 - 0x3C];
    u8 unk2D8;
};
struct func_8038CFF4_G {
    u8 pad0[0xDC];
    s32 unkDC;
    struct func_8038CFF4_Ent **unkE0;
    u8 pad0E4[0xF0 - 0xE4];
    struct func_8038CFF4_Ent **unkF0;
    u8 pad0F4[0x232 - 0xF4];
    s16 unk232;
    u8 pad234[0xB90 - 0x234];
    f32 unkB90;
    u8 padB94[0x1031 - 0xB94];
    u8 unk1031;
};
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);
extern s16 func_80228C20();
extern s32 func_80228D90();
extern void func_80228FD0();
extern s32 func_802291FC();
extern void func_802292D0();
extern struct func_8038CFF4_Mov D_801BBC8C;
extern struct func_8038CFF4_Mov D_801BBCAC;

#define G ((struct func_8038CFF4_G *)&D_801BBBF0)
#define P ((struct func_8038CFF4_Pl *)var_a1)
#define Q ((struct func_8038CFF4_Pl *)var_t2)

void func_8038CFF4(struct func_8038CFF4_Self *arg0, s32 arg1) {
    s16 sp46;
    s16 sp44;
    struct func_8038CFF4_Mov *sp40;
    struct func_8038CFF4_Ent **sp3C;
    u8 *var_a1;
    u8 *var_t2;
    struct func_8038CFF4_Ent *p;
    s16 sp2E;
    f32 sp28;

    sp44 = (s16)(0x2800 - G->unk232) & 0x1FFF;
    sp40 = (G->unkDC == *(s32 *)((u8 *)arg0->unkC + 0xC)) ? &D_801BBC8C : &D_801BBCAC;
    sp3C = (G->unkDC == *(s32 *)((u8 *)arg0->unkC + 0xC)) ? G->unkE0 : G->unkF0;
    var_a1 = (G->unkDC == *(s32 *)((u8 *)arg0->unkC + 0xC)) ? D_801BC03C : D_801BC3D8;
    var_t2 = (G->unkDC != *(s32 *)((u8 *)arg0->unkC + 0xC)) ? D_801BC03C : D_801BC3D8;
    if (arg0->unk91 == 1 && G->unk1031 == 7) {
        arg0->unk91 = 2;
    }
    if (P->b3 != 0 && P->b1 != 1 && P->b1 != 4) {
        if (G->unk1031 >= 7 && G->unk1031 != 0xF) {
            arg0->unk92 = arg0->unk95 = 0;
        }
        if (G->unk1031 == 5 && !(*(u16 *)(var_a1 + 0x30) & 7) && func_802291FC(arg0, var_a1, sp40, 0x1E) == 0) {
            if ((G->unkB90 < 18.0 || arg0->unk95 == 1) && (P->unk0 / 5 < P->unk2 || arg0->unkC->unkA0 == 0)) {
                if (arg0->unk95 == 0) {
                    arg0->unk95 = 1;
                    arg0->unk92 = 1;
                    return;
                }
                if (Q->b4 != 0 || Q->b1 == 2) {
                    if (P->unk6 >= 0x64) {
                        sp40->unk4 = 0x8000;
                    }
                } else {
                    if (G->unkB90 > 23.0 || (P->unk0 / 5 >= P->unk2 && arg0->unkC->unkA0 != 0)) {
                        arg0->unk95 = 0;
                        arg0->unk92 = 0;
                        return;
                    }
                    if (arg0->unk91 == 2) {
                        arg0->unk91 = 3;
                        arg0->unk92 = 3;
                    }
                    if (arg0->unk92 == 1) {
                        if (P->unk6 >= 0x47) {
                            func_802292D0(sp40, var_a1);
                            arg0->unk91 = 1;
                            arg0->unk92 = 2;
                            return;
                        }
                        func_80228FD0(arg0, sp40, 4);
                        return;
                    }
                    if (arg0->unk92 == 2) {
                        if (P->b7 == 2) {
                            arg0->unk92 = 3;
                        }
                        if (P->b7 == 0) {
                            arg0->unk92 = 1;
                        }
                    } else if (arg0->unk92 == 3) {
                        if (P->b3 != 0 || P->c0 != 0) {
                            if (P->unk6 >= 0x64 && func_80228D90(arg0) != 0) {
                                arg0->unk90 = 0;
                                arg0->unk92 = 4;
                                return;
                            }
                            func_80228FD0(arg0, sp40, 4);
                        }
                    } else if (arg0->unk92 == 4) {
                        if (P->b3 != 0 || P->c0 != 0) {
                            P->b7 = 0;
                            sp40->unk4 = 0x8000;
                            arg0->unk91 = 0;
                            arg0->unk92 = 5;
                        }
                    } else if (arg0->unk92 == 5 && G->unk1031 == 5) {
                        arg0->unk92 = 1;
                    }
                }
            } else {
                if (arg0->unk91 == 1) {
                    arg0->unk91 = 2;
                }
                if (P->b7 == 2) {
                    P->b7 = 0;
                }
                if (P->unk0 / 5 >= P->unk2 && arg0->unkC->unkA0 != 0) {
                    if (P->unk2D8 == 0xB && P->unk6 >= 0x1F && (G->unkB90 > 30.0f || (sp28 = func_8001EB64((s16)(func_80228C20(arg0) + 0x1000) & 0x1FFF), func_8010843C((p = sp3C[0xB])->unk4, p->unk8, p->unkC, sp28 * 20.0f + p->unk4, p->unk8, p->unkC + func_8001EAD0((s16)(func_80228C20(arg0) + 0x1000) & 0x1FFF) * 20.0f) != 0))) {
                        sp40->unk4 = 0x8000;
                        return;
                    }
                    arg0->unk9A = 0;
                    arg0->unk96 = func_80228C20(arg0) + 0x1000;
                    sp46 = (s16)(arg0->unk96 + sp44) & 0x1FFF;
                } else {
                    sp28 = func_8001EB64(func_80228C20(arg0) & 0x1FFF);
                    if (func_8010843C((p = sp3C[0xB])->unk4, p->unk8, p->unkC, sp28 * 20.0f + p->unk4, p->unk8, p->unkC + func_8001EAD0(func_80228C20(arg0) & 0x1FFF) * 20.0f) == 0) {
                        sp2E = func_80228C20(arg0);
                        arg0->unk96 = func_8001EAD0((arg0->unk9C & 0xFF) << 7) * 1024.0f + (f32)sp2E;
                    } else {
                        sp28 = func_8001EB64((s16)(func_80228C20(arg0) + 0x800) & 0x1FFF);
                        if (func_8010843C((p = sp3C[0xB])->unk4, p->unk8, p->unkC, sp28 * 60.0f + p->unk4, p->unk8, p->unkC + func_8001EAD0((s16)(func_80228C20(arg0) + 0x800) & 0x1FFF) * 60.0f) == 0) {
                            arg0->unk96 = func_80228C20(arg0) + 0x800;
                        } else {
                            arg0->unk96 = func_80228C20(arg0) - 0x800;
                        }
                    }
                    sp46 = (s16)(arg0->unk96 + sp44) & 0x1FFF;
                }
                arg0->unk96 = 0;
                if (G->unkB90 > 30.0f) {
                    arg0->unk9A = 0x14;
                }
                if (arg0->unk9A > 0) {
                    arg0->unk9A = arg0->unk9A - 1;
                    sp40->unk2 = 0x2000;
                    sp40->unk6 = -func_8001EB64(sp46) * 40.0f;
                    sp40->unk8 = func_8001EAD0(sp46) * 40.0f;
                    return;
                }
                sp40->unk6 = -func_8001EB64(sp46) * 80.0f;
                sp40->unk8 = func_8001EAD0(sp46) * 80.0f;
            }
        }
    }
}
#undef G
#undef P
#undef Q
#undef D_801BBBF0
#undef D_801BBC8C
#undef D_801BBCAC
#undef D_801BC03C
#undef D_801BC3D8
#undef func_8001EAD0
#undef func_8001EB64
#undef func_8010843C
#undef func_80228C20
#undef func_80228D90
#undef func_80228FD0
#undef func_802291FC
#undef func_802292D0
#undef func_8038DA54_G


typedef struct func_8038D834_StructA {
    u8 pad0[0x92];
    u8 v92;
    u8 v93;
    u8 pad94[6];
    s16 v9A;
    u8 pad9C[4];
    u8 vA0;
    u8 vA1;
    u8 vA2;
} func_8038D834_StructA;

typedef struct func_8038D834_StructB {
    s16 v0;
    s16 v2;
    u8 pad4[0x2D4];
    u8 v2D8;
    u8 v2D9;
} func_8038D834_StructB;

typedef struct func_8038D834_StructC {
    u8 pad0[0x30];
    s32 v30;
} func_8038D834_StructC;

extern void func_80229404(void *);
extern void func_80229CE0(void *, void *, s32);
extern s32 func_8022B640(s32);

void func_8038D834(func_8038D834_StructA *a, func_8038D834_StructB *b, func_8038D834_StructC *c) {
    if (b->v0 / 5 >= b->v2 && a->vA0 != 0) {
        b->v2D8 = 0xB;
        b->v2D9 = 1;
        a->vA0 = a->vA0 - 1;
        a->v9A = 0x20;
    } else if (((u32)(c->v30 << 11) >> 30) != 0) {
        func_80229404(b);
        a->v9A = 8;
    } else if (a->v92 == 0) {
        b->v2D8 = 0;
        func_80229CE0(a, b, func_8022B640(2) & 0xFF);
        a->v93 = a->v92++;
    } else {
        s32 t = a->v92;
        if (a->v92 == 1) {
            b->v2D8 = 1;
            func_80229CE0(a, b, func_8022B640(2) & 0xFF);
            a->v93 = a->v92++;
        } else if (t == 2) {
            b->v2D8 = 0;
            func_80229CE0(a, b, func_8022B640(2) & 0xFF);
            a->v93 = a->v92++;
        } else if (t == 3) {
            b->v2D8 = 1;
            func_80229CE0(a, b, func_8022B640(2) & 0xFF);
            a->v93 = a->v92;
            a->v92 = 0;
        }
    }
    a->vA1 = b->v2D8;
    a->vA2 = b->v2D9;
}


struct func_8038D9D0_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x92 - 0x10];
    u8 unk92;
    u8 unk93;
    u8 pad2[0x9A - 0x94];
    u16 unk9A;
    u8 pad3[0xA0 - 0x9C];
    u8 unkA0;
};

extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern void func_8038DA54();


void func_8038D9D0(struct func_8038D9D0_Struct *arg0, s32 arg1) {
    u8 *var_a1;
    u8 *var_a2;

    if (D_801BBCCC == arg0->unkC) {
        var_a1 = D_801BC03C;
    } else {
        var_a1 = D_801BC3D8;
    }
    if (D_801BBCCC == arg0->unkC) {
        var_a2 = D_801BC3D8;
    } else {
        var_a2 = D_801BC03C;
    }
    arg0->unk92 = 0;
    arg0->unk93 = 0;
    arg0->unk9A = 0;
    arg0->unkA0 = 1;
    func_8038D834(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038DA54);
}

struct func_8038DA54_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x91 - 0x10];
    u8 unk91;
    u8 pad2[0x9A - 0x92];
    s16 unk9A;
    u8 pad3[0xA0 - 0x9C];
    u8 unkA0;
    u8 pad4[0xA8 - 0xA1];
    u8 unkA8;
    u8 pad5[0xAC - 0xA9];
    void *unkAC;
    void *unkB0;
};
struct func_8038DA54_Bits {
    u32 pad : 3;
    u32 b : 4;
    u32 pad2 : 4;
    u32 a : 2;
    u32 rest : 19;
};
typedef struct func_8038DA54_G {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0x1031 - 0xE0];
    u8 unk1031;
} func_8038DA54_G;
extern func_8038DA54_G D_801BBBF0;
extern s32 func_8022AB58();
extern u8 func_8022B3E0[];

extern u8 D_8038DA54[];
#define g (&D_801BBBF0)
void func_8038DA54(struct func_8038DA54_Struct *arg0, s32 arg1) {
    func_8038D834_StructB *a1;
    func_8038D834_StructC *a3;
    s32 d;
    s32 c;

    a1 = (arg0->unkC == g->unkDC) ? (func_8038D834_StructB *)D_801BC03C : (func_8038D834_StructB *)D_801BC3D8;
    a3 = (arg0->unkC == g->unkDC) ? (func_8038D834_StructC *)D_801BC3D8 : (func_8038D834_StructC *)D_801BC03C;
    if (arg0->unkA8 == 2) {
        func_8038D834((func_8038D834_StructA *)arg0, a1, a3);
        arg0->unkA8 = 0;
        return;
    }
    if ((*(u16 *)((u8 *)a1 + 0x30) & 7) || (g->unk1031 == 6)) {
        arg0->unkA8 = 1;
        return;
    }
    if (g->unk1031 == 7) {
        arg0->unkAC = D_8038DA54;
        arg0->unkB0 = D_8038DA54;
        func_800058DC((s32)arg0, func_8022B3E0);
        return;
    }
    if ((a1->v2 < (a1->v0 / 5)) && !(arg0->unk9A & 0x20) && (arg0->unkA0 != 0)) {
        func_8038D834((func_8038D834_StructA *)arg0, a1, a3);
        return;
    }
    if (func_8022AB58(arg0, a1, g) != 0) {
        arg0->unk91 = 0;
        func_8038D834((func_8038D834_StructA *)arg0, a1, a3);
        return;
    }
    if (((struct func_8038DA54_Bits *)&a3->v30)->a != 0 || ((struct func_8038DA54_Bits *)&a3->v30)->b == 2) {
        func_8038D834((func_8038D834_StructA *)arg0, a1, a3);
        return;
    }
    if (((struct func_8038DA54_Bits *)&a3->v30)->a == 0 && ((struct func_8038DA54_Bits *)&a3->v30)->b != 2 && (arg0->unk9A & 8)) {
        func_8038D834((func_8038D834_StructA *)arg0, a1, a3);
        arg0->unk9A ^= 8;
    }
}

typedef struct func_8038DC20_Struct0 { u8 pad[0xA5]; u8 unkA5; } func_8038DC20_Struct0;
typedef struct func_8038DC20_Struct1 { u8 pad0[6]; s16 unk6; u8 pad1[0x32B]; u8 unk333; } func_8038DC20_Struct1;
extern void func_8022A834();
void func_8038DC20(func_8038DC20_Struct0 *arg0, func_8038DC20_Struct1 *arg1) {
    u32 t = arg1->unk333;
    if (t == 0) goto a;
    if (t == 1) goto a;
    if (t != 2) goto end;
    goto b;
a:
    func_8022A834();
    arg1->unk333 = arg1->unk333 + 1;
    goto end;
b:
    if (arg1->unk6 >= 0x64) {
        arg0->unkA5 = 1;
    } else {
        func_8022A834();
    }
    arg1->unk333 = 0;
end:
    return;
}

