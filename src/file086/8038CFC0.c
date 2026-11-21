#include "common.h"

extern void func_800058DC(void *a, void *b);
extern void func_80229500(void *a, void *b, void *c);
extern s8 D_8038DCB0;
extern void func_8038CFFC(s32 arg0, s32 arg1);

void func_8038CFC0(s32 arg0, s32 arg1) {
    extern void func_80229500();
    D_8038DCB0 = 0;
    func_80229500();
    func_800058DC((void *)arg0, (void *)func_8038CFFC);
}

#define D_801BBBF0 D_801BBBF0__func_8038CFFC
#define D_801BBC8C D_801BBC8C__func_8038CFFC
#define D_801BBCAC D_801BBCAC__func_8038CFFC
#define D_801BC03C D_801BC03C__func_8038CFFC
#define D_801BC3D8 D_801BC3D8__func_8038CFFC
#define func_8001EAD0 func_8001EAD0__func_8038CFFC
#define func_8001EB64 func_8001EB64__func_8038CFFC
#define func_8001EF38 func_8001EF38__func_8038CFFC
#define func_8022559C func_8022559C__func_8038CFFC
#define func_80228C20 func_80228C20__func_8038CFFC
#define func_80228D90 func_80228D90__func_8038CFFC
#define func_80228E5C func_80228E5C__func_8038CFFC
#define func_80228FD0 func_80228FD0__func_8038CFFC
#define func_80229260 func_80229260__func_8038CFFC
#define func_802292D0 func_802292D0__func_8038CFFC
#define func_8038D9A8_StructG func_8038D9A8_StructG__func_8038CFFC
typedef struct func_8038D9A8_StructG {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0x1031 - 0xE0];
    u8 unk1031;
} func_8038D9A8_StructG;
extern func_8038D9A8_StructG D_801BBBF0;
extern u8 D_801BC03C;
extern u8 D_801BC3D8;


struct func_8038CFFC_StructD2 { u8 pad0[0x1C]; s32 unk1C; };
struct func_8038CFFC_StructD { u8 pad0[0x5C]; struct func_8038CFFC_StructD2 *unk5C; };
struct func_8038CFFC_StructG {
    u8 pad0[0xDC]; s32 unkDC; u8 padE0[0xC]; void *unkEC;
    u8 padF0[0x142]; s16 unk232; u8 pad234[0x218]; u8 unk44C[4];
    u8 pad450[0x740]; f32 unkB90; u8 padB94[0x49D]; u8 unk1031;
};
struct func_8038CFFC_StructP {
    u8 pad0[4]; s16 unk4; s16 unk6; u8 pad8[0x28];
    u32 ba:3; u32 bb:4; u32 bc:2; u32 bd:2; u32 be:2; u32 bf:3;
    u32 bg:6; u32 bh:2; u32 bi:8;
    u8 pad34[4]; u32 c31:1; u32 c30:1; u32 c29:1; u32 c28:1; u32 crest:28;
    u8 pad3C[0x29C]; u8 unk2D8; u8 pad2D9[0x23]; u8 unk2FC;
    u8 pad2FD[0x2B]; u8 unk328; u8 unk329; s16 unk32A;
};
struct func_8038CFFC_StructQ { u8 pad0[2]; s16 unk2; u16 unk4; s16 unk6; s16 unk8; };
struct func_8038CFFC_StructC { u8 pad0[0xC]; s32 unkC; };
struct func_8038CFFC_StructO {
    u8 pad0[0xC]; struct func_8038CFFC_StructC *unkC; u8 pad10[0x80];
    u8 unk90; u8 unk91; u8 unk92; u8 pad93[2]; u8 unk95; u8 pad96[2]; s16 unk98; s16 unk9A;
};
#define G (*(struct func_8038CFFC_StructG *)&D_801BBBF0)
#define A0 ((struct func_8038CFFC_StructO *)arg0)
extern u8 D_801BBC8C;
extern u8 D_801BBCAC;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_8001EF38(f32, f32);
extern u8 func_8022559C(s32, void *);
extern s32 func_80228C20(void *);
extern s32 func_80228D90(void *, void *);
extern void func_80228E5C(void *, void *, s32);
extern void func_80228FD0(void *, void *, s32);
extern s32 func_80229260(void *, void *, void *, s32);
extern void func_802292D0(void *, void *);

void func_8038CFFC(s32 arg0, s32 arg1) {
    struct func_8038CFFC_StructAngles { s16 sp3C; s16 sp3E; } angles;
    struct func_8038CFFC_StructOutput { u8 pad[4]; struct func_8038CFFC_StructQ *ptr; } output;
#define sp38 output.ptr
    struct func_8038CFFC_StructP *a1;
    struct func_8038CFFC_StructP *t1;
    u8 sp2B;
    f32 sp24;

    s32 a0v;

    angles.sp3C = (s16)(0x2800 - G.unk232) & 0x1FFF;
    sp38 = (A0->unkC->unkC == D_801BBBF0.unkDC) ? (void *)&D_801BBC8C : (void *)&D_801BBCAC;
    if (A0->unkC->unkC == D_801BBBF0.unkDC) {
        a1 = (void *)&D_801BC03C;
    } else {
        a1 = (void *)&D_801BC3D8;
    }
    if (A0->unkC->unkC == D_801BBBF0.unkDC) {
        t1 = (void *)&D_801BC3D8;
    } else {
        t1 = (void *)&D_801BC03C;
    }
    if ((u8 *)t1 == G.unk44C) {
        a0v = ((struct func_8038CFFC_StructD *)D_801BBBF0.unkDC)->unk5C->unk1C;
    } else {
        a0v = ((struct func_8038CFFC_StructD *)G.unkEC)->unk5C->unk1C;
    }
    sp2B = func_8022559C(a0v, a1);
    if ((A0->unk91 == 1) && (D_801BBBF0.unk1031 == 7)) {
        A0->unk91 = 2;
    }
    if ((a1->bd != 0) && (a1->bb != 1)) {
        if ((D_801BBBF0.unk1031 >= 7) && (D_801BBBF0.unk1031 != 0xF)) {
            A0->unk98 = 0;
            A0->unk95 = *((u8 *)arg0 + 0x99);
            A0->unk92 = *((u8 *)arg0 + 0x99);
        }
        if ((D_801BBBF0.unk1031 == 5) && !a1->bf && (func_80229260(A0, a1, sp38, 4) == 0)) {
            f64 fv0 = (f64)G.unkB90;
            if ((fv0 < 20.0) || (A0->unk95 == 1) || (a1->c31 != 0)) {
                if (A0->unk95 == 0) {
                    A0->unk95 = A0->unk92 = 1;
                    return;
                }
                if (fv0 > 25.0) {
                    A0->unk95 = 0;
                    A0->unk92 = 0;
                    A0->unk98 = 0x1E;
                    return;
                }
                if ((t1->be != 0) || (t1->bb == 2)) {
                    if (a1->unk6 >= 0x64) {
                        sp38->unk4 = 0x8000;
                    }
                } else {
                    if (A0->unk91 == 2) {
                        A0->unk92 = 4;
                    }
                    if (A0->unk92 == 1) {
                        if (a1->c31 != 0) {
                            A0->unk92 = 3;
                            A0->unk90 = 0;
                            return;
                        }
                        if (1 == (a1->unk2FC + (u8)D_8038DCB0) % 3) {
                            if (a1->unk6 >= 0x64) {
                                sp38->unk4 = 0x10;
                                A0->unk90 = 0;
                                A0->unk92 = 3;
                                return;
                            }
                            func_80228FD0(A0, sp38, 4);
                            return;
                        }
                        if (2 == (a1->unk2FC + (u8)D_8038DCB0) % 3) {
                            if (a1->unk6 >= 0x64) {
                                sp38->unk4 = 0x10;
                                A0->unk90 = 0;
                                A0->unk92 = 5;
                                return;
                            }
                            func_80228FD0(A0, sp38, 4);
                            return;
                        }
                        if (a1->unk6 >= 0x47) {
                            func_802292D0(sp38, a1);
                            A0->unk91 = 1;
                            A0->unk92 = 2;
                            return;
                        }
                        func_80228E5C(A0, sp38, 4);
                        return;
                    }
                    if (A0->unk92 == 2) {
                        if (a1->c31 != 0) {
                            A0->unk92 = 3;
                            A0->unk90 = 0;
                        }
                        if (a1->bh == 2) {
                            A0->unk92 = 4;
                        }
                        if (a1->bh == 0) {
                            A0->unk92 = 1;
                        }
                    } else if (A0->unk92 == 3) {
                        if (a1->c31 != 0) {
                            a0v = A0->unk90++ >= 0x1F;
                            if (a0v) {
                                A0->unk92 = 4;
                                A0->unk90 = 0;
                                return;
                            }
                        }
                        if (a1->c31 == 0) {
                            A0->unk92 = 1;
                            *(u8 *)&D_8038DCB0 += 1;
                        }
                    } else {
                        if (A0->unk92 == 4) {
                            if (((a1->unk6 >= 0x64) && (func_80228D90(A0, a1) != 0) && (a1->unk2D8 != 0xA)) || ((a1->unk6 == a1->unk4) && (a1->unk2D8 == 0xA))) {
                                a1->bh = 0;
                                sp38->unk4 = 0x8000;
                                A0->unk91 = 0;
                                return;
                            }
                            func_80228FD0(A0, sp38, 4);
                            return;
                        }
                        if (A0->unk92 == 5) {
                            A0->unk90 = A0->unk90 + 1;
                            a1->unk328 = 3;
                            a1->unk329 = 0;
                            sp24 = (f32)((f64)(func_8001EB64((s16)(func_80228C20(A0) + 0x800)) * 80.0f) / 20.0);
                            a1->unk32A = (s16)(func_8001EF38(sp24, (f32)((f64)(func_8001EAD0((s16)(func_80228C20(A0) + 0x800)) * 80.0f) / 20.0)) - angles.sp3C) & 0x1FFF;
                            if (a1->c31 && a1->c28) {
                                A0->unk92 = 4;
                            }
                            if (!a1->c31) {
                                A0->unk92 = 1;
                                *(u8 *)&D_8038DCB0 += 1;
                            }
                        }
                    }
                }
            } else {
                if (A0->unk91 == 1) {
                    A0->unk91 = 2;
                }
                if (a1->bh == 2) {
                    a1->bh = 0;
                }
                if (A0->unk92 != 0x63) {
                    if (A0->unk98 == 0) {
                        angles.sp3E = (s16)(func_80228C20(A0) + angles.sp3C) & 0x1FFF;
                        if (G.unkB90 > 60.0f) {
                            A0->unk9A = 0x1E;
                        }
                        a0v = A0->unk9A-- > 0;
                        if (a0v) {
                            sp38->unk2 = 0x2000;
                            sp38->unk6 = (s32)(-func_8001EB64((s16)(s32)angles.sp3E) * 40.0f);
                            sp38->unk8 = (s32)(func_8001EAD0(angles.sp3E) * 40.0f);
                            return;
                        }
                        if ((sp2B >= 0x15) || (G.unkB90 > 20.0f)) {
                            sp38->unk6 = (s32)(-func_8001EB64((s16)(s32)angles.sp3E) * 80.0f);
                            sp38->unk8 = (s32)(func_8001EAD0(angles.sp3E) * 80.0f);
                            return;
                        }
                        sp38->unk6 = (s32)(-func_8001EB64((s16)(s32)angles.sp3E) * 40.0f);
                        sp38->unk8 = (s32)(func_8001EAD0(angles.sp3E) * 40.0f);
                        return;
                    } else {
                        A0->unk98 = A0->unk98 - 1;
                    }
                }
            }
        }
    }
}
#undef G
#undef A0
#undef sp38
#undef D_801BBBF0
#undef D_801BBC8C
#undef D_801BBCAC
#undef D_801BC03C
#undef D_801BC3D8
#undef func_8001EAD0
#undef func_8001EB64
#undef func_8001EF38
#undef func_8022559C
#undef func_80228C20
#undef func_80228D90
#undef func_80228E5C
#undef func_80228FD0
#undef func_80229260
#undef func_802292D0
#undef func_8038D9A8_StructG


typedef struct func_8038D7EC_StructA {
    u8 pad0[0x9A];
    s16 unk9A;
    u8 pad9C[4];
    u8 unkA0;
    u8 unkA1;
    u8 unkA2;
} func_8038D7EC_StructA;

typedef struct func_8038D7EC_StructB {
    s16 unk0;
    s16 unk2;
    u8 pad4[0x34];
    u32 unk38;
    u8 pad3C[0x29C];
    u8 unk2D8;
    u8 unk2D9;
} func_8038D7EC_StructB;

typedef struct func_8038D7EC_StructC {
    u8 pad0[0x30];
    u32 unk30;
} func_8038D7EC_StructC;

extern void func_80229404(void *);
extern void func_80229CE0(void *, void *, s32);
extern s32 func_8022B640(s32);

void func_8038D7EC(func_8038D7EC_StructA *arg0, func_8038D7EC_StructB *arg1, func_8038D7EC_StructC *arg2) {
    if (((arg2->unk30 << 0xB) >> 0x1E) != 0) {
        func_80229404(arg1);
        arg0->unk9A = 8;
    } else if ((arg1->unk38 >> 0x1F) != 0) {
        arg1->unk2D8 = 2;
        arg0->unk9A = arg0->unk9A | 2;
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    } else if ((arg1->unk2 < (arg1->unk0 / 5)) && (arg0->unkA0 != 0)) {
        arg1->unk2D8 = 0xB;
        arg1->unk2D9 = 1;
        arg0->unkA0 = arg0->unkA0 - 1;
        arg0->unk9A = arg0->unk9A | 0x20;
    } else {
        if (func_8022B640(2) != 0) {
            arg1->unk2D8 = 0;
        } else {
            arg1->unk2D8 = 1;
        }
        func_80229CE0(arg0, arg1, 1);
    }
    arg0->unkA1 = arg1->unk2D8;
    arg0->unkA2 = arg1->unk2D9;
}


typedef struct func_8038D918_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x90];
    u8 unkA0;
} func_8038D918_Struct;

extern s32 D_801BBCCC;
extern u8 D_801BC03C;
extern u8 D_801BC3D8;
extern void func_8038D9A8();

void func_8038D918(func_8038D918_Struct *arg0, void *arg1) {
    void *var_a1;
    void *var_a2;

    if (D_801BBCCC == arg0->unkC) {
        var_a1 = &D_801BC03C;
    } else {
        var_a1 = &D_801BC3D8;
    }
    if (D_801BBCCC == arg0->unkC) {
        var_a2 = &D_801BC3D8;
    } else {
        var_a2 = &D_801BC03C;
    }
    func_80229500(arg0, var_a1, var_a2);
    arg0->unkA0 = 5;
    func_8038D7EC(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038D9A8);
}

#define D_801BBBF0 D_801BBBF0__func_8038D9A8
#define D_8038D9A8 D_8038D9A8__func_8038D9A8
#define func_8022AB58 func_8022AB58__func_8038D9A8
#define func_8022B3E0 func_8022B3E0__func_8038D9A8

typedef struct func_8038D9A8_StructArg {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x81];
    u8 unk91;
    u8 pad92[8];
    s16 unk9A;
    u8 pad9C[4];
    u8 unkA0;
    u8 padA1[7];
    u8 unkA8;
    u8 padA9[7];
    void *unkB0;
} func_8038D9A8_StructArg;

typedef struct func_8038D9A8_StructA1 {
    s16 unk0;
    s16 unk2;
    u8 pad4[0x2C];
    u16 unk30;
    u8 pad32[6];
    u32 unk38_31 : 1;
    u32 unk38_29 : 2;
    u32 unk38_28 : 1;
    u32 unk38_rest : 28;
} func_8038D9A8_StructA1;

typedef struct func_8038D9A8_StructA3 {
    u8 pad0[0x30];
    u32 unk30_0 : 3;
    u32 unk30_3 : 4;
    u32 unk30_7 : 4;
    u32 unk30_11 : 2;
    u32 unk30_rest : 19;
} func_8038D9A8_StructA3;

typedef struct func_8038D9A8_StructG {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0x1031 - 0xE0];
    u8 unk1031;
} func_8038D9A8_StructG;

extern func_8038D9A8_StructG D_801BBBF0;
extern s32 func_8022AB58(void *, void *);
extern void func_8022B3E0();
extern u8 D_8038D9A8[];

void func_8038D9A8(func_8038D9A8_StructArg *arg0, s32 arg1) {
    func_8038D9A8_StructA1 *var_a1;
    func_8038D9A8_StructA3 *var_a3;

    var_a1 = (D_801BBBF0.unkDC == arg0->unkC) ? (func_8038D9A8_StructA1 *)&D_801BC03C : (func_8038D9A8_StructA1 *)&D_801BC3D8;
    var_a3 = (D_801BBBF0.unkDC == arg0->unkC) ? (func_8038D9A8_StructA3 *)&D_801BC3D8 : (func_8038D9A8_StructA3 *)&D_801BC03C;
    if (arg0->unkA8 == 2) {
        func_8038D7EC((void *)arg0, (void *)var_a1, (void *)var_a3);
        arg0->unkA8 = 0;
        return;
    }
    if ((var_a1->unk30 & 7) || (D_801BBBF0.unk1031 == 6)) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = D_8038D9A8;
        func_800058DC(arg0, func_8022B3E0);
        return;
    }
    if (func_8022AB58(arg0, var_a1) != 0) {
        arg0->unk91 = 0;
        func_8038D7EC((void *)arg0, (void *)var_a1, (void *)var_a3);
        return;
    }
    if (var_a3->unk30_11 != 0 || var_a3->unk30_3 == 2) {
        func_8038D7EC((void *)arg0, (void *)var_a1, (void *)var_a3);
        return;
    }
    if (var_a3->unk30_11 == 0 && var_a3->unk30_3 != 2) {
        if (arg0->unk9A & 8) {
            arg0->unk9A ^= 8;
            func_8038D7EC((void *)arg0, (void *)var_a1, (void *)var_a3);
            return;
        }
    }
    if (var_a1->unk38_31 && !var_a1->unk38_28 && !(arg0->unk9A & 2)) {
        func_8038D7EC((void *)arg0, (void *)var_a1, (void *)var_a3);
        return;
    }
    if (var_a1->unk38_31 && var_a1->unk38_28 && !(arg0->unk9A & 4)) {
        func_8038D7EC((void *)arg0, (void *)var_a1, (void *)var_a3);
        return;
    }
    if (!var_a1->unk38_31 && (arg0->unk9A & 6)) {
        arg0->unk9A = 0;
        func_8038D7EC((void *)arg0, (void *)var_a1, (void *)var_a3);
        return;
    }
    if (var_a1->unk2 < var_a1->unk0 / 5 && arg0->unkA0 != 0 && !(arg0->unk9A & 0x20)) {
        func_8038D7EC((void *)arg0, (void *)var_a1, (void *)var_a3);
    }
}
#undef D_801BBBF0
#undef D_8038D9A8
#undef func_8022AB58
#undef func_8022B3E0

void *func_8022A834(s32 arg0, struct func_8022A834_Struct *arg1);

void func_8038DBF4(s32 arg0, struct func_8022A834_Struct *arg1) {
    func_8022A834(arg0, arg1);
}

