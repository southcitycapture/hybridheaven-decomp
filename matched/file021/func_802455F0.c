#include "context.h"

struct func_802455F0_Struct { u8 pad[0xF29]; u8 a; u8 b; u8 c; };
void func_80245674(s32 arg0, s32 arg1);
#define G ((struct func_802455F0_Struct *)&D_801BBBF0)

void func_802455F0(s32 arg0, s32 arg1) {
    G->b += 8;
    if (G->b >= 0xF7) {
        G->b = 0xF7;
    }
    if (func_80133A24(0x1A9) == 0) {
        G->a = 0x50;
        G->b = 0x46;
        G->c = 0x5A;
        func_800058DC(arg0, func_80245674);
    }
}
