#include "context.h"

extern void func_800058DC(s32, void *);
extern s8 D_8008EE83;
extern void func_80017BB8(void);

void func_800193E0(s32 arg0, s32 arg1) {
    D_8008EE83 = 0;
    func_800058DC(arg0, func_80017BB8);
}
