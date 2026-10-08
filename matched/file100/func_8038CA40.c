#include "common.h"

void func_801BF6C4(s32 arg0);
void func_8038D1A0(s32 arg0, s32 arg1);
extern s32 D_8038DB8C;
extern s32 D_8038DB90;
extern s32 D_8038DB94;
extern s32 D_8038E110;

void func_8038CA40(void) {
    D_8038E110 = 0;
    func_8038D1A0(D_8038DB90, D_8038DB94);
    func_801BF6C4(7);
    D_8038E110 = 1;
    D_8038DB8C = 0;
}
