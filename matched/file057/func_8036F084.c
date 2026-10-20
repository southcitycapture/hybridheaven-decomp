#include "context.h"
extern u8 D_80387B60[];
extern u8 func_8036F0F0[];
void func_8036F084(func_8036EA80_Actor *arg0, void *arg1) {
    extern void func_80011198();
    u8 *s = arg0->unk5C;
    func_80011198(arg1, s);
    *(u8 **)(s + 0x7C) = D_80387B60;
    *(s16 *)(s + 0x82) = 5;
    *(s16 *)(s + 0x80) = 3;
    func_80224AC4(arg0, 0);
    func_800058DC(arg0, func_8036F0F0);
}
