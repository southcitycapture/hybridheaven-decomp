#include "common.h"
struct func_8038D660_StructG { u8 pad[0xDC]; s32 unkDC; u8 pad2[0x1031-0xE0]; u8 unk1031; };
extern struct func_8038D660_StructG D_801BBBF0;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];


struct func_8038CFF4_StructInner {
    u8 pad[0xC];
    s32 unkC;
};

struct func_8038CFF4_StructArg {
    u8 pad0[0xC];
    struct func_8038CFF4_StructInner *unkC;
    u8 pad1[0x91 - 0x10];
    u8 unk91;
    u8 unk92;
    u8 pad2[0x95 - 0x93];
    u8 unk95;
    u8 pad3[0x9C - 0x96];
    u32 unk9C;
};

struct func_8038CFF4_StructGlobal {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0x232 - 0xE0];
    s16 unk232;
    u8 pad2[0xB90 - 0x234];
    f32 unkB90;
    u8 pad3[0x1031 - 0xB94];
    u8 unk1031;
};

struct func_8038CFF4_StructState {
    u8 pad0[6];
    s16 unk6;
    u8 pad1[0x30 - 8];
    union {
        u32 word;
        struct {
            u16 half;
            u8 byte;
            u8 last;
        } parts;
        struct {
            u32 pad0:3;
            u32 type:4;
            u32 pad1:2;
            u32 motion:2;
            u32 pad2:21;
        } flags;
    } unk30;
    u8 pad2[4];
    struct {
        u32 unused:1;
        u32 bits:2;
        u32 rest:29;
    } unk38;
    u8 pad3[0x2D1 - 0x3C];
    u8 unk2D1;
    u8 pad4[0x388 - 0x2D2];
    u8 unk388;
};

struct func_8038CFF4_StructOut {
    u8 pad[4];
    u16 unk4;
    s16 unk6;
    s16 unk8;
};

#define GLOBAL (*(struct func_8038CFF4_StructGlobal *)&D_801BBBF0)

extern u8 D_801BBC8C[];
extern u8 D_801BBCAC[];
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_80228C20(void *);
extern u32 func_80228D90(void *);
extern void func_80228FD0(void *, void *, s32);
extern s32 func_802291FC(void *, void *, void *, s32);
extern void func_802292D0(void *, void *);

void func_8038CFF4(struct func_8038CFF4_StructArg *arg0, s32 arg1) {
    s16 sp36;
    s16 pad34;
    s16 sp32;
    struct func_8038CFF4_StructOut *sp2C;
    s16 *angle_ptr = &sp36;
    struct func_8038CFF4_StructState *var_a1;
    struct func_8038CFF4_StructState *var_t0;
    s16 temp_v0_4;
    s16 temp_v0_6;
    register s32 temp_v1_2;
    s16 temp_v1_3;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 temp_v1;
    u32 var_v0;
    u8 temp_v0_2;
    u8 temp_v0_5;
    u32 temp_v0_7;
    f32 trig_value;

    sp32 = (s16)(0x2800 - GLOBAL.unk232) & 0x1FFF;
    temp_v1 = GLOBAL.unkDC;
    sp2C = (temp_v1 == arg0->unkC->unkC)
        ? (struct func_8038CFF4_StructOut *)D_801BBC8C
        : (struct func_8038CFF4_StructOut *)D_801BBCAC;
    var_a1 = (temp_v1 == arg0->unkC->unkC)
        ? (struct func_8038CFF4_StructState *)D_801BC03C
        : (struct func_8038CFF4_StructState *)D_801BC3D8;
    if (temp_v1 == arg0->unkC->unkC) {
        var_t0 = (struct func_8038CFF4_StructState *)D_801BC3D8;
    } else {
        var_t0 = (struct func_8038CFF4_StructState *)D_801BC03C;
    }
    if ((arg0->unk91 == 1) && (GLOBAL.unk1031 == 7)) {
        arg0->unk91 = 2;
    }
    if (var_a1->unk30.flags.motion == 0) return;
    if (var_a1->unk30.flags.type == 1) return;
    {
        if ((GLOBAL.unk1031 >= 7) && (GLOBAL.unk1031 != 0xF)) {
            arg0->unk92 = arg0->unk95 = 0;
        }
        if (GLOBAL.unk1031 != 5) return;
        if ((var_t0->unk38.bits != 1) && !(var_a1->unk30.parts.half & 7)) {
            temp_v0_2 = arg0->unk95;
            if (((f64) GLOBAL.unkB90 < 15.0) || (temp_v0_2 == 1)) {
                if (temp_v0_2 == 0) {
                    arg0->unk95 = 1;
                    arg0->unk92 = 1;
                    return;
                }
                temp_v0_3 = var_t0->unk30.word;
                if (((((u32) (temp_v0_3 << 0xB) >> 0x1E) != 0) || (((u32) (temp_v0_3 * 8) >> 0x1C) == 2)) && ((s32) var_t0->unk2D1 >= 5)) {
                    if (var_a1->unk6 >= 0x64) {
                        sp2C->unk4 = 0x8000;
                    }
                } else {
                    temp_v0_4 = func_802291FC(arg0, var_a1, sp2C, 0x1E);
                    if (temp_v0_4 == 2) {
                        arg0->unk92 = 4;
                        return;
                    }
                    if (temp_v0_4 != 1) {
                        if ((f64) GLOBAL.unkB90 > 20.0) {
                            arg0->unk95 = 0;
                            arg0->unk92 = 0;
                            return;
                        }
                        if (arg0->unk91 == 2) {
                            arg0->unk92 = 3;
                        }
                        temp_v0_5 = arg0->unk92;
                        if (temp_v0_5 == 1) {
                            temp_v0_6 = var_a1->unk6;
                            if ((temp_v0_6 >= 0x46) || (((s32) var_t0->unk388 < 6) && (temp_v0_6 >= 0x32))) {
                                func_802292D0(sp2C, var_a1);
                                arg0->unk91 = 1;
                                arg0->unk92 = 2;
                                return;
                            }
                            func_80228FD0(arg0, sp2C, 4);
                            return;
                        }
                        if (temp_v0_5 == 2) {
                            var_v0 = var_a1->unk30.parts.byte & 3;
                            if ((var_v0 << 0) == 2U) {
                                arg0->unk92 = 3;
                                var_v0 = var_a1->unk30.parts.byte & 3;
                            }
                            if (var_v0 == 0) {
                                arg0->unk92 = 1;
                            }
                        } else {
                            if (temp_v0_5 == 3) {
                                if ((var_a1->unk6 >= 0x64) || ((s32) var_t0->unk388 < 6)) {
                                    if (func_80228D90(arg0) != 0) {
                                        var_a1->unk30.parts.byte = var_a1->unk30.parts.byte & 0xFFFC;
                                        sp2C->unk4 = 0x8000;
                                        arg0->unk91 = 0;
                                        return;
                                    }
                                }
                                func_80228FD0(arg0, sp2C, 4);
                                return;
                            }
                            if (temp_v0_5 == 4) {
                                temp_v1_2 = (s16) (func_80228C20(arg0) + sp32) & 0x1FFF;
                                sp36 = temp_v1_2;
                                trig_value = -func_8001EB64(temp_v1_2) * 80.0f;
                                arg0 = (struct func_8038CFF4_StructArg *)(s32)*angle_ptr;
                                sp2C->unk6 = (s16) (s32) trig_value;
                                sp2C->unk8 = (s16) (s32) (func_8001EAD0((s32)arg0) * 80.0f);
                                if ((f64) GLOBAL.unkB90 < 11.0) {
                                    sp2C->unk4 = 0x8000;
                                }
                            }
                        }
                    }
                }
            } else {
                if (arg0->unk91 == 1) {
                    arg0->unk91 = 2;
                }
                temp_v0_7 = var_a1->unk30.parts.byte;
                if ((temp_v0_7 & 3) == 2) {
                    var_a1->unk30.parts.byte = temp_v0_7 & 0xFFFC;
                }
                if (((u32) (arg0->unk9C & 0x3F) < 0xAU) || (GLOBAL.unkB90 > 30.0f)) {
                    temp_v1_3 = func_80228C20(arg0) + sp32;
                    sp2C->unk6 = (s16) (s32) (-func_8001EB64(temp_v1_3) * 80.0f);
                    sp2C->unk8 = (s16) (s32) (func_8001EAD0(temp_v1_3) * 80.0f);
                }
            }
        }
    }
}
