#include "context.h"

extern s32 D_801BF180;
extern void func_8014FF14(void);

void func_8014FEE0(s32 arg0, s32 arg1) {
    D_801BF180 = 1;
    func_800058DC(arg0, (void *) func_8014FF14);
}
