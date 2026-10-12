#include "context.h"

extern s32 func_80151790(s32);
extern void func_8015115C(s32, void *);
extern u8 D_80246918[];
extern u8 D_80246930[];
extern s32 D_80248800;
extern s32 D_80248804;
extern void func_80241FD8();

struct func_80241F30_Struct {
    u8 pad[0x90];
    u8 unk90;
};

void func_80241F30(struct func_80241F30_Struct *arg0, s32 arg1) {
    if (func_80151790(D_80248804) == 0) {
        arg0->unk90 = 1;
        func_8015115C(D_80248804, D_80246918);
    }
    if (func_800178E8() != 0 && arg0->unk90 != 0) {
        func_801512CC(D_80248800, -2.0f, 0.0f, -33.0f);
        func_8015122C(D_80248804, D_80246930, 5);
        func_800058DC(arg0, func_80241FD8);
    }
}
