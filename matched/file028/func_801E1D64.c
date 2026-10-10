#include "context.h"

struct func_801E1ED0_Struct *func_801BF6B0(s32);

struct func_801E1D64_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801E1D64(s32 arg0, s32 arg1) {
    if ((((struct func_801E1D64_Struct *) func_801BF6B0(7))->unkC < 0x10) || (func_801C1B1C() == 0)) {
        return 4;
    }
    func_8038BED4();
    return 5;
}
