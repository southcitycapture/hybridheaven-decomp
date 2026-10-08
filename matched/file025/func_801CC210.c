#include "common.h"

extern void func_800058DC(s32, void *);
extern void func_801BF6C4(s32);
extern void func_801CC9FC(void);
extern void func_801CCA44(void);
extern void func_801CCAB0(void);
extern void func_801CC278(void);
extern s32 D_801DAABC;
extern s32 D_801DAB14;
extern s32 D_801DAB18;

void func_801CC210(s32 arg0, s32 arg1) {
    D_801DAABC = 0;
    D_801DAB14 = 0;
    D_801DAB18 = 0;
    func_801BF6C4(4);
    func_801CC9FC();
    func_801CCA44();
    func_801CCAB0();
    func_800058DC(arg0, (void *)func_801CC278);
}
