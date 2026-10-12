#include "context.h"

extern void func_800058DC();
extern void func_8024134C();

void func_80241320(u8 *arg0, void *arg1) {
    *(u16 *)(arg0 + 0x3C) = 0;
    func_800058DC(arg0, func_8024134C);
}
