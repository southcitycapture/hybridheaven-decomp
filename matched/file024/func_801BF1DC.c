#include "context.h"
extern u16 *D_801CFCF0;
void func_801BF248(s32 arg0, s32 arg1);
extern u8 D_80044090[];
extern s32 func_80005670(s32, void *);

extern void func_80002364(s32, s32, s32, s32);

void func_801BF1DC(void *arg0, s32 arg1) {
    func_80005670(arg0, D_80044090);
    D_801CFCF0 = (u16 *)((u8 *)arg0 + 0x90);
    *D_801CFCF0 = 0;
    func_80002364(0x0C000C0C, 0xA, 2, 0);
    func_800058DC((s32)arg0, (void *)func_801BF248);
}
