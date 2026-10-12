#include "common.h"

extern void func_801BF850(void *arg0, s32 arg1, void *arg2);
extern u8 D_801DABC0[];
extern u8 D_801E1188[];
extern s32 D_801DAC48;
extern s32 D_801DAC4C;

void func_801CDCD0(s32 arg0, s32 arg1) {
    D_801DAC48 = arg0;
    D_801DAC4C = arg1;
    func_801BF850(D_801DABC0, 5, D_801E1188);
}
