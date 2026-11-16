#include "common.h"
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];


struct func_8038CFF4_StructA { u8 pad0[0xC]; struct func_8038CFF4_StructA *unkC2; };
struct func_8038CFF4_StructO {
    u8 pad0[0xC];
    struct func_8038CFF4_StructA *unkC;
    u8 pad10[0x90 - 0x10];
    u8 unk90; u8 unk91; u8 unk92; u8 pad93[2]; u8 unk95; u8 pad96[2];
    s16 unk98; s16 unk9A;
};
struct func_8038CFF4_StructG {
    u8 pad0[0x30]; u16 unk30; u8 pad32[2];
    u8 pad34[0xDC - 0x34];
    void *unkDC; u8 *unkE0; u8 padE4[0xF0 - 0xE4]; u8 *unkF0;
    u8 padF4[0x232 - 0xF4]; s16 unk232;
    u8 pad234[0xB94 - 0x234]; f32 unkB94;
    u8 padB98[0x1031 - 0xB98]; u8 unk1031;
};
struct func_8038CFF4_StructC { u8 pad0[2]; s16 unk2; u16 unk4; s16 unk6; s16 unk8; };
struct func_8038CFF4_StructP { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; };
struct func_8038CFF4_StructQ { u8 pad0[0x2C]; struct func_8038CFF4_StructP *unk2C; };
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s16 func_8001EF38(f32, f32);
extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);
extern s32 func_80228C20();
extern s32 func_80228D90();
extern s32 func_80229260();
extern void func_802292D0();
extern struct func_8038CFF4_StructG D_801BBBF0;
extern u16 D_801BBC20;
extern u8 D_801BBC8C[];
extern u8 D_801BBCAC[];

#define B32(p) (*(u8 *)((u8 *)(p) + 0x32))
struct func_8038CFF4_StructBits { u32 f31:1; u32 f30:1; u32 f29:1; u32 f28:1; u32 f26:2; u32 rest:26; };
#define BF(p) (*(struct func_8038CFF4_StructBits *)((u8 *)(p) + 0x38))
#define B38(p) (*(u32 *)((u8 *)(p) + 0x38))

void func_8038CFF4(struct func_8038CFF4_StructO *arg0, s32 arg1) {
    f32 sp5C;
    s32 v;
    f32 sp54;
    s16 sp52;
    s16 sp50;
    struct func_8038CFF4_StructC *sp4C;
    u8 *sp48;
    u8 *sp44;
    struct func_8038CFF4_StructQ *sp40;
#define t B38(sp48)
#define var_v0 (B32(sp48) & 3)
#define one 1

    sp50 = (s16)(0x2800 - D_801BBBF0.unk232) & 0x1FFF;
    sp4C = ((s32)arg0->unkC->unkC2 == (s32)D_801BBBF0.unkDC) ? (void *)D_801BBC8C : (void *)D_801BBCAC;
    if ((s32)arg0->unkC->unkC2 == (s32)D_801BBBF0.unkDC) {
        sp48 = D_801BC03C;
    } else {
        sp48 = D_801BC3D8;
    }
    if ((s32)arg0->unkC->unkC2 == (s32)D_801BBBF0.unkDC) {
        sp44 = D_801BC3D8;
    } else {
        sp44 = D_801BC03C;
    }
    if ((s32)arg0->unkC->unkC2 == (s32)D_801BBBF0.unkDC) {
        sp40 = (void *)D_801BBBF0.unkE0;
    } else {
        sp40 = (void *)D_801BBBF0.unkF0;
    }
    if ((arg0->unk91 == 1) && (D_801BBBF0.unk1031 == 7)) {
        arg0->unk91 = 2;
    }
#define temp_v0 (*(s32 *)(sp48 + 0x30))
    if ((((u32)(temp_v0 << 9) >> 0x1E) != 0) && (((u32)(temp_v0 * 8) >> 0x1C) != 1)) {
        if ((s32)D_801BBBF0.unk1031 >= 7 && D_801BBBF0.unk1031 != 0xF) {
            arg0->unk95 = 0;
            arg0->unk92 = 0;
        }
        if (D_801BBBF0.unk1031 == 5 && !((u16)(*(u16 *)(sp48 + 0x30) & 7)) && (func_80229260(arg0, sp48, sp4C, 0xA) == 0)) {
            if (arg0->unk92 == 0) {
                if (arg0->unk91 == one) {
                    arg0->unk91 = 2;
                }
                if (*(s16 *)(sp48 + 6) >= 0x46 && (f64)D_801BBBF0.unkB94 < 20.0) {
#undef temp_v0
#define temp_v0 (*(s32 *)(sp44 + 0x30))
                    if (((((u32)(temp_v0 << 0xB) >> 0x1E) != 0) && *(s16 *)(sp44 + 0x312) >= 0xB) || (((u32)(temp_v0 * 8) >> 0x1C) == 2)) {
                        if (*(s16 *)(sp48 + 6) >= 0x64) {
                            sp4C->unk4 = 0x8000;
                        }
                    } else {
                        sp52 = (s16)(func_80228C20(arg0) + sp50) & 0x1FFF;
                        sp4C->unk6 = (s16)(s32)(-func_8001EB64(sp52) * 80.0f);
                        sp4C->unk8 = (s16)(s32)(func_8001EAD0(sp52) * 80.0f);
                        arg0->unk92 = 1;
                        arg0->unk90 = 0;
                        goto block_51;
                    }
                } else {
                    arg0->unk92 = 0;
                    if (D_801BBBF0.unkB94 > 30.0f) {
                        sp52 = (s16)(func_80228C20(arg0) + sp50) & 0x1FFF;
                        if (arg0->unk98 == 0) {
                            sp4C->unk2 = 0x2000;
                            sp4C->unk6 = (s16)(s32)(-func_8001EB64(sp52) * 40.0f);
                            sp4C->unk8 = (s16)(s32)(func_8001EAD0(sp52) * 40.0f);
                        } else {
                            sp4C->unk6 = (s16)(s32)(-func_8001EB64(sp52) * 80.0f);
                            sp4C->unk8 = (s16)(s32)(func_8001EAD0(sp52) * 80.0f);
                            arg0->unk98 = arg0->unk98 - 1;
                        }
                    } else {
                        arg0->unk98 = 0x14;
                        if (((f64)D_801BBBF0.unkB94 > 14.0 && (D_801BBBF0.unk30 % 10) == 0) || *(s16 *)(sp48 + 6) >= 0x64) {
                            sp54 = 0.0f;
                        } else {
                            sp54 = 1.0f;
                        }
                        if (D_801BBBF0.unk30 & 0x100) {
                            if (func_8010843C(sp40->unk2C->unk4, sp40->unk2C->unk8, sp40->unk2C->unkC, func_8001EB64((s16)((s16)(s32)((f32)func_80228C20(arg0) + 2048.0f * sp54) & 0x1FFF)) * 20.0f + sp40->unk2C->unk4, sp40->unk2C->unk8, func_8001EAD0((s16)((s16)(s32)((f32)func_80228C20(arg0) + 2048.0f * sp54) & 0x1FFF)) * 20.0f + sp40->unk2C->unkC) == 0) {
                                sp52 = (s16)(s32)((f32)func_80228C20(arg0) + 2048.0f * sp54 + (f32)sp50) & 0x1FFF;
                            }
                        } else {
                            if (func_8010843C(sp40->unk2C->unk4, sp40->unk2C->unk8, sp40->unk2C->unkC, func_8001EB64((s16)((s16)(s32)((f32)func_80228C20(arg0) - 2048.0f * sp54) & 0x1FFF)) * 20.0f + sp40->unk2C->unk4, sp40->unk2C->unk8, func_8001EAD0((s16)((s16)(s32)((f32)func_80228C20(arg0) - 2048.0f * sp54) & 0x1FFF)) * 20.0f + sp40->unk2C->unkC) == 0) {
                                sp52 = (s16)(s32)((f32)func_80228C20(arg0) + (-2048.0f * sp54) + (f32)sp50) & 0x1FFF;
                            }
                        }
                        if (((s32)D_801BBBF0.unk30 % 256) >= 0xF1) {
                            sp4C->unk4 = 0x4000;
                        } else {
                            sp4C->unk6 = (s16)(s32)(-func_8001EB64(sp52) * 80.0f);
                            sp4C->unk8 = (s16)(s32)(func_8001EAD0(sp52) * 80.0f);
                        }
                    }
block_51:
                    if ((B32(sp48) & 3) == 2U) {
                        B32(sp48) = B32(sp48) & 0xFFFC;
                    }
                }
            } else {
                v = arg0->unk92;
                if (1 == (v | 0)) {
                    if ((B38(sp48) >> 0x1F) != 0) {
                        arg0->unk90 = 0x14;
                        arg0->unk92 = 3;
                        return;
                    }
                    if ((arg0->unk9A % 3) == 2) {
                        sp4C->unk4 = 0x10;
                        arg0->unk90 = 0x14;
                        arg0->unk92 = 3;
                        return;
                    }
                    if (arg0->unk91 != 2 && sp48[0x2D8] != 2) {
                        func_802292D0(sp4C, sp48);
                        arg0->unk91 = 1;
                        arg0->unk92 = 2;
                        return;
                    }
                    arg0->unk92 = 3;
                    return;
                }
                if (2 == (v | 0)) {
                    if ((B38(sp48) >> 0x1F) != 0) {
                        arg0->unk90 = 0x14;
                        arg0->unk92 = 3;
                    }
                    if (var_v0 == 2U) {
                        sp52 = (s16)(func_80228C20(arg0) + sp50) & 0x1FFF;
                        sp4C->unk6 = (s16)(s32)(-func_8001EB64(sp52) * 80.0f);
                        sp4C->unk8 = (s16)(s32)(func_8001EAD0(sp52) * 80.0f);
                        arg0->unk92 = 3;
                    }
                    if (var_v0 == 0) {
                        arg0->unk92 = 1;
                    }
                } else if (v == 3U) {
                    if ((f64)*(f32 *)(D_801BC3D8 + 0x3AC) > 25.0) {
                        arg0->unk92 = 0;
                        return;
                    }
                    if (BF(sp48).f31 != 0 && BF(sp48).f28 == 0 && BF(sp48).f26 == 1) {
                        sp48[0x328] = 3;
                        sp48[0x329] = 0;
                        sp5C = (f32)((f64)(func_8001EB64((s16)(func_80228C20(arg0) + 0x800)) * 80.0f) / 20.0);
                        *(s16 *)(sp48 + 0x32A) = func_8001EF38(sp5C, (f32)((f64)(func_8001EAD0((s16)(func_80228C20(arg0) + 0x800)) * 80.0f) / 20.0));
                        return;
                    }
                    if ((BF(sp48).f31 == 0 && func_80228D90(arg0, sp48) != 0 && *(s16 *)(sp48 + 6) >= 0x64 && arg0->unk90 == 0 && sp48[0x2D8] != 0xA) || (BF(sp48).f31 != 0 && BF(sp48).f28 == 0 && *(s16 *)(sp48 + 6) >= 0x64 && arg0->unk90 == 0) || (sp48[0x2D8] == 0xA && *(s16 *)(sp48 + 4) == *(s16 *)(sp48 + 6) && func_80228D90(arg0, sp48) != 0)) {
                        B32(sp48) = B32(sp48) & 0xFFFC;
                        sp4C->unk4 = 0x8000;
                        arg0->unk91 = 0;
                        sp48[0x391] = 1;
                        arg0->unk9A = arg0->unk9A + 1;
                    }
                    if (BF(sp48).f31 != 0 && BF(sp48).f28 != 0 && BF(sp48).f26 == 1 && arg0->unk90 == 0) {
                        sp4C->unk4 = 0x8000;
                        arg0->unk91 = 0;
                        arg0->unk9A = arg0->unk9A + 1;
                    }
                    if (BF(sp48).f31 != 0 && BF(sp48).f28 != 0 && BF(sp48).f26 == 2 && arg0->unk90 == 0) {
                        sp4C->unk4 = 0x10;
                    }
                    if (arg0->unk90 != 0) {
                        arg0->unk90 = arg0->unk90 - 1;
                    }
                }
            }
        }
    }
}
#undef t
#undef var_v0
#undef one
#undef temp_v0
#undef B32
#undef BF
#undef B38
