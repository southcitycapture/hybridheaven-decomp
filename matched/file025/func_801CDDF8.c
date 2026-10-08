#include "common.h"

extern void func_801C26C4(s32 arg0, void *arg1);
extern s32 D_801DABD0;
extern u8 D_801E1110[];

void func_801CDDF8(void) {
    D_801DABD0 = 0;
    func_801C26C4(0xA, D_801E1110);
}
