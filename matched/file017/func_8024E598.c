#include "context.h"
extern void func_800058DC(void *arg0, void *arg1);

extern void func_80126968();
extern void func_801268CC(s32);
extern void func_80020744(s32);
extern s16 D_801BBF90[];
extern void func_8024E5E8(s32 arg0);

void func_8024E598(s32 arg0, s32 arg1) {
    func_80126968();
    D_801BBF90[2] = 0x134;
    func_801268CC(0);
    func_80020744(0xA);
    func_800058DC(arg0, func_8024E5E8);
}
