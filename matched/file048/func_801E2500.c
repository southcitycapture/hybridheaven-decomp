#include "common.h"

typedef struct func_801E2500_Struct {
    u8 pad[0x3C];
    s32 unk3C;
} func_801E2500_Struct;

extern func_801E2500_Struct *func_801BF6B0();
extern void func_801CCE88();

s32 func_801E2500(s32 arg0, s32 arg1) {
    if (func_801BF6B0(3)->unk3C >= 0xB) {
        func_801CCE88(0, 0, 0, 0);
        return 3;
    }
    return 2;
}
