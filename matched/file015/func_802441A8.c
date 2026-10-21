#include "context.h"

extern u8 D_80252510[];
extern s32 D_80010550(s32, s32);

void func_802441A8(void *arg0, s32 volatile arg1) {
    s32 t = *(s32 *)((u8 *)arg0 + 0x5C);
    D_80010550(arg1, t);
    if (func_80133A24(0x73) != 0) {
        func_801339D0(0x73);
        func_8013A1B4(arg1, D_80252418, 0xFFFFFF);
        func_800179B0(D_80252510);
        func_800058DC(arg0, (void *) func_80244240);
    }
}
