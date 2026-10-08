#include "context.h"

extern void func_8001F74C();
extern void func_802455F0();

void func_80245588(s32 arg0, s32 arg1) {
    func_8001F74C();
    if (func_80133A24(0x1A9) != 0) {
        ((s8 *)&D_801BBBF0)[0xF29] = 0;
        ((s8 *)&D_801BBBF0)[0xF2A] = 0;
        ((s8 *)&D_801BBBF0)[0xF2B] = 0;
        ((s8 *)&D_801BBBF0)[0xF2C] = -0x20;
        ((s8 *)&D_801BBBF0)[0xF2D] = -0x40;
        ((s8 *)&D_801BBBF0)[0xF2E] = 0;
        func_800058DC(arg0, func_802455F0);
    }
}
