#include "common.h"


typedef struct func_8001A490_StructTable {
    void *values[10];
} func_8001A490_StructTable;

typedef struct func_8001A490_StructEnt {
    u8 flag;
    u8 pad1;
    s16 x;
    s16 y;
    u8 b6, b7, b8, b9, bA, bB, bC, bD;
    u16 w0E;
    u16 w10;
    u16 w12;
} func_8001A490_StructEnt;

extern func_8001A490_StructTable D_800442E8;
extern void func_80005E44(s32, void *);
extern void func_800058DC(s32, void (*)(void));
struct func_8001A584_StructObj;
struct func_8001A584_StructEnt;
extern struct func_8001A584_StructEnt D_8008EEA0[];
void func_8001A584(s32 arg0, struct func_8001A584_StructObj **a1);

#define E(i) ((func_8001A490_StructEnt *)D_8008EEA0)[i]

void func_8001A490(s32 arg0, s32 arg1) {
    s32 pad;
    func_8001A490_StructTable table;
    s32 i;

    table = D_800442E8;
    for (i = 0; i < 10; i++) {
        E(i).flag = 0;
        E(i).x = 0;
        E(i).y = 0;
        E(i).b6 = 0;
        E(i).b7 = 0;
        E(i).b8 = 0;
        E(i).b9 = 0;
        E(i).bA = 0;
        E(i).bB = 0;
        E(i).bC = 0;
        E(i).bD = 0;
        E(i).w0E = 0;
        E(i).w10 = 0;
        E(i).w12 = 0;
        func_80005E44(arg0, table.values[i]);
    }
    func_80005E44(arg0, table.values[3]);
    func_800058DC(arg0, (void (*)(void))func_8001A584);
}


typedef struct func_8001A584_StructOut {
    s16 x;
    s16 y;
    u8 b4, b5, b6, b7, b8, b9, bA, bB;
    u16 w0C;
    u16 w0E;
    u16 w10;
} func_8001A584_StructOut;

typedef struct func_8001A584_StructObj {
    u8 pad[0x2C];
    func_8001A584_StructOut *out;
} func_8001A584_StructObj;

typedef struct func_8001A584_StructEnt {
    u8 flag;
    u8 pad1;
    s16 x;
    s16 y;
    u8 b6, b7, b8, b9, bA, bB, bC, bD;
    u16 w0E;
    u16 w10;
    u16 w12;
} func_8001A584_StructEnt;

extern u8 D_801BBF8E;
extern s32 func_801302CC();

void func_8001A584(s32 arg0, func_8001A584_StructObj **a1) {
    u8 pad[12];
    func_8001A584_StructObj **arg1;
    func_8001A584_StructEnt *e;
    s32 i;

    for (e = D_8008EEA0, arg1 = a1, i = 0; i != 0x28; i += 4) {
        if (e->flag == 1) {
            e->flag = 0;
            (*arg1)->out->x = e->x;
            (*arg1)->out->y = e->y;
            (*arg1)->out->b4 = e->b6;
            (*arg1)->out->b5 = e->b7;
            (*arg1)->out->b6 = e->b8;
            (*arg1)->out->b7 = e->b9;
            (*arg1)->out->b8 = e->bA;
            (*arg1)->out->b9 = e->bB;
            (*arg1)->out->bA = e->bC;
            (*arg1)->out->bB = e->bD;
            (*arg1)->out->w0C = e->w0E;
            (*arg1)->out->w0E = e->w10;
            (*arg1)->out->w10 = e->w12;
            if (e->x == 0x7D0) {
                (*arg1)->out->x = (0x140 - e->w0E) / 2;
            }
        }
        e++;
        arg1++;
    }
    if (D_801BBF8E == 0) {
        (*arg1)->out->b7 = 0;
        return;
    }
    if (func_801302CC() == 0) {
        (*arg1)->out->x = 0xC5;
        (*arg1)->out->y = 0x8F;
        (*arg1)->out->w0C = 0x50;
        (*arg1)->out->w0E = 0x50;
    } else {
        (*arg1)->out->x = 0xF1;
        (*arg1)->out->y = 0x88;
        (*arg1)->out->w0C = 0x3C;
        (*arg1)->out->w0E = 0x3C;
    }
    (*arg1)->out->b4 = 0;
    (*arg1)->out->b5 = 0;
    (*arg1)->out->b6 = 0;
    (*arg1)->out->b7 = 0x60;
    (*arg1)->out->b8 = 0;
    (*arg1)->out->b9 = 0;
    (*arg1)->out->bA = 0;
    (*arg1)->out->bB = 0;
    (*arg1)->out->w10 = 0;
    D_801BBF8E = 0;
}

#define va_arg(ap, type) (*(type *)((ap = (u8 *)(((u32)ap + 3) & ~3) + 4) - 4))

void func_8001A804(u8 arg0, u8 *arg1, ...) {
    u8 *ap;
    s32 i;
    u8 c;

    ap = (u8 *)(&arg1 + 1);
    D_8008EEA0[arg0].flag = 1;
    c = *arg1;
    if (c != 0) {
        i = 0;
        do {
            if (c != ' ') {
                if (c == 'p') {
                    c = arg1[++i];
                    if (c == 'x') D_8008EEA0[arg0].x = va_arg(ap, s32);
                    if (c == 'y') D_8008EEA0[arg0].y = va_arg(ap, s32);
                }
                if (c == 's') {
                    c = arg1[++i];
                    if (c == 'x') D_8008EEA0[arg0].w0E = va_arg(ap, s32);
                    if (c == 'y') D_8008EEA0[arg0].w10 = va_arg(ap, s32);
                    if (c == 'f') D_8008EEA0[arg0].w12 = va_arg(ap, s32);
                }
                if (c == 'w') {
                    c = arg1[++i];
                    if (c == 'r') D_8008EEA0[arg0].b6 = va_arg(ap, s32);
                    if (c == 'g') D_8008EEA0[arg0].b7 = va_arg(ap, s32);
                    if (c == 'b') D_8008EEA0[arg0].b8 = va_arg(ap, s32);
                    if (c == 'a') D_8008EEA0[arg0].b9 = va_arg(ap, s32);
                }
                if (c == 'f') {
                    c = arg1[++i];
                    if (c == 'r') D_8008EEA0[arg0].bA = va_arg(ap, s32);
                    if (c == 'g') D_8008EEA0[arg0].bB = va_arg(ap, s32);
                    if (c == 'b') D_8008EEA0[arg0].bC = va_arg(ap, s32);
                    if (c == 'a') D_8008EEA0[arg0].bD = va_arg(ap, s32);
                }
            }
            c = arg1[++i];
        } while (c != 0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001AA50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001ADD4.s")

#define D_8008EF70 D_8008EF70__func_8001B0B0
extern u8 D_8008EF70[];


typedef struct func_8001B0B0_StructSub {
    s16 unk0;
    s16 unk2;
    u8 unk4;
    u8 pad;
    s16 unk6;
    u16 unk8;
    u8 unkA;
} func_8001B0B0_StructSub;

typedef struct func_8001B0B0_Struct {
    u8 pad[0x22];
    u8 unk22;
    u8 pad2[9];
    func_8001B0B0_StructSub *unk2C;
} func_8001B0B0_Struct;

typedef struct func_8001B0B0_StructRecord {
    u8 flag;
    u8 value;
    s16 x;
    s16 y;
    u16 param;
    u8 pad[0x112];
} func_8001B0B0_StructRecord;

void func_8001B0B0(s32 arg0, func_8001B0B0_Struct **arg1) {
    register u32 i;
    func_8001B0B0_StructRecord *src;

    i = 0, src = (func_8001B0B0_StructRecord *)D_8008EF70;
loop:
    if (src->flag == 1) {
        src->flag = 0;
        arg1[i]->unk22 = src->value;
        arg1[i]->unk2C->unk0 = src->x;
        arg1[i]->unk2C->unk2 = src->y;
        arg1[i]->unk2C->unk4 = 0;
        arg1[i]->unk2C->unk6 = 0;
        arg1[i]->unk2C->unk8 = src->param;
        arg1[i]->unk2C->unkA = 0;
    }
    i++;
    src++;
    if (i != 0x1C) goto loop;
}
#undef D_8008EF70


extern u8 D_8008EF70[];

void *func_8001B154(s32 arg0) {
    if (arg0 < 0x1C) {
        return D_8008EF70 + arg0 * 0x11A;
    }
    return NULL;
}



void func_8001B194(u8 arg0, s16 arg1, s16 arg2, u8 arg3) {
    u8 *temp_v0;

    temp_v0 = D_8008EF70 + arg0 * 0x11A;
    temp_v0[8] = arg3;
    temp_v0[0] = 1;
    temp_v0[1] = 1;
    if (arg1 != 0x7D0) {
        *(s16 *)(temp_v0 + 2) = arg1;
    }
    *(s16 *)(temp_v0 + 4) = arg2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001B204.s")


typedef struct func_8001BC04_Struct {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
    u8 unk4;
    u8 unk5;
    u8 unk6;
    u8 unk7;
    u8 unk8;
} func_8001BC04_Struct;

u8 func_8001BD20(u8, u16);
void func_8001C0B0(u8, u16, u8, s32);
s32 func_8001D394(u8, u16);
extern u8 D_80090E48;
extern u8 D_80090E49;
extern u8 D_80090E4A;
extern u8 D_80090E4B;
extern u8 D_80090E4C;
extern u8 D_80090E4D;
extern u8 D_80090E4E;
extern u8 D_80090E4F;

s32 func_8001BC04(u8 arg0, u16 arg1, func_8001BC04_Struct *arg2, u16 arg3)
{
  D_80090E4C = func_8001BD20(D_80090E48, arg3);
  if ((arg1 + arg2->unk4) < 0x101)
  {
    func_8001C0B0(arg0, arg1, D_80090E48, func_8001D394(D_80090E48, arg3) & 0xFFFF);
    arg2->unk0 = D_80090E48;
    arg2->unk1 = D_80090E49;
    arg2->unk2 = D_80090E4A;
    arg2->unk3 = D_80090E4B;
    arg2->unk4 = D_80090E4C;
    arg2->unk5 = D_80090E4D;
    arg2->unk6 = D_80090E4E;
    arg2->unk7 = D_80090E4F;
    arg2->unk8 = 0xFF;
    return 1;
  }
  arg2->unk0 = 0xFF;
  arg2->unk1 = 0;
  arg2->unk2 = 0xFF;
  arg2->unk3 = 0;
  arg2->unk4 = 0;
  arg2->unk5 = 0;
  arg2->unk6 = 0;
  arg2->unk7 = 0;
  return 0;
}

typedef struct func_8001BD20_Struct { u16 a; u16 b; u16 c; } func_8001BD20_Struct;
extern func_8001BD20_Struct D_8004461C;

u8 func_8001BD20(u8 arg0, u16 arg1) {
    func_8001BD20_Struct s;
    u8 v;
    s = D_8004461C;
    v = ((u8 *)&s)[arg0];
    if (arg0 == 2) {
        if (arg1 == 0xA3C9) v -= 4;
        if (arg1 == 0xA3E9) v -= 4;
        if (arg1 == 0xA3EA) v -= 4;
        if (arg1 == 0xA3EC) v -= 4;
        if (arg1 == 0xA3B1) v -= 4;
        if (arg1 == 0xA1A4) v -= 4;
        if (arg1 == 0xA1A5) v -= 4;
        if (arg1 == 0xA1A8) v -= 4;
        if (arg1 == 0xA1A7) v -= 4;
        if (arg1 == 0xA1AD) v -= 4;
        if (arg1 == 0xA1AB) v -= 4;
        if (arg1 == 0xA1AA) v -= 4;
        if (arg1 == 0xA1CA) v -= 4;
        if (arg1 == 0xA1CB) v -= 4;
    }
    if (arg0 == 4) {
        switch (arg1) {
        case 0xA1A1: v -= 2; break;
        case 0xA3E9: v -= 2; break;
        case 0xA3E6: v -= 2; break;
        case 0xA3EA: v -= 2; break;
        case 0xA3EC: v -= 2; break;
        case 0xA3F2: v -= 2; break;
        case 0xA3F4: v -= 2; break;
        case 0xA1A4: v -= 2; break;
        case 0xA1A5: v -= 4; break;
        case 0xA1AD: v -= 4; break;
        case 0xA1A8: v -= 2; break;
        case 0xA1A7: v -= 2; break;
        }
    }
    if (arg0 == 0 && arg1 == 0xA1B8) v -= 4;
    if (arg0 == 1 && arg1 == 0xA1B8) v -= 6;
    if (arg0 == 2 && arg1 == 0xA1B8) v -= 6;
    if (arg0 == 4 && arg1 == 0xA1B8) v -= 4;
    return v;
}

struct func_8001BFE4_StructA { u16 d[6]; };
struct func_8001BFE4_StructB { u8 d[6]; };
extern struct func_8001BFE4_StructB D_80044624;
extern struct func_8001BFE4_StructA D_8004462C;
extern u8 D_8008DC18;
extern u8 D_801077E0[];
void func_80001FE8(s32, u8 *, u8);
s32 func_8000511C(u16);

void func_8001BFE4(u8 arg0, u16 arg1) {
    s32 pad;
    struct func_8001BFE4_StructB sp2C;
    struct func_8001BFE4_StructA sp20;
    u32 i;

    i = 0x10;
    sp2C = D_80044624;
    sp20 = D_8004462C;
    D_8008DC18 = 1;
    func_80001FE8(func_8000511C(sp20.d[arg0]) + sp2C.d[arg0] * (arg1 >> 1), D_801077E0, sp2C.d[arg0]);
    for (; i--;) {
    }
    D_8008DC18 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001C0B0.s")

struct func_8001C670_Struct {
    u8 data[0x5C];
};
extern struct func_8001C670_Struct D_80044648;

u8 func_8001C670(u8 arg0) {
    u8 r;
    struct func_8001C670_Struct buf;
    buf = D_80044648;
    if (arg0 < 0x5C) {
        r = buf.data[arg0];
    } else {
        r = 0;
    }
    return r;
}


struct func_8001C6E8_Struct {
    u8 data[8];
};

extern struct func_8001C6E8_Struct D_800446A4;

u8 func_8001C6E8(u8 arg0) {
    u8 pad[4];
    struct func_8001C6E8_Struct sp4;
    u8 var_v1;

    sp4 = D_800446A4;
    if (arg0 < 8) {
        var_v1 = sp4.data[arg0];
    } else {
        var_v1 = 0;
    }
    return var_v1;
}

struct func_8001C734_Struct {
    u8 data[0x4B];
};
extern struct func_8001C734_Struct D_800446AC;
u8 func_8001C734(u8 arg0) {
    struct func_8001C734_Struct sp;
    u8 r;
    sp = D_800446AC;
    if (arg0 < 0x4B) {
        r = sp.data[arg0];
    } else {
        r = 0;
    }
    return r;
}


struct func_8001C7A4_Struct {
    u8 data[0x53];
};

extern struct func_8001C7A4_Struct D_800446F8;

u8 func_8001C7A4(u8 arg0) {
    struct func_8001C7A4_Struct table = D_800446F8;
    u8 result;

    if (arg0 < 0x53) {
        result = table.data[arg0];
    } else {
        result = 0;
    }
    return result;
}


struct func_8001C824_Struct {
    u8 data[0x54];
};

extern struct func_8001C824_Struct D_8004474C;

u8 func_8001C824(u8 arg0) {
    u8 var_v1;
    struct func_8001C824_Struct local;

    local = D_8004474C;
    if (arg0 < 0x54) {
        var_v1 = local.data[arg0];
    } else {
        var_v1 = 0;
    }
    return var_v1;
}

#define func_8001C670 func_8001C670__func_8001C88C
#define func_8001C6E8 func_8001C6E8__func_8001C88C
#define func_8001C734 func_8001C734__func_8001C88C
#define func_8001C7A4 func_8001C7A4__func_8001C88C
#define func_8001C824 func_8001C824__func_8001C88C
extern u16 func_8001C670(u8);
extern u16 func_8001C6E8(u8);
extern u16 func_8001C734(u8);
extern u16 func_8001C7A4(u8);
extern u16 func_8001C824(u8);

u16 func_8001C88C(u16 arg0) {
    u8 lo;
    u8 high;
    u16 result;

    result = 0;
    high = arg0 >> 8;
    lo = arg0 & 0xFF;
    if (high == 0xA1) {
        result = func_8001C670(lo - 0xA1);
    }
    if (high == 0xA2) {
        result = func_8001C6E8(lo - 0xA1);
    }
    if (high == 0xA3) {
        result = func_8001C734(lo - 0xB0);
    }
    if (high == 0xA4) {
        result = func_8001C7A4(lo - 0xA1);
    }
    if (high == 0xA5) {
        result = func_8001C824(lo - 0xA1);
    }
    return result;
}
#undef func_8001C670
#undef func_8001C6E8
#undef func_8001C734
#undef func_8001C7A4
#undef func_8001C824


u16 func_8001C96C(u16 arg0) {
    u8 high;
    u16 result;

    high = arg0 >> 8;
    result = 0;
    if (high == 0xA1) result = func_8001C670((arg0 & 0xFFFF) - 0xA1);
    if (high == 0xA2) result = func_8001C6E8((arg0 & 0xFFFF) - 0xA1);
    if (high == 0xA3) result = func_8001C734((arg0 & 0xFFFF) - 0xB0);
    if (high == 0xA4) result = func_8001C7A4((arg0 & 0xFFFF) - 0xA1);
    if (high == 0xA5) result = func_8001C824((arg0 & 0xFFFF) - 0xA1);
    if (high >= 0xB0) {
        if (arg0 == 0xBCF3) result = 0xFD;
        if (arg0 == 0xC5EA) result = 0xFE;
        if (arg0 == 0xB0EC) result = 0xFF;
        if (arg0 == 0xCBDC) result = 0x100;
        if (arg0 == 0xC7D8) result = 0x101;
        if (arg0 == 0xC9E9) result = 0x102;
        if (arg0 == 0xC8BF) result = 0x103;
        if (arg0 == 0xBFC8) result = 0x104;
        if (arg0 == 0xB5D5) result = 0x105;
        if (arg0 == 0xB8AA) result = 0x106;
        if (arg0 == 0xBAD5) result = 0x107;
        if (arg0 == 0xB9FC) result = 0x108;
        if (arg0 == 0xBFE2) result = 0x109;
        if (arg0 == 0xC4BE) result = 0x10A;
        if (arg0 == 0xC4B7) result = 0x10B;
        if (arg0 == 0xC9A8) result = 0x10C;
        if (arg0 == 0xC0B5) result = 0x10D;
        if (arg0 == 0xCCCC) result = 0x10E;
        if (arg0 == 0xB8C7) result = 0x10F;
        if (arg0 == 0xBDBD) result = 0x110;
        if (arg0 == 0xBBFA) result = 0x111;
        if (arg0 == 0xCFC6) result = 0x112;
        if (arg0 == 0xBDB3) result = 0x113;
        if (arg0 == 0xCDE1) result = 0x114;
        if (arg0 == 0xBCE8) result = 0x115;
        if (arg0 == 0xC0DA) result = 0x116;
        if (arg0 == 0xCAD6) result = 0x117;
        if (arg0 == 0xC3E6) result = 0x118;
        if (arg0 == 0xB2BC) result = 0x119;
        if (arg0 == 0xC3CA) result = 0x11A;
        if (arg0 == 0xBAB8) result = 0x11B;
        if (arg0 == 0xB1A6) result = 0x11C;
        if (arg0 == 0xB2A3) result = 0x11D;
        if (arg0 == 0xCEA2) result = 0x11E;
        if (arg0 == 0xCFD3) result = 0x11F;
        if (arg0 == 0xCDEE) result = 0x120;
        if (arg0 == 0xBEE5) result = 0x121;
        if (arg0 == 0xBCC2) result = 0x122;
        if (arg0 == 0xB3E4) result = 0x123;
        if (arg0 == 0xC1C8) result = 0x124;
        if (arg0 == 0xB4AC) result = 0x125;
        if (arg0 == 0xC0DE) result = 0x126;
        if (arg0 == 0xB8E5) result = 0x127;
        if (arg0 == 0xB2F3) result = 0x128;
        if (arg0 == 0xCAA7) result = 0x129;
        if (arg0 == 0xC7BE) result = 0x12A;
        if (arg0 == 0xC5B7) result = 0x12B;
        if (arg0 == 0xC5DD) result = 0x12C;
        if (arg0 == 0xC2AD) result = 0x12D;
        if (arg0 == 0xE7A7) result = 0x12E;
        if (arg0 == 0xCAA2) result = 0x12F;
        if (arg0 == 0xB6DA) result = 0x130;
        if (arg0 == 0xBEAE) result = 0x131;
        if (arg0 == 0xC2E7) result = 0x132;
        if (arg0 == 0xC9FC) result = 0x133;
        if (arg0 == 0xB4F0) result = 0x134;
        if (arg0 == 0xC1C3) result = 0x135;
        if (arg0 == 0xB9B6) result = 0x136;
        if (arg0 == 0xB7E2) result = 0x137;
        if (arg0 == 0xCECF) result = 0x138;
        if (arg0 == 0xCBC9) result = 0x139;
        if (arg0 == 0xB8E6) result = 0x13A;
        if (arg0 == 0xC1C7) result = 0x13B;
        if (arg0 == 0xC1E1) result = 0x13C;
        if (arg0 == 0xC1B0) result = 0x13D;
        if (arg0 == 0xB5D3) result = 0x13E;
    }
    return result;
}


u16 func_8001CE9C(u16 arg0) {
    u8 high;
    u16 result;

    high = (arg0 >> 8) & 0xFF;
    result = 0;
    if (high == 0xA1) {
        result = func_8001C670((arg0 & 0xFF) - 0xA1);
    }
    if (high == 0xA2) {
        result = func_8001C6E8((arg0 & 0xFF) - 0xA1);
    }
    if (high == 0xA3) {
        result = func_8001C734((arg0 & 0xFF) - 0xB0);
    }
    return result;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001CF40.s")


s32 func_8001D2E0(u16 arg0) {
    u8 high;
    u16 result;

    high = arg0 >> 8;
    result = 0;
    if (high == 0xA1) {
        result = func_8001C670((arg0 & 0xFF) - 0xA1);
    }
    if (high == 0xA2) {
        result = func_8001C6E8((arg0 & 0xFF) - 0xA1);
    }
    if (high == 0xA3) {
        result = func_8001C734((arg0 & 0xFF) - 0xB0);
    }
    if (arg0 == 0xA2A7) {
        result = 0x55;
    }
    if (arg0 == 0xA1FC) {
        result = 0x56;
    }
    return result;
}


extern u16 func_8001C88C(u16);
extern u16 func_8001CF40(u16);

s32 func_8001D394(u8 arg0, u16 arg1) {
    u16 r;
    u16 a;

    a = arg1;
    if (arg0 == 0 && a == 0xA1B8) a = 0xA1A1;
    if (arg0 == 1 && a == 0xA1B8) a = 0xA1A1;
    if (arg0 == 2 && a == 0xA1B8) a = 0xA1A1;
    if (arg0 == 0) r = func_8001C88C(a);
    if (arg0 == 1) r = func_8001C96C(a);
    if (arg0 == 2) r = func_8001CE9C(a);
    if (arg0 == 4) r = func_8001D2E0(a);
    if (a == 0xD4A2) a = 0xA6A0;
    if (a == 0xE7A7) a = 0xA6A1;
    if (a == 0xD1DB) a = 0xA6A2;
    if (a == 0xD9C7) a = 0xA6A3;
    if (a == 0xE6AB) a = 0xA6A4;
    if (a == 0xE0FA) a = 0xA6A5;
    if (arg0 == 3) r = func_8001CF40(a);
    if (arg0 == 5) {
        if (a == 0xA1A1) r = 0;
        else r = a + 0xFFFF5C40;
    }
    return r;
}


u8 func_8001D588(u8 arg0) {
    u8 c;

    if (arg0 == 0) {
        c = 0x30;
    }
    if (arg0 == 1) {
        c = 0x31;
    }
    if (arg0 == 2) {
        c = 0x32;
    }
    if (arg0 == 3) {
        c = 0x33;
    }
    if (arg0 == 4) {
        c = 0x34;
    }
    if (arg0 == 5) {
        c = 0x35;
    }
    if (arg0 == 6) {
        c = 0x36;
    }
    if (arg0 == 7) {
        c = 0x37;
    }
    if (arg0 == 8) {
        c = 0x38;
    }
    if (arg0 == 9) {
        c = 0x39;
    }
    if (arg0 == 0xA) {
        c = 0x41;
    }
    if (arg0 == 0xB) {
        c = 0x42;
    }
    if (arg0 == 0xC) {
        c = 0x43;
    }
    if (arg0 == 0xD) {
        c = 0x44;
    }
    if (arg0 == 0xE) {
        c = 0x45;
    }
    if (arg0 == 0xF) {
        c = 0x46;
    }
    return c;
}



void func_8001D69C(s32 arg0, u8 arg1, s8 *arg2) {
    s32 value;
    s32 remaining;
    s32 divisor;
    s32 digit;

    if (arg0 < 0) {
        *arg2 = '-';
        value = -arg0;
        arg2++;
    } else {
        value = arg0;
    }
    remaining = value;
    divisor = 1000000000;
    if (value >= divisor) {
        digit = remaining / divisor;
        remaining -= digit * divisor;
        *arg2++ = func_8001D588(digit);
    }
    divisor = 100000000;
    if (value >= divisor) {
        digit = remaining / divisor;
        remaining -= digit * divisor;
        *arg2++ = func_8001D588(digit);
    } else if (arg1 >= 9) {
        *arg2++ = ' ';
    }
    divisor = 10000000;
    if (value >= divisor) {
        digit = remaining / divisor;
        remaining -= digit * divisor;
        *arg2++ = func_8001D588(digit);
    } else if (arg1 >= 8) {
        *arg2++ = ' ';
    }
    divisor = 1000000;
    if (value >= divisor) {
        digit = remaining / divisor;
        remaining -= digit * divisor;
        *arg2++ = func_8001D588(digit);
    } else if (arg1 >= 7) {
        *arg2++ = ' ';
    }
    divisor = 100000;
    if (value >= divisor) {
        digit = remaining / divisor;
        remaining -= digit * divisor;
        *arg2++ = func_8001D588(digit);
    } else if (arg1 >= 6) {
        *arg2++ = ' ';
    }
    divisor = 10000;
    if (value >= divisor) {
        digit = remaining / divisor;
        remaining -= digit * divisor;
        *arg2++ = func_8001D588(digit);
    } else if (arg1 >= 5) {
        *arg2++ = ' ';
    }
    divisor = 1000;
    if (value >= divisor) {
        digit = remaining / divisor;
        remaining -= digit * divisor;
        *arg2++ = func_8001D588(digit);
    } else if (arg1 >= 4) {
        *arg2++ = ' ';
    }
    divisor = 100;
    if (value >= divisor) {
        digit = remaining / divisor;
        remaining -= digit * divisor;
        *arg2++ = func_8001D588(digit);
    } else if (arg1 >= 3) {
        *arg2++ = ' ';
    }
    divisor = 10;
    if (value >= divisor) {
        digit = remaining / divisor;
        remaining -= digit * divisor;
        *arg2++ = func_8001D588(digit);
    } else if (arg1 >= 2) {
        *arg2++ = ' ';
    }
    *arg2++ = func_8001D588(remaining);
    *arg2 = 0;
}


void func_8001DBC8(s32 arg0, u8 arg1, s8 *arg2) {
    s32 var_s0;

    if (arg0 < 0) {
        *arg2 = 0x2D;
        var_s0 = -arg0;
        arg2++;
    } else {
        var_s0 = arg0;
    }
    if (var_s0 >= 0x10000000) {
        *arg2 = func_8001D588((u8)(((u32)(var_s0 & 0xF0000000)) >> 28));
        arg2++;
    } else if (arg1 >= 8) {
        *arg2 = 0x20;
        arg2++;
    }
    if (var_s0 >= 0x1000000) {
        *arg2 = func_8001D588((u8)((var_s0 & 0x0F000000) >> 24));
        arg2++;
    } else if (arg1 >= 7) {
        *arg2 = 0x20;
        arg2++;
    }
    if (var_s0 >= 0x100000) {
        *arg2 = func_8001D588((u8)((var_s0 & 0x00F00000) >> 20));
        arg2++;
    } else if (arg1 >= 6) {
        *arg2 = 0x20;
        arg2++;
    }
    if (var_s0 >= 0x10000) {
        *arg2 = func_8001D588((u8)((var_s0 & 0x000F0000) >> 16));
        arg2++;
    } else if (arg1 >= 5) {
        *arg2 = 0x20;
        arg2++;
    }
    if (var_s0 >= 0x1000) {
        *arg2 = func_8001D588((u8)((var_s0 & 0x0000F000) >> 12));
        arg2++;
    } else if (arg1 >= 4) {
        *arg2 = 0x20;
        arg2++;
    }
    if (var_s0 >= 0x100) {
        *arg2 = func_8001D588((u8)((var_s0 & 0x00000F00) >> 8));
        arg2++;
    } else if (arg1 >= 3) {
        *arg2 = 0x20;
        arg2++;
    }
    if (var_s0 >= 0x10) {
        *arg2 = func_8001D588((u8)((var_s0 & 0x000000F0) >> 4));
        arg2++;
    } else if (arg1 >= 2) {
        *arg2 = 0x20;
        arg2++;
    }
    *arg2 = func_8001D588((u8)(var_s0 & 0xF));
    arg2++;
    *arg2 = 0;
}


typedef struct func_8001DE38_StructSub {
    u8 pad[4];
    u8 *unk4;
} func_8001DE38_StructSub;
typedef struct func_8001DE38_Struct {
    u8 pad[0x2C];
    func_8001DE38_StructSub *unk2C;
} func_8001DE38_Struct;
extern void func_80006214(s32);
extern void func_8001DF40();
extern u8 D_8004480C[];
extern u8 D_80090E50[];
extern u8 D_80090E56[];
extern u8 D_80090EAC[];
extern u8 D_80090F02[];
extern u8 D_80090F58[];
extern u8 D_80091CC8[];

void func_8001DE38(s32 arg0, func_8001DE38_Struct **arg1) {
    u8 *p0;
    u8 *p1;
    u8 *p2;
    u8 *p3;
    s32 i;
    u8 *p;
    func_8001DE38_Struct **q;
    func_8001DE38_Struct *t;
    u8 *data;

    for (i = 0; i < 40; i++) {
        func_80005E44(arg0, D_8004480C);
    }
    func_80006214(arg0);
    for (i = 0; i < 40; i++) {
        D_80090E50[i * 0x56] = 0;
        arg1[i]->unk2C->unk4 = &D_80090E56[i * 0x56];
    }
    func_800058DC(arg0, func_8001DF40);
}

#define D_80037744 D_80037744__func_8001DF40

typedef struct func_8001DF40_StructRecord {
    u8 flag;
    u8 pad1;
    s16 x;
    s16 y;
    u8 pad[0x50];
} func_8001DF40_StructRecord;

typedef struct func_8001DF40_StructObject {
    u8 pad[0x22];
    u8 flag;
    u8 pad2[9];
    s16 *coords;
} func_8001DF40_StructObject;

extern u8 D_80037744;

void func_8001DF40(s32 arg0, func_8001DF40_StructObject **arg1) {
    s32 i;

    for (i = 0; i < 40; i++) {
        if (D_80037744 != 0) {
            arg1[i]->flag = ((func_8001DF40_StructRecord *)D_80090E50)[i].flag;
        } else {
            arg1[i]->flag = 0;
        }
        arg1[i]->coords[0] = ((func_8001DF40_StructRecord *)D_80090E50)[i].x;
        arg1[i]->coords[1] = ((func_8001DF40_StructRecord *)D_80090E50)[i].y;
    }
}
#undef D_80037744

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001A490/func_8001DFFC.s")


typedef struct func_8001E4C0_StructDraw {
    u8 pad[8];
    u16 flags;
    u8 padA[2];
    void *data;
} func_8001E4C0_StructDraw;
extern func_8001E4C0_StructDraw D_800448F4;
extern void func_80116E80(s32, void *, void *);

typedef struct func_8001E4C0_StructState {
    u8 pad[0x154];
    u16 unk154;
    u16 unk156;
    u16 unk158;
    u8 unk15A;
    u8 unk15B;
    u8 unk15C;
    u8 unk15D;
    u8 unk15E;
    u8 pad15F;
    s32 unk160;
    u8 unk164;
} func_8001E4C0_StructState;
struct func_8001E87C_Struct;
extern struct func_8001EA48_Struct D_801BBBF0;
void func_8001E768(void *arg0, struct func_8001E87C_Struct **arg1);
void func_8001E66C(s32 arg0, struct func_8001E87C_Struct **arg1);
void func_8001E87C(s32 arg0, struct func_8001E87C_Struct **arg1);
#define S4C0 (*(func_8001E4C0_StructState *)&D_801BBBF0)
typedef struct func_8001E4C0_StructRect {
    s16 x, y, w, h;
    u8 r, g, b, a;
    u8 pad[4];
    s16 flags, end;
    u8 tail[0x28];
} func_8001E4C0_StructRect;
#define sp2C rect.x
#define sp2E rect.y
#define sp30 rect.w
#define sp32 rect.h
#define sp34 rect.r
#define sp35 rect.g
#define sp36 rect.b
#define sp37 rect.a
#define sp3C rect.flags
#define sp3E rect.end
typedef struct func_8001E4C0_Bits {
    u8 flag : 1;
    u8 mid : 3;
    u8 lo : 4;
} func_8001E4C0_Bits;
void func_8001E4C0(s32 arg0, s32 arg1) {
    func_8001E4C0_StructRect rect;
    s32 var_v0;
    s32 mode;
    s32 state;

    sp2C = 0;
    sp2E = 0;
    sp32 = (sp30 = 320) - 80;
    sp34 = S4C0.unk15A;
    sp35 = S4C0.unk15B;
    sp36 = S4C0.unk15C;
    if (func_801302CC() && (sp34 || sp35 || sp36)) {
        sp2E = 45;
        sp32 = 150;
    }
    state = S4C0.unk15D;
    if (state == 2 || state == 0) {
        sp37 = 255;
        sp3C = 0;
    } else {
        sp37 = 0;
        sp3C = 0x1002;
    }
    sp3E = 0;
    D_800448F4.data = &sp2C;
    if (S4C0.unk15E) D_800448F4.flags = 128;
    else D_800448F4.flags = 4;
    if (S4C0.unk15E) var_v0 = 128;
    else var_v0 = 4;
    func_80116E80(var_v0 & 0xFFFF, &D_800448F4, &D_801BBBF0);
    func_80005E44(arg0, &D_800448F4);
    state = S4C0.unk15D;
    if (S4C0.unk15D == 2) S4C0.unk158 = S4C0.unk154;
    else S4C0.unk158 = 0;
    state |= state << 4;
    S4C0.unk15D = state;
    ((func_8001E4C0_Bits *)&S4C0.unk15D)->flag = 1;
    S4C0.unk164 = 1;
    if ((S4C0.unk15D & 0xF) == 0) {
        func_800058DC(arg0, (void (*)(void))func_8001E768);
        return;
    }
    if ((S4C0.unk15D & 0xF) == 2) {
        func_800058DC(arg0, (void (*)(void))func_8001E87C);
        return;
    }
    func_800058DC(arg0, (void (*)(void))func_8001E66C);
}
#undef S4C0
#undef sp2C
#undef sp2E
#undef sp30
#undef sp32
#undef sp34
#undef sp35
#undef sp36
#undef sp37
#undef sp3C
#undef sp3E

struct func_8001E87C_Sub {
    u8 pad[0xB];
    s8 unkB;
    u8 pad2[4];
    s16 unk10;
};
struct func_8001E87C_Struct {
    u8 pad[0x22];
    u8 unk22;
    u8 pad2[0xD];
    struct func_8001E87C_Sub *unk30;
};
struct func_8001EA48_Struct {
    u8 pad[0x156];
    s16 unk156;
    u8 pad2[0x15D - 0x158];
    u8 unk15D;
};

struct func_8001E66C_StructState {
    u8 pad[0x154];
    u16 unk154;
    u8 pad2[2];
    u16 unk158;
    u8 pad3[3];
    u8 unk15D;
};

extern u8 D_80044914;
extern s16 D_8008934C;
#define STATE (*(struct func_8001E66C_StructState *)&D_801BBBF0)

void func_8001E66C(s32 arg0, struct func_8001E87C_Struct **arg1) {
    s32 temp_a0;
    u8 temp_t0;
    struct func_8001E87C_Sub *temp_v1;

    func_80006214(arg0);
    temp_v1 = (*arg1)->unk30;
    temp_a0 = ++STATE.unk158;
    if (temp_a0 < (s32) STATE.unk154) {
        temp_v1->unkB = (s32) (temp_a0 * 0xFF) / (s32) STATE.unk154;
        return;
    }
    *(u8 *)&temp_v1->unkB = 0xFF;
    temp_v1->unk10 = 0;
    if (STATE.unk154 == STATE.unk158) {
        D_80044914 = (u8) D_8008934C;
    }
    if (D_80044914 != D_8008934C) {
        STATE.unk158 = 0;
        STATE.unk15D &= 0xF;
        STATE.unk15D |= 0x80;
        func_800058DC(arg0, func_8001E768);
    }
}

extern s16 D_80089354;
void func_8001E830(s32 arg0, s32 arg1);


struct func_8001E768_Struct {
    u8 pad[0x154];
    u16 unk154;
    u16 unk156;
    u16 unk158;
    u8 pad2[3];
    u8 unk15D;
};

void func_8001E768(void *arg0, struct func_8001E87C_Struct **arg1) {
    u16 temp_t0;
    u8 temp_t9;

    if ((((struct func_8001E768_Struct *)&D_801BBBF0)->unk15D & 0xF) == 1) {
        D_80089354 = 2;
        func_800058DC(arg0, func_8001E830);
        return;
    }
    if (((struct func_8001E768_Struct *)&D_801BBBF0)->unk156 != 0) {
        if (++((struct func_8001E768_Struct *)&D_801BBBF0)->unk158 >= (s32)((struct func_8001E768_Struct *)&D_801BBBF0)->unk156) {
            func_80006214((s32)arg0);
            (*arg1)->unk30->unk10 = 0x1002;
            ((struct func_8001E768_Struct *)&D_801BBBF0)->unk158 = ((struct func_8001E768_Struct *)&D_801BBBF0)->unk154;
            ((struct func_8001E768_Struct *)&D_801BBBF0)->unk15D &= 0xF;
            ((struct func_8001E768_Struct *)&D_801BBBF0)->unk15D |= 0xA0;
            func_800058DC(arg0, func_8001E87C);
        }
    }
}


extern void func_80005700();
extern void func_801170DC(s32 arg0);
extern s32 D_801BBD50;

void func_8001E830(s32 arg0, s32 arg1) {
    u8 *base;

    D_80089354 = 2;
    base = (u8 *)&D_801BBBF0;
    base[0x15D] = 0;
    base[0x164] = 0;
    func_80005700(arg0);
    D_801BBD50 = 0;
    func_801170DC(4);
}





void func_8001E87C(s32 arg0, struct func_8001E87C_Struct **arg1) {
    s32 var_v0;

    *(u16 *) ((u8 *) &D_801BBBF0 + 0x158) = (u16) (*(u16 *) ((u8 *) &D_801BBBF0 + 0x158) - 1);
    D_80089354 = 0;
    if (*(u16 *) ((u8 *) &D_801BBBF0 + 0x158) != 0) {
        func_80006214(arg0);
        (*arg1)->unk30->unk10 = 0x1002;
        (*arg1)->unk30->unkB = (s8) ((s32) (*(u16 *) ((u8 *) &D_801BBBF0 + 0x158) * 0xFF) / (s32) *(u16 *) ((u8 *) &D_801BBBF0 + 0x154));
        return;
    }
    (*arg1)->unk22 = 0;
    *(u8 *) ((u8 *) &D_801BBBF0 + 0x164) = 0;
    *(u8 *) ((u8 *) &D_801BBBF0 + 0x15D) = (u8) (*(u8 *) ((u8 *) &D_801BBBF0 + 0x15D) & 0xF);
    func_80005700();
    *(s32 *) ((u8 *) &D_801BBBF0 + 0x160) = 0;
    if (*(u8 *) ((u8 *) &D_801BBBF0 + 0x15E) != 0) {
        var_v0 = 0x80;
    } else {
        var_v0 = 4;
    }
    func_801170DC(var_v0 & 0xFFFF);
}


typedef struct func_8001E978_Struct {
    u8 pad[0x154];
    u16 unk154;
    u16 unk156;
    u8 pad158[2];
    u8 unk15A;
    u8 unk15B;
    u8 unk15C;
    u8 unk15D;
    u8 unk15E;
    u8 pad15F;
    s32 unk160;
    u8 unk164;
} func_8001E978_Struct;

typedef struct func_8001E978_StructCopy {
    s32 words[4];
} func_8001E978_StructCopy;

extern s32 func_80005670(s32, void *);
extern u8 D_800448E0[];
extern func_8001E978_StructCopy D_80044918;

void func_8001E978(s32 arg0, u8 arg1, u8 arg2, u8 arg3, u16 arg4, u16 arg5, u8 arg6, u8 arg7) {
    func_8001E978_StructCopy sp18;

    if ((((func_8001E978_Struct *)&D_801BBBF0)->unk15D & 0x80) && (((func_8001E978_Struct *)&D_801BBBF0)->unk160 != 0)) {
        sp18 = D_80044918;
        return;
    }
    ((func_8001E978_Struct *)&D_801BBBF0)->unk160 = func_80005670(arg0, D_800448E0);
    if (((func_8001E978_Struct *)&D_801BBBF0)->unk160 != 0) {
        ((func_8001E978_Struct *)&D_801BBBF0)->unk154 = arg4;
        ((func_8001E978_Struct *)&D_801BBBF0)->unk156 = arg5;
        ((func_8001E978_Struct *)&D_801BBBF0)->unk15A = arg1;
        ((func_8001E978_Struct *)&D_801BBBF0)->unk15B = arg2;
        ((func_8001E978_Struct *)&D_801BBBF0)->unk15C = arg3;
        ((func_8001E978_Struct *)&D_801BBBF0)->unk15D = arg6;
        ((func_8001E978_Struct *)&D_801BBBF0)->unk15E = arg7;
        ((func_8001E978_Struct *)&D_801BBBF0)->unk164 = 1;
    }
}




void func_8001EA48(void) {
    if ((D_801BBBF0.unk15D & 0x70) == 0x80) {
        D_801BBBF0.unk156 = 1;
    }
}


void func_8001EA74(void) {
    if ((D_801BBBF0.unk15D & 0x70) == 0x80) {
        D_801BBBF0.unk156 = 1;
        *(s16 *)&D_801BBBF0.pad[0x154] = 1;
    }
}


struct func_8001EAA4_Struct {
    u8 pad[0x154];
    s16 unk154;
    s16 unk156;
    s16 unk158;
    u8 pad2[3];
    u8 unk15D;
    u8 pad3[2];
    s32 unk160;
};

void func_8001EAA4(void) {
    ((struct func_8001EAA4_Struct *)&D_801BBBF0)->unk160 = 0;
    ((struct func_8001EAA4_Struct *)&D_801BBBF0)->unk15D = 0;
    ((struct func_8001EAA4_Struct *)&D_801BBBF0)->unk156 = 0;
    ((struct func_8001EAA4_Struct *)&D_801BBBF0)->unk154 = 0;
    ((struct func_8001EAA4_Struct *)&D_801BBBF0)->unk158 = 0;
}

