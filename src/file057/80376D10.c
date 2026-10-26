#include "common.h"


extern u8 D_801BBC0D;

s32 func_80376D10(void) {
    if (D_801BBC0D == 0) {
        return 0x4F;
    }
    if (D_801BBC0D == 1) {
        return 0x59;
    }
    return 0x63;
}

/* hh-block asm/nonmatchings/file057/80376D10/_mrg_keep_text_func_80376D48.s {"functions":["func_80376D48"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376D10/_mrg_keep_text_func_80376D48.s")

/* hh-block asm/nonmatchings/file057/80376D10/_mrg_keep_text_func_8037797C.s {"functions":["func_8037797C"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376D10/_mrg_keep_text_func_8037797C.s")

/* hh-block asm/nonmatchings/file057/80376D10/_mrg_keep_text_func_80378020.s {"functions":["func_80378020"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376D10/_mrg_keep_text_func_80378020.s")


struct func_8037865C_Struct {
    u8 pad4[4];
    u8 unk4;
    u8 pad5[5];
    u8 unkA;
    u8 pad0B[0x3D];
    u16 unk48;
    u8 pad4A[8];
    u8 unk52;
    u8 unk53;
    u8 unk54;
    u8 unk55;
};
extern struct func_8037865C_Struct D_8017DC40;

void func_8037865C(void) {
    u8 v;

    v = (u32) ((f64) ((f32) (D_8017DC40.unkA + D_8017DC40.unk52 + D_8017DC40.unk53 + D_8017DC40.unk54 + D_8017DC40.unk55 + D_8017DC40.unk4 + 6) / 6.0f) + 0.5);
    if (D_8017DC40.unk48 < v) {
        D_8017DC40.unk48 = v;
    }
}

/* hh-block asm/nonmatchings/file057/80376D10/_mrg_keep_text_func_80378764.s {"functions":["func_80378764"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376D10/_mrg_keep_text_func_80378764.s")


typedef struct {
    s16 x;
    s16 y;
    s16 z;
} func_803789B0_Entry;

typedef struct {
    u8 pad[0xAA];
    func_803789B0_Entry e[77];
} func_803789B0_Struct;

s32 func_803789B0(void *arg0, u8 arg1) {
    func_803789B0_Struct *p = arg0;
    u16 s0, s1, s2;
    u16 i;
    s16 v;

    s0 = 0; s1 = 0; s2 = 0;
    for (i = 0; i < 14; i++) {
        s0 += p->e[i].x;
    }
    for (i = 0; i < 20; i++) {
        s1 += p->e[i + 14].x;
    }
    for (i = 0; i < 40; i++) {
        s2 += p->e[i + 37].x;
    }
    if ((arg1 < 0xE && (p->e[arg1].x - (u16)(s0 / 14)) >= 0x15)
        || (arg1 >= 0xE && arg1 < 0x22 && (p->e[arg1].x - (u16)(s1 / 20)) >= 0x15)
        || (arg1 >= 0x25 && (p->e[arg1].x - (u16)(s2 / 40)) >= 0x15)) {
        return 0;
    }
    if ((p->e[arg1].x -(u16)((u16)(s0 + s1 + s2) / 74)) >= 0x33) {
        return 0;
    }
    return 1;
}

extern u8 D_801840E8[];
extern u8 D_801BBBF0[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];

struct func_80378B48_Ent {
    s16 a;
    u8 b;
    u8 c;
    u8 d;
    u8 e;
};
struct func_80378B48_Struct {
    u8 pad0[0xAA];
    struct func_80378B48_Ent ent[1];
};

void func_80378B48(void) {
    struct func_80378B48_Struct *p;
    u8 *P;
    u8 i;

    if (D_801BBBF0[0x1030] == 0) {
        p = (struct func_80378B48_Struct *)&D_801BC03C;
    } else {
        p = (struct func_80378B48_Struct *)&D_801BC3D8;
    }
    P = (u8 *)p;
    if (*(u16 *)(D_801BBBF0 + 0x2C) != 0xA && *(u16 *)(D_801BBBF0 + 0x2C) != 0xB && *(u16 *)(D_801BBBF0 + 0x2C) != 0xF) {
        i = P[0x2D9];
        if (p->ent[i].a < 0xFF) {
            if (func_803789B0(p, i)) {
                if (P == D_801BBBF0 + 0x7E8) {
                    p->ent[P[0x2D9]].a++;
                } else if (P[0x2D9] >= 0x52) {
                    p->ent[P[0x2D9]].a++;
                } else if (*(u16 *)(P + 0x300) >= 0x64) {
                    p->ent[P[0x2D9]].a++;
                } else {
                    D_801840E8[P[0x2D9]] += *(u16 *)(P + 0x300);
                    if (D_801840E8[P[0x2D9]] >= 0x64) {
                        D_801840E8[P[0x2D9]] -= 0x64;
                        p->ent[P[0x2D9]].a++;
                    }
                }
            }
        }
        if (P[0x2D8] != 0xA && P[0x2D8] != 9) {
            if (p->ent[P[0x2D9]].b < 0xFF) {
                p->ent[P[0x2D9]].b++;
            }
        }
    }
}

#define D_801BC03C D_801BC03C__func_80378CF0
#define D_801BC3D8 D_801BC3D8__func_80378CF0

struct func_80378CF0_Struct {
    u8 pad[0x2D9];
    u8 unk2D9;
};

struct func_80378CF0_Entry {
    s16 unk0;
    s16 unk2;
    s16 unk4;
};

extern struct func_80378CF0_Struct D_801BC03C;
extern struct func_80378CF0_Struct D_801BC3D8;
extern u8 D_801BCC20;
extern struct func_80378CF0_Entry D_80183CE0[];

void func_80378CF0(void) {
    struct func_80378CF0_Struct *var_v0;
    u8 *temp_v1;
    s32 temp_a0;
    struct func_80378CF0_Entry *temp_a1;
    s16 temp_a2;

    if (D_801BCC20 == 0) {
        var_v0 = &D_801BC03C;
    } else {
        var_v0 = &D_801BC3D8;
    }
    temp_v1 = &D_801840E8[var_v0->unk2D9];
    *temp_v1 += 0x32;
    temp_v1 = &D_801840E8[var_v0->unk2D9];
    temp_a0 = *temp_v1;
    if (temp_a0 >= 0x64) {
        *temp_v1 = temp_a0 - 0x64;
        temp_a1 = &D_80183CE0[var_v0->unk2D9];
        temp_a2 = temp_a1->unk2;
        if (temp_a2 < 0xFF) {
            temp_a1->unk2 = temp_a2 + 1;
        }
    }
}
#undef D_801BC03C
#undef D_801BC3D8

/* hh-block asm/nonmatchings/file057/80376D10/_mrg_keep_text_func_80378D84.s {"functions":["func_80378D84"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376D10/_mrg_keep_text_func_80378D84.s")

/* hh-block asm/nonmatchings/file057/80376D10/_mrg_keep_text_func_80378E3C.s {"functions":["func_80378E3C"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376D10/_mrg_keep_text_func_80378E3C.s")

extern u8 D_80388410[];

struct func_80378EBC_Struct {
    u8 pad[0x52];
    u16 unk52;
};

s32 func_80378EBC(struct func_80378EBC_Struct *arg0) {
    struct {
        u16 value;
        u16 pad;
    } total;
    u8 i;

    i = 0;
    total.value = 100;
    if (arg0->unk52 > 100) {
        while (i < func_80376D10()) {
            total.value += ((u16 *)(D_80388410 + 0x3DE))[i];
            i++;
            if (total.value >= arg0->unk52) {
                break;
            }
        }
    }
    return i;
}



void func_80378F64(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = *(u16 *)(arg0 + 0x82);
    if (temp_v0 - 1) {
        *(u16 *)(arg0 + 0x6A) = *(u16 *)(D_80388410 + (temp_v0 << 1) + 0x944);
    } else {
        *(u16 *)(arg0 + 0x6A) = 0;
    }
    temp_v0 = *(u16 *)(arg0 + 0x84);
    if (temp_v0 - 1) {
        *(u16 *)(arg0 + 0x6C) = *(u16 *)(D_80388410 + (temp_v0 << 1) + 0xA0A);
    } else {
        *(u16 *)(arg0 + 0x6C) = 0;
    }
    temp_v0 = *(u16 *)(arg0 + 0x86);
    if (temp_v0 - 1) {
        *(u16 *)(arg0 + 0x6E) = *(u16 *)(D_80388410 + (temp_v0 << 1) + 0xAD0);
    } else {
        *(u16 *)(arg0 + 0x6E) = 0;
    }
    temp_v0 = *(u16 *)(arg0 + 0x88);
    if (temp_v0 - 1) {
        *(u16 *)(arg0 + 0x70) = *(u16 *)(D_80388410 + (temp_v0 << 1) + 0xB96);
    } else {
        *(u16 *)(arg0 + 0x70) = 0;
    }
    temp_v0 = *(u16 *)(arg0 + 0x8A);
    if (temp_v0 - 1) {
        *(u16 *)(arg0 + 0x72) = *(u16 *)(D_80388410 + (temp_v0 << 1) + 0xC5C);
    } else {
        *(u16 *)(arg0 + 0x72) = 0;
    }
    temp_v0 = *(u16 *)(arg0 + 0x8C);
    if (temp_v0 - 1) {
        *(u16 *)(arg0 + 0x74) = *(u16 *)(D_80388410 + (temp_v0 << 1) + 0xD22);
        return;
    }
    *(u16 *)(arg0 + 0x74) = 0;
}



void func_80379054(u8 *arg0) {
    u8 *var_v0;
    u8 temp_a1;
    u8 temp_v1;

    if (arg0 == D_801BBBF0 + 0x44C) {
        var_v0 = (u8 *) &D_801BC3D8;
    } else {
        var_v0 = (u8 *) &D_801BC03C;
    }
    if ((arg0 == D_801BBBF0 + 0x7E8) && (*(u16 *) (D_801BBBF0 + 0x2C) != 0xA) && (*(u16 *) (D_801BBBF0 + 0x2C) != 0xB) && (*(u16 *) (D_801BBBF0 + 0x2C) != 0xF)) {
        if (arg0[0x2D8] == 0xC) {
            if ((arg0[0x2D9] == 0x14) || (arg0[0x2D9] == 0x15)) {
                temp_a1 = var_v0[0xA2];
                if ((s32) temp_a1 >= 0x1F) {
                    var_v0[0xA2] = (u8) (temp_a1 - 1);
                }
            }
            if ((arg0[0x2D9] == 0x16) || (arg0[0x2D9] == 0x17)) {
                temp_a1 = var_v0[0xA3];
                if ((s32) temp_a1 >= 0x1F) {
                    var_v0[0xA3] = (u8) (temp_a1 - 1);
                }
            }
            if ((arg0[0x2D9] == 0x18) || (arg0[0x2D9] == 0x19)) {
                temp_a1 = var_v0[0xA4];
                if ((s32) temp_a1 >= 0x1F) {
                    var_v0[0xA4] = (u8) (temp_a1 - 1);
                }
            }
            if ((arg0[0x2D9] == 0x1A) || (arg0[0x2D9] == 0x1B)) {
                temp_v1 = var_v0[0xA5];
                if ((s32) temp_v1 >= 0x1F) {
                    var_v0[0xA5] = (u8) (temp_v1 - 1);
                }
            }
        } else if (arg0[0x2D8] == 0x13) {
            if ((arg0[0x2D9] == 0) || (arg0[0x2D9] == 5)) {
                temp_a1 = var_v0[0xA2];
                if ((s32) temp_a1 >= 0x1F) {
                    var_v0[0xA2] = (u8) (temp_a1 - 1);
                }
            }
            if ((arg0[0x2D9] == 1) || (arg0[0x2D9] == 6)) {
                temp_a1 = var_v0[0xA3];
                if ((s32) temp_a1 >= 0x1F) {
                    var_v0[0xA3] = (u8) (temp_a1 - 1);
                }
            }
            if ((arg0[0x2D9] == 2) || (arg0[0x2D9] == 7)) {
                temp_a1 = var_v0[0xA4];
                if ((s32) temp_a1 >= 0x1F) {
                    var_v0[0xA4] = (u8) (temp_a1 - 1);
                }
            }
            if (arg0[0x2D9] == 3) {
                temp_v1 = var_v0[0xA5];
                if ((s32) temp_v1 >= 0x1F) {
                    var_v0[0xA5] = (u8) (temp_v1 - 1);
                }
            }
        }
    }
}


/* Original readonly objects; named loads retain their original addresses. */
static const unsigned char rodata_80376D10[] = {
    0xC0, 0xB5, 0xCC, 0xCC, 0xC4, 0xCF, 0xA4, 0xDF, 0x00, 0x00, 0x00, 0x00, 0xC7, 0xD8, 0xB8, 0xE5,
    0xC4, 0xCF, 0xA4, 0xDF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xA1, 0xFD, 0xA1, 0xFD, 0xA1, 0xFD, 0xA1, 0xFD, 0xA1, 0xFD, 0xA1, 0xFD, 0xA1, 0xFD, 0xA1, 0xFD,
    0xA1, 0xFD, 0xA1, 0xFD, 0xA1, 0xFD, 0xA1, 0xFD, 0xA1, 0xFD, 0xA1, 0xFD, 0xA1, 0xFD, 0xA1, 0xFD,
    0xA1, 0xFD, 0xA1, 0xFD, 0xA1, 0xFD, 0xA1, 0xFD, 0xA1, 0xFD, 0xA1, 0xFD, 0xA1, 0xFD, 0xA1, 0xFD,
    0xA1, 0xFD, 0xA1, 0xFD, 0xA1, 0xFD, 0xA1, 0xFD, 0x20, 0x41, 0x74, 0x74, 0x72, 0x6E, 0x73, 0x69,
    0x6F, 0x6E, 0x21, 0x21, 0x20, 0xB0, 0xEC, 0xCB, 0xDC, 0xC3, 0xCB, 0xBE, 0xF5, 0xC2, 0xD6, 0xA4,
    0xCB, 0xA4, 0xCA, 0xA4, 0xC3, 0xA4, 0xC6, 0xA4, 0xA4, 0xA4, 0xEB, 0x20, 0x25, 0x78, 0x0A, 0x00,
    0xA5, 0xD1, 0xA5, 0xEF, 0xA1, 0xBC, 0xA4, 0xAC, 0xCE, 0xAF, 0xA4, 0xC3, 0xA4, 0xC6, 0xA4, 0xA4,
    0xA4, 0xCA, 0xA4, 0xA4, 0xBE, 0xEC, 0xB9, 0xE7, 0x20, 0x25, 0x64, 0x20, 0x28, 0xA3, 0xB8, 0xA3,
    0xB0, 0xA1, 0xF3, 0xB0, 0xCA, 0xB2, 0xBC, 0x29, 0xA1, 0xA2, 0xB7, 0xD0, 0xB8, 0xB3, 0xC3, 0xCD,
    0xA3, 0xB0, 0x0A, 0x00, 0xB9, 0xB6, 0xB7, 0xE2, 0xA5, 0xA2, 0xA5, 0xA4, 0xA5, 0xC6, 0xA5, 0xE0,
    0xC4, 0xF1, 0xB9, 0xB3, 0xCE, 0xCF, 0xA4, 0xCE, 0xA5, 0xA2, 0xA5, 0xC3, 0xA5, 0xD7, 0x0A, 0x00,
    0xA5, 0xB9, 0xA5, 0xDA, 0xA5, 0xB7, 0xA5, 0xE3, 0xA5, 0xEB, 0xA4, 0xCE, 0xC4, 0xF1, 0xB9, 0xB3,
    0xCE, 0xCF, 0xA4, 0xCE, 0xA5, 0xA2, 0xA5, 0xC3, 0xA5, 0xD7, 0x0A, 0x00, 0x80, 0x37, 0x7B, 0x6C,
    0x80, 0x37, 0x7B, 0x84, 0x80, 0x37, 0x7B, 0x9C, 0x80, 0x37, 0x7B, 0xB4, 0x80, 0x37, 0x7B, 0xCC,
    0x80, 0x37, 0x7B, 0xE4, 0x80, 0x37, 0x82, 0x60, 0x80, 0x37, 0x82, 0x6C, 0x80, 0x37, 0x82, 0x78,
    0x80, 0x37, 0x82, 0x84, 0x80, 0x37, 0x82, 0x90, 0x80, 0x37, 0x82, 0x9C, 0x80, 0x37, 0x8D, 0xB0,
    0x80, 0x37, 0x8D, 0xC4, 0x80, 0x37, 0x8D, 0xD8, 0x80, 0x37, 0x8D, 0xEC, 0x80, 0x37, 0x8E, 0x00,
    0x80, 0x37, 0x8E, 0x14, 0x80, 0x37, 0x8E, 0x68, 0x80, 0x37, 0x8E, 0x74, 0x80, 0x37, 0x8E, 0x80,
    0x80, 0x37, 0x8E, 0x8C, 0x80, 0x37, 0x8E, 0x98, 0x80, 0x37, 0x8E, 0xA4, 0x00, 0x00, 0x00, 0x00,
};
