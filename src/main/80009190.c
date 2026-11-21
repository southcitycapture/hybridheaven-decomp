#include "common.h"


void func_80009190(u8 *arg0, s32 arg1) {
    arg0[0x22] = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80009190/func_8000919C.s")


extern u16 D_8004347C[];
extern u16 D_80043504[];
extern u16 D_8004353A[];
extern u16 D_80043562[];

u16 func_80009F8C(u16 arg0) {
    u16 sp4[2];
    u16 temp_a0;
    u16 temp_a0_2;
    s32 temp_v0;
    s32 temp_v1;
    u16 var_v1;

    temp_v0 = arg0;
    temp_v1 = (temp_v0 >> 8) & 0xFF;
    switch (temp_v1) {
    default:
        var_v1 = sp4[0];
        break;
    case 0xA1:
        temp_a0 = temp_v0;
        var_v1 = D_8004347C[temp_a0 & 0xFF];
        break;
    case 0xA3:
        temp_a0 = temp_v0;
        var_v1 = D_80043504[temp_a0 & 0xFF];
        break;
    case 0xA4:
        temp_a0 = temp_v0;
        if ((temp_a0 & 0xFF) < 0xE1) {
            var_v1 = (temp_a0 & 0xFF) - 0xA1;
        } else {
            var_v1 = D_8004353A[temp_a0 & 0xFF];
        }
        break;
    case 0xA5:
        temp_a0_2 = temp_v0;
        if ((temp_a0_2 & 0xFF) < 0xE1) {
            var_v1 = (temp_a0_2 & 0xFF) - 0x61;
        } else {
            var_v1 = D_80043562[temp_a0_2 & 0xFF];
        }
        break;
    }
    return var_v1;
}


void func_8000A060(u8 *arg0, s32 arg1) {
    arg0[0x22] = 0;
}

#define func_80009F8C func_80009F8C__func_8000A06C
u16 func_80009F8C(u16 arg0);
struct func_8000A780_Dst2 {
    s16 unk0;
    s16 unk2;
    u8 unk4;
    u8 unk5;
    u8 unk6;
    u8 unk7;
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 unkB;
    u16 unkC;
    u16 unkE;
    u16 unk10;
};
struct func_8000A780_Dst {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0x9];
    struct func_8000A780_Dst2 *unk2C;
};


typedef struct func_8000A06C_StructGfx { u32 w0; u32 w1; } func_8000A06C_StructGfx;
typedef struct func_8000A06C_StructData { s16 unk0; s16 unk2; u16 *unk4; } func_8000A06C_StructData;
extern s32 func_80001060(void);
extern u32 D_8004358C[];
extern u32 D_800435B4[];
extern func_8000A06C_StructGfx *D_8008D5BC;
#define CMD(a,b) { func_8000A06C_StructGfx *_g = D_8008D5BC++; _g->w0 = (a); _g->w1 = (b); }
#define _SHIFTL(v, s, w) ((u32)(((u32)(v) & ((0x01 << (w)) - 1)) << (s)))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define gSPScisTextureRectangle(pkt, xl, yl, xh, yh, tile, s, t, dsdx, dtdy) \
{ func_8000A06C_StructGfx *_g = (pkt); \
  _g->w0 = (_SHIFTL(0xE4, 24, 8) | _SHIFTL(MAX((s16)(xh), 0), 12, 12) | _SHIFTL(MAX((s16)(yh), 0), 0, 12)); \
  _g->w1 = (_SHIFTL((tile), 24, 3) | _SHIFTL(MAX((s16)(xl), 0), 12, 12) | _SHIFTL(MAX((s16)(yl), 0), 0, 12)); \
  { func_8000A06C_StructGfx *_p = (pkt); _p->w0 = 0xE1000000; \
    _p->w1 = (_SHIFTL(((s) - (((s16)(xl) < 0) ? (((dsdx) < 0) ? (MAX((((s16)(xl) * (dsdx)) >> 7), 0)) : (MIN((((s16)(xl) * (dsdx)) >> 7), 0))) : 0)), 16, 16) | _SHIFTL(((t) - (((yl) < 0) ? (((dtdy) < 0) ? (MAX((((s16)(yl) * (dtdy)) >> 7), 0)) : (MIN((((s16)(yl) * (dtdy)) >> 7), 0))) : 0)), 0, 16)); } \
  { func_8000A06C_StructGfx *_p = (pkt); _p->w0 = _SHIFTL(0xF1, 24, 8); _p->w1 = (_SHIFTL((dsdx), 16, 16) | _SHIFTL((dtdy), 0, 16)); } }
#define DATA ((func_8000A06C_StructData *)arg0->unk2C)

void func_8000A06C(struct func_8000A780_Dst *arg0) {
    u8 i;
    u8 j;
    s16 x, y;
    u16 v;
    u16 *str;
    u16 c;
    s32 pad[2];

    CMD(0xE7000000, 0);
    if (func_80001060() != 0) {
        CMD(0xED000000, 0x9FC77C);
    } else {
        CMD(0xED000000, 0x4FC3BC);
    }
    CMD(0xE3000A01, 0);
    CMD(0xD9D0F9FA, 0);
    CMD(0xFCFFFFFF, 0xFFFDF6FB);
    CMD(0xE200001C, 0x504240);
    CMD(0xE7000000, 0);
    CMD(0xFA000000, 1);
    CMD((((DATA->unk0 + 0x100) & 0x3FF) << 14) | 0xF6000000 | (((DATA->unk2 + 0x10) & 0x3FF) << 2),
        ((DATA->unk0 & 0x3FF) << 14) | ((DATA->unk2 & 0x3FF) << 2));
    CMD(0xE7000000, 0);
    CMD(0xE3000A01, 0x200000);
    CMD(0xE3000800, 0);
    CMD(0xE3000F00, 0);
    CMD(0xE3001001, 0x8000);
    CMD(0xE3000D01, 0);
    CMD(0xE3000C00, 0);
    CMD(0xE3001201, 0);
    CMD(0xE3001402, 0xC00);
    CMD(0xE2001E01, 1);
    CMD(0xFCFFFFFF, 0xFFFCF279);
    CMD(0xE200001C, 0);
    CMD(0xF9000000, 1);
    if (arg0->unk22 != 0) {
        for (i = 0; i < 4; i++) {
            for (j = 0; j < 4; j++) {
                CMD(0xFD100000, D_8004358C[i * 2 + (j & 1)]);
                CMD(0xE8000000, 0);
                CMD(0xF5000100, 0x07000000);
                CMD(0xE6000000, 0);
                CMD(0xF0000000, 0x0703C000);
                CMD(0xE7000000, 0);
                if ((j & 1) == 0) {
                    CMD(0xFD500000, D_800435B4[j >> 1]);
                    CMD(0xF5500000, 0x07040100);
                    CMD(0xE6000000, 0);
                    CMD(0xF3000000, 0x073FF100);
                    CMD(0xE7000000, 0);
                    CMD(0xF5401000, 0x40100);
                    CMD(0xF2000000, 0x1FC07C);
                }
                str = DATA->unk4;
                x = DATA->unk0;
                y = DATA->unk2;
                c = *str;
                while (c != 0xFFFF) {
                    if (i != 0) {
                        x += 8;
                    } else {
                        v = func_80009F8C(c);
                        if ((v & 0xC0) == (j << 6)) {
                            gSPScisTextureRectangle(D_8008D5BC++, x << 2, y << 2, (s16)(x + 7) * 4, (s16)(y + 7) * 4, 0, ((s8)v & 0xF) * 256, ((s16)v & 0x30) * 16, 0x1000, 0x400);
                        }
                        x += 8;
                    }
                    c = str[1];
                    str++;
                }
            }
        }
    }
}
#undef func_80009F8C

#define func_8000A780_Dst func_8000A780_Dst__func_8000A780
#define func_8000A780_Dst2 func_8000A780_Dst2__func_8000A780

struct func_8000A780_Dst2 {
    s16 unk0;
    s16 unk2;
    u8 unk4;
    u8 unk5;
    u8 unk6;
    u8 unk7;
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 unkB;
    u16 unkC;
    u16 unkE;
    u16 unk10;
};

struct func_8000A780_Dst {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0x9];
    struct func_8000A780_Dst2 *unk2C;
};

struct func_8000A780_Src {
    s16 unk0;
    s16 unk2;
    u8 unk4;
    u8 unk5;
    u8 unk6;
    u8 unk7;
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 unkB;
    u16 unkC;
    u16 unkE;
    u16 unk10;
};

void func_8000A780(struct func_8000A780_Dst *arg0, struct func_8000A780_Src *arg1) {
    arg0->unk22 = 1;
    arg0->unk2C->unk0 = arg1->unk0;
    arg0->unk2C->unk2 = arg1->unk2;
    arg0->unk2C->unk4 = arg1->unk4;
    arg0->unk2C->unk5 = arg1->unk5;
    arg0->unk2C->unk6 = arg1->unk6;
    arg0->unk2C->unk7 = arg1->unk7;
    arg0->unk2C->unk8 = arg1->unk8;
    arg0->unk2C->unk9 = arg1->unk9;
    arg0->unk2C->unkA = arg1->unkA;
    arg0->unk2C->unkB = arg1->unkB;
    arg0->unk2C->unkC = arg1->unkC;
    arg0->unk2C->unkE = arg1->unkE;
    arg0->unk2C->unk10 = arg1->unk10;
}
#undef func_8000A780_Dst
#undef func_8000A780_Dst2

#pragma GLOBAL_ASM("asm/nonmatchings/main/80009190/func_8000A828.s")

