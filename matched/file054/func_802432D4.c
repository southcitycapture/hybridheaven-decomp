#include "context.h"

typedef struct func_802432D4_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[0x56];
    f32 unk94;
} func_802432D4_Struct;
extern u8 D_80247CD0[];
extern f64 D_80248420;
extern f64 D_80248428;
extern f64 D_80248430;
extern f64 D_80248438;
extern f64 D_80248440;
extern f64 D_80248448;
extern f64 D_80248450;
extern f64 D_80248458;
extern s32 D_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
void func_802434E0();
void func_802432D4(func_802432D4_Struct *arg0, s32 arg1);

#define F802432D4(o) (*(f32 *) ((u8 *) &D_801BBBF0 + (o)))

void func_802432D4(func_802432D4_Struct *arg0, s32 arg1) {
    s32 t;
    f64 v;

    t = arg0->unk3C;
    arg0->unk3C++;
    D_8011AAF4(D_80247CD0, 0x51A, arg0, 0, 1, 0.0f, F802432D4(0x1E8), F802432D4(0x1EC), F802432D4(0x1F0), 0.0f, F802432D4(0x1F4), F802432D4(0x1F8), F802432D4(0x1FC), 0.0f, 58.5f, -1, -1);
    if (t < 0x3C) {
        F802432D4(0x1E8) = F802432D4(0x1E8) + D_80248420;
        F802432D4(0x1EC) = F802432D4(0x1EC) + D_80248428;
        F802432D4(0x1F0) = F802432D4(0x1F0) + D_80248430;
        F802432D4(0x1F4) = F802432D4(0x1F4) + D_80248438;
        F802432D4(0x1F8) = F802432D4(0x1F8) + D_80248440;
        F802432D4(0x1FC) = F802432D4(0x1FC) + D_80248448;
    }
    if (!(t % 2)) {
        v = D_80248450;
    } else {
        v = D_80248458;
    }
    F802432D4(0x1E8) = F802432D4(0x1E8) + v;
    if (t >= 0x1000) {
        arg0->unk3C = arg0->unk3C - 0x10;
    }
    if ((t >= 0x3C) && (func_800178E8() != 0)) {
        arg0->unk3C = 0;
        arg0->unk94 = 0.0f;
        func_80020718(0x19B);
        func_800058DC(arg0, (void (*)(void))func_802434E0);
    }
}
