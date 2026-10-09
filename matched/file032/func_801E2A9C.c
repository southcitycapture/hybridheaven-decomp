#include "common.h"

extern void *func_801BF6B0(s32 arg0);
extern s32 func_801C1B1C(void);

struct func_801E2A9C_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801E2A9C(s32 arg0, s32 arg1) {
    struct func_801E2A9C_Struct *p;

    p = (struct func_801E2A9C_Struct *) func_801BF6B0(7);
    if (p->unkC < 0x61 || func_801C1B1C() == 0) {
        return 0x2C;
    }
    return 0x2D;
}
