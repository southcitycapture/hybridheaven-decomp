#include "common.h"
typedef struct {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0xB90 - 0xE0];
    f32 unkB90;
    u8 padB94[0x1031 - 0xB94];
    u8 unk1031;
} func_8038D7F0_StructG;
extern func_8038D7F0_StructG D_801BBBF0;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];


extern u8 D_801BBC8C[];
extern u8 D_801BBCAC[];
extern f32 D_8001EAD0(s16);
extern f32 D_8001EB64(s16);
extern u8 func_8022559C(s32, void *);
extern s32 func_80228C20();
extern s32 func_80228D90();
extern void func_80228FD0();
extern s32 func_80229260();
extern void func_802292D0();

typedef struct func_8038CFF4_StructT {
    u8 pad0[0x1C];
    s32 unk1C;
} func_8038CFF4_StructT;

typedef struct func_8038CFF4_StructU {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x4C];
    func_8038CFF4_StructT *unk5C;
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
    u32 f30_13:19;
    u8 pad34[4];
    u32 f38_0:1;
    u32 f38_1:2;
    u32 f38_3:1;
    u32 f38_4:28;
    u8 pad3C[0x29C];
    u8 unk2D8;
    u8 unk2D9;
    u8 pad2DA[0x22];
    u8 unk2FC;
    u8 pad2FD[0x15];
    s16 unk312;
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
    s16 unk9A;
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
#define GEC (*(func_8038CFF4_StructU **)((u8 *)&D_801BBBF0 + 0xEC))
#define B32(p) (*((u8 *)(p) + 0x32))
#define H30(p) (*(u16 *)((u8 *)(p) + 0x30))

void func_8038CFF4(func_8038CFF4_StructP *arg0, s32 arg1) {
    s16 sp36;
    s16 sp34;
    func_8038CFF4_StructO *sp30;
    func_8038CFF4_StructS *t1;
    func_8038CFF4_StructS *a1;
    u8 *opponent_data;
    u8 sp23;
    f64 fv;
    s32 v;

    sp34 = (s16)(0x2800 - G232) & 0x1FFF;
    if (arg0->unkC->unkC == GG.unkDC) {
        sp30 = (func_8038CFF4_StructO *)D_801BBC8C;
    } else {
        sp30 = (func_8038CFF4_StructO *)D_801BBCAC;
    }
    if (arg0->unkC->unkC == GG.unkDC) {
        a1 = (func_8038CFF4_StructS *)D_801BC03C;
    } else {
        a1 = (func_8038CFF4_StructS *)D_801BC3D8;
    }
    if (arg0->unkC->unkC == GG.unkDC) {
        opponent_data = D_801BC3D8;
    } else {
        opponent_data = D_801BC03C;
    }
    t1 = (func_8038CFF4_StructS *)opponent_data;
    arg1 = ((s32)opponent_data == (s32)&D_801BBBF0 + 0x44C)
        ? ((func_8038CFF4_StructU *)GG.unkDC)->unk5C->unk1C
        : GEC->unk5C->unk1C;
    sp23 = func_8022559C(arg1, a1);
    if ((a1->f30_9 != 0) && (a1->f30_3 != 1)) {
        if ((GG.unk1031 >= 7) && (GG.unk1031 != 0xF)) {
            arg0->unk92 = arg0->unk95 = 0;
        }
        if ((GG.unk1031 == 5) && !(H30(a1) & 7) && (func_80229260(arg0, a1, sp30, 0x14) == 0)) {
            if ((((fv = GG.unkB90) < 15.0) || (arg0->unk95 == 1)) && (a1->unk6 >= 0x33)) {
                if (arg0->unk95 == 0) {
                    arg0->unk95 = 1;
                    arg0->unk92 = 1;
                    return;
                }
                if (fv > 20.0) {
                    arg0->unk95 = 0;
                    arg0->unk92 = 0;
                    return;
                }
                if (((t1->f30_11 != 0) && (t1->unk312 >= 0xB)) || (t1->f30_3 == 2U)) {
                    if (a1->unk6 >= 0x64) {
                        sp30->unk4 = 0x8000;
                    }
                } else {
                    if (arg0->unk92 == 1) {
                        if (a1->f38_0 != 0) {
                            arg0->unk90 = 0;
                            arg0->unk92 = 3;
                            return;
                        }
                        if (a1->unk2D8 == 0x13) {
                            arg0->unk92 = 4;
                            return;
                        }
                        if (1 == ((s32)a1->unk2FC % 4)) {
                            sp30->unk4 = 0x10;
                            arg0->unk92 = 3;
                            arg0->unk90 = 0;
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
                        if (++arg0->unk90 >= 0xB) {
                            arg0->unk92 = 4;
                            arg0->unk90 = 0;
                        }
                    } else if (arg0->unk92 == 4) {
                        if ((a1->unk6 >= 0x64) && (func_80228D90(arg0, a1) != 0)) {
                            B32(a1) = B32(a1) & 0xFFFC;
                            sp30->unk4 = 0x8000;
                            arg0->unk91 = 0;
                            return;
                        }
                        func_80228FD0(arg0, sp30, 4);
                    }
                }
            } else {
                v = B32(a1);
                if ((v & 3) == 2U) {
                    B32(a1) = v & 0xFFFC;
                }
                if (arg0->unk91 == 1) {
                    arg0->unk91 = 2;
                }
                if ((a1->unk6 >= 0x64) && (a1->unk2D8 == 0xC) && (func_80228D90(arg0) != 0) && (GG.unkB90 > 30.0)) {
                    sp30->unk4 = 0x8000;
                    arg0->unk91 = 0;
                    return;
                }
                sp36 = (s16)(func_80228C20(arg0) + sp34) & 0x1FFF;
                if (GG.unkB90 > 50.0f) {
                    arg0->unk9A = 0x14;
                }
                arg1 = arg0->unk9A-- > 0;
                if (arg1) {
                    sp30->unk2 = 0x2000;
                    sp30->unk6 = -D_8001EB64(sp36) * 40.0f;
                    sp30->unk8 = D_8001EAD0(sp36) * 40.0f;
                    return;
                }
                if (((sp23 >= 0x15) && (GG.unkB90 > 30.0f)) || (GG.unkB90 > 30.0f)) {
                    sp30->unk6 = -D_8001EB64(sp36) * 80.0f;
                    sp30->unk8 = D_8001EAD0(sp36) * 80.0f;
                    return;
                }
                sp30->unk6 = -D_8001EB64(sp36) * 40.0f;
                sp30->unk8 = D_8001EAD0(sp36) * 40.0f;
            }
        }
    }
}
