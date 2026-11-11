#include "common.h"
typedef struct func_8001ADD4_Blk700 { u8 d[0x700]; } func_8001ADD4_Blk700;
extern func_8001ADD4_Blk700 D_800F51C0[];
typedef struct func_8001ADD4_BlkE00 { u8 d[0xE00]; } func_8001ADD4_BlkE00;
extern func_8001ADD4_BlkE00 D_800FB3C0[];
extern s64 D_801077C0[];
extern u8 D_8008EF70[];
typedef struct func_8001ADD4_StructA { u16 b[5]; } func_8001ADD4_StructA;
typedef struct func_8001ADD4_StructB { u8 b[8]; } func_8001ADD4_StructB;
typedef struct func_8001ADD4_StructEnt {
    u8 a;
    u8 b;
    s16 c;
    s16 d;
    s16 e;
    func_8001ADD4_StructA f;
    func_8001ADD4_StructB g;
    u8 pad[0x100];
} func_8001ADD4_StructEnt;
#define E8 ((func_8001ADD4_StructEnt *)D_8008EF70)
extern void func_800058DC(s32, void (*)(void));
extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
typedef struct func_8001ADD4_StructOut {
    s16 s0;
    s16 s2;
    u8 b4;
    u8 pad5;
    s16 s6;
    s16 s8;
    u8 bA;
    u8 bB;
    void *p0C;
    void *p10;
    void *p14;
    void *p18;
} func_8001ADD4_StructOut;
typedef struct func_8001ADD4_StructObj {
    u8 pad[0x22];
    u8 unk22;
    u8 pad2[9];
    struct func_8001ADD4_StructOut *unk2C;
} func_8001ADD4_StructObj;
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
void func_8001B0B0(s32 arg0, func_8001B0B0_Struct **arg1);


typedef struct func_8001AA50_StructTen {
    u16 values[5];
} func_8001AA50_StructTen;
extern func_8001AA50_StructTen D_800444E0;
typedef struct func_8001AA50_StructHalfwords {
    u16 values[4];
} func_8001AA50_StructHalfwords;
extern func_8001AA50_StructHalfwords D_800444EC;
typedef struct func_8001AA50_StructPointers {
    void *values[8];
} func_8001AA50_StructPointers;
extern func_8001AA50_StructPointers D_800444F4;
extern u8 D_8004444C[];
extern s32 func_80001060(void);

void func_8001AA50(s32 arg0, func_8001ADD4_StructObj **arg1)
{
    s32 i;
    func_8001AA50_StructTen a;
    func_8001AA50_StructHalfwords b;
    func_8001AA50_StructPointers c;

    a = D_800444E0;
    b = D_800444EC;
    c = D_800444F4;
    for (i = 0; i < 28; i++) {
        E8[i].a = 0;
        E8[i].b = 0;
        E8[i].c = 0;
        E8[i].d = 0;
        E8[i].e = 0;
        *(func_8001AA50_StructTen *)&E8[i].f = a;
        *(func_8001AA50_StructHalfwords *)&E8[i].g = b;
        func_80005E44(arg0, c.values[i >> 2]);
    }
    func_80005E44(arg0, D_8004444C);
    func_80006214(arg0);
    for (i = 0; i != 28; i++) {
        arg1[i]->unk22 = 0;
        arg1[i]->unk2C->s0 = 0;
        arg1[i]->unk2C->s2 = 0;
        arg1[i]->unk2C->b4 = 0;
        arg1[i]->unk2C->s6 = 0;
        arg1[i]->unk2C->s8 = 0;
        arg1[i]->unk2C->bA = 0;
        arg1[i]->unk2C->bB = i & 1;
        arg1[i]->unk2C->p0C = &D_800F51C0[i >> 1];
        arg1[i]->unk2C->p10 = &D_800FB3C0[i >> 1];
        arg1[i]->unk2C->p14 = &E8[i].f;
        arg1[i]->unk2C->p18 = &E8[i].g;
    }
    arg1[i]->unk22 = 1;
    if (func_80001060() != 0) {
        arg1[i]->unk2C->s0 = 0x20;
        arg1[i]->unk2C->s2 = 0x10;
        *(s16 *)&arg1[i]->unk2C->b4 = 0x260;
        arg1[i]->unk2C->s6 = 0x1D0;
    } else {
        arg1[i]->unk2C->s0 = 0x10;
        arg1[i]->unk2C->s2 = 8;
        *(s16 *)&arg1[i]->unk2C->b4 = 0x130;
        arg1[i]->unk2C->s6 = 0xE8;
    }
    D_801077C0[0] = 0;
    D_801077C0[1] = 0;
    D_801077C0[2] = 0;
    D_801077C0[3] = 0;
    func_800058DC(arg0, (void (*)(void))func_8001B0B0);
}
