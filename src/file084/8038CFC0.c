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
#define func_8022559C func_8022559C__func_8038CFF4
#define func_80228C20 func_80228C20__func_8038CFF4
#define func_80228D90 func_80228D90__func_8038CFF4
#define func_80228E5C func_80228E5C__func_8038CFF4
#define func_80229260 func_80229260__func_8038CFF4
#define func_802292D0 func_802292D0__func_8038CFF4
#define func_8038D8D8_StructG func_8038D8D8_StructG__func_8038CFF4
struct func_8038D8D8_StructG {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xB90 - 0xE0];
    f32 unkB90;
    u8 pad2[0x1031 - 0xB94];
    u8 unk1031;
};
extern struct func_8038D8D8_StructG D_801BBBF0;
extern u8 D_801BC03C;
extern u8 D_801BC3D8[];


struct func_8038CFF4_StructP {
    u8 pad0[0x5C];
    struct func_8038CFF4_StructQ *unk5C;
};
struct func_8038CFF4_StructQ {
    u8 pad0[0x1C];
    s32 unk1C;
};
struct func_8038CFF4_StructG {
    u8 pad0[0xDC];
    struct func_8038CFF4_StructP *unkDC;
    u8 pad1[0xEC - 0xE0];
    struct func_8038CFF4_StructP *unkEC;
    u8 pad2[0x232 - 0xF0];
    s16 unk232;
    u8 pad3[0xB90 - 0x234];
    f32 unkB90;
    u8 pad4[0x1031 - 0xB94];
    u8 unk1031;
};
struct func_8038CFF4_StructM {
    u8 pad0[0xC];
    struct func_8038CFF4_StructP *unkC;
};
struct func_8038CFF4_StructAA {
    u8 pad0[0xC];
    struct func_8038CFF4_StructM *unkC;
    u8 pad1[0x90 - 0x10];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 pad2[2];
    u8 unk95;
    u8 pad3[2];
    s16 unk98;
    s16 unk9A;
};
struct func_8038CFF4_StructB {
    u8 pad0[6];
    s16 unk6;
    u8 pad1[0x30 - 8];
    u32 f30_0:3;
    u32 f30_3:4;
    u32 f30_7:2;
    u32 f30_9:2;
    u32 f30_11:2;
    u32 f30_13:19;
    u8 pad2[4];
    u32 unk38;
    u8 pad3[0xA6 - 0x3C];
    u8 unkA6;
    u8 pad4[0x2FC - 0xA7];
    u8 unk2FC;
    u8 pad5[0x312 - 0x2FD];
    s16 unk312;
    u8 pad6[0x328 - 0x314];
    u8 unk328;
    u8 unk329;
    s16 unk32A;
};
struct func_8038CFF4_StructC {
    u8 pad0[2];
    s16 unk2;
    u16 unk4;
    s16 unk6;
    s16 unk8;
};

#define G0 (*(struct func_8038CFF4_StructG *)&D_801BBBF0)
#define U16_30(p) (*(u16 *)((u8 *)(p) + 0x30))
struct func_8038CFF4_Bits38 {
    u32 f38_0:1;
    u32 f38_1:2;
    u32 f38_3:1;
    u32 f38_4:28;
};
#define BF38(p) ((struct func_8038CFF4_Bits38 *)((u8 *)(p) + 0x38))
#define U8_32(p) (((u8 *)(p))[0x32])

extern u8 D_801BBC8C[];
extern u8 D_801BBCAC[];
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_8001EF38(f32, f32);
extern u8 func_8022559C(s32, void *);
extern s32 func_80228C20(void *);
extern s32 func_80228D90(void *);
extern void func_80228E5C(void *, void *, s32);
extern s32 func_80229260(void *, void *, void *, s32);
extern void func_802292D0(void *);

void func_8038CFF4(struct func_8038CFF4_StructAA *arg0, s32 arg1) {
    s16 temp_a1;
    s16 sp3C;
    struct func_8038CFF4_StructC *sp38;
    s32 pad34;
    struct func_8038CFF4_StructB *var_a1;
    struct func_8038CFF4_StructB *var_t1;
    u8 sp2B;
    f32 sp24;
    s32 ent;
    s32 v;
    s32 arg;
    s32 a0;

    ent = D_801BBBF0.unkDC;
    sp3C = (s16)(0x2800 - G0.unk232) & 0x1FFF;
    if (ent == (s32)arg0->unkC->unkC) {
        sp38 = (void *)D_801BBC8C;
    } else {
        sp38 = (void *)D_801BBCAC;
    }
    if (ent == (s32)arg0->unkC->unkC) {
        var_a1 = (void *)&D_801BC03C;
    } else {
        var_a1 = (void *)D_801BC3D8;
    }
    if (ent == (s32)arg0->unkC->unkC) {
        var_t1 = (void *)D_801BC3D8;
    } else {
        var_t1 = (void *)&D_801BC03C;
    }
    if ((s32)var_t1 == (s32)&D_801BBBF0 + 0x44C) {
        v = ((struct func_8038CFF4_StructP *)ent)->unk5C->unk1C;
    } else {
        v = G0.unkEC->unk5C->unk1C;
    }
    sp2B = func_8022559C(v, var_a1);
    if (arg0->unk91 == 1) {
        if (D_801BBBF0.unk1031 == 7) {
            arg0->unk91 = 2;
        }
    }
    if (var_a1->f30_9 == 0) {
        return;
    }
    if (var_a1->f30_3 == 1) {
        return;
    }
    if (G0.unk1031 != 5) {
        return;
    }
    if (U16_30(var_a1) & 7) {
        return;
    }
    if (func_80229260(arg0, var_a1, sp38, 10) != 0) {
        return;
    }
    if (G0.unkB90 < 15.0 || arg0->unk95 == 1) {
        if (arg0->unk95 == 0) {
            arg0->unk95 = 1;
            arg0->unk92 = 1;
            return;
        }
        if (G0.unkB90 > 20.0) {
            arg0->unk95 = arg0->unk92 = 0;
            return;
        }
        if (((var_t1->f30_11 != 0) && ((var_t1->unk312 >= 11) || (var_t1->f30_3 == 1))) || (var_t1->f30_3 == 2U)) {
            if (var_a1->unk6 >= 100) {
                sp38->unk4 = 0x8000;
            }
            return;
        }
        if (arg0->unk91 == 2) {
            arg0->unk92 = 4;
        }
        if (arg0->unk92 == 1) {
            if ((var_a1->unk38 >> 31) != 0) {
                arg0->unk90 = 0;
                arg0->unk92 = 4;
                return;
            }
            if (var_a1->unk6 >= 71) {
                arg = (s32)var_a1->unk2FC % 4;
                if ((arg << 0) == 1) {
                    sp38->unk4 = 0x10;
                    arg0->unk92 = 3;
                    return;
                }
                if (arg == 3) {
                    sp38->unk4 = 0x10;
                    arg0->unk90 = 0;
                    arg0->unk92 = 5;
                    return;
                }
                func_802292D0(sp38);
                arg0->unk91 = 1;
                arg0->unk92 = 2;
                return;
            }
            func_80228E5C(arg0, sp38, 4);
        } else if (arg0->unk92 == 2) {
            if ((var_a1->unk38 >> 31) != 0) {
                arg0->unk92 = 4;
            }
            arg = U8_32(var_a1) & 3;
            if ((arg << 0) == 2U) {
                arg0->unk92 = 4;
                arg = U8_32(var_a1) & 3;
            }
            if (arg == 0) {
                arg0->unk92 = 1;
            }
        } else if (arg0->unk92 == 3) {
            if ((var_a1->unk38 >> 31) != 0) {
                v = arg0->unk90++ >= 31;
                if (v) {
                    arg0->unk92 = 4;
                    arg0->unk90 = 0;
                    return;
                }
            }
            if (BF38(var_a1)->f38_1 == 0 && BF38(var_a1)->f38_0 == 0) {
                arg0->unk92 = 1;
            }
        } else if (arg0->unk92 == 4) {
            if (var_a1->unk6 >= 100) {
                if (func_80228D90(arg0) != 0) {
                    U8_32(var_a1) &= 0xFFFC;
                    sp38->unk4 = 0x8000;
                    arg0->unk91 = 0;
                    arg0->unk98++;
                    return;
                }
            }
            func_80228E5C(arg0, sp38, 4);
        } else if (arg0->unk92 == 5) {
            arg0->unk90++;
            var_a1->unk328 = 3;
            var_a1->unk329 = 0;
            sp24 = (f64)(func_8001EB64((s16)(func_80228C20(arg0) + 0x800)) * 80.0f) / 20.0;
            var_a1->unk32A = (s16)(func_8001EF38(sp24, (f64)(func_8001EAD0((s16)(func_80228C20(arg0) + 0x800)) * 80.0f) / 20.0) - sp3C) & 0x1FFF;
            a0 = BF38(var_a1)->f38_0;
            if (a0 != 0 && BF38(var_a1)->f38_3) {
                arg0->unk92 = 4;
                a0 = BF38(var_a1)->f38_0;
            }
            if (a0 == 0) {
                arg0->unk92 = 1;
            }
        }
    } else {
        if (arg0->unk91 == 1) {
            arg0->unk91 = 2;
        }
        arg = U8_32(var_a1);
        if ((arg & 3) == 2U) {
            U8_32(var_a1) = arg & 0xFFFC;
        }
        if (G0.unkB90 > 30.0f && var_a1->unk6 >= 100 && !(var_a1->unkA6 & 1)) {
            sp38->unk4 = 0x8000;
            return;
        }
        temp_a1 = (s16)(func_80228C20(arg0) + sp3C) & 0x1FFF;
        if (G0.unkB90 > 35.0f) {
            arg0->unk9A = 30;
        }
        v = arg0->unk9A-- > 0;
        if (v) {
            sp38->unk2 = 0x2000;
            sp38->unk6 = -func_8001EB64(temp_a1) * 40.0f;
            sp38->unk8 = func_8001EAD0(temp_a1) * 40.0f;
            return;
        }
        if (sp2B >= 21) {
            sp38->unk6 = -func_8001EB64(temp_a1) * 80.0f;
            sp38->unk8 = func_8001EAD0(temp_a1) * 80.0f;
            return;
        }
        sp38->unk6 = -func_8001EB64(temp_a1) * 40.0f;
        sp38->unk8 = func_8001EAD0(temp_a1) * 40.0f;
    }
}
#undef G0
#undef U16_30
#undef BF38
#undef U8_32
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
#undef func_80229260
#undef func_802292D0
#undef func_8038D8D8_StructG

extern u8 D_801BC3D8[];

struct func_8038D734_StructA {
    u8 pad0[0x9A];
    s16 unk9A;
    u8 pad1[0xA1 - 0x9C];
    u8 unkA1;
    u8 unkA2;
};

struct func_8038D734_StructB {
    u8 pad0[0x38];
    s32 unk38;
    u8 pad1[0xA6 - 0x3C];
    u8 unkA6;
    u8 pad2[0x2D8 - 0xA7];
    u8 unk2D8;
    u8 unk2D9;
};

struct func_8038D734_StructC {
    u8 pad0[0x30];
    u32 unk30;
};

extern void func_80229404(void *);
extern void func_80229CE0(void *, void *, s32);
extern s32 func_8022B640(s32);

s32 func_8038D734(struct func_8038D734_StructA *arg0, struct func_8038D734_StructB *arg1, struct func_8038D734_StructC *arg2) {
    if (((u32) (arg2->unk30 << 0xB) >> 0x1E) != 0) {
        func_80229404(arg1);
        arg0->unk9A = (s16) (arg0->unk9A | 8);
    } else if ((*(f32 *) ((u8 *) &D_801BC3D8 + 0x3A8) > 30.0f) && !(arg1->unkA6 & 1)) {
        arg1->unk2D8 = 0xBU;
        arg1->unk2D9 = 0x1EU;
        arg0->unk9A = (s16) (arg0->unk9A | 0x100);
    } else if (((u32) arg1->unk38 >> 0x1F) != 0) {
        arg1->unk2D8 = 2U;
        arg0->unk9A = (s16) (arg0->unk9A | 2);
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    } else {
        if (func_8022B640(2) == 0) {
            arg1->unk2D8 = 0U;
        } else {
            arg1->unk2D8 = 1U;
        }
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    }
    arg0->unkA1 = (u8) arg1->unk2D8;
    arg0->unkA2 = (u8) arg1->unk2D9;
}


struct func_8038D860_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x92 - 0x10];
    u8 unk92;
    u8 unk93;
};

extern s32 D_801BBCCC;
extern u8 D_801BC03C;
extern void func_8038D8D8();

void func_8038D860(struct func_8038D860_Struct *arg0, s32 arg1) {
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
    func_8038D734(arg0, var_a1, var_a2);
    func_800058DC(arg0, (void *)func_8038D8D8);
}


struct func_8038D8D8_StructA {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x91 - 0x10];
    u8 unk91;
    u8 unk92;
    u8 unk93;
    u8 pad2[0x9A - 0x94];
    s16 unk9A;
    u8 pad3[0xA8 - 0x9C];
    u8 unkA8;
    u8 pad4[0xB0 - 0xA9];
    void *unkB0;
};
struct func_8038D8D8_StructG {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xB90 - 0xE0];
    f32 unkB90;
    u8 pad2[0x1031 - 0xB94];
    u8 unk1031;
};
struct func_8038D8D8_StructB {
    u8 pad0[0x30];
    u32 unk30;
    u32 pad34;
    u32 f0:1;
    u32 f1:1;
    u32 f2:1;
    u32 f3:1;
    u32 rest:28;
    u8 pad3c[0xA6 - 0x3C];
    u8 unkA6;
};
struct func_8038D8D8_StructC {
    u32 pad0:3;
    u32 f3:4;
    u32 pad1:4;
    u32 f11:2;
    u32 rest:19;
};
extern struct func_8038D8D8_StructG D_801BBBF0;
extern s32 func_8022AB58();
extern void func_8022B3E0();
extern u8 D_8038D8D8[];

#define B struct func_8038D8D8_StructB
#define CALL() func_8038D734((void *)arg0, (void *)((s32)a3 * 1), (void *)a2)

#undef B
#undef CALL
#define D_801BBBF0 D_801BBBF0__func_8038D8D8
#define func_8038D8D8_StructA func_8038D8D8_StructA__func_8038D8D8
#define func_8038D8D8_StructB func_8038D8D8_StructB__func_8038D8D8
#define func_8038D8D8_StructC func_8038D8D8_StructC__func_8038D8D8
#define func_8038D8D8_StructG func_8038D8D8_StructG__func_8038D8D8
#define B struct func_8038D8D8_StructB
#define CALL() func_8038D734((void *)arg0, (void *)((s32)a3 * 1), (void *)a2)

struct func_8038D8D8_StructA {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x91 - 0x10];
    u8 unk91;
    u8 unk92;
    u8 unk93;
    u8 pad2[0x9A - 0x94];
    s16 unk9A;
    u8 pad3[0xA8 - 0x9C];
    u8 unkA8;
    u8 pad4[0xB0 - 0xA9];
    void *unkB0;
};
struct func_8038D8D8_StructG {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xB90 - 0xE0];
    f32 unkB90;
    u8 pad2[0x1031 - 0xB94];
    u8 unk1031;
};
struct func_8038D8D8_StructB {
    u8 pad0[0x30];
    u32 unk30;
    u32 pad34;
    u32 f0:1;
    u32 f1:1;
    u32 f2:1;
    u32 f3:1;
    u32 rest:28;
    u8 pad3c[0xA6 - 0x3C];
    u8 unkA6;
};
struct func_8038D8D8_StructC {
    u32 pad0:3;
    u32 f3:4;
    u32 pad1:4;
    u32 f11:2;
    u32 rest:19;
};
extern struct func_8038D8D8_StructG D_801BBBF0;

#define B struct func_8038D8D8_StructB
#define CALL() func_8038D734((void *)arg0, (void *)((s32)a3 * 1), (void *)a2)

void func_8038D8D8(struct func_8038D8D8_StructA *arg0, s32 arg1) {
    B *a3;
    B *a2;
    u32 v;
    u32 hi;

    a3 = (D_801BBBF0.unkDC == arg0->unkC) ? (B *)&D_801BC03C : (B *)D_801BC3D8;
    a2 = (D_801BBBF0.unkDC == arg0->unkC) ? (B *)D_801BC3D8 : (B *)&D_801BC03C;
    if (arg0->unkA8 == 2) {
        CALL();
        arg0->unkA8 = 0;
        return;
    }
    if ((*(u16 *)((u8 *)a3 + 0x30) & 7) || D_801BBBF0.unk1031 == 6) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = D_8038D8D8;
        func_800058DC((s32)arg0, (void *)func_8022B3E0);
        return;
    }
    if (func_8022AB58(arg0, a3, a2) != 0) {
        arg0->unk91 = 0;
        CALL();
        return;
    }
    if (D_801BBBF0.unkB90 > 30.0f && !(arg0->unk9A & 0x100) && !(a3->unkA6 & 1)) {
        CALL();
        return;
    }
    if (D_801BBBF0.unkB90 < 30.0f && (arg0->unk9A & 0x100)) {
        arg0->unk9A = 0;
        CALL();
        return;
    }
    v = a2->unk30;
    hi = (v << 11) >> 30;
    if (hi != 0 || (v << 3) >> 28 == 2) {
        CALL();
        return;
    }
    if (hi == 0 && (v << 3) >> 28 != 2 && (arg0->unk9A & 8)) {
        {
            arg0->unk92 = arg0->unk93;
            arg0->unk9A ^= 8;
            CALL();
            return;
        }
    }
    if (a3->f0 && !a3->f3 && !(arg0->unk9A & 2)) {
        CALL();
        return;
    }
    if (a3->f0 && a3->f3 && !(arg0->unk9A & 4)) {
        CALL();
        return;
    }
    if (!a3->f0 && (arg0->unk9A & 6)) {
        arg0->unk9A = 0;
        arg0->unk92 = arg0->unk93;
        CALL();
    }
}
#undef B
#undef CALL
#undef D_801BBBF0
#undef func_8038D8D8_StructA
#undef func_8038D8D8_StructB
#undef func_8038D8D8_StructC
#undef func_8038D8D8_StructG
#define B struct func_8038D8D8_StructB
#define CALL() func_8038D734((void *)arg0, (void *)((s32)a3 * 1), (void *)a2)

/* starting point: func_8038D900 (file061), whose assembly is 91% the same as this function's */

struct func_8038DB74_StructA {
    u8 pad0[0xA5];
    u8 unkA5;
};

struct func_8038DB74_StructB {
    u8 pad0[6];
    s16 unk6;
    u8 pad1[0x333 - 8];
    u8 unk333;
};

extern void func_8022A834();

void func_8038DB74(struct func_8038DB74_StructA *arg0, struct func_8038DB74_StructB *arg1)
{
  s32 temp_v0;
  s32 k;
  temp_v0 = arg1->unk333;
  k = 2;
  if (temp_v0 == 0)
  {
    goto case0;
  }
  if (1 == temp_v0)
  {
    goto case1;
  }
  if (temp_v0 == k)
  {
    goto case2;
    done:
    return;

  }
  goto done;
  case0:
  arg0->unkA5 = 0;

  arg1->unk333 = (u8) (arg1->unk333 + 1);
  return;
  case1:
  func_8022A834();

  arg1->unk333 = (u8) (arg1->unk333 + 1);
  return;
  case2:
  if (arg1->unk6 >= 0x64)
  {
    arg0->unkA5 = k;
  }
  else
  {
    arg0->unkA5 = 0;
  }

  arg1->unk333 = 0;
  return;
}

