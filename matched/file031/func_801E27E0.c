#include "context.h"

struct func_801E27E0_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

extern struct func_801E27E0_Struct *func_801BF6B0(s32);

s32 func_801E27E0(s32 arg0, s32 arg1) {
    if (func_801BF6B0(7)->unkC >= 6) {
        return 4;
    }
    return 3;
}
