#include "common.h"

extern u8 D_801BEB00[];

extern void func_800279F0(void *a0, s32 a1);

void func_8013B130(void) {
    func_800279F0(&D_801BEB00, 0x14);
}



s32 func_8013B158(void) {
    s32 var_v1;

    for (var_v1 = 0; var_v1 < 0x14; var_v1 = (var_v1 + 1) & 0xFF) {
        if (D_801BEB00[var_v1] == 0) {
            return var_v1;
        }
    }
    return 0xFF;
}


struct func_8013B19C_Struct {
    u8 pad[4];
    u16 unk4;
    u8 pad6[0x1A];
};

extern struct func_8013B19C_Struct D_8017D460[];

s32 func_8013B19C(u16 arg0) {
    u8 i;

    i = 0;
    arg0 &= 0xFFF;
    for (; D_8017D460[i].unk4 != 0xFFFF; i++) {
        if (arg0 == D_8017D460[i].unk4) {
            return i;
        }
    }
    return 0xFF;
}


struct func_8013B208_Struct {
    u8 pad[0x60];
    u8 unk60;
};

extern u8 D_801BD980[];

s32 func_8013B208(struct func_8013B208_Struct *arg0) {
    u8 temp_v0;

    temp_v0 = arg0->unk60;
    if ((s32) temp_v0 < 0x14) {
        D_801BEB00[temp_v0] = 0;
        func_800279F0(&D_801BD980[arg0->unk60 * 0xE0], 0xE0);
        return 0;
    }
    return 1;
}

/* hh-block asm/nonmatchings/file008/8013B130/_mrg_keep_text_func_8013B268.s {"functions":["func_8013B268"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013B130/_mrg_keep_text_func_8013B268.s")

#define func_8013B570 func_8013B570_ctx
#undef func_8013B570

extern void D_8013B268(void *, u16, u8, u8, s32, s32);

void func_8013B570(void *arg0, u16 arg1, u8 arg2, u8 arg3, s32 arg4) {
    D_8013B268(arg0, arg1, arg2, arg3, arg4, 0x1000);
}

extern void D_8013B570(void *, u16, s32, s32, s32);
#define func_8013B570 D_8013B570

/* hh-block asm/nonmatchings/file008/8013B130/_mrg_keep_text_func_8013B5B4.s {"functions":["func_8013B5B4"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013B130/_mrg_keep_text_func_8013B5B4.s")


void func_8013B5B4(s32 arg0, u16 arg1);
extern void func_8013C7F8(s32 arg0, s32 arg1, u8 arg2);

void func_8013B808(s32 arg0, s32 arg1, u16 arg2) {
    func_8013C7F8(arg0, arg1, 1);
    func_8013B5B4(arg0, arg2);
}


struct func_8013B83C_Target {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_8013B83C_Obj {
    u8 pad[0x2C];
    struct func_8013B83C_Target *unk2C;
};

struct func_8013B83C_Inner {
    s16 pad[3];
    s16 unk6;
    s16 unk8;
    s16 unkA;
    s16 unkC;
};

struct func_8013B83C_Mid {
    u8 pad[0x38];
    struct func_8013B83C_Inner *unk38;
};

struct func_8013B83C_Outer {
    u8 pad[0xC];
    struct func_8013B83C_Mid *unkC;
};

extern struct func_8013B83C_Obj *D_8008DA88[];

void func_8013B83C(struct func_8013B83C_Outer *arg0, s32 arg1) {
    struct func_8013B83C_Inner *temp_v0;

    temp_v0 = arg0->unkC->unk38;
    D_8008DA88[arg1]->unk2C->unk4 = (f32) ((f64) (f32) temp_v0->unk6 / 10.0);
    D_8008DA88[arg1]->unk2C->unk8 = (f32) ((f64) (f32) temp_v0->unk8 / 10.0);
    D_8008DA88[arg1]->unk2C->unkC = (f32) ((f64) (f32) temp_v0->unkA / 10.0);
    D_8008DA88[arg1]->unk2C->unk12 = temp_v0->unkC;
}

/* hh-block asm/nonmatchings/file008/8013B130/_mrg_keep_text_func_8013B8E0.s {"functions":["func_8013B8E0"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013B130/_mrg_keep_text_func_8013B8E0.s")

struct func_8013BCD8_Struct {
    u8 pad[0x18];
    u16 unk18;
    u8 pad1a[0x83];
    u8 unk9D;
};
struct func_8013BCD8_Obj {
    u8 pad[0x3F];
    u8 unk3F;
    u8 pad40[0xF];
    u8 unk4F;
    u8 pad50[4];
    s32 unk54;
    u8 pad58[4];
    struct func_8013BCD8_Struct *unk5C;
};
extern u8 D_801BBBF0[];
extern u8 func_8013ADD4[];
extern u8 func_8021D8D0[];
extern void func_800058DC(void *, void *);
void func_8013BCD8(struct func_8013BCD8_Obj *arg0, s32 arg1) {
    struct func_8013BCD8_Struct *s = arg0->unk5C;
    s->unk9D = 2;
    if ((s->unk18 & 0x3000) == 0x1000) {
        if (*(void **)(D_801BBBF0 + 0xDC) == (void *)arg0) {
            arg0->unk3F = 0;
            arg0->unk4F = 1;
            arg0->unk54 = *(s32 *)(D_801BBBF0 + 0xEFC) = 0xE7F;
        }
        func_800058DC(arg0, func_8021D8D0);
        return;
    }
    func_800058DC(arg0, func_8013ADD4);
}


extern void func_80005700(s32);

void func_8013BD58(s32 arg0, s32 arg1) {
    func_8013B208((struct func_8013B208_Struct *) arg0);
    func_80005700(arg0);
}



struct func_8013BD84_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct func_8013BD84_Entry {
    struct func_8013BD84_Struct *unk0;
    u8 pad[0x1C];
};

extern struct func_8013BD84_Entry D_8017D478[];

struct func_8013BD84_Struct *func_8013BD84(struct func_8013BD84_Struct *arg0, void *arg1) {
    struct func_8013BD84_Struct *temp_v1;

    temp_v1 = arg0;
    *temp_v1 = *D_8017D478[func_8013B19C(((u16 *)arg1)[0x36 / 2])].unk0;
    return temp_v1;
}


struct func_8013BDD8_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[6];
    u16 unk36;
    u8 pad2[0x14];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
};


void func_8013BDD8(struct func_8013BDD8_Struct *arg0, s32 arg1) {
    arg0->unk2C = 0;
    arg0->unk4C = 0xA;
    arg0->unk4D = 0x12;
    arg0->unk4E = 0xA;
    func_8013B570(arg0, arg0->unk36, 2, 4, 0);
}


extern u16 D_801BBC1C;

void func_8013BE20(u8 *arg0, s32 arg1) {
    s32 var_v0;

    arg0[0x4C] = 0xA;
    arg0[0x4D] = 0x12;
    arg0[0x4E] = 0xA;
    arg0[0x3E] = 5;
    arg0[0x4F] = 1;
    if ((D_801BBC1C == 0xA) || (D_801BBC1C == 0xB)) {
        var_v0 = 1;
    } else {
        var_v0 = 3;
    }
    func_8013B570(arg0, *(u16 *)(arg0 + 0x36), 2, var_v0 & 0xFF, 0);
}


struct func_8013BE9C_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[6];
    u16 unk36;
    u8 pad2[6];
    u8 unk3E;
    u8 pad3[0xD];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
    u8 pad4[4];
    s32 unk54;
};

void func_8013BE9C(struct func_8013BE9C_Struct *arg0, s32 arg1) {
    arg0->unk2C = 0x3E0;
    arg0->unk4C = 0xA;
    arg0->unk4D = 0x12;
    arg0->unk4E = 0xA;
    arg0->unk3E = 5;
    arg0->unk4F = 1;
    arg0->unk54 = arg0->unk54 | 0xE1;
    func_8013B570(arg0, arg0->unk36, 2, 2, 0);
}


struct func_8013BF04_Struct {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad1[0x3E - 0x38];
    u8 unk3E;
    u8 pad2[0x4D - 0x3F];
    u8 unk4D;
    u8 pad3[0x4F - 0x4E];
    u8 unk4F;
};

extern void func_8013BF54();

void func_8013BF04(struct func_8013BF04_Struct *arg0, s32 arg1) {
    arg0->unk4D = 0x12;
    arg0->unk3E = 5;
    arg0->unk4F = 1;
    func_8013B570(arg0, arg0->unk36, 2, 0, (s32)func_8013BF54);
}

struct func_8013BF54_Struct {
    u8 pad[0x2C];
    u32 unk2C;
    u8 pad2[0xF];
    u8 unk3F;
    u8 pad3[0xF];
    u8 unk4F;
    u8 pad4[4];
    s32 unk54;
};
extern void func_801C4A5C(void *, s32);

void func_8013BF54(struct func_8013BF54_Struct *arg0, volatile s32 arg1)
{
  u8 *g = D_801BBBF0;
  arg0->unk3F = 0;
  arg0->unk4F = 1;
  arg0->unk54 = (*((s32 *) (g + 0xEFC)) = 0xE7F);
  arg0->unk2C |= 0x3E0;
  func_801C4A5C(arg0, 0);
  func_800058DC(arg0, func_8021D8D0);
}


struct func_8013BFB8_Struct { u8 pad0[0x5C]; struct func_8013BFB8_Struct2 *unk5C; };
struct func_8013BFB8_Struct2 { u8 pad0[0xE]; u16 unkE; u8 pad1[0x8E]; u16 unk9E; u16 unkA0; };
extern s32 func_8012C6B4(s32);
extern void func_8012D844(void *, u16, u16);
extern void func_8012D894(void *, u16, u16);
extern u16 D_8017D1D4[];
extern u16 D_8017D1D6;
extern u16 D_8017D1DC[];
extern u16 D_801BBC20;

void func_8013BFB8(struct func_8013BFB8_Struct *arg0, u16 *arg1) {
    s32 padv[1];
    u16 sp2A;
    s32 sp24;
    s32 v0;
    s32 v1;
    struct func_8013BFB8_Struct2 *s0;

    s0 = arg0->unk5C;
    sp2A = s0->unkE;
    if (s0->unk9E != 0) {
        s0->unk9E--;
        if (s0->unk9E == 0) {
            func_8012D844(arg0, arg1[0], arg1[2]);
        }
    } else {
        if (D_801BBC20 & 1) return;
        sp24 = func_8012C6B4(0x2BC);
        if ((arg1[1] & 0x100) && sp24 >= 0x119 && sp24 < 0x12D) {
            func_8012D844(arg0, arg1[0], arg1[3]);
            s0->unk9E = func_8012C6B4(0xA) + 5;
        }
        v0 = arg1[1] & 0xFF;
        if (v0 != 0) {
            v1 = (sp24 / 20) & 0xFF;
            if (v1 < v0) {
                func_8012D844(arg0, arg1[0], arg1[4 + v1]);
                s0->unk9E = func_8012C6B4(0xA) + 5;
            }
        }
    }
    if (sp2A == 0x141 || sp2A == 0x142) {
        if (s0->unkA0 != 0) {
            s0->unkA0--;
            if (s0->unkA0 == 0) {
                func_8012D894(arg0, D_8017D1D4[0], D_8017D1D4[2]);
            }
        } else if (D_801BBC20 & 1) {
            if (func_8012C6B4(0x2BC) < 0x28) {
                func_8012D894(arg0, arg1[0], D_8017D1DC[func_8012C6B4(D_8017D1D6 & 0xFF) & 0xFF]);
                s0->unkA0 = func_8012C6B4(0xA) + 5;
            }
        }
    }
}


void func_8013C184(struct func_8013BFB8_Struct *arg0, u16 *arg1) {
    struct func_8013BFB8_Struct2 *temp_v1;
    u16 temp_v0;
    u16 temp_t7;

    temp_v1 = arg0->unk5C;
    if (temp_v1->unk9E != 0) {
        if (--temp_v1->unk9E == 0) {
            func_8012D844(arg0, arg1[0], arg1[2]);
        }
    } else if ((arg1[1] & 0x100) && (D_801BBC20 & 1)) {
        if (func_8012C6B4(0x2BC) < 0x14) {
            func_8012D844(arg0, arg1[0], arg1[3]);
            temp_v1->unk9E = func_8012C6B4(0xA) + 5;
        }
    }
}


struct func_8013C244_Pair { u16 a; u16 b; };
struct func_8013C244_Tbl { struct func_8013C244_Pair e[11]; };
struct func_8013C244_In { u8 pad[0xE]; u16 unkE; };
struct func_8013C244_Obj { u8 pad[0x5C]; struct func_8013C244_In *unk5C; };
extern struct func_8013C244_Tbl D_8017DBF4;
extern u16 D_801BBF3E;

s32 func_8013C244(struct func_8013C244_Obj *arg0) {
    struct func_8013C244_In *q;
    s32 g;
    struct func_8013C244_Tbl t;
    u16 v;
    s32 i;

    q = arg0->unk5C;
    v = q->unkE;
    t = D_8017DBF4;
    g = D_801BBF3E;
    if (g == 1) {
        if (v == 0x29 || v == 0x2A || v == 0x2B || v == 0x2C) {
            return 1;
        } else {
            return 0;
        }
    } else if (g == 6) {
        if (v == 0x11B || v == 0x11C) {
            return 1;
        } else {
            return 0;
        }
    } else if (g == 8) {
        if (v == 0x33 || v == 0x34) {
            return 1;
        } else {
            return 0;
        }
    } else if (g == 2) {
        if (v == 0x141 || v == 0x142) {
            return 1;
        } else {
            return 0;
        }
    }
    for (i = 0; t.e[i].a != 0; i++) {
        if (g == t.e[i].a) break;
    }
    if (t.e[i].a == 0) {
        return 0;
    }
    if (v != t.e[i].b) {
        return 0;
    }
    return 1;
}

/* hh-block asm/nonmatchings/file008/8013B130/_mrg_keep_text_func_8013C3CC.s {"functions":["func_8013C3CC"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013B130/_mrg_keep_text_func_8013C3CC.s")


extern s32 func_80126944(void);
extern f64 D_8018E288;
extern f64 D_8018E290;
extern void *D_801BBCCC;
struct func_8013C52C_Struct {
    s16 unk0;
    s16 unk2;
};
extern struct func_8013C52C_Struct D_801BC03C;
extern struct func_8013C52C_Struct D_801BC3D8;

void func_8013C52C(void *arg0, u16 *arg1) {
    struct func_8013C52C_Struct *ptr;
    s32 index;

    if (func_80126944() != 1) {
        index = 2;
    } else {
        ptr = (arg0 == D_801BBCCC) ? &D_801BC03C : &D_801BC3D8;
        if ((f64)ptr->unk0 * D_8018E288 < (f64)ptr->unk2) {
            index = 2;
        } else if ((f64)ptr->unk0 * D_8018E290 < (f64)ptr->unk2) {
            index = 4;
        } else {
            index = 5;
        }
    }
    func_8012D844(arg0, *arg1, arg1[index]);
}

/* hh-block asm/nonmatchings/file008/8013B130/_mrg_keep_text_func_8013C608.s {"functions":["func_8013C608"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013B130/_mrg_keep_text_func_8013C608.s")


struct func_8013C6FC_StructInner {
    u8 pad[0xC];
    u16 unkC;
};
struct func_8013C6FC_Struct {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad1[0x24];
    struct func_8013C6FC_StructInner *unk5C;
};
extern struct func_8013BD84_Struct D_8017DC20;
extern void func_8013A1B4();

void func_8013C6FC(struct func_8013C6FC_Struct *arg0, s32 arg1, u8 arg2) {
    u8 pad[4];
    u32 temp;
    struct func_8013BD84_Struct sp2C;
    u8 pad2[4];

    temp = (u32) arg0->unk5C;
    if (((struct func_8013C6FC_StructInner *) temp)->unkC >= 0x18) {
        if (arg2 != 0) {
            sp2C = D_8017DC20;
            temp = arg0->unk36;
            if (temp == 0xF9 || temp == 0xFA || temp == 0xFB || temp == 0xF0) {
                sp2C.unk0 = 0x019100B3;
            }
        } else {
            sp2C = *D_8017D478[func_8013B19C(arg0->unk36)].unk0;
        }
        func_8013A1B4(arg1, sp2C, 0xE00000);
    }
}

#define func_8013C7F8 func_8013C7F8_ctx
#undef func_8013C7F8

struct func_8013C7F8_Leaf {
    u8 pad[0x4C];
    s32 unk4C;
};
struct func_8013C7F8_Inner {
    u8 pad0[4];
    struct func_8013C7F8_Leaf *unk4;
    u8 pad1[4];
    u16 unkC;
};
struct func_8013C7F8_Obj {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad1[0x24];
    struct func_8013C7F8_Inner *unk5C;
};
extern struct func_8013BD84_Struct D_8017DC2C;

void func_8013C7F8(s32 arg0, s32 arg1, u8 arg2) {
    s32 pad[2];
    struct func_8013BD84_Struct sp2C;
    u16 temp_a0;
    struct func_8013C7F8_Inner *temp_v0;

    temp_v0 = ((struct func_8013C7F8_Obj *)arg0)->unk5C;
    if (temp_v0->unkC >= 0x14 && temp_v0->unk4->unk4C >= 0) {
        temp_a0 = ((struct func_8013C7F8_Obj *)arg0)->unk36;
        if ((temp_a0 & 0xFFF) != 0x57) {
            if (arg2 != 0) {
                sp2C = D_8017DC2C;
            } else {
                sp2C = *D_8017D478[func_8013B19C(temp_a0)].unk0;
            }
            func_8013A1B4(arg1, sp2C, 0x40000);
        }
    }
}


extern u16 D_8017DCDC;

u16 func_8013C8E0(void) {
    return D_8017DCDC;
}


/* Original readonly objects; named loads retain their original addresses. */
static const unsigned char rodata_8013B130[] = {
    0x4D, 0x4F, 0x44, 0x45, 0x4C, 0x53, 0xB9, 0xBD, 0xC2, 0xA4, 0xC2, 0xCE, 0xA4, 0xCE, 0x20, 0x25,
    0x64, 0xC8, 0xD6, 0xA4, 0xF2, 0xBB, 0xC8, 0xCD, 0xD1, 0xA4, 0xB7, 0xA4, 0xDE, 0xA4, 0xB9, 0x0A,
    0x00, 0x00, 0x00, 0x00, 0x4D, 0x4F, 0x44, 0x45, 0x4C, 0x53, 0xA4, 0xCB, 0xB6, 0xF5, 0xA4, 0xAD,
    0xA4, 0xAC, 0xA4, 0xA2, 0xA4, 0xEA, 0xA4, 0xDE, 0xA4, 0xBB, 0xA4, 0xF3, 0x0A, 0x00, 0x00, 0x00,
    0xB3, 0xBA, 0xC5, 0xF6, 0xA4, 0xB9, 0xA4, 0xEB, 0x20, 0x62, 0x5F, 0x6B, 0x69, 0x6E, 0x64, 0x20,
    0x3D, 0x3D, 0x20, 0x25, 0x64, 0x28, 0x25, 0x30, 0x34, 0x78, 0x29, 0x20, 0xA4, 0xAC, 0xA4, 0xDF,
    0xA4, 0xC4, 0xA4, 0xAB, 0xA4, 0xEA, 0xA4, 0xDE, 0xA4, 0xBB, 0xA4, 0xF3, 0x0A, 0x00, 0x00, 0x00,
    0x4D, 0x4F, 0x44, 0x45, 0x4C, 0x53, 0xB9, 0xBD, 0xC2, 0xA4, 0xC2, 0xCE, 0xA4, 0xCE, 0x20, 0x25,
    0x64, 0xC8, 0xD6, 0xA4, 0xF2, 0xB2, 0xF2, 0xCA, 0xFC, 0xA4, 0xB7, 0xA4, 0xDE, 0xA4, 0xB7, 0xA4,
    0xBF, 0x0A, 0x00, 0x00, 0x45, 0x72, 0x72, 0x6F, 0x72, 0x20, 0x4D, 0x4F, 0x44, 0x45, 0x4C, 0x53,
    0xB9, 0xBD, 0xC2, 0xA4, 0xC2, 0xCE, 0xA4, 0xF2, 0xB2, 0xF2, 0xCA, 0xFC, 0xA4, 0xC7, 0xA4, 0xAD,
    0xA4, 0xDE, 0xA4, 0xBB, 0xA4, 0xF3, 0x0A, 0x00, 0x65, 0x72, 0x72, 0x20, 0x43, 0x61, 0x6E, 0x27,
    0x74, 0x20, 0x6D, 0x61, 0x6B, 0x65, 0x20, 0x6D, 0x6F, 0x64, 0x65, 0x6C, 0x20, 0x20, 0x25, 0x64,
    0x0A, 0x00, 0x00, 0x00, 0xA5, 0xD7, 0xA5, 0xEC, 0xA5, 0xA4, 0xA5, 0xE4, 0xA1, 0xBC, 0xA4, 0xCE,
    0xBD, 0xE9, 0xB4, 0xFC, 0xBA, 0xC2, 0xC9, 0xB8, 0xA4, 0xF2, 0xA5, 0xBB, 0xA5, 0xC3, 0xA5, 0xC8,
    0x20, 0x00, 0x00, 0x00, 0xA5, 0xD7, 0xA5, 0xEC, 0xA5, 0xA4, 0xA5, 0xE4, 0xA1, 0xBC, 0x32, 0xA4,
    0xCE, 0xBD, 0xE9, 0xB4, 0xFC, 0xBA, 0xC2, 0xC9, 0xB8, 0xA4, 0xF2, 0xA5, 0xBB, 0xA5, 0xC3, 0xA5,
    0xC8, 0x20, 0x00, 0x00, 0xA5, 0xE2, 0xA5, 0xC7, 0xA5, 0xEB, 0xA4, 0xCE, 0xBD, 0xE9, 0xB4, 0xFC,
    0xBA, 0xC2, 0xC9, 0xB8, 0xA4, 0xF2, 0xA5, 0xBB, 0xA5, 0xC3, 0xA5, 0xC8, 0x20, 0x00, 0x00, 0x00,
    0x78, 0x20, 0x3D, 0x20, 0x25, 0x66, 0x20, 0x79, 0x20, 0x3D, 0x20, 0x25, 0x66, 0x20, 0x7A, 0x20,
    0x3D, 0x20, 0x25, 0x66, 0x20, 0x72, 0x79, 0x20, 0x3D, 0x20, 0x25, 0x30, 0x78, 0x0A, 0x00, 0x00,
    0xB1, 0xC6, 0xA4, 0xF2, 0xBA, 0xEE, 0xA4, 0xEA, 0xA4, 0xDE, 0xA4, 0xB9, 0x0A, 0x00, 0x00, 0x00,
    0x80, 0x13, 0xB4, 0x84, 0x80, 0x13, 0xB4, 0xE4, 0x80, 0x13, 0xB4, 0xAC, 0x80, 0x13, 0xB4, 0xE4,
    0x80, 0x13, 0xB5, 0x0C, 0x80, 0x13, 0xC4, 0x10, 0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34,
    0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34,
    0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34,
    0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34,
    0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34,
    0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34,
    0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34,
    0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34,
    0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x18, 0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34,
    0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34,
    0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34,
    0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34,
    0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x18, 0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34,
    0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34,
    0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34,
    0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34,
    0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x18, 0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34,
    0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34,
    0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34,
    0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34,
    0x80, 0x13, 0xC4, 0x34, 0x80, 0x13, 0xC4, 0x34, 0x3F, 0xE6, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66,
    0x3F, 0xD3, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
