#include "context.h"

extern void func_800058DC();
extern void func_801FCF40(void);

void func_801FCF14(u8 *arg0, void *arg1) {
    *(u16 *)(arg0 + 0x3C) = 0;
    func_800058DC(arg0, func_801FCF40);
}
