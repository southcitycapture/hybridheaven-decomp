#include "context.h"

extern u8 D_80258800[], D_80258840[];
extern f32 D_80258AC8, D_80258ACC, D_80258AD0, D_80258AD4, D_80258AD8, D_80258ADC, D_80258AE0;
extern f32 D_80258AE4, D_80258AE8, D_80258AEC, D_80258AF0, D_80258AF4, D_80258AF8, D_80258AFC, D_80258B00;
void func_80245988(void *arg0, s32 arg1);
extern s32 D_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

typedef struct { u8 pad[4]; f32 f4; u8 pad8[4]; f32 fC; u8 pad10[2]; s16 s12; } func_80245758_StructB;
typedef struct { u8 pad[0x2C]; func_80245758_StructB *p; } func_80245758_StructA;

void func_80245758(func_802453FC_StructA *arg0, s32 arg1) {
    s32 v = *(u16 *)&arg0->h3C;
    (*(u16 *)&arg0->h3C)++;
    if (v == 0) {
        ((func_80245758_StructA *)*(void **)((u8 *)&D_801BBBF0 + 0xE0))->p->f4 = D_80258AC8;
        ((func_80245758_StructA *)*(void **)((u8 *)&D_801BBBF0 + 0xE0))->p->fC = D_80258ACC;
        ((func_80245758_StructA *)*(void **)((u8 *)&D_801BBBF0 + 0xE0))->p->s12 = 0x1000;
    }
    if (v == 0x32) {
        D_801BBBF0.f1E8 = D_80258AD0;
        D_801BBBF0.f1EC = D_80258AD4;
        D_801BBBF0.f1F0 = D_80258AD8;
        D_801BBBF0.f1F4 = -278.0f;
        D_801BBBF0.f1F8 = D_80258ADC;
        D_801BBBF0.f1FC = D_80258AE0;
        func_8011AAF4(D_80258800, 0x271, arg0, 0, 1, 0.0f, D_801BBBF0.f1E8, D_801BBBF0.f1EC, D_801BBBF0.f1F0, 0.0f, D_801BBBF0.f1F4, D_801BBBF0.f1F8, D_801BBBF0.f1FC, 0.0f, 35.0f, -1, -1);
        func_80020718(0x1B5);
        func_800208C4(0x7C);
        func_80133980(0x77);
    }
    if (v >= 0x6E && D_8011AAF4(D_80258840, 0x27D, arg0, 0, 2, D_80258AE4, D_80258AE8, D_80258AEC, D_80258AF0, D_80258AF4, D_80258AF8, D_80258AFC, D_80258B00, 0.0f, 35.0f, -1, -1) == 0) {
        arg0->h3C = 0;
        func_800058DC(arg0, func_80245988);
    }
}
