#include "context.h"

extern s32 D_801DB640;
extern s32 D_801DB648;
extern s32 D_801DB660;
extern s32 D_801DB664;
extern s32 D_801DB684;
extern s32 D_801DB688;
extern void func_801D4D48(void);
s32 func_801CC654(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void func_8013B570(s32, s32, s32, s32, void *);

void func_801D4C90(s32 arg0, s32 arg1) {
    D_801DB640 = arg0;
    D_801DB660 = 0;
    D_801DB664 = 0;
    D_801DB684 = 1;
    D_801DB648 = 0;
    D_801DB688 = func_801CC654(arg0, 0x118, 0, 0x118, 3, 0x118, 0, 0x118, 3, 1, 0, 0);
    func_8013B570(arg0, 0x11B, 0, 4, (void *)func_801D4D48);
}
