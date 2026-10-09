#include "context.h"
extern u8 D_80044090[];
extern s32 D_801CC8A8;
extern s32 D_801CC8B8;
extern s32 D_801CC8BC;
extern void func_800023A8(s32);
extern s32 func_80005670(s32, void *);
extern s32 func_80005700(s32);
extern void func_800058DC(s32, void *);

extern void func_801C4640();

void func_801C45C8(s32 arg0, s32 arg1) {
    func_800023A8(0);
    func_80005700(D_801CC8A8);
    func_80005700(D_801CC8B8);
    D_801CC8A8 = 0;
    D_801CC8B8 = 0;
    D_801CC8BC = func_80005670(arg0, &D_80044090);
    func_800058DC(arg0, &func_801C4640);
}
