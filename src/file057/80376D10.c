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

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376D10/func_80376D48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376D10/func_8037797C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376D10/func_80378020.s")


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

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376D10/func_80378764.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376D10/func_803789B0.s")

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
extern s32 func_803789B0(void *, u8);

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


struct func_80378CF0_Struct {
    u8 pad[0x2D9];
    u8 unk2D9;
};

struct func_80378CF0_Entry {
    s16 unk0;
    s16 unk2;
    s16 unk4;
};

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

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376D10/func_80378D84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376D10/func_80378E3C.s")

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

