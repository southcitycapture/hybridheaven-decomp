#include "context.h"

extern void func_801BF6C4(s32 a0);
extern s32 func_8038D7D4(s32 arg0, s32 arg1);
extern s32 D_8038E150;
extern s32 D_8038DBFC;
extern s32 D_8038DC00;

void func_8038D1E0(void) {
    D_8038E150 = 0;
    func_8038D7D4(D_8038DBFC, D_8038DC00);
    func_801BF6C4(8);
    D_8038E150 = 1;
}
