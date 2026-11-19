#include "common.h"
struct func_8038D7D4_StructG { u8 pad[0xDC]; s32 unkDC; u8 pad2[0x1031-0xE0]; u8 unk1031; };
extern struct func_8038D7D4_StructG D_801BBBF0;
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
extern s32 func_802291FC();
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
    u8 pad3C[0x2D1 - 0x3C];
    u8 unk2D1;
    u8 pad2D2[0x385 - 0x2D2];
    u8 unk385;
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
#define GB90 (*(f32 *)((u8 *)&D_801BBBF0 + 0xB90))
#define GEC (*(func_8038CFF4_StructU **)((u8 *)&D_801BBBF0 + 0xEC))
#define B32(p) (*((u8 *)(p) + 0x32))
#define H30(p) (*(u16 *)((u8 *)(p) + 0x30))

void func_8038CFF4(func_8038CFF4_StructP *arg0, s32 arg1) {
    s16 sp3E;
    s16 cooldown;
    s16 sp3A;
    s16 distance;
    func_8038CFF4_StructO *sp34;
    u8 state;
    func_8038CFF4_StructS *a1;
    func_8038CFF4_StructS *t0;
    u8 sp27;
    s32 r;
    s32 v;

    sp3A = (s16)(0x2800 - G232) & 0x1FFF;
    sp34 = (arg0->unkC->unkC == GG.unkDC) ? (func_8038CFF4_StructO *)D_801BBC8C : (func_8038CFF4_StructO *)D_801BBCAC;
    if (arg0->unkC->unkC == GG.unkDC) {
        a1 = (func_8038CFF4_StructS *)D_801BC03C;
    } else {
        a1 = (func_8038CFF4_StructS *)D_801BC3D8;
    }
    if (arg0->unkC->unkC == GG.unkDC) {
        t0 = (func_8038CFF4_StructS *)D_801BC3D8;
    } else {
        t0 = (func_8038CFF4_StructS *)D_801BC03C;
    }
    if ((s32)t0 == (s32)&D_801BBBF0 + 0x44C) {
        arg1 = ((func_8038CFF4_StructU *)GG.unkDC)->unk5C->unk1C;
    } else {
        arg1 = GEC->unk5C->unk1C;
    }
    sp27 = func_8022559C(arg1, a1);
    if ((arg0->unk91 == 1) && (GG.unk1031 == 7)) {
        arg0->unk91 = 2;
    }
    if ((a1->f30_9 != 0) && (a1->f30_3 != 1)) {
        if ((GG.unk1031 >= 7) && (GG.unk1031 != 0xF)) {
            arg0->unk92 = arg0->unk95 = 0;
        }
        if ((GG.unk1031 == 5) && (t0->f38_1 != 1) && !(H30(a1) & 7)) {
            if ((GB90 < 18.0) || (arg0->unk95 == 1)) {
                if (arg0->unk95 == 0) {
                    arg0->unk95 = arg0->unk92 = 1;
                    return;
                }
                if (((t0->f30_11 != 0) && (t0->unk2D1 >= 5)) || (t0->f30_3 == 2U)) {
                    if (a1->unk6 >= 0x64) {
                        sp34->unk4 = 0x8000;
                    }
                    return;
                }
                r = (s16)func_802291FC(arg0, a1, sp34, 0x3C);
                if (r == 2) {
                    arg0->unk92 = 4;
                    return;
                }
                if (r == 1) {
                    return;
                }
                if ((GB90 > 25.0) && (arg0->unk92 != 4)) {
                    arg0->unk95 = 0;
                    arg0->unk92 = 0;
                    arg0->unk98 = 0x1E;
                    return;
                }
                if (arg0->unk91 == 2) {
                    arg0->unk92 = 3;
                }
                state = arg0->unk92;
                if (state == 1) {
                    distance = a1->unk6;
                    if ((distance >= 0x47) || ((t0->unk385 < 8) && (distance >= 0x33))) {
                        func_802292D0(sp34, a1);
                        arg0->unk91 = 1;
                        arg0->unk92 = 2;
                        return;
                    }
                    func_80228FD0(arg0, sp34, 4);
                    return;
                }
                if (state == 2) {
                    if ((B32(a1) & 3) == 2U) {
                        arg0->unk92 = 3;
                    }
                    if ((B32(a1) & 3) == 0) {
                        arg0->unk92 = 1;
                    }
                } else if (state == 3) {
                    if (((a1->unk6 >= 0x64) || (t0->unk385 < 8)) && (func_80228D90(arg0, a1) != 0)) {
                        B32(a1) = B32(a1) & 0xFFFC;
                        sp34->unk4 = 0x8000;
                        arg0->unk91 = 0;
                        arg0->unk98 = 0x32;
                        return;
                    }
                    func_80228FD0(arg0, sp34, 4);
                } else if (state == 4) {
                    sp3E = (s16)(func_80228C20(arg0) + sp3A) & 0x1FFF;
                    sp34->unk6 = -D_8001EB64(sp3E) * 80.0f;
                    sp34->unk8 = D_8001EAD0(sp3E) * 80.0f;
                    if (GB90 < 12.0) {
                        sp34->unk4 = 0x8000;
                        arg0->unk98 = 0x1E;
                    }
                }
            } else {
                if (arg0->unk91 == 1) {
                    arg0->unk91 = 2;
                }
                v = B32(a1);
                if ((v & 3) == 2U) {
                    B32(a1) = v & 0xFFFC;
                }
                cooldown = arg0->unk98;
                if (cooldown == 0) {
                    sp3E = (s16)(func_80228C20(arg0) + sp3A) & 0x1FFF;
                    if (GB90 > 60.0f) {
                        arg0->unk9A = 0x1E;
                    }
                    arg1 = arg0->unk9A-- > 0;
                    if (arg1) {
                        sp34->unk2 = 0x2000;
                        sp34->unk6 = -D_8001EB64(sp3E) * 40.0f;
                        sp34->unk8 = D_8001EAD0(sp3E) * 40.0f;
                        return;
                    }
                    if (((sp27 >= 0x15) && (GB90 > 30.0f)) || (GB90 > 30.0f)) {
                        sp34->unk6 = -D_8001EB64(sp3E) * 80.0f;
                        sp34->unk8 = D_8001EAD0(sp3E) * 80.0f;
                        return;
                    }
                    sp34->unk6 = -D_8001EB64(sp3E) * 40.0f;
                    sp34->unk8 = D_8001EAD0(sp3E) * 40.0f;
                } else {
                    arg0->unk98 = cooldown - 1;
                }
            }
        }
    }
}
