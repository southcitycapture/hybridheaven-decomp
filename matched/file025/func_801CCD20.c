#include "common.h"

extern void func_800058DC(s32, void *);
extern void func_801BF6C4(s32);
extern void func_801CCF48(void);
extern s32 D_801E0C38;
extern void func_801CCD60(void);

void func_801CCD20(s32 arg0) {
    D_801E0C38 = 0;
    func_801CCF48();
    func_801BF6C4(1);
    func_800058DC(arg0, func_801CCD60);
}
