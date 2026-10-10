#include "context.h"

struct func_801E2DE0_Struct {
    u8 pad[0xC];
    s32 unkC;
};

extern void func_8038D28C(s32 arg0);
extern struct func_801E442C_Struct *func_801BF6B0(s32 arg0);

s32 func_801E2DE0(s32 arg0, s32 arg1) {
    if (((struct func_801E2DE0_Struct *) func_801BF6B0(4))->unkC >= 0xD) {
        func_801C1000(3, 0);
        func_8038D28C(0x202);
        return 3;
    }
    return 2;
}
