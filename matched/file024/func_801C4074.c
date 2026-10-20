#include "context.h"
extern u16 D_801BBBF4;
extern void func_8014AD20();

void func_801C4074(s32 arg0, s32 arg1) {
    func_8012FE50(0x18, D_801BBBF4, 6, 1, 2);
    func_8014AD20();
    if (D_801CC8BC != 0) {
        func_80005700(D_801CC8BC);
        D_801CC8BC = 0;
    }
    func_800058DC(arg0, func_801C40EC);
}
