#include "context.h"
struct func_801E1ED0_Struct *func_801BF6B0(s32);
s32 func_801C1B1C(void);

struct func_801E53BC_Struct {
    u8 pad[0xC];
    s32 unkC;
};


s32 func_801E53BC(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0xA5) || (func_801C1B1C() == 0)) {
        return 0x3B;
    }
    return 0x3C;
}
