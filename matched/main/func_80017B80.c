#include "context.h"

extern void func_800179B0(s32);
extern void func_800058DC(s32, void (*)(void));
extern void func_80017BB8(void);

void func_80017B80(s32 arg0, s32 arg1) {
    func_800179B0(0);
    func_800058DC(arg0, func_80017BB8);
}
