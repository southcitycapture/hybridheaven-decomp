#include "context.h"

extern void func_801CCE50(s32 a0, s32 a1, s32 a2);
extern void func_801CCE88(s32 a0, s32 a1, s32 a2, s32 a3);
extern void func_801CCEC8(s32 a0, s32 a1, s32 a2, s32 a3);

s32 func_801E34F4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x895440) != 0) {
        func_801CCE88(0, 0, 0xC8, 0xFF);
        func_801CCEC8(0, 0, 0, -0x64);
        func_801CCE50(0x87, 0x63, 0x1C);
        return 7;
    }
    return 6;
}
