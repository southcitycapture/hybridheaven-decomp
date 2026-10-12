#include "context.h"
struct func_801E1ED0_Struct *func_801BF6B0(s32);
s32 func_801C1B1C(void);
extern s32 func_801D4A6C(s32, s32, s32, s32, s32, s32);


s32 func_801E6638(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x90) || (func_801C1B1C() == 0)) {
        return 10;
    }
    func_801D4A6C(1, 6, 0x3FC00000, 0x7F, 0, 1);
    return 11;
}
