#include "common.h"
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

#define GG D_801BBBF0
#define G232 (*(s16 *)((u8 *)&D_801BBBF0 + 0x232))
#define GB90 (*(f32 *)((u8 *)&D_801BBBF0 + 0xB90))
#define B32(p) (*((u8 *)(p) + 0x32))
#define B33(p) (*((u8 *)(p) + 0x33))
#define H30(p) (*(u16 *)((u8 *)(p) + 0x30))

void func_8038CFF4(func_8038CFF4_StructP *arg0, s32 arg1) {
    f32 sp3C;
    s32 pad38;
    s16 sp36;
    s16 sp34;
    func_8038CFF4_StructO *sp30;
    s32 pad2C;
    func_8038CFF4_StructS *a1;
    func_8038CFF4_StructS *t0;
    f64 fv;
    s32 v;

    sp34 = (s16)(0x2800 - G232) & 0x1FFF;
    sp30 = (arg0->unkC->unkC == GG.unkDC) ? (func_8038CFF4_StructO *)D_801BBC8C : (func_8038CFF4_StructO *)D_801BBCAC;
    if (arg0->unkC->unkC == GG.unkDC) {
        a1 = (func_8038CFF4_StructS *)&D_801BC03C;
    } else {
        a1 = (func_8038CFF4_StructS *)&D_801BC3D8;
    }
    if (arg0->unkC->unkC != GG.unkDC) {
        t0 = (func_8038CFF4_StructS *)&D_801BC03C;
    } else {
        t0 = (func_8038CFF4_StructS *)&D_801BC3D8;
    }
    if (t0) {}
    if ((arg0->unk91 == 1) && (GG.unk1031 == 7)) {
        arg0->unk91 = 2;
    }
    if ((a1->f30_9 != 0) && (a1->f30_3 != 1)) {
        if ((GG.unk1031 >= 7) && (GG.unk1031 != 0xF)) {
            arg0->unk92 = arg0->unk95 = 0;
        }
        if ((GG.unk1031 == 5) && !(H30(a1) & 7) && (func_80229260(arg0, a1, sp30, 10) == 0)) {
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
                    sp3C = D_8001EB64((s16)(func_80228C20(arg0) + 0x1000)) * 80.0f / 20.0;
                    a1->unk32A = (s16)(func_8001EF38(sp3C, D_8001EAD0((s16)(func_80228C20(arg0) + 0x1000)) * 80.0f / 20.0) - sp34) & 0x1FFF;
                    return;
                }
                if (fv > 20.0) {
                    arg0->unk95 = 0;
                    arg0->unk92 = 0;
                    return;
                }
                if (((t0->f30_11 != 0) && (t0->unk312 != 0)) || (t0->f30_3 == 2U)) {
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
                v = arg0->unk92;
                if (1 == (v | 0)) {
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
                if (2 == (v | 0)) {
                    if (a1->f38_0 != 0) {
                        arg0->unk92 = 3;
                    }
                    v = B32(a1) & 3;
                    if (2U == (v | 0)) {
                        arg0->unk92 = 4;
                        v = B32(a1) & 3;
                    }
                    if (v == 0) {
                        arg0->unk92 = 1;
                    }
                } else if (v == 3) {
                    arg1 = arg0->unk90++ >= 0x15;
                    if (arg1) {
                        arg0->unk92 = 4;
                        arg0->unk90 = 0;
                    }
                } else if (v == 4) {
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
                v = B32(a1);
                if ((v & 3) == 2U) {
                    B32(a1) = v & 0xFFFC;
                }
                sp36 = (s16)(func_80228C20(arg0) + sp34) & 0x1FFF;
                if (GB90 > 35.0) {
                    arg0->unk98 = 0xF;
                }
                if (arg0->unk98 > 0) {
                    sp30->unk2 = 0x2000;
                    sp30->unk6 = -D_8001EB64(sp36) * 40.0f;
                    sp30->unk8 = D_8001EAD0(sp36) * 40.0f;
                    arg0->unk98--;
                    return;
                }
                if (a1->unk6 >= 0x64) {
                    sp30->unk6 = -D_8001EB64(sp36) * 80.0f;
                    sp30->unk8 = D_8001EAD0(sp36) * 80.0f;
                }
            }
        }
    }
}
