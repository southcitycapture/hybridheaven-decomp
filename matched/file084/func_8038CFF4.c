#include "common.h"
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
extern void func_802292D0();

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
