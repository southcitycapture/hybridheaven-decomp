#include "context.h"
extern u8 D_8016379C[];
extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern void func_800058DC(s32, void *);
extern void func_8011A724(s32 arg0);
extern void func_8011A7FC(void);
extern void func_8011AA0C(s32 arg0, void *arg1, void *arg2);
void func_8010E76C(s32 arg0, s32 arg1);
void func_8010E794(s32 arg0, s32 arg1);

typedef struct func_8010E680_StructC { u8 pad0[0x24]; f32 f24; f32 f28; } func_8010E680_StructC;
typedef struct func_8010E680_StructB { u8 pad0[0x2C]; func_8010E680_StructC *p2C; } func_8010E680_StructB;
typedef struct func_8010E680_StructA {
    u8 pad0[0x54]; s32 s54; u8 pad58[0x8C]; s32 sE4; func_8010E680_StructB *sE8;
    u8 padEC[0x1B0]; f32 f29C; f32 f2A0; u8 pad2A4[0x11]; u8 b2B5;
} func_8010E680_StructA;
#define F8010E680_G ((func_8010E680_StructA *)D_801BBBF0)

void func_8010E680(s32 arg0, s32 arg1) {
    func_80005E44(arg0, D_8016379C);
    func_80006214(arg0);
    F8010E680_G->s54 = arg0;
    F8010E680_G->sE4 = F8010E680_G->s54;
    F8010E680_G->sE8 = *(func_8010E680_StructB **)(F8010E680_G->sE4 + 0x24);
    func_8011A724(0);
    F8010E680_G->sE8->p2C->f24 = F8010E680_G->f29C;
    F8010E680_G->sE8->p2C->f28 = F8010E680_G->f2A0;
    if (F8010E680_G->b2B5 == 1) {
        func_8011A7FC();
        func_800058DC(arg0, func_8010E794);
        return;
    }
    if (F8010E680_G->b2B5 == 2) {
        func_8011AA0C(arg0, func_8010E76C, func_8010E794);
        return;
    }
    func_800058DC(arg0, func_8010E794);
}
