#include "common.h"

extern u8 D_801BBBF0[];
extern u8 D_80163B8C[];
extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern void func_800058DC(s32, void *);
extern void func_8011A724(s32 arg0);
extern void func_8011A7FC(void);
extern void func_8011AA0C(s32 arg0, void *arg1, void *arg2);
void func_8011570C(s32 arg0, s32 arg1);
void func_80115734(s32 arg0, s32 arg1);

typedef struct func_80115620_StructC { u8 pad0[0x24]; f32 f24; f32 f28; } func_80115620_StructC;
typedef struct func_80115620_StructB { u8 pad0[0x2C]; func_80115620_StructC *p2C; } func_80115620_StructB;
typedef struct func_80115620_StructA {
    u8 pad0[0x54]; s32 s54; u8 pad58[0x8C]; s32 sE4; func_80115620_StructB *sE8;
    u8 padEC[0x1B0]; f32 f29C; f32 f2A0; u8 pad2A4[0x11]; u8 b2B5;
} func_80115620_StructA;
#define F8010E680_G ((func_80115620_StructA *)D_801BBBF0)

void func_80115620(s32 arg0, s32 arg1) {
    func_80005E44(arg0, D_80163B8C);
    func_80006214(arg0);
    F8010E680_G->s54 = arg0;
    F8010E680_G->sE4 = F8010E680_G->s54;
    F8010E680_G->sE8 = *(func_80115620_StructB **)(F8010E680_G->sE4 + 0x24);
    func_8011A724(0);
    F8010E680_G->sE8->p2C->f24 = F8010E680_G->f29C;
    F8010E680_G->sE8->p2C->f28 = F8010E680_G->f2A0;
    if (F8010E680_G->b2B5 == 1) {
        func_8011A7FC();
        func_800058DC(arg0, func_80115734);
        return;
    }
    if (F8010E680_G->b2B5 == 2) {
        func_8011AA0C(arg0, func_8011570C, func_80115734);
        return;
    }
    func_800058DC(arg0, func_80115734);
}


extern void func_8011AA54(s32 arg0, void (*arg1)(void));

void func_8011570C(s32 arg0, s32 arg1) {
    func_8011AA54(arg0, func_80115734);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80115620/func_80115734.s")

extern u8 D_80163BFC[];
void func_80115C3C(s32 arg0, s32 arg1);
void func_80115C64(s32 arg0, s32 arg1);

typedef struct func_80115B50_StructC { u8 pad0[0x24]; f32 f24; f32 f28; } func_80115B50_StructC;
typedef struct func_80115B50_StructB { u8 pad0[0x2C]; func_80115B50_StructC *p2C; } func_80115B50_StructB;
typedef struct func_80115B50_StructA {
    u8 pad0[0x54]; s32 s54; u8 pad58[0x8C]; s32 sE4; func_80115B50_StructB *sE8;
    u8 padEC[0x1B0]; f32 f29C; f32 f2A0; u8 pad2A4[0x11]; u8 b2B5;
} func_80115B50_StructA;
#define F8010E680_G ((func_80115B50_StructA *)D_801BBBF0)

void func_80115B50(s32 arg0, s32 arg1) {
    func_80005E44(arg0, D_80163BFC);
    func_80006214(arg0);
    F8010E680_G->s54 = arg0;
    F8010E680_G->sE4 = F8010E680_G->s54;
    F8010E680_G->sE8 = *(func_80115B50_StructB **)(F8010E680_G->sE4 + 0x24);
    func_8011A724(0);
    F8010E680_G->sE8->p2C->f24 = F8010E680_G->f29C;
    F8010E680_G->sE8->p2C->f28 = F8010E680_G->f2A0;
    if (F8010E680_G->b2B5 == 1) {
        func_8011A7FC();
        func_800058DC(arg0, func_80115C64);
        return;
    }
    if (F8010E680_G->b2B5 == 2) {
        func_8011AA0C(arg0, func_80115C3C, func_80115C64);
        return;
    }
    func_800058DC(arg0, func_80115C64);
}



void func_80115C3C(s32 arg0, s32 arg1) {
    func_8011AA54(arg0, func_80115C64);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80115620/func_80115C64.s")

