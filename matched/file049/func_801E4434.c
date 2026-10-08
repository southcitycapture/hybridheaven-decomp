#include "common.h"

struct func_801E4434_Struct {
    u8 pad[0xC];
    s32 unkC;
};

extern struct func_801E4434_Struct *func_801BF6B0(s32);
extern void func_801C1000(s32, s32);

s32 func_801E4434(s32 arg0, s32 arg1) {
    if (func_801BF6B0(0)->unkC >= 0xB) {
        func_801C1000(4, 0);
        return 0x10;
    }
    return 0xF;
}
