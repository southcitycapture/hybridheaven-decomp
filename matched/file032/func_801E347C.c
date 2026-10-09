#include "common.h"

extern void func_801CCE50(s32 a0, s32 a1, s32 a2);
extern void func_801CCE88(s32 a0, s32 a1, s32 a2, s32 a3);
extern void func_801CCEC8(s32 a0, s32 a1, s32 a2, s32 a3);

s32 func_801E347C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2DC6C0) != 0) {
        func_801CCE88(0, 0xFF, 0xFF, 0xFF);
        func_801CCEC8(0, 0, 0, 0x5A);
        func_801CCE50(0x78, 0x78, 0x78);
        return 6;
    }
    return 5;
}
