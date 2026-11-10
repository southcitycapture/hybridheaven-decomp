#include "common.h"
#define func_8001C670 func_8001C670_pre
#define func_8001C6E8 func_8001C6E8_pre
#define func_8001C734 func_8001C734_pre
#define func_8001C7A4 func_8001C7A4_pre
#define func_8001C824 func_8001C824_pre
extern u8 D_8008EF70[];
typedef struct func_8001B204_Ent {
    u8 f0;
    u8 f1;
    s16 s2;
    s16 s4;
    u16 s6;
    u8 b8;
    u8 pad[0x111];
} func_8001B204_Ent;
extern func_8001B204_Ent D_8008EF70__e[];
#define ENT D_8008EF70__e
extern void func_800058DC(s32, void (*)(void));
extern void func_80005E44(s32, void *);
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
u8 func_8001C670(u8 arg0);
u8 func_8001C6E8(u8 arg0);
u8 func_8001C734(u8 arg0);
u8 func_8001C7A4(u8 arg0);
u8 func_8001C824(u8 arg0);


typedef struct func_8001ADD4_StructA { u16 b[5]; } func_8001ADD4_StructA;
typedef struct func_8001ADD4_StructB { u8 b[8]; } func_8001ADD4_StructB;
typedef struct func_8001ADD4_StructC { s32 w[8]; } func_8001ADD4_StructC;
typedef struct func_8001ADD4_StructObj {
    u8 pad[0x22];
    u8 unk22;
    u8 pad2[9];
    struct func_8001ADD4_StructOut *unk2C;
} func_8001ADD4_StructObj;
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

extern func_8001ADD4_StructA D_80044514;
extern func_8001ADD4_StructB D_80044520;
extern func_8001ADD4_StructC D_80044528;
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
typedef struct func_8001ADD4_Blk700 { u8 d[0x700]; } func_8001ADD4_Blk700;
typedef struct func_8001ADD4_BlkE00 { u8 d[0xE00]; } func_8001ADD4_BlkE00;
extern func_8001ADD4_Blk700 D_800F51C0[];
extern func_8001ADD4_BlkE00 D_800FB3C0[];
#define B700 D_800F51C0
#define BE00 D_800FB3C0
extern s64 D_801077C0[];
extern void D_80116E80(s32);
extern void func_80006214(s32);

void func_8001ADD4(s32 arg0, func_8001ADD4_StructObj **arg1) {
    s32 i;
    func_8001ADD4_StructA sp70;
    func_8001ADD4_StructB sp68;
    func_8001ADD4_StructC sp48;

    sp70 = D_80044514;
    sp68 = D_80044520;
    sp48 = D_80044528;
    D_80116E80(8);
    for (i = 0; i < 0x1C; i++) {
        ENT[i].f0 = 0;
        ENT[i].f1 = 0;
        ENT[i].s2 = 0;
        ENT[i].s4 = 0;
        ENT[i].s6 = 0;
        *(func_8001ADD4_StructA *)((u8 *)&ENT[i] + 8) = sp70;
        *(func_8001ADD4_StructB *)((u8 *)&ENT[i] + 0x12) = sp68;
        func_80005E44(arg0, (void *)sp48.w[i >> 2]);
    }
    func_80006214(arg0);
    for (i = 0; i != 0x1C; i++) {
        arg1[i]->unk22 = 0;
        arg1[i]->unk2C->s0 = 0;
        arg1[i]->unk2C->s2 = 0;
        arg1[i]->unk2C->b4 = 0;
        arg1[i]->unk2C->s6 = 0;
        arg1[i]->unk2C->s8 = 0;
        arg1[i]->unk2C->bA = 0;
        arg1[i]->unk2C->bB = i & 1;
        arg1[i]->unk2C->p0C = &B700[i >> 1];
        arg1[i]->unk2C->p10 = &BE00[i >> 1];
        arg1[i]->unk2C->p14 = (u8 *)&ENT[i] + 8;
        arg1[i]->unk2C->p18 = (u8 *)&ENT[i] + 0x12;
    }
    D_801077C0[0] = 0;
    D_801077C0[1] = 0;
    D_801077C0[2] = 0;
    D_801077C0[3] = 0;
    func_800058DC(arg0, (void (*)(void))func_8001B0B0);
}
