#include "context.h"
extern struct func_801E442C_Struct *func_801BF6B0(s32 arg0);

struct func_801E2F38_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

s32 func_801E2F38(s32 arg0, s32 arg1) {
    if (((struct func_801E2F38_Struct *) func_801BF6B0(4))->unkC >= 0x2B) {
        func_801C1000(3, 0);
        return 9;
    }
    return 8;
}
