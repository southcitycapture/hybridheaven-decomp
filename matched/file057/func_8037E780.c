#include "context.h"

extern s32 func_8037E438(void *, s32, s32, u8, s32, s8 *, s32);

extern void func_8037E7E4();

void func_8037E780(void *arg0, s32 arg1) {
    s8 sp2F;

    sp2F = 0;
    func_8037E438(arg0, 0x32, 0x50, ((u8 *)arg0)[0xA8], 8, &sp2F, 0);
    func_80006214(arg0);
    *(s16 *)((u8 *)arg0 + 0xB0) = 0;
    func_800058DC(arg0, func_8037E7E4);
}
