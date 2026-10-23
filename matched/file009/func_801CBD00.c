#define func_801CBD00 D_801CBD00
#include "context.h"
#undef func_801CBD00

void func_801CBD00(u8 a0, u8 a1, u8 a2, u8 a3, u8 a4, u8 a5, s8 a6, s8 a7, s8 a8) {
    func_801CBC70(a0, a1, a2);
    func_801CBCA0(a3, a4, a5);
    func_801CBCD0(a6, a7, a8);
    D_801E0CA0[0x13] = 0;
    D_801E0CA0[0xF] = 0;
    D_801E0CA0[0xB] = 0;
    D_801E0CA0[0x7] = 0;
    D_801E0CA0[0x3] = 0;
}
