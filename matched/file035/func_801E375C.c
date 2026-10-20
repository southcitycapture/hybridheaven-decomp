#include "context.h"

extern void func_801CCE0C(s32);
extern void func_801CCE50(s32, s32, s32);
extern void func_801CCE88(s32, s32, s32, s32);
extern void func_801CCEC8(s32, s32, s32, s32);

void func_801E375C(void) {
    if (D_801E8414 != 0) {
        func_801CCE0C(5);
        func_801CCE88(0, 0xFF, 0xFF, 0);
        if (D_801E8418 != 0) {
            func_801CCEC8(0, *((s8 *)&D_801E841C + 3), 0, 0);
            D_801E841C = D_801E841C + 4;
            if (D_801E841C >= 0x71) {
                D_801E841C = 0x10;
            }
        } else {
            func_801CCEC8(0, 0x71, 0, 0);
        }
        func_801CCE88(1, 0x25, 0x18, 0xDE);
        func_801CCEC8(1, 6, 0x7D, 0);
        if (D_801E8420 != 0) {
            if (D_801E8428++ >= 0xB) {
                D_801E8428 = 0;
                D_801E8424 ^= 1;
            }
            if (D_801E8424 != 0) {
                func_801CCE88(2, 2, 0xF8, 0xF9);
            } else {
                func_801CCE88(2, 0, 0, 0);
            }
            func_801CCEC8(2, -0x79, 6, 1);
        } else {
            func_801CCE88(2, 0, 0, 0);
        }
        func_801CCE88(3, 0xFF, 0xB2, 0x4D);
        func_801CCEC8(3, 0x5C, 2, 0x3D);
        func_801CCE88(4, 0x1A, 0xCC, 0xFF);
        func_801CCEC8(4, -0x37, 4, -0x14);
        func_801CCE50(0x47, 0x29, 0x19);
        return;
    }
    func_801CCE0C(1);
    func_801CCE88(0, 0xFF, 0xFF, 0xFF);
    func_801CCEC8(0, 0, 0, -0x64);
    func_801CCE50(0xFF, 0xFF, 0xFF);
}
