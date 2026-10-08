#include "context.h"

extern void func_80146178(s32, u8 *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_80237834(void);

void func_802377CC(s32 arg0, s32 arg1) {
    u8 sp3F;

    func_80146178(arg0, &sp3F, 0, 0, 0x140, 0xF0, 2, 0, 0, 0, 0);
    func_800058DC(arg0, func_80237834);
}
