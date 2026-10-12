#include "context.h"

extern void func_800058DC(void *, void *);
extern void func_80243B3C();

void func_80243B10(u8 *arg0, void *arg1) {
    *(u16 *)(arg0 + 0x3C) = 0;
    func_800058DC(arg0, func_80243B3C);
}
