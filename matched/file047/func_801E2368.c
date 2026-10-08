#include "common.h"

struct func_801E2368_Struct {
    u8 pad[0xC];
    s32 unkC;
};

extern struct func_801E2368_Struct *func_801BF6B0(s32);
extern s32 D_801E3C4C;
extern s32 D_801E3C50;

s32 func_801E2368(s32 arg0, s32 arg1) {
    if (func_801BF6B0(1)->unkC >= 2) {
        D_801E3C4C = 0;
        D_801E3C50 = 0;
        return 1;
    }
    return 0;
}
