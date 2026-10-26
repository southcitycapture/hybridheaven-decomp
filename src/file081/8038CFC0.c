#include "common.h"


extern s32 func_800058DC(s32, void *);
extern s32 func_80229500();
extern void func_8038CFF4();

void func_8038CFC0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038CFF4);
}


struct func_8038CFF4_Obj {
    u8 pad0[0xC];
    struct func_8038CFF4_Obj *unkC2;
    u8 pad10[0x91 - 0x10];
    u8 unk91;
    u8 unk92;
    u8 pad93[2];
    u8 unk95;
    u8 pad96[2];
    s16 unk98;
    u8 pad9A[2];
    u32 unk9C;
};
struct func_8038CFF4_Obj0 {
    u8 pad0[0xC];
    s32 unkC;
};
struct func_8038CFF4_Ent {
    u8 pad0[4];
    u16 unk4;
    s16 unk6;
    s16 unk8;
};
struct func_8038CFF4_Pl {
    u8 pad0[6];
    s16 unk6;
    u8 pad8[0x30 - 8];
    unsigned f29 : 3;
    unsigned f25 : 4;
    unsigned f23 : 2;
    unsigned f21 : 2;
    unsigned f19 : 2;
    unsigned f16 : 3;
    unsigned f10 : 6;
    unsigned f8 : 2;
    unsigned f0 : 8;
    u8 pad34[0x312 - 0x34];
    s16 unk312;
    u8 pad314[0x396 - 0x314];
    u8 unk396;
};
struct func_8038CFF4_G {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0x232 - 0xE0];
    s16 unk232;
    u8 pad234[0xB90 - 0x234];
    f32 unkB90;
    u8 padB94[0x1031 - 0xB94];
    u8 unk1031;
};
struct func_8038D5C0_StructGlobal;
extern struct func_8038D5C0_StructGlobal D_801BBBF0;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
#define D_801BBBF0 (((struct func_8038CFF4_G *)&D_801BBBF0)[0])
extern u8 D_801BBC8C[];
extern u8 D_801BBCAC[];
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_80228C20(void *, void *);
extern s32 func_80228D90(void *, void *);
extern void func_80228FD0(void *, void *, s32);
extern s32 func_80229260(void *, void *, void *, s32);
extern void func_802292D0(void *, void *);

#define ISP1 (dc == ((struct func_8038CFF4_Obj0 *)arg0->unkC2)->unkC)

void func_8038CFF4(struct func_8038CFF4_Obj *arg0, void *arg1) {
    s16 sp36;
    s16 sp34;
    struct func_8038CFF4_Ent *sp30;
    s32 sp2C;
    struct func_8038CFF4_Pl *a1;
    struct func_8038CFF4_Pl *v1;
    s16 ang;
    s32 dc;

    sp34 = (s16)(0x2800 - D_801BBBF0.unk232) & 0x1FFF;
    dc = D_801BBBF0.unkDC;
    sp30 = ISP1 ? (void *)D_801BBC8C : (void *)D_801BBCAC;
    a1 = ISP1 ? (void *)D_801BC03C : (void *)D_801BC3D8;
    v1 = (dc != ((struct func_8038CFF4_Obj0 *)arg0->unkC2)->unkC) ? (void *)D_801BC03C : (void *)D_801BC3D8;
    if ((arg0->unk91 == 1) && (D_801BBBF0.unk1031 == 7)) {
        arg0->unk91 = 2;
    }
    if (a1->f21 == 0) {
        return;
    }
    if (a1->f25 == 1) {
        return;
    }
    if ((D_801BBBF0.unk1031 >= 7) && (D_801BBBF0.unk1031 != 0xF)) {
        arg0->unk92 = arg0->unk95 = 0;
    }
    if (D_801BBBF0.unk1031 != 5) {
        return;
    }
    if (a1->f16 != 0) {
        return;
    }
    if (func_80229260(arg0, a1, sp30, 0xA) != 0) {
        return;
    }
    if ((D_801BBBF0.unkB90 < 20.0) || (arg0->unk95 == 1)) {
        if (arg0->unk95 == 0) {
            arg0->unk95 = 1;
            arg0->unk92 = 1;
            return;
        }
        if (D_801BBBF0.unkB90 > 25.0) {
            arg0->unk95 = 0;
            arg0->unk92 = 0;
            return;
        }
        if (((v1->f19 != 0) && (v1->unk312 >= 0xB)) || (v1->f25 == 2)) {
            if (a1->unk6 >= 0x64) {
                sp30->unk4 = 0x8000;
            }
        } else {
            if (arg0->unk91 == 2) {
                arg0->unk92 = 3;
            }
            if (arg0->unk92 == 1) {
                if (a1->unk6 >= 0x46) {
                    func_802292D0(sp30, a1);
                    arg0->unk91 = 1;
                    arg0->unk92 = 2;
                }
            } else if (arg0->unk92 == 2) {
                if (a1->f8 == 2) {
                    arg0->unk92 = 3;
                }
                if (a1->f8 == 0) {
                    arg0->unk92 = 1;
                }
            } else if (arg0->unk92 == 3) {
                if (a1->unk6 >= 0x64) {
                    if (func_80228D90(arg0, a1) != 0) {
                        a1->f8 = 0;
                        sp30->unk4 = 0x8000;
                        arg0->unk91 = 0;
                        return;
                    }
                }
                func_80228FD0(arg0, sp30, 4);
            }
        }
    } else {
        if (arg0->unk91 == 1) {
            arg0->unk91 = 2;
        }
        if (a1->f8 == 2) {
            a1->f8 = 0;
        }
        if ((arg0->unk98 == 0) && (a1->unk6 >= 0x64)) {
            if ((func_80228D90(arg0, a1) != 0) && (D_801BBBF0.unkB90 < 40.0f) && (D_801BBBF0.unkB90 > 25.0f) && (v1->unk396 == 0)) {
                a1->f8 = 0;
                sp30->unk4 = 0x8000;
                arg0->unk98 = 0x32;
                return;
            }
        }
        if (arg0->unk98 != 0) {
            arg0->unk98 = arg0->unk98 - 1;
        }
        if ((arg0->unk9C & 0x7F) < 0x3F) {
            ang = func_80228C20(arg0, a1) + sp34;
            sp30->unk6 = -func_8001EB64(ang) * 80.0f;
            sp30->unk8 = func_8001EAD0(ang) * 80.0f;
        }
    }
}
#undef ISP1
#undef D_801BBBF0

#define D_8038D45C D_8038D45C__func_8038D45C
#define func_802294BC func_802294BC__func_8038D45C
#define func_80229CE0 func_80229CE0__func_8038D45C
#define func_8022B640 func_8022B640__func_8038D45C
#define func_8038D45C func_8038D45C_decl
#undef func_8038D45C

struct func_8038D45C_StructObj {
    u8 pad0[0x9A];
    s16 unk9A;
    u8 pad9C[5];
    u8 unkA1;
    u8 unkA2;
};
struct func_8038D45C_StructState {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
};
struct func_8038D45C_StructOther {
    u8 pad0[0x30];
    s32 unk30;
    u8 pad34[0x396 - 0x34];
    u8 unk396;
};
extern void func_802294BC(void *);
extern s32 func_8022B640(s32);
extern void func_80229CE0(void *, void *, s32);

#define OBJ ((struct func_8038D45C_StructObj *)arg0)

void func_8038D45C(void *arg0, void *arg1, void *arg2) {
    struct func_8038D45C_StructState *state = arg1;
    struct func_8038D45C_StructOther *other = arg2;

    if ((*(f32 *)((u8 *)&D_801BC3D8 + 0x3A8) > 25.0f) && (other->unk396 == 0)) {
        state->unk2D8 = 0x13;
        state->unk2D9 = 6;
    } else if (((u32)(other->unk30 << 11) >> 30) != 0) {
        func_802294BC(state);
        OBJ->unk9A |= 8;
    } else if (func_8022B640(2) == 0) {
        state->unk2D8 = 0;
        func_80229CE0(arg0, state, 1);
    } else {
        state->unk2D8 = 1;
        state->unk2D9 = 0x23;
    }
    OBJ->unkA1 = state->unk2D8;
    OBJ->unkA2 = state->unk2D9;
}

extern void D_8038D45C(void *, void *, void *, void *);
#define func_8038D45C D_8038D45C
#undef OBJ
#undef D_8038D45C
#undef func_802294BC
#undef func_80229CE0
#undef func_8022B640


struct func_8038D548_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x92 - 0x10];
    u8 unk92;
    u8 unk93;
};

extern s32 D_801BBCCC;
struct func_8038D5C0_StructObj;
void func_8038D5C0(struct func_8038D5C0_StructObj *arg0, void *arg1);

void func_8038D548(struct func_8038D548_Struct *arg0, s32 arg1) {
    void *var_a1;
    void *var_a2;
    extern void func_8038D45C();

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
    func_8038D45C(arg0, var_a1, var_a2);
    func_800058DC((s32)arg0, (void *)func_8038D5C0);
}


struct func_8038D5C0_StructObj {
    u8 pad0[0x0C];
    s32 unkC;
    u8 pad10[0x91 - 0x10];
    u8 unk91;
    u8 pad92[0x9A - 0x92];
    s16 unk9A;
    u8 pad9C[0xA8 - 0x9C];
    u8 unkA8;
    u8 padA9[0xB0 - 0xA9];
    void *unkB0;
};

struct func_8038D5C0_StructA {
    u8 pad0[0x30];
    u16 unk30;
};

struct func_8038D5C0_StructB {
    u8 pad0[0x30];
    s32 unk30;
    u8 pad34[0x396 - 0x34];
    u8 unk396;
};

struct func_8038D5C0_StructGlobal {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0xB90 - 0xE0];
    f32 unkB90;
    u8 padB94[0x1031 - 0xB94];
    u8 unk1031;
};

extern s32 func_8022AB58(void *, void *, void *);
extern void func_8038D45C(void *, void *, void *, void *);
extern u8 func_8022B3E0[];

void func_8038D5C0(struct func_8038D5C0_StructObj *arg0, void *arg1) {
    struct func_8038D5C0_StructA *var_a1;
    struct func_8038D5C0_StructB *var_a2;
    u8 temp_v0_4;
    s16 temp_v0;
    s16 temp_v0_2;
    u32 temp_v0_3;

    if (D_801BBBF0.unkDC == arg0->unkC) {
        var_a1 = (struct func_8038D5C0_StructA *) &D_801BC03C;
    } else {
        var_a1 = &D_801BC3D8;
    }
    if (D_801BBBF0.unkDC == arg0->unkC) {
        var_a2 = &D_801BC3D8;
    } else {
        var_a2 = (struct func_8038D5C0_StructB *) &D_801BC03C;
    }
    if (arg0->unkA8 == 2) {
        func_8038D45C(arg0, var_a1, var_a2, &D_801BBBF0);
        arg0->unkA8 = 0;
        return;
    }
    if ((var_a1->unk30 & 7) || (D_801BBBF0.unk1031 == 6)) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = func_8038D5C0;
        func_800058DC(arg0, func_8022B3E0);
        return;
    }
    if (func_8022AB58(arg0, var_a1, var_a2) != 0) {
        arg0->unk91 = 0;
        func_8038D45C(arg0, var_a1, var_a2, &D_801BBBF0);
        return;
    }
    if (D_801BBBF0.unkB90 > 25.0f) {
        temp_v0 = arg0->unk9A;
        if ((temp_v0 == 0) && (var_a2->unk396 == 0)) {
            arg0->unk9A = (s16) (temp_v0 | 0x100);
            func_8038D45C(arg0, var_a1, var_a2, &D_801BBBF0);
            return;
        }
    }
    if (D_801BBBF0.unkB90 <= 20.0f) {
        temp_v0_2 = arg0->unk9A;
        if (temp_v0_2 & 0x100) {
            arg0->unk9A = (s16) (temp_v0_2 ^ 0x100);
            func_8038D45C(arg0, var_a1, var_a2, &D_801BBBF0);
            return;
        }
    }
    temp_v0_3 = (u32) (var_a2->unk30 << 0xB) >> 0x1E;
    if ((temp_v0_3 != 0) && !(arg0->unk9A & 8)) {
        func_8038D45C(arg0, var_a1, var_a2, &D_801BBBF0);
        return;
    }
    if ((temp_v0_3 == 0) && (arg0->unk9A & 8)) {
        func_8038D45C(arg0, var_a1, var_a2, &D_801BBBF0);
        arg0->unk9A = (s16) (arg0->unk9A ^ 8);
    }
}


struct func_8038D7B4_Arg0 {
    u8 pad[0xA5];
    u8 unkA5;
};

struct func_8038D7B4_Arg1 {
    u8 pad[6];
    s16 unk6;
};

void func_8022A834();

void func_8038D7B4(struct func_8038D7B4_Arg0 *arg0, struct func_8038D7B4_Arg1 *arg1) {
    if (arg1->unk6 >= 0x64) {
        arg0->unkA5 = 2;
        return;
    }
    func_8022A834();
}

