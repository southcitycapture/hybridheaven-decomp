#include "context.h"

extern s16 D_80089356;
extern s8 D_801BBD54;
extern void func_80132DB0(void);
extern void func_800058DC(s32, void (*)(void));

void func_80132D74(s32 arg0, s32 arg1) {
    D_801BBD54 = 0;
    D_80089356 = 1;
    func_800058DC(arg0, func_80132DB0);
}
