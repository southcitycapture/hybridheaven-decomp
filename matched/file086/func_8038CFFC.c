#include "common.h"
typedef struct func_8038D9A8_StructG {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0x1031 - 0xE0];
    u8 unk1031;
} func_8038D9A8_StructG;
extern func_8038D9A8_StructG D_801BBBF0;
extern u8 D_801BC03C;
extern u8 D_801BC3D8;
extern s8 D_8038DCB0;


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
