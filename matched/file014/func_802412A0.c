#include "context.h"

extern void func_8001F74C();
extern void func_80203830(s32, void *);
extern void func_8020394C();
extern s32 D_801BCC78;
extern u8 D_8024732C[];
extern u8 func_802412F4[];

void func_802412A0(s32 arg0, s32 arg1) {
    func_8001F74C();
    func_80203830(arg0, D_8024732C);
    D_801BCC78 = arg0;
    func_8020394C();
    func_800058DC((void *)arg0, func_802412F4);
}
