#include "context.h"
extern s32 D_801DABB8;
extern void func_800058DC(s32, void *);
extern void func_801CCD60();

void func_801CDB94(s32 arg0, s32 arg1) {
    s32 temp = D_801DABB8;

    func_800058DC(temp, (void *) func_801CCD60);
}
