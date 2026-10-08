#include "common.h"

extern void func_801C2570(s32 arg0, void *arg1);
extern void func_801CDD20(void);
extern u8 D_801E1110[];

s32 func_801E5740(s32 arg0, s32 arg1) {
    *(s32 *)(D_801E1110 + 4) = 0x1180;
    func_801C2570(0xA5, D_801E1110);
    func_801CDD20();
    return 1;
}
