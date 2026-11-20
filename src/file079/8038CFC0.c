#include "common.h"


extern s32 func_800058DC(s32, void *);
extern s32 func_80229500();
extern void func_8038CFF4();

void func_8038CFC0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038CFF4);
}

#define D_8001EAD0 D_8001EAD0__func_8038CFF4
#define D_8001EB64 D_8001EB64__func_8038CFF4
#define D_801BBBF0 D_801BBBF0__func_8038CFF4
#define D_801BBC8C D_801BBC8C__func_8038CFF4
#define D_801BBCAC D_801BBCAC__func_8038CFF4
#define D_801BC03C D_801BC03C__func_8038CFF4
#define D_801BC3D8 D_801BC3D8__func_8038CFF4
#define func_8001EF38 func_8001EF38__func_8038CFF4
#define func_80228C20 func_80228C20__func_8038CFF4
#define func_80228D90 func_80228D90__func_8038CFF4
#define func_80228FD0 func_80228FD0__func_8038CFF4
#define func_80229260 func_80229260__func_8038CFF4
#define func_802292D0 func_802292D0__func_8038CFF4
#define func_8038D830_G func_8038D830_G__func_8038CFF4
struct func_8038D830_G {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0x1031 - 0xE0];
    u8 unk1031;
};
extern struct func_8038D830_G D_801BBBF0;
extern u8 D_801BC03C;
extern u8 D_801BC3D8;


extern u8 D_801BBC8C[];
extern u8 D_801BBCAC[];
extern f32 D_8001EAD0(s16);
extern f32 D_8001EB64(s16);
extern s32 func_8001EF38(f32, f32);
extern s32 func_80228C20();
extern s32 func_80228D90();
extern void func_80228FD0();
extern s32 func_80229260();
extern void func_802292D0();

typedef struct func_8038CFF4_StructU {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x83];
    u8 unk93;
} func_8038CFF4_StructU;

typedef struct func_8038CFF4_StructS {
    u8 pad0[4];
    s16 unk4;
    s16 unk6;
    u8 pad8[0x28];
    u32 f30_0:3;
    u32 f30_3:4;
    u32 f30_7:2;
    u32 f30_9:2;
    u32 f30_11:2;
    u32 f30_13:14;
    u32 f30_27:2;
    u32 f30_29:3;
    u8 pad34[4];
    u32 f38_0:1;
    u32 f38_1:2;
    u32 f38_3:1;
    u32 f38_4:28;
    u8 pad3C[8];
    s16 unk44;
    u8 pad46[0x292];
    u8 unk2D8;
    u8 pad2D9[0x39];
    s16 unk312;
    u8 pad314[0x14];
    u8 unk328;
    u8 unk329;
    s16 unk32A;
    u8 pad32C[0x64];
    u8 unk390;
} func_8038CFF4_StructS;

typedef struct func_8038CFF4_StructP {
    u8 pad0[0xC];
    func_8038CFF4_StructU *unkC;
    u8 pad10[0x80];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 pad93[2];
    u8 unk95;
    u8 pad96[2];
    s16 unk98;
} func_8038CFF4_StructP;

typedef struct func_8038CFF4_StructO {
    u8 pad0[2];
    s16 unk2;
    u16 unk4;
    s16 unk6;
    s16 unk8;
} func_8038CFF4_StructO;

#define GG D_801BBBF0
#define G232 (*(s16 *)((u8 *)&D_801BBBF0 + 0x232))
#define GB90 (*(f32 *)((u8 *)&D_801BBBF0 + 0xB90))
#define B32(p) (*((u8 *)(p) + 0x32))
#define B33(p) (*((u8 *)(p) + 0x33))
#define H30(p) (*(u16 *)((u8 *)(p) + 0x30))

#undef B32
#undef B33
#undef D_801BBBF0
#undef D_801BBC8C
#undef D_801BBCAC
#undef D_801BC03C
#undef D_801BC3D8
#undef G232
#undef GB90
#undef GG
#undef H30
#undef func_8001EF38
#undef func_80228C20
#undef func_80228D90
#undef func_80228FD0
#undef func_80229260
#undef func_802292D0
#undef func_8038D830_G
#define D_801BBBF0 D_801BBBF0__func_8038CFF4_f0b380de
#define D_801BBC8C D_801BBC8C__func_8038CFF4_f0b380de
#define D_801BBCAC D_801BBCAC__func_8038CFF4_f0b380de
#define D_801BC03C D_801BC03C__func_8038CFF4_f0b380de
#define D_801BC3D8 D_801BC3D8__func_8038CFF4_f0b380de
#define func_8001EAD0 func_8001EAD0__func_8038CFF4_f0b380de
#define func_8001EB64 func_8001EB64__func_8038CFF4_f0b380de
#define func_8001EF38 func_8001EF38__func_8038CFF4_f0b380de
#define func_80228C20 func_80228C20__func_8038CFF4_f0b380de
#define func_80228D90 func_80228D90__func_8038CFF4_f0b380de
#define func_80228FD0 func_80228FD0__func_8038CFF4_f0b380de
#define func_80229260 func_80229260__func_8038CFF4_f0b380de
#define func_802292D0 func_802292D0__func_8038CFF4_f0b380de
#define func_8038CFF4_StructO func_8038CFF4_StructO__func_8038CFF4_f0b380de
#define func_8038CFF4_StructP func_8038CFF4_StructP__func_8038CFF4_f0b380de
#define func_8038CFF4_StructS func_8038CFF4_StructS__func_8038CFF4_f0b380de
#define func_8038CFF4_StructU func_8038CFF4_StructU__func_8038CFF4_f0b380de
#define func_8038D830_G func_8038D830_G__func_8038CFF4_f0b380de
struct func_8038D830_G {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0x1031 - 0xE0];
    u8 unk1031;
};
extern struct func_8038D830_G D_801BBBF0;
extern u8 D_801BC03C;
extern u8 D_801BC3D8;


extern u8 D_801BBC8C[];
extern u8 D_801BBCAC[];
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_8001EF38(f32, f32);
extern s32 func_80228C20();
extern s32 func_80228D90();
extern void func_80228FD0();
extern s32 func_80229260();
extern s32 func_802292D0();

typedef struct func_8038CFF4_StructU {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x83];
    u8 unk93;
} func_8038CFF4_StructU;

typedef struct func_8038CFF4_StructS {
    u8 pad0[4];
    s16 unk4;
    s16 unk6;
    u8 pad8[0x28];
    u32 f30_0:3;
    u32 f30_3:4;
    u32 f30_7:2;
    u32 f30_9:2;
    u32 f30_11:2;
    u32 f30_13:14;
    u32 f30_27:2;
    u32 f30_29:3;
    u8 pad34[4];
    u32 f38_0:1;
    u32 f38_1:2;
    u32 f38_3:1;
    u32 f38_4:28;
    u8 pad3C[8];
    s16 unk44;
    u8 pad46[0x292];
    u8 unk2D8;
    u8 pad2D9[0x39];
    s16 unk312;
    u8 pad314[0x14];
    u8 unk328;
    u8 unk329;
    s16 unk32A;
    u8 pad32C[0x64];
    u8 unk390;
} func_8038CFF4_StructS;

typedef struct func_8038CFF4_StructP {
    u8 pad0[0xC];
    func_8038CFF4_StructU *unkC;
    u8 pad10[0x80];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 pad93[2];
    u8 unk95;
    u8 pad96[2];
    s16 unk98;
} func_8038CFF4_StructP;

typedef struct func_8038CFF4_StructO {
    u8 pad0[2];
    s16 unk2;
    u16 unk4;
    s16 unk6;
    s16 unk8;
} func_8038CFF4_StructO;

typedef struct func_8038CFF4_StructStatus {
    u8 pad0[0x30];
    u32 f30_0:3;
    u32 f30_3:4;
    u32 f30_7:4;
    u32 f30_11:2;
    u32 f30_rest:19;
} func_8038CFF4_StructStatus;

typedef struct func_8038CFF4_StructOpponent {
    func_8038CFF4_StructStatus status;
    u8 pad34[0x2DE];
    s16 unk312;
} func_8038CFF4_StructOpponent;

#define GG D_801BBBF0
#define G232 (*(s16 *)((u8 *)&D_801BBBF0 + 0x232))
#define GB90 (*(f32 *)((u8 *)&D_801BBBF0 + 0xB90))
#define B32(p) (*((u8 *)(p) + 0x32))
#define B33(p) (*((u8 *)(p) + 0x33))
#define H30(p) (*(u16 *)((u8 *)(p) + 0x30))

void func_8038CFF4(func_8038CFF4_StructP *arg0, s32 arg1) {
    f32 sp3C;
    f32 cosine;
    s16 sp36;
    s16 sp34;
    func_8038CFF4_StructO *sp30;
    f32 sine;
    func_8038CFF4_StructS *a1;
    func_8038CFF4_StructOpponent *t0;
    func_8038CFF4_StructStatus *opponentStatus;
    f64 fv;

    sp34 = (s16)(0x2800 - G232) & 0x1FFF;
    sp30 = (arg0->unkC->unkC == GG.unkDC) ? (func_8038CFF4_StructO *)D_801BBC8C : (func_8038CFF4_StructO *)D_801BBCAC;
    if (arg0->unkC->unkC == GG.unkDC) {
        a1 = (func_8038CFF4_StructS *)&D_801BC03C;
    } else {
        a1 = (func_8038CFF4_StructS *)&D_801BC3D8;
    }
    t0 = (arg0->unkC->unkC != GG.unkDC) ? (func_8038CFF4_StructOpponent *)&D_801BC03C : (func_8038CFF4_StructOpponent *)&D_801BC3D8;
    opponentStatus = &t0->status;
    if ((arg0->unk91 == 1) && (GG.unk1031 == 7)) {
        arg0->unk91 = 2;
    }
    if ((a1->f30_9 == 0) || (a1->f30_3 == 1)) {
        return;
    }
        if ((GG.unk1031 >= 7) && (GG.unk1031 != 0xF)) {
            arg0->unk92 = arg0->unk95 = 0;
        }
        if ((GG.unk1031 != 5) || (H30(a1) & 7) || (func_80229260(arg0, a1, sp30, 10) != 0)) {
            return;
        }
            if (a1->f30_27 == 3) {
                B33(a1) &= 0xFFE7;
            }
            if ((a1->unk390 == 1) && ((a1->f30_27 & 3) != 0)) {
                return;
            }
            if (((fv = GB90) < 15.0) || (arg0->unk95 == 1)) {
                if (arg0->unk95 == 0) {
                    arg0->unk95 = 1;
                    arg0->unk92 = 1;
                    return;
                }
                if ((a1->unk6 < 0x64) && (arg0->unk98 == 0)) {
                    arg0->unk98 = 0x1E;
                    a1->unk328 = 3;
                    a1->unk329 = 0;
                    sp3C = func_8001EB64((s16)(func_80228C20(arg0) + 0x1000)) * 80.0f / 20.0;
                    cosine = func_8001EAD0((s16)(func_80228C20(arg0) + 0x1000)) * 80.0f / 20.0;
                    a1->unk32A = (s16)(func_8001EF38(sp3C, cosine) - sp34) & 0x1FFF;
                    return;
                }
                if (fv > 20.0) {
                    arg0->unk95 = 0;
                    arg0->unk92 = 0;
                    return;
                }
                if (((opponentStatus->f30_11 != 0) && (t0->unk312 != 0)) || (opponentStatus->f30_3 == 2U)) {
                    if (a1->unk6 >= 0x64) {
                        sp30->unk4 = 0x8000;
                    }
                    return;
                }
                if ((arg0->unkC->unk93 == 1) && (a1->unk6 >= 0x64) && (func_80228D90(arg0, a1) != 0)) {
                    sp30->unk4 = 0x8000;
                    return;
                }
                if (arg0->unk91 == 2) {
                    arg0->unk92 = 4;
                }
                if (arg0->unk92 == 1) {
                    if ((a1->f38_0 != 0) || (a1->unk2D8 == 2)) {
                        arg0->unk92 = 3;
                        return;
                    }
                    if ((a1->f30_27 == 0) && (a1->unk6 >= 0x64)) {
                        a1->unk44 = 0x32;
                        a1->unk390 = 1;
                        arg0->unk95 = 0;
                        arg0->unk92 = 0;
                        return;
                    }
                    if (a1->unk6 >= 0x46) {
                        func_802292D0(sp30, a1);
                        arg0->unk91 = 1;
                        arg0->unk92 = 2;
                    }
                    return;
                }
                if (arg0->unk92 == 2) {
                    if (a1->f38_0 != 0) {
                        arg0->unk92 = 3;
                    }
                    if ((B32(a1) & 3) == 2U) {
                        arg0->unk92 = 4;
                    }
                    if ((B32(a1) & 3) == 0) {
                        arg0->unk92 = 1;
                    }
                } else if (arg0->unk92 == 3) {
                    arg1 = arg0->unk90++ >= 0x15;
                    if (arg1) {
                        arg0->unk92 = 4;
                        arg0->unk90 = 0;
                    }
                } else if (arg0->unk92 == 4) {
                    if ((a1->unk6 >= 0x64) && (func_80228D90(arg0, a1) != 0)) {
                        B32(a1) = B32(a1) & 0xFFFC;
                        sp30->unk4 = 0x8000;
                        arg0->unk91 = 0;
                        arg0->unk98 = 0;
                        return;
                    }
                    func_80228FD0(arg0, sp30, 4);
                }
            } else {
                if (arg0->unk91 == 1) {
                    arg0->unk91 = 2;
                }
                if ((B32(a1) & 3) == 2U) {
                    B32(a1) &= 0xFFFC;
                }
                sp36 = (s16)(func_80228C20(arg0) + sp34) & 0x1FFF;
                if (GB90 > 35.0) {
                    arg0->unk98 = 0xF;
                }
                if (arg0->unk98 > 0) {
                    sp30->unk2 = 0x2000;
                    sine = -func_8001EB64(sp36);
                    sp30->unk6 = sine * 40.0f;
                    sp30->unk8 = func_8001EAD0(sp36) * 40.0f;
                    arg0->unk98--;
                    return;
                }
                if (a1->unk6 >= 0x64) {
                    sine = -func_8001EB64(sp36);
                    sp30->unk6 = sine * 80.0f;
                    sp30->unk8 = func_8001EAD0(sp36) * 80.0f;
                }
            }
}
#undef GG
#undef G232
#undef GB90
#undef B32
#undef B33
#undef H30
#undef D_801BBBF0
#undef D_801BBC8C
#undef D_801BBCAC
#undef D_801BC03C
#undef D_801BC3D8
#undef func_8001EAD0
#undef func_8001EB64
#undef func_8001EF38
#undef func_80228C20
#undef func_80228D90
#undef func_80228FD0
#undef func_80229260
#undef func_802292D0
#undef func_8038CFF4_StructO
#undef func_8038CFF4_StructP
#undef func_8038CFF4_StructS
#undef func_8038CFF4_StructU
#undef func_8038D830_G
#define B32(p) (*((u8 *)(p) + 0x32))
#define B33(p) (*((u8 *)(p) + 0x33))
#define D_801BBBF0 D_801BBBF0__func_8038CFF4
#define D_801BBC8C D_801BBC8C__func_8038CFF4
#define D_801BBCAC D_801BBCAC__func_8038CFF4
#define D_801BC03C D_801BC03C__func_8038CFF4
#define D_801BC3D8 D_801BC3D8__func_8038CFF4
#define G232 (*(s16 *)((u8 *)&D_801BBBF0 + 0x232))
#define GB90 (*(f32 *)((u8 *)&D_801BBBF0 + 0xB90))
#define GG D_801BBBF0
#define H30(p) (*(u16 *)((u8 *)(p) + 0x30))
#define func_8001EF38 func_8001EF38__func_8038CFF4
#define func_80228C20 func_80228C20__func_8038CFF4
#define func_80228D90 func_80228D90__func_8038CFF4
#define func_80228FD0 func_80228FD0__func_8038CFF4
#define func_80229260 func_80229260__func_8038CFF4
#define func_802292D0 func_802292D0__func_8038CFF4
#define func_8038D830_G func_8038D830_G__func_8038CFF4
#undef GG
#undef G232
#undef GB90
#undef B32
#undef B33
#undef H30
#undef D_8001EAD0
#undef D_8001EB64
#undef D_801BBBF0
#undef D_801BBC8C
#undef D_801BBCAC
#undef D_801BC03C
#undef D_801BC3D8
#undef func_8001EF38
#undef func_80228C20
#undef func_80228D90
#undef func_80228FD0
#undef func_80229260
#undef func_802292D0
#undef func_8038D830_G

extern void func_802294BC(void *);
extern void func_80229CE0(void *, void *, s32);
extern s32 func_8022B640(s32);

struct func_8038D638_StructA { u8 pad[0x30]; u32 pre:11; u32 f:2; u32 post:19; };
struct func_8038D638_StructB { u8 pad[0x38]; u32 top:1; };
struct func_8038D638_StructC {
    u8 pad0[0x92]; u8 unk92; u8 unk93; u8 pad1[6]; s16 unk9A; u8 pad2[5]; u8 unkA1; u8 unkA2;
};
struct func_8038D638_StructD { u8 pad[0x2D8]; u8 unk2D8; u8 unk2D9; };

s32 func_8038D638(struct func_8038D638_StructC *a0, struct func_8038D638_StructD *a1, struct func_8038D638_StructA *a2) {
    u8 t, v;
    if (a2->f != 0) {
        func_802294BC(a1);
        a0->unk9A |= 8;
    } else if (((struct func_8038D638_StructB *)a1)->top) {
        a1->unk2D8 = 2;
        a0->unk9A |= 2;
        func_80229CE0(a0, a1, func_8022B640(2) & 0xFF);
    } else {
        v = a0->unk92;
        t = v;
        if (!v) {
            a1->unk2D8 = 1;
            func_80229CE0(a0, a1, 1);
            a0->unk93 = a0->unk92++;
        } else if (v == 1) {
            a1->unk2D8 = 2;
            func_80229CE0(a0, a1, func_8022B640(2) & 0xFF);
            a0->unk93 = a0->unk92++;
        } else {
            if (t == 2) {
                a1->unk2D8 = 1;
                func_80229CE0(a0, a1, 1);
                a0->unk93 = a0->unk92++;
            } else if (t == 3) {
                a1->unk2D8 = 1;
                func_80229CE0(a0, a1, 1);
                a0->unk93 = a0->unk92;
                a0->unk92 = 0;
            }
        }
    }
    a0->unkA1 = a1->unk2D8;
    a0->unkA2 = a1->unk2D9;
}


struct func_8038D7B8_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x92 - 0x10];
    u8 unk92;
    u8 unk93;
};

extern s32 D_801BBCCC;
extern u8 D_801BC03C;
extern u8 D_801BC3D8;
#define func_8038D830 func_8038D830__decl74
extern void func_8038D830(void);

void func_8038D7B8(struct func_8038D7B8_Struct *arg0, s32 arg1) {
    u8 *var_a1;
    u8 *var_a2;

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
    arg0->unk92 = 0;
    arg0->unk93 = 0;
    func_8038D638(arg0, var_a1, var_a2);
    func_800058DC(arg0, (void *)func_8038D830);
}
#undef func_8038D830

#define D_801BBBF0 D_801BBBF0__func_8038D830
#define func_8022AB58 func_8022AB58__func_8038D830
#define func_8022B3E0 func_8022B3E0__func_8038D830
extern s32 func_8022AB58();
extern u8 func_8022B3E0[];

struct func_8038D830_G {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0x1031 - 0xE0];
    u8 unk1031;
};
extern struct func_8038D830_G D_801BBBF0;

struct func_8038D830_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x91 - 0x10];
    u8 unk91;
    u8 pad2[0x9A - 0x92];
    s16 unk9A;
    u8 pad3[0xA8 - 0x9C];
    u8 unkA8;
    u8 pad4[0xB0 - 0xA9];
    void *unkB0;
};

struct func_8038D830_Obj {
    u8 pad0[0x30];
    u32 unk30;
    u8 pad1[4];
    u32 b31:1;
    u32 bp:2;
    u32 b28:1;
    u32 brest:28;
    u8 pad2[0x390 - 0x3C];
    u8 unk390;
};

void func_8038D830(arg0, arg1)
struct func_8038D830_Struct *arg0;
s32 arg1;
{
    struct func_8038D830_Obj *a1;
    struct func_8038D830_Obj *a2;
    u32 a3;
    u32 v0;
    u32 v1;

    a1 = (D_801BBBF0.unkDC == arg0->unkC) ? (struct func_8038D830_Obj *)&D_801BC03C : (struct func_8038D830_Obj *)&D_801BC3D8;
    a2 = (D_801BBBF0.unkDC == arg0->unkC) ? (struct func_8038D830_Obj *)&D_801BC3D8 : (struct func_8038D830_Obj *)&D_801BC03C;
    if (a1->unk390 != 1 || ((((a1->unk30 << 27) >> 30) & 3) == 0)) {
        if (arg0->unkA8 == 2) {
            func_8038D638(arg0, a1, a2);
            arg0->unkA8 = 0;
            return;
        }
        if ((((u16 *)&a1->unk30)[0] & 7) || D_801BBBF0.unk1031 == 6) {
            arg0->unkA8 = 1;
            return;
        }
        if (D_801BBBF0.unk1031 == 7) {
            arg0->unkB0 = (void *)func_8038D830;
            func_800058DC((s32)arg0, func_8022B3E0);
            return;
        }
        if (((a1->unk30 << 27) >> 30) == 3) {
            func_8038D638(arg0, a1, a2);
            return;
        }
        if (func_8022AB58(arg0, a1, a2) != 0) {
            arg0->unk91 = 0;
            func_8038D638(arg0, a1, a2);
            return;
        }
        a3 = (a2->unk30 << 11) >> 30;
        if (a3 != 0 && !(arg0->unk9A & 8)) {
            func_8038D638(arg0, a1, a2);
            return;
        }
        if (a1->b31 && !a1->b28 && !(arg0->unk9A & 2)) {
            func_8038D638(arg0, a1, a2);
            return;
        }
        if (a1->b31 && a1->b28 && !(arg0->unk9A & 4)) {
            func_8038D638(arg0, a1, a2);
            return;
        }
        if (a2->b31 == 0 && a3 == 0 && arg0->unk9A != 0) {
            arg0->unk9A = 0;
            func_8038D638(arg0, a1, a2);
        }
    }
}
#undef D_801BBBF0
#undef func_8022AB58
#undef func_8022B3E0

void *func_8022AAA8(s32 arg0, struct func_8022AAA8_Struct *arg1);

void func_8038DA4C(s32 arg0, struct func_8022AAA8_Struct *arg1) {
    func_8022AAA8(arg0, arg1);
}

