#include "context.h"
/* context.h declaration lines this function uses, needed before the file's own declarations. */
extern s32 D_8025A2E4;
extern void func_800058DC(void *, void *);
extern void func_8015115C(s32, void *);
extern void func_801512CC(s32, s32, s32, s32);
extern void func_8024DA8C();

extern s32 func_801517CC(s32);
extern void func_80151430(s32, s32);
extern u8 D_80254208[];

void func_8024DA04(void *arg0, s32 arg1) {
    if (func_801517CC(D_8025A2E4) != 0) {
        func_801512CC(D_8025A2E4, 0x4413B333, 0x43B90000, 0x42DD6666);
        func_80151430(D_8025A2E4, 0x1000);
        func_8015115C(D_8025A2E4, D_80254208);
        *(s16 *)((u8 *)arg0 + 0x90) = 0;
        func_800058DC(arg0, &func_8024DA8C);
    }
}
