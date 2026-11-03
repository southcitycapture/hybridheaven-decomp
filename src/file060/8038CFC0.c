#include "common.h"

extern void func_80229500();
void func_8038CFF4();

void func_8038CFC0(s32 arg0, f32 arg1) {
    extern void func_800058DC();
    func_80229500(arg0);
    arg0 = arg0 * 1;
    func_800058DC(arg0, func_8038CFF4);
}

#define D_801BBBF0 D_801BBBF0__func_8038CFF4
#define D_801BBC8C D_801BBC8C__func_8038CFF4
#define D_801BBCAC D_801BBCAC__func_8038CFF4
#define D_801BC03C D_801BC03C__func_8038CFF4
#define D_801BC3D8 D_801BC3D8__func_8038CFF4
#define func_8001EAD0 func_8001EAD0__func_8038CFF4
#define func_8001EB64 func_8001EB64__func_8038CFF4
#define func_80228C20 func_80228C20__func_8038CFF4
#define func_80228D90 func_80228D90__func_8038CFF4
#define func_80228FD0 func_80228FD0__func_8038CFF4
#define func_802291FC func_802291FC__func_8038CFF4
#define func_802292D0 func_802292D0__func_8038CFF4
#define func_8038D660_StructG func_8038D660_StructG__func_8038CFF4
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
#undef GLOBAL
#undef D_801BBBF0
#undef D_801BBC8C
#undef D_801BBCAC
#undef D_801BC03C
#undef D_801BC3D8
#undef func_8001EAD0
#undef func_8001EB64
#undef func_80228C20
#undef func_80228D90
#undef func_80228FD0
#undef func_802291FC
#undef func_802292D0
#undef func_8038D660_StructG


struct func_8038D4F4_Arg0 {
    u8 pad[0x92];
    u8 unk92;
    u8 unk93;
    u8 pad2[0x9A - 0x94];
    s16 unk9A;
    u8 pad3[0xA1 - 0x9C];
    u8 unkA1;
    u8 unkA2;
};

struct func_8038D4F4_Arg1 {
    u8 pad[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
};

struct func_8038D4F4_Arg2 {
    u8 pad[0x30];
    s32 unk30;
    u8 pad2[0x2D1 - 0x34];
    u8 unk2D1;
    u8 pad3[0x388 - 0x2D2];
    u8 unk388;
};

void func_802294BC(void *);
void func_80229CE0(void *, void *, s32);
s32 func_8022B640(s32);

void func_8038D4F4(struct func_8038D4F4_Arg0 *arg0, struct func_8038D4F4_Arg1 *arg1, struct func_8038D4F4_Arg2 *arg2)
{
  u32 temp_v0;
  s32 temp_t4;
  s32 temp_t5;
  temp_v0 = arg2->unk30;
  temp_t4 = 1;
  temp_t5 = 1;
  if ((((((u32) (temp_v0 << 0xB)) >> 0x1E) != 0) || ((((u32) (temp_v0 * 8)) >> 0x1C) == 2)) && (((s32) arg2->unk2D1) >= 5))
  {
    func_802294BC(arg1);
    arg0->unk9A = (s16) (arg0->unk9A | 8);
  }
  else
    if (arg2->unk388 < 6)
  {
    arg1->unk2D8 = temp_t4;
    func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
  }
  else
  {
    arg1->unk2D8 = temp_t5;
    func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    arg0->unk93 = (arg0->unk92 = 0);
  }
  arg0->unkA1 = arg1->unk2D8;
  arg0->unkA2 = arg1->unk2D9;
}

extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];

struct func_8038D5D8_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

struct func_8038D660_StructA;
void func_8038D660(struct func_8038D660_StructA *arg0, s32 arg1);
extern s32 D_801BBCCC;

void func_8038D5D8(struct func_8038D5D8_Struct *arg0, void *arg1) {
    void *var_a1;
    void *var_a2;
    extern void func_800058DC();

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
    func_80229500(arg0, var_a1, var_a2);
    func_8038D4F4((void *)arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038D660);
}

struct func_8038D660_StructA { u8 pad[0xC]; s32 unkC; u8 pad2[0x91-0x10]; u8 unk91; u8 pad3[0xA8-0x92]; u8 unkA8; u8 pad4[0xB0-0xA9]; void *unkB0; };
struct func_8038D660_StructG { u8 pad[0xDC]; s32 unkDC; u8 pad2[0x1031-0xE0]; u8 unk1031; };
struct func_8038D660_StructB { u8 pad[0x30]; union { u32 w; u16 h; } unk30; };
extern struct func_8038D660_StructG D_801BBBF0;
extern u8 func_8022B3E0[];
extern void func_800058DC(void *, void *, void *);
extern s32 func_8022AB58(void *, void *, void *);

void func_8038D660(struct func_8038D660_StructA *arg0, s32 arg1) {
    struct func_8038D660_StructB *a1;
    struct func_8038D660_StructB *a2;
    u32 v;
    s32 t;

    a1 = (D_801BBBF0.unkDC == arg0->unkC) ? &D_801BC03C : &D_801BC3D8;
    a2 = (D_801BBBF0.unkDC == arg0->unkC) ? &D_801BC3D8 : &D_801BC03C;
    if (arg0->unkA8 == 2) {
        func_8038D4F4((void *)arg0, (void *)a1, (void *)a2);
        arg0->unkA8 = 0;
        return;
    }
    if ((a1->unk30.h & 7) || D_801BBBF0.unk1031 == 6) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = func_8038D660;
        func_800058DC(arg0, func_8022B3E0, a2);
        return;
    }
    if (func_8022AB58(arg0, a1, a2) != 0) {
        arg0->unk91 = 0;
        func_8038D4F4((void *)arg0, (void *)a1, (void *)a2);
        return;
    }
    v = (a2->unk30.w << 11) >> 30;
    if (v != 0 && !(((struct func_8038D4F4_Arg0 *)arg0)->unk9A & 8)) {
        func_8038D4F4((void *)arg0, (void *)a1, (void *)a2);
        return;
    }
    if (v == 0) {
        t = ((struct func_8038D4F4_Arg0 *)arg0)->unk9A;
        if (t & 8) {
            ((struct func_8038D4F4_Arg0 *)arg0)->unk9A = t ^ 8;
            func_8038D4F4((void *)arg0, (void *)a1, (void *)a2);
        }
    }
}


struct func_8038D7B8_Arg0 {
    u8 pad[0xA5];
    u8 unkA5;
};

struct func_8038D7B8_Arg1 {
    u8 pad[6];
    s16 unk6;
};

void func_8022A834();

void func_8038D7B8(struct func_8038D7B8_Arg0 *arg0, struct func_8038D7B8_Arg1 *arg1) {
    if (arg1->unk6 >= 0x64) {
        arg0->unkA5 = 1;
        return;
    }
    func_8022A834();
}

