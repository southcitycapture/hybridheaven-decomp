#include "context.h"
extern void func_800058DC(void *obj, void *fn);

extern void func_80005E44(s32, void *);
extern u8 D_8038DCAC[];
extern void func_803839DC(s32 arg0, s32 arg1);

void func_803839A0(s32 arg0, s32 arg1) {
    func_80005E44(arg0, D_8038DCAC);
    func_800058DC(arg0, func_803839DC);
}
