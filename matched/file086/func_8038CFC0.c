#include "context.h"
extern void func_800058DC(void *a, void *b);
extern void func_80229500(void *a, void *b, void *c);
extern s8 D_8038DCB0;
extern void func_8038CFFC(s32 arg0, s32 arg1);

void func_8038CFC0(s32 arg0, s32 arg1) {
    extern void func_80229500();
    D_8038DCB0 = 0;
    func_80229500();
    func_800058DC((void *)arg0, (void *)func_8038CFFC);
}
