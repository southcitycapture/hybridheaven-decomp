#include "common.h"
extern u8 D_801BBBF0[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];


typedef struct {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0x232 - 0xE0];
    s16 unk232;
    u8 pad2[0xB90 - 0x234];
    f32 unkB90;
    u8 pad3[0x1031 - 0xB94];
    u8 unk1031;
} func_8038CFFC_StructG;

typedef struct {
    u8 pad0[0xC];
    s32 unkC;
} func_8038CFFC_StructC;

typedef struct {
    u8 pad0[0xC];
    func_8038CFFC_StructC *unkC;
    u8 pad1[0x90 - 0x10];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 pad2[2];
    u8 unk95;
    u8 pad3[2];
    s16 unk98;
    u8 pad4[2];
    u32 unk9C;
} func_8038CFFC_StructA;

typedef struct {
    s16 unk0;
    s16 unk2;
    u8 pad0[2];
    s16 unk6;
    u8 pad1[0x30 - 8];
    u32 ba : 3;
    u32 bb : 4;
    u32 bc : 2;
    u32 bd : 2;
    u32 be : 2;
    u32 bf : 3;
    u32 bg : 6;
    u32 bh : 2;
    u32 bi : 8;
    u8 pad2[4];
    u32 c31 : 1;
    u32 c0 : 31;
} func_8038CFFC_StructB;

typedef struct {
    u8 pad0[4];
    u16 unk4;
    s16 unk6;
    s16 unk8;
} func_8038CFFC_StructP;

#define G ((func_8038CFFC_StructG *)D_801BBBF0)
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s16 func_80228C20(void *, void *);
extern s32 func_80228D90(void *, void *);
extern void func_80228FD0(void *, void *, s32);
extern s32 func_80229260(void *, void *, void *, s32);
extern void func_802292D0(void *, void *);
extern u8 D_801BBC8C[];
extern u8 D_801BBCAC[];
extern f64 D_8038DB78;

void func_8038CFFC(func_8038CFFC_StructA *arg0, s32 arg1) {
    s32 pad;
    s16 sp32;
    func_8038CFFC_StructP *sp2C;
    func_8038CFFC_StructB *a1;
    func_8038CFFC_StructB *v1;
    u16 n;
    s16 ang;

    sp32 = (s16)(0x2800 - G->unk232) & 0x1FFF;
    sp2C = (arg0->unkC->unkC == G->unkDC) ? (func_8038CFFC_StructP *)D_801BBC8C : (func_8038CFFC_StructP *)D_801BBCAC;
    if (arg0->unkC->unkC == G->unkDC) {
        a1 = (func_8038CFFC_StructB *)D_801BC03C;
    } else {
        a1 = (func_8038CFFC_StructB *)D_801BC3D8;
    }
    if (arg0->unkC->unkC == G->unkDC) {
        v1 = (func_8038CFFC_StructB *)D_801BC3D8;
    } else {
        v1 = (func_8038CFFC_StructB *)D_801BC03C;
    }
    if (arg0->unk91 == 1 && G->unk1031 == 7) {
        arg0->unk91 = 2;
    }
    if (a1->bd == 0 || a1->bb == 1) {
        return;
    }
    if (G->unk1031 >= 7 && G->unk1031 != 15) {
        arg0->unk92 = arg0->unk95 = 0;
    }
    if (G->unk1031 != 5 || a1->bf != 0 || func_80229260(arg0, a1, sp2C, 10) != 0) {
        return;
    }
    if (G->unkB90 < 15.0 || arg0->unk95 == 1) {
        if (arg0->unk95 == 0) {
            arg0->unk95 = 1;
            arg0->unk92 = 1;
        }
        if (G->unkB90 > 20.0) {
            arg0->unk95 = 0;
            arg0->unk92 = 0;
            if (a1->bh != 0) {
                a1->bh = 0;
            }
        } else if (v1->be != 0 || v1->bb == 2) {
            if (a1->unk6 >= 100) {
                sp2C->unk4 = 0x8000;
            }
        } else {
            if (arg0->unk91 == 2) {
                arg0->unk92 = 4;
            }
            if (arg0->unk92 == 1) {
                if (a1->c31) {
                    arg0->unk92 = 3;
                    arg0->unk90 = 0;
                    return;
                }
                if (a1->unk6 >= 0x47) {
                    func_802292D0(sp2C, a1);
                    arg0->unk91 = 1;
                    arg0->unk92 = 2;
                    return;
                }
                func_80228FD0(arg0, sp2C, 4);
            } else if (arg0->unk92 == 2) {
                if (a1->c31) {
                    arg0->unk92 = 3;
                }
                if (a1->bh == 2) {
                    arg0->unk92 = 4;
                }
                if (a1->bh == 0) {
                    arg0->unk92 = 1;
                }
            } else if (arg0->unk92 == 3) {
                n = (a1->unk2 * 10) / (f32)a1->unk0 + 20.0f;
                if (!a1->c31) {
                    arg0->unk92 = 0;
                }
                if (n < arg0->unk90++) {
                    if (a1->c31) {
                        arg0->unk92 = 4;
                        arg0->unk90 = 0;
                    }
                }
            } else if (arg0->unk92 == 4) {
                if (a1->unk6 >= 100 && func_80228D90(arg0, a1) != 0) {
                    a1->bh = 0;
                    sp2C->unk4 = 0x8000;
                    arg0->unk91 = 0;
                    arg0->unk92 = 5;
                    return;
                }
                func_80228FD0(arg0, sp2C, 4);
            } else if (arg0->unk92 == 5 && G->unk1031 == 5) {
                arg0->unk95 = 0;
                arg0->unk92 = 0;
            }
        }
    } else {
        if (arg0->unk91 == 1) {
            arg0->unk91 = 2;
        }
        if (a1->bh == 2) {
            a1->bh = 0;
        }
        if (G->unkB90 > 25.0f && v1->unk0 * D_8038DB78 < v1->unk2 && a1->unk6 >= 100 && arg0->unk98 != 0) {
            sp2C->unk4 = 0x8000;
            arg0->unk98--;
        }
        if ((arg0->unk9C & 0x1F) < 10) {
            ang = func_80228C20(arg0, a1) + sp32;
            sp2C->unk6 = -func_8001EB64(ang) * 80.0f;
            sp2C->unk8 = func_8001EAD0(ang) * 80.0f;
        }
    }
}
