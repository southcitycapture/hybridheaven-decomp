#include "common.h"

typedef struct func_801E6B60_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E6B60_Struct;

extern func_801E6B60_Struct *func_801BF6B0(s32);
extern s32 func_801C1B1C();

s32 func_801E6B60(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x41) || (func_801C1B1C() == 0)) {
        return 0x13;
    }
    return 0x14;
}
