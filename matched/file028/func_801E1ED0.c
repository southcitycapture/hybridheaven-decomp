#include "common.h"

struct func_801E1ED0_Struct {
    u8 pad[0xC];
    s32 unkC;
};

struct func_801E1ED0_Struct *func_801BF6B0(s32);
s32 func_801C1B1C(void);
void func_8038BED4(void);

s32 func_801E1ED0(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x27) || (func_801C1B1C() == 0)) {
        return 7;
    }
    func_8038BED4();
    return 8;
}
