#include "common.h"
extern u8 D_801BBBF0[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];

u16 func_80376D10();

extern u8 D_80240730[];
extern u16 D_80388D56[];
extern u16 D_80388E1C[];
extern u16 D_80388EE2[];
extern u16 D_80388FA8[];
extern u16 D_8038906E[];
extern u16 D_80389134[];

struct func_8037797C_StructItem {
    u8 pad[0xB];
    u8 mask;
};

struct func_8037797C_StructActor {
    u8 pad00[0x30];
    u32 flags;
    u8 pad34[0x36];
    u16 exp[6];
    u8 pad76[0xC];
    u16 level[6];
    u8 pad8E[0x246];
    struct func_8037797C_StructItem *item;
    u8 state;
    u8 kind;
    u8 pad2DA[0x26];
    u16 count;
    u8 pad302[0x95];
    u8 locked;
};

struct func_8037797C_StructResult {
    u8 before[3];
    u8 value;
    u8 after[8];
};

struct func_8037797C_StructStats {
    u8 pad00[0x14];
    u8 counts[6];
    u8 pad1A[7];
    u8 total;
};

#define STATS ((struct func_8037797C_StructStats *)D_80240730)
#define BYTE(p, o) (*(u8 *)((u8 *)(p) + (o)))
#define HALF(p, o) (*(u16 *)((u8 *)(p) + (o)))
#define WORD(p, o) (*(u32 *)((u8 *)(p) + (o)))
u8 func_8037797C(struct func_8037797C_StructActor *arg0)
{
    struct func_8037797C_StructActor **argp = &arg0;
    struct func_8037797C_StructResult result;
    u8 *other;
    u16 increment;
    u16 i;
    u8 mask[0x10];
    u8 *base = (u8 *)*argp - 0x44C;
    u16 *level;
    u16 *exp;
    u32 bits;
    struct func_8037797C_StructActor *current;
    u8 active;

    result.value = 0;
    if (base == D_801BBBF0) other = (u8 *)&D_801BC3D8;
    else other = (u8 *)&D_801BC03C;
    if (HALF(D_801BBBF0, 0x2C) == 10 || HALF(D_801BBBF0, 0x2C) == 15 || HALF(D_801BBBF0, 0x2C) == 11) return 0;
    if ((*argp)->count >= 80 || (*argp)->state == 10) {
        if (BYTE(other, 0x2DB) || BYTE(other, 0x2F8) == 1) increment = 1;
        else increment = 2;
    } else return 0;
    if (arg0 == (struct func_8037797C_StructActor *)((u32)D_801BBBF0 + 0x7E8)) increment <<= 1;
    if ((*argp)->kind == 0x3E || (*argp)->kind == 0x3F || (*argp)->kind == 0x52 || (*argp)->kind == 0x54 || (*argp)->kind == 0x55) {
        bits = ((*argp)->flags << 9) >> 30;
        if (bits == 2) mask[7] = (*argp)->item->mask;
        else if (bits == 3) mask[7] = (*argp)->item->mask << 1;
    } else if ((*argp)->kind == 0x53) {
        bits = ((*argp)->flags << 9) >> 30;
        if (bits == 2) mask[7] = 0x20;
        else if (bits == 3) mask[7] = 0x10;
    } else mask[7] = (*argp)->item->mask;
    exp = (*argp)->exp;
    active = mask[7];
    for (i = 0; i < 6; i++) {
        if ((active & (1 << i)) && !((*argp)->locked & (1 << i))) {
            switch (i) {
            case 0: if (exp[0] < 0xFFFD) exp[0] += increment; break;
            case 1: if (exp[1] < 0xFFFD) exp[1] += increment; break;
            case 2: if (exp[2] < 0xFFFD) exp[2] += increment; break;
            case 3: if (exp[3] < 0xFFFD) exp[3] += increment; break;
            case 4: if (exp[4] < 0xFFFD) exp[4] += increment; break;
            case 5: if (exp[5] < 0xFFFD) exp[5] += increment; break;
            }
        }
    }
    level = (*argp)->level;
    if (exp[0] >= D_80388D56[level[0]] && level[0] < func_80376D10() + 1) {
        {
            result.value = 1;
            level[0]++;
            if (base == D_801BBBF0) {
                STATS->counts[0]++;
                STATS->total++;
            }
        }
    } else { skip0:; }
    if (exp[1] >= D_80388E1C[level[1]] && !((*argp)->locked & 0x2) && level[1] < func_80376D10() + 1) {
        {
            result.value |= 0x2;
            level[1]++;
            if (base == D_801BBBF0) {
                STATS->counts[1]++;
                STATS->total++;
            }
        }
    } else { skip1:; }
    if (exp[2] >= D_80388EE2[level[2]] && !((*argp)->locked & 0x4) && level[2] < func_80376D10() + 1) {
        {
            result.value |= 0x4;
            level[2]++;
            if (base == D_801BBBF0) {
                STATS->counts[2]++;
                STATS->total++;
            }
        }
    } else { skip2:; }
    if (exp[3] >= D_80388FA8[level[3]] && !((*argp)->locked & 0x8) && level[3] < func_80376D10() + 1) {
        {
            result.value |= 0x8;
            level[3]++;
            if (base == D_801BBBF0) {
                STATS->counts[3]++;
                STATS->total++;
            }
        }
    } else { skip3:; }
    if (exp[4] >= D_8038906E[level[4]] && !((*argp)->locked & 0x10) && level[4] < func_80376D10() + 1) {
        {
            result.value |= 0x10;
            level[4]++;
            if (base == D_801BBBF0) {
                STATS->counts[4]++;
                STATS->total++;
            }
        }
    } else { skip4:; }
    if (exp[5] >= D_80389134[level[5]] && !((*argp)->locked & 0x20)) {
        s32 maximum = func_80376D10() + 1;
        if (level[5] < maximum) {
            result.value |= 0x20;
            level[5]++;
            if (base == D_801BBBF0) {
                STATS->counts[5]++;
                STATS->total++;
            }
        }
    }
    return result.value;
}
