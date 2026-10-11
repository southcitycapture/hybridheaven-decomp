#include "context.h"

extern void func_800023A8(s32 arg0);
extern s32 func_800057DC(s32, void *);
extern void D_80162FC0(void);

void func_80108244(s32 arg0, s32 arg1) {
    func_800023A8(0);
    func_800057DC(arg0, D_80162FC0);
}
