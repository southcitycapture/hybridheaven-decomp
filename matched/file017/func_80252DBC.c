#include "context.h"
extern void func_800058DC(void *, void *);

extern void func_80126968();
extern void func_801268CC(s32);
extern void func_80020744(s32);
extern s16 D_801BBF90[];
extern void func_80252E0C(s32 arg0);

void func_80252DBC(s32 arg0, s32 arg1) {
    func_80126968();
    D_801BBF90[2] = 0x136;
    func_801268CC(0);
    func_80020744(0xA);
    func_800058DC(arg0, func_80252E0C);
}
