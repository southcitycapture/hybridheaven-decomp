#include "common.h"

extern void func_8001B204(s32, s32, s32, void *);
extern u8 D_8018ED4C[];
extern u8 D_8018ED50[];

void func_8013EEF8(u8 arg0) {
    if (!arg0) {
        func_8001B204(0xF, 0, 0, D_8018ED4C);
        return;
    }
    func_8001B204(0x13, 0, 0, D_8018ED50);
}
