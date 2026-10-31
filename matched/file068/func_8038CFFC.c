#include "common.h"
struct func_8038DA4C_StructGlobal {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0xB90 - 0xE0];
    f32 unkB90;
    u8 padB94[0x1031 - 0xB94];
    u8 unk1031;
};
extern struct func_8038DA4C_StructGlobal D_801BBBF0;
extern u8 D_801BC03C;
extern u8 D_801BC3D8[];
struct func_8038D9D4_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x92 - 0x10];
    u8 unk92;
    u8 unk93;
};


struct func_8038CFFC_StructG {
    u8 pad0[0x30];
    u16 unk30;
    u8 pad32[0xDC - 0x32];
    s32 unkDC;
    void *unkE0;
    u8 padE4[0xF0 - 0xE4];
    void *unkF0;
    u8 padF4[0x232 - 0xF4];
    s16 unk232;
    u8 pad234[0xB90 - 0x234];
    f32 unkB90;
    f32 unkB94;
    u8 padB98[0x1031 - 0xB98];
    u8 unk1031;
};

struct func_8038CFFC_StructP {
    u8 pad0[4];
    u16 unk4;
    s16 unk6;
    s16 unk8;
    u8 padA[0x30 - 0xA];
    u32 ba:3;
    u32 bb:4;
    u32 bc:2;
    u32 bd:2;
    u32 be:2;
    u32 bf:3;
    u32 bg:6;
    u32 bh:2;
    u32 bi:8;
    u8 pad34[0x38 - 0x34];
    u32 c31:1;
    u32 c30:1;
    u32 c29:1;
    u32 c28:1;
    u32 crest:28;
    u8 pad3C[0x9E - 0x3C];
    u16 unk9E;
};

struct func_8038CFFC_StructO {
    u8 pad0[0xC];
    struct func_8038D9D4_Struct *unkC;
    u8 pad10[0x90 - 0x10];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 pad93[2];
    u8 unk95;
    u8 pad96[2];
    s16 unk98;
};

struct func_8038CFFC_StructF {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
};

struct func_8038CFFC_StructE {
    u8 pad0[0x2C];
    struct func_8038CFFC_StructF *unk2C;
};

#define G (*(struct func_8038CFFC_StructG *)&D_801BBBF0)
extern u8 D_801BBC8C;
extern u8 D_801BBCAC;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);
extern s32 func_80228C20(void *);
extern s32 func_80228D90(void *, void *);
extern s32 func_802291FC(void *, void *, void *, s32);
extern void func_802292D0(void *, void *);

void func_8038CFFC(struct func_8038CFFC_StructO *arg0, s32 arg1) {
    s16 sp5E;
    f32 sp58;
    s16 sp56;
    struct func_8038CFFC_StructP *sp50;
    struct func_8038CFFC_StructP *a1;
    struct func_8038CFFC_StructP *t1;
    struct func_8038CFFC_StructE *sp44;
    s32 hi;
#define t hi

    sp56 = (s16)(0x2800 - G.unk232) & 0x1FFF;
    sp50 = (arg0->unkC->unkC == D_801BBBF0.unkDC) ? (void *)&D_801BBC8C : (void *)&D_801BBCAC;
    if (arg0->unkC->unkC == D_801BBBF0.unkDC) {
        a1 = (void *)&D_801BC03C;
    } else {
        a1 = (void *)&D_801BC3D8;
    }
    if (arg0->unkC->unkC != D_801BBBF0.unkDC) {
        t1 = (void *)&D_801BC03C;
    } else {
        t1 = (void *)&D_801BC3D8;
    }
    if (arg0->unkC->unkC == D_801BBBF0.unkDC) {
        sp44 = G.unkE0;
    } else {
        sp44 = G.unkF0;
    }
    if ((arg0->unk91 == 1) && (G.unk1031 == 7)) {
        arg0->unk91 = 2;
    }
    if ((a1->bd != 0) && (a1->bb != 1)) {
        if ((G.unk1031 >= 7) && (G.unk1031 != 0xF)) {
            arg0->unk98 = 0;
            arg0->unk95 = *((u8 *)arg0 + 0x99);
            arg0->unk92 = *((u8 *)arg0 + 0x99);
        }
        if ((G.unk1031 == 5) && !a1->bf && (func_802291FC(arg0, a1, sp50, 0xA) == 0)) {
            if (arg0->unk92 == 0) {
                if (arg0->unk91 == 1) {
                    arg0->unk91 = 2;
                }
                if (a1->bh == 2) {
                    a1->bh = 0;
                }
                if (a1->c31 != 0) {
                    arg0->unk90 = 0x14;
                    arg0->unk92 = 3;
                    return;
                }
                if ((a1->unk6 >= 0x46) && ((f64)G.unkB94 < 12.0)) {
                    if (func_80228D90(arg0, a1) != 0) {
                        arg0->unk92 = 1;
                        arg0->unk90 = 0;
                        return;
                    }
                }
                if (G.unkB94 > 60.0f) {
                    sp5E = (s16)(func_80228C20(arg0) + sp56) & 0x1FFF;
                    sp50->unk6 = (s32)(-func_8001EB64(sp5E) * 80.0f);
                    sp50->unk8 = (s32)(func_8001EAD0(sp5E) * 80.0f);
                    return;
                }
                if ((t1->unk9E == 0) && (G.unkB90 > 35.0f) && (arg0->unk98 != 0) && (a1->unk6 >= 0x64)) {
                    if (func_80228D90(arg0, a1) != 0) {
                        sp50->unk4 = 0x8000;
                        arg0->unk98 = arg0->unk98 - 1;
                        return;
                    }
                }
                if ((a1->unk6 >= 0x46) && ((f64)G.unkB94 > 14.0)) {
                    sp58 = 0.0f;
                } else {
                    sp58 = 1.0f;
                }
                hi = G.unk30 % 160;
                if (hi < 0x30) {
                    if (func_8010843C(sp44->unk2C->unk4, sp44->unk2C->unk8, sp44->unk2C->unkC, (func_8001EB64((s16)((s16)(s32)((f32)func_80228C20(arg0) + 2048.0f * sp58) & 0x1FFF)) * 20.0f) + sp44->unk2C->unk4, sp44->unk2C->unk8, (func_8001EAD0((s16)((s16)(s32)((f32)func_80228C20(arg0) + 2048.0f * sp58) & 0x1FFF)) * 20.0f) + sp44->unk2C->unkC) == 0) {
                        sp5E = (s16)(s32)((f32)func_80228C20(arg0) + 2048.0f * sp58 + (f32)sp56) & 0x1FFF;
                        sp50->unk6 = (s32)(-func_8001EB64(sp5E) * 80.0f);
                        sp50->unk8 = (s32)(func_8001EAD0(sp5E) * 80.0f);
                    }
                } else if ((hi >= 0x50) && (hi < 0x80)) {
                    if (func_8010843C(sp44->unk2C->unk4, sp44->unk2C->unk8, sp44->unk2C->unkC, (func_8001EB64((s16)((s16)(s32)((f32)func_80228C20(arg0) - 2048.0f * sp58) & 0x1FFF)) * 20.0f) + sp44->unk2C->unk4, sp44->unk2C->unk8, (func_8001EAD0((s16)((s16)(s32)((f32)func_80228C20(arg0) - 2048.0f * sp58) & 0x1FFF)) * 20.0f) + sp44->unk2C->unkC) == 0) {
                        sp5E = (s16)(s32)((f32)func_80228C20(arg0) + (-2048.0f * sp58) + (f32)sp56) & 0x1FFF;
                    }
                    sp50->unk6 = (s32)(-func_8001EB64(sp5E) * 80.0f);
                    sp50->unk8 = (s32)(func_8001EAD0(sp5E) * 80.0f);
                }
            } else {
                t = arg0->unk92;
                if (arg0->unk92 == 1) {
                    if (t1->be != 0) {
                        if (a1->unk6 >= 0x64) {
                            sp50->unk4 = 0x8000;
                        }
                    } else if ((f64)G.unkB94 > 18.0) {
                        arg0->unk92 = 0;
                        return;
                    }
                    if (a1->c31 != 0) {
                        arg0->unk90 = 0x14;
                        arg0->unk92 = 3;
                        return;
                    }
                    if (arg0->unk91 != 2) {
                        func_802292D0(sp50, a1);
                        arg0->unk91 = 1;
                        arg0->unk92 = 2;
                        return;
                    }
                    arg0->unk92 = 3;
                    return;
                } else if (t == 2) {
                    if (a1->c31 != 0) {
                        arg0->unk90 = 0x14;
                        arg0->unk92 = 3;
                        return;
                    }
                    if ((f64)G.unkB94 > 18.0) {
                        arg0->unk92 = 0;
                        return;
                    }
                    if (a1->bh == 2) {
                        arg0->unk92 = 3;
                    }
                    if (a1->bh == 0) {
                        arg0->unk92 = 1;
                    }
                } else if (t == 3) {
                    if ((f64)G.unkB94 > 18.0) {
                        arg0->unk92 = 0;
                        return;
                    }
                    if (((a1->c31 == 0) || ((a1->c31 != 0) && !a1->c28)) && (a1->unk6 >= 0x64) && (arg0->unk90 == 0)) {
                        if (func_80228D90(arg0, a1) != 0) {
                            a1->bh = 0;
                            sp50->unk4 = 0x8000;
                            arg0->unk91 = 0;
                            arg0->unk92 = 4;
                        }
                    }
                    if (arg0->unk90 != 0) {
                        arg0->unk90 = arg0->unk90 - 1;
                    }
                } else if ((t == 4) && (G.unk1031 == 5)) {
                    arg0->unk92 = 0;
                }
            }
        }
    }
}
