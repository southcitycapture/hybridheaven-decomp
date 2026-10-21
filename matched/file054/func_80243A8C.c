#include "context.h"

struct func_80243A8C_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[0x52];
    u8 unk90;
    u8 pad91[0xF];
    f32 unkA0;
};
struct func_80243A8C_Arg1 {
    u8 pad[0x14];
    u8 *unk14;
};
extern s32 func_801511C4(s32, void *, s32);
extern s32 D_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern u8 D_80246870[];
extern u8 D_80247D84[];
extern f64 D_802484F0;
extern f64 D_802484F8;
extern f64 D_80248500;
extern f64 D_80248508;
extern f64 D_80248510;
extern f64 D_80248518;
extern f64 D_80248520;
extern f32 D_80248528;
extern f32 D_8024852C;
extern f32 D_80248530;
extern f32 D_80248534;
extern f32 D_80248538;
extern void func_80243CD4();
#define F80243A8C(o) (*(f32 *) ((u8 *) &D_801BBBF0 + (o)))

void func_80243A8C(struct func_80243A8C_Struct *arg0, struct func_80243A8C_Arg1 *arg1) {
    s32 sp5C;

    sp5C = arg0->unk3C++;
    if (func_80151790(D_80248800) == 0) {
        arg0->unk90 = 1;
        func_801511C4(D_80248800, D_80246870, 10);
    }
    D_8011AAF4(D_80247D84, 0x5C4, arg0, 0, 1, 0.0f, F80243A8C(0x1E8), F80243A8C(0x1EC), F80243A8C(0x1F0), 0.0f, F80243A8C(0x1F4), F80243A8C(0x1F8), F80243A8C(0x1FC), 0.0f, 40.0f, 0, (s32) arg0->unkA0);
    F80243A8C(0x1E8) = F80243A8C(0x1E8) + D_802484F0;
    F80243A8C(0x1EC) = F80243A8C(0x1EC) + D_802484F8;
    F80243A8C(0x1F0) = F80243A8C(0x1F0) + D_80248500;
    F80243A8C(0x1F4) = F80243A8C(0x1F4) + D_80248508;
    F80243A8C(0x1F8) = F80243A8C(0x1F8) + D_80248510;
    F80243A8C(0x1FC) = F80243A8C(0x1FC) + D_80248518;
    arg0->unkA0 = arg0->unkA0 + D_80248520;
    if (sp5C >= 0x28) {
        F80243A8C(0x1E8) = D_80248528;
        F80243A8C(0x1EC) = 2.0f;
        F80243A8C(0x1F0) = D_8024852C;
        F80243A8C(0x1F4) = D_80248530;
        F80243A8C(0x1F8) = D_80248534;
        F80243A8C(0x1FC) = D_80248538;
        func_8015115C(D_80248800, D_80246870);
        arg1->unk14[0x22] = 0;
        arg0->unk3C = 0;
        arg0->unk90 = 0;
        func_800058DC(arg0, func_80243CD4);
    }
}
