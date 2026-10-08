#include "common.h"

extern void func_800023EC(void);
extern void func_80020744(s32 arg0);
extern s16 D_80089356;

void func_801C0438(void) {
    func_80020744(1);
    D_80089356 = 0;
    func_800023EC();
}
