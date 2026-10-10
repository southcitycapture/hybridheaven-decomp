#include "context.h"

extern struct func_801E3BE0_Struct *func_801BF6B0(s32);

struct func_801E3AEC_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801E3AEC(s32 arg0, s32 arg1) {
    if (((struct func_801E3AEC_Struct *)func_801BF6B0(0))->unkC >= 0x17) {
        D_801E8414 = 0;
        return 6;
    }
    func_801E375C();
    return 5;
}
