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
#define func_8001EF38 func_8001EF38__func_8038CFF4
#define func_80228C20 func_80228C20__func_8038CFF4
#define func_80228D90 func_80228D90__func_8038CFF4
#define func_80228FD0 func_80228FD0__func_8038CFF4
#define func_80229260 func_80229260__func_8038CFF4
#define func_802292D0 func_802292D0__func_8038CFF4
#define func_8022B640 func_8022B640__func_8038CFF4
extern u8 D_801BBBF0[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern s32 func_8022B640();


struct func_8038CFF4_StructG {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0x152];
    s16 unk232;
    u8 pad2[0x95C];
    f32 unkB90;
    u8 pad3[0x49D];
    u8 unk1031;
};
struct func_8038CFF4_StructC {
    u8 pad0[0xC];
    s32 unkC;
};
struct func_8038CFF4_StructA {
    u8 pad0[0xC];
    struct func_8038CFF4_StructC *unkC;
    u8 pad1[0x80];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 pad2[2];
    u8 unk95;
    u8 pad3[2];
    s16 unk98;
    s16 unk9A;
    u32 unk9C;
};
struct func_8038CFF4_StructO {
    u8 pad0[2];
    s16 unk2;
    u16 unk4;
    s16 unk6;
    s16 unk8;
};
struct func_8038CFF4_StructB {
    u8 pad0[4];
    s16 unk4;
    s16 unk6;
    u8 pad1[0x28];
    u32 unk30;
    u8 pad2[4];
    u32 unk38;
    u8 pad3[0x6A];
    u8 unkA6;
    u8 pad4[0x231];
    u8 unk2D8;
    u8 unk2D9;
    u8 pad5[0x22];
    u8 unk2FC;
    u8 pad6[0x15];
    s16 unk312;
    u8 pad7[0x14];
    u8 unk328;
    u8 unk329;
    s16 unk32A;
};

#define GG (*(struct func_8038CFF4_StructG *)D_801BBBF0)
extern u8 D_801BBC8C[];
extern u8 D_801BBCAC[];
f32 func_8001EAD0(s16);
f32 func_8001EB64(s16);
s32 func_8001EF38(f32, f32);
s32 func_80228C20();
s32 func_80228D90();
void func_80228FD0();
s32 func_80229260();
void func_802292D0();

#define B8(p, o) (*(u8 *)((u8 *)(p) + (o)))
struct func_8038CFF4_StructH {
    u8 pad0[0x30];
    u16 pad30:13;
    u16 f30:3;
};
#define H16(p, o) (((struct func_8038CFF4_StructH *)(p))->f30)
struct func_8038CFF4_StructBits {
    u8 pad0[0x30];
    u32 p30a:3;
    u32 f30_3:4;
    u32 p30b:2;
    u32 f30_9:2;
    u32 f30_11:2;
    u32 p30c:19;
    u8 pad34[4];
    u32 f38_0:1;
    u32 f38_1:2;
    u32 f38_3:1;
    u32 p38:28;
};
#define BF(p) ((struct func_8038CFF4_StructBits *)(p))

void func_8038CFF4(struct func_8038CFF4_StructA *arg0, s32 arg1) {
    s16 sp36;
    s16 sp34;
    struct func_8038CFF4_StructO *sp30;
    s32 t;
    struct func_8038CFF4_StructB *a1;
    struct func_8038CFF4_StructB *v1;
    f32 sp20;
    f64 fv;
    u32 a0;

    sp34 = (s16)(0x2800 - GG.unk232) & 0x1FFF;
    t = GG.unkDC;
    sp30 = (t == arg0->unkC->unkC) ? (struct func_8038CFF4_StructO *)D_801BBC8C : (struct func_8038CFF4_StructO *)D_801BBCAC;
    a1 = (t == arg0->unkC->unkC) ? (struct func_8038CFF4_StructB *)D_801BC03C : (struct func_8038CFF4_StructB *)D_801BC3D8;
    v1 = (t == arg0->unkC->unkC) ? (struct func_8038CFF4_StructB *)D_801BC3D8 : (struct func_8038CFF4_StructB *)D_801BC03C;
    if ((arg0->unk91 == 1) && (GG.unk1031 == 7)) {
        arg0->unk91 = 2;
    }
    if ((BF(a1)->f30_9 != 0) && (BF(a1)->f30_3 != 1)) {
        if ((GG.unk1031 >= 7) && (GG.unk1031 != 0xF)) {
            arg0->unk95 = 0;
            arg0->unk92 = 0;
        }
        if ((GG.unk1031 == 5) && !(H16(a1, 0x30) & 7) && (func_80229260(arg0, a1, sp30, 0xA) == 0)) {
            if (((fv = GG.unkB90) < 20.0) || (arg0->unk95 == 1)) {
                if (arg0->unk95 == 0) {
                    arg0->unk95 = 1;
                    arg0->unk92 = 1;
                    return;
                }
                if (fv > 25.0) {
                    arg0->unk95 = 0;
                    arg0->unk92 = 0;
                    return;
                }
                if (((BF(v1)->f30_11 != 0) && ((v1->unk312 >= 0xB) || (BF(v1)->f30_3 == 1))) || (BF(v1)->f30_3 == 2)) {
                    if (a1->unk6 >= 0x64) {
                        sp30->unk4 = 0x8000;
                    }
                } else {
                    if (arg0->unk91 == 2) {
                        arg0->unk92 = 4;
                    }
                    if (arg0->unk92 == 1) {
                        arg1 = BF(a1)->f38_0;
                        if (arg1 != 0) {
                            arg0->unk90 = 0;
                            arg0->unk92 = 3;
                            return;
                        }
                        if (a1->unk2D8 == 2) {
                            if ((arg1 == 0) && (a1->unk6 >= 0x64)) {
                                sp30->unk4 = 0x8000;
                                arg0->unk90 = 0;
                                arg0->unk92 = 3;
                                return;
                            }
                            func_80228FD0(arg0, sp30, 4);
                            return;
                        }
                        if (a1->unk6 >= 0x47) {
                            func_802292D0(sp30, a1);
                            arg0->unk91 = 1;
                            arg0->unk92 = 2;
                            return;
                        }
                        func_80228FD0(arg0, sp30, 4);
                        return;
                    }
                    if (arg0->unk92 == 2) {
                        if (BF(a1)->f38_0 != 0) {
                            arg0->unk90 = 0;
                            arg0->unk92 = 3;
                            return;
                        }
                        a0 = B8(a1, 0x32) & 3;
                        if ((a0 << 0) == 2) {
                            arg0->unk92 = 4;
                            a0 = B8(a1, 0x32) & 3;
                        }
                        if (a0 == 0) {
                            arg0->unk92 = 1;
                        }
                    } else if (arg0->unk92 == 3) {
                        if (BF(a1)->f38_0 != 0) {
                            v1 = (struct func_8038CFF4_StructB *)(arg0->unk90++ >= 0x1F);
                            if (v1) {
                                arg0->unk92 = 5;
                                arg0->unk90 = 0;
                                return;
                            }
                        }
                        if ((BF(a1)->f38_1 == 0) && (BF(a1)->f38_0 == 0)) {
                            arg0->unk92 = 1;
                        }
                    } else if (arg0->unk92 == 4) {
                        if (a1->unk6 >= 0x64) {
                            if ((func_80228D90(arg0) != 0) && !(*(u16 *)((u8 *)a1 + 0x30) & 7)) {
                                B8(a1, 0x32) = B8(a1, 0x32) & 0xFFFC;
                                sp30->unk4 = 0x8000;
                                if ((a1->unk6 == a1->unk4) && (a1->unk2FC >= 6) && (BF(a1)->f38_0 == 0)) {
                                    a1->unk2D8 = 0xA;
                                    a1->unk2D9 = func_8022B640(2, a1);
                                }
                                arg0->unk91 = 0;
                                arg0->unk98++;
                            }
                        }
                    } else if (arg0->unk92 == 5) {
                        arg0->unk90++;
                        a1->unk328 = 3;
                        a1->unk329 = 0;
                        sp20 = func_8001EB64(func_80228C20(arg0) + 0x800) * 80.0f / 20.0;
                        a1->unk32A = (s16)(func_8001EF38(sp20, func_8001EAD0(func_80228C20(arg0) + 0x800) * 80.0f / 20.0) - sp34) & 0x1FFF;
                        arg1 = BF(a1)->f38_0;
                        if ((arg1 != 0) && BF(a1)->f38_3) {
                            arg0->unk92 = 4;
                            arg1 = BF(a1)->f38_0;
                        }
                        if (arg1 == 0) {
                            arg0->unk92 = 1;
                        }
                    }
                }
            } else {
                if (arg0->unk91 == 1) {
                    arg0->unk91 = 2;
                }
                a0 = B8(a1, 0x32);
                if ((a0 & 3) == 2) {
                    B8(a1, 0x32) = a0 & 0xFFFC;
                }
                if ((GG.unkB90 > 60.0f) || (arg0->unk9A != 0)) {
                    if (GG.unkB90 > 60.0f) {
                        arg0->unk9A = 0x1E;
                    } else {
                        arg0->unk9A--;
                    }
                    if (!(a1->unkA6 & 0x10) && (a1->unk6 >= 0x64) && (func_80228D90(arg0) != 0)) {
                        sp30->unk4 = 0x8000;
                        return;
                    }
                    sp30->unk2 = 0x2000;
                    sp36 = func_80228C20(arg0) + sp34;
                    sp30->unk6 = -func_8001EB64(sp36) * 40.0f;
                    sp30->unk8 = func_8001EAD0(sp36) * 40.0f;
                    return;
                }
                if ((arg0->unk9C & 0xFF) < 0x20) {
                    sp36 = func_80228C20(arg0) + sp34 + 0x800;
                    sp30->unk6 = -func_8001EB64(sp36) * 80.0f;
                    sp30->unk8 = func_8001EAD0(sp36) * 80.0f;
                    return;
                }
                if ((arg0->unk9C & 0xFF) >= 0x40) {
                    if ((arg0->unk9C & 0xFF) < 0x80) {
                        sp36 = func_80228C20(arg0) + sp34 + 0x1800;
                        sp30->unk6 = -func_8001EB64(sp36) * 80.0f;
                        sp30->unk8 = func_8001EAD0(sp36) * 80.0f;
                        return;
                    }
                    if ((arg0->unk9C & 0xFF) < 0xA0) {
                        sp36 = func_80228C20(arg0) + sp34 + 0x800;
                        sp30->unk6 = -func_8001EB64(sp36) * 80.0f;
                        sp30->unk8 = func_8001EAD0(sp36) * 80.0f;
                        return;
                    }
                    if (((arg0->unk9C & 0xFF) >= 0xC0) && ((arg0->unk9C & 0xFF) < 0xE0)) {
                        sp36 = func_80228C20(arg0) + sp34;
                        sp30->unk6 = -func_8001EB64(sp36) * 80.0f;
                        sp30->unk8 = func_8001EAD0(sp36) * 80.0f;
                    }
                }
            }
        }
    }
}
#undef GG
#undef B8
#undef H16
#undef BF
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
#undef func_8022B640

extern u8 D_801BC3D8[];
struct func_8038D8A0_S0 { u8 pad0[0x9A]; s16 unk9A; u8 pad1[4]; u8 unkA0; u8 unkA1; u8 unkA2; };
struct func_8038D8A0_S1 { s16 unk0; s16 unk2; u8 pad0[0x34]; u32 f38:1; u32 pad38:31; u8 pad1[0x6A]; u8 unkA6; u8 pad2[0x231]; u8 unk2D8; u8 unk2D9; };
struct func_8038D8A0_S2 { u8 pad0[0x30]; u32 padb:11; u32 f30:2; u32 padc:19; };
extern void func_80229404();
extern void func_80229CE0();
extern s32 func_8022B640();

s32 func_8038D8A0(struct func_8038D8A0_S0 *arg0, struct func_8038D8A0_S1 *arg1, struct func_8038D8A0_S2 *arg2) {
    s32 r;
    if ((arg1->unk2 < (arg1->unk0 / 5)) && (arg0->unkA0 != 0)) {
        arg1->unk2D8 = 0xB;
        arg1->unk2D9 = 3;
        arg0->unkA0 = arg0->unkA0 - 1;
        arg0->unk9A |= 0x20;
    } else if ((*(f32 *)(D_801BC3D8 + 0x3A8) > 25.0) && !(arg1->unkA6 & 0x10)) {
        arg1->unk2D8 = 0xB;
        arg1->unk2D9 = 0x20;
        arg0->unk9A |= 0x100;
    } else if (arg2->f30 != 0) {
        func_80229404(arg1);
        arg0->unk9A |= 8;
    } else if (arg1->f38 != 0) {
        arg1->unk2D8 = 2;
        arg0->unk9A |= 2;
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    } else {
        r = func_8022B640(3);
        if (r == 0) goto c0;
        if (r != 1) goto cd;
        goto c1;
c0:
        arg1->unk2D8 = 0;
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
        goto end;
c1:
        arg1->unk2D8 = 1;
        func_80229CE0(arg0, arg1, 1);
        goto end;
cd:
        arg1->unk2D8 = 2;
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    }
end:
    arg0->unkA1 = arg1->unk2D8;
    arg0->unkA2 = arg1->unk2D9;
}


struct func_8038DA74_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x82];
    u8 unk92;
    u8 unk93;
    u8 pad2[4];
    s16 unk98;
    u8 pad3[6];
    u8 unkA0;
};

extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern void func_8038DAF8();

void func_8038DA74(struct func_8038DA74_Struct *arg0, s32 arg1) {
    void *var_a1;
    void *var_a2;

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
    arg0->unkA0 = 5;
    arg0->unk98 = 0;
    func_8038D8A0(arg0, var_a1, var_a2);
    func_800058DC(arg0, (void *)func_8038DAF8);
}


typedef struct func_8038DAF8_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x91 - 0x10];
    u8 unk91;
    u8 unk92;
    u8 unk93;
    u8 pad94[4];
    s16 unk98;
    s16 unk9A;
    u8 pad9C[4];
    u8 unkA0;
    u8 padA1[7];
    u8 unkA8;
    u8 padA9[7];
    void *unkB0;
} func_8038DAF8_Struct;

typedef struct func_8038DAF8_S1 {
    s16 unk0;
    s16 unk2;
    u8 pad4[0x2C];
    u16 unk30;
    u8 pad32[6];
    u32 b38_31:1;
    u32 pad38:2;
    u32 b38_28:1;
    u32 pad38b:28;
    u8 pad3C[0x6A];
    u8 unkA6;
} func_8038DAF8_S1;

typedef struct func_8038DAF8_S2 {
    u8 pad0[0x30];
    u32 pad30a:3;
    u32 f30_4:4;
    u32 pad30b:4;
    u32 f30_2:2;
    u32 pad30c:19;
} func_8038DAF8_S2;

extern s32 func_8022AB58();
extern u8 D_801BBBF0[];
typedef struct func_8038DAF8_G {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0xB90 - 0xE0];
    f32 unkB90;
    u8 padB94[0x1031 - 0xB94];
    u8 unk1031;
} func_8038DAF8_G;
#define G (*(func_8038DAF8_G *)D_801BBBF0)
extern u8 func_8022B3E0[];
extern u8 D_8038DAF8[];

#define CALL() func_8038D8A0((struct func_8038D8A0_S0 *)arg0, (struct func_8038D8A0_S1 *)a1, (struct func_8038D8A0_S2 *)a2)

void func_8038DAF8(func_8038DAF8_Struct *arg0, s32 arg1) {
    func_8038DAF8_S1 *a1;
    func_8038DAF8_S2 *a2;
    s16 v;
    s32 d;

    if (arg0->unkC == (d = G.unkDC)) {
        a1 = (func_8038DAF8_S1 *)D_801BC03C;
    } else {
        a1 = (func_8038DAF8_S1 *)D_801BC3D8;
    }
    if (d == arg0->unkC) {
        a2 = (func_8038DAF8_S2 *)D_801BC3D8;
    } else {
        a2 = (func_8038DAF8_S2 *)D_801BC03C;
    }
    if (arg0->unkA8 == 2) {
        CALL();
        arg0->unkA8 = 0;
        return;
    }
    if ((a1->unk30 & 7) || D_801BBBF0[0x1031] == 6) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0[0x1031] == 7) {
        arg0->unkB0 = (void *)D_8038DAF8;
        func_800058DC((s32)arg0, func_8022B3E0);
        return;
    }
    if (a1->unk2 < a1->unk0 / 5 && arg0->unkA0 != 0 && !(arg0->unk9A & 0x20)) {
        CALL();
        return;
    }
    if (func_8022AB58(arg0, a1, a2) != 0) {
        arg0->unk91 = 0;
        CALL();
        return;
    }
    if (*(f32 *)(D_801BBBF0 + 0xB90) > 25.0f && arg0->unk98 == 0 && arg0->unk9A == 0 && !(a1->unkA6 & 0x10)) {
        CALL();
        return;
    }
    if (*(f32 *)(D_801BBBF0 + 0xB90) <= 20.0f) {
        v = arg0->unk9A;
        if (v & 0x100) {
            arg0->unk9A = v ^ 0x100;
            CALL();
            return;
        }
    }
    if (a2->f30_2 != 0 || a2->f30_4 == 2) {
        CALL();
        return;
    }
    if (a2->f30_2 == 0) {
        v = arg0->unk9A;
        if (v & 8) {
            arg0->unk9A = v ^ 8;
            arg0->unk92 = arg0->unk93;
            CALL();
            return;
        }
    }
    if (a1->b38_31 != 0 && !a1->b38_28 && !(arg0->unk9A & 2)) {
        CALL();
        return;
    }
    if (a1->b38_31 != 0 && a1->b38_28 && !(arg0->unk9A & 4)) {
        CALL();
        return;
    }
    if (a1->b38_31 == 0 && (arg0->unk9A & 6)) {
        arg0->unk9A = 0;
        arg0->unk92 = arg0->unk93;
        CALL();
    }
}


extern void func_8022A834();

void func_8038DDD4(u8 *arg0) {
    if (*(f32 *)&D_801BC3D8[0x3A8] < 15.0) {
        arg0[0xA5] = 0;
        return;
    }
    func_8022A834();
}

