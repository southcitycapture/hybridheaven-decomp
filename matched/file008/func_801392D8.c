#include "context.h"

extern void func_8001B204(s32, s32, s32, void *, s32);
extern void func_800058DC(s32, void *);
extern u8 D_8018DE20[];
extern void func_80139328(void);

void func_801392D8(s32 arg0, s32 arg1) {
    func_8001B204(0, 0x7D0, 0x50, D_8018DE20, 0xA);
    func_800058DC(arg0, &func_80139328);
}
