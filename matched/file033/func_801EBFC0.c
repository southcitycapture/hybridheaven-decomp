#include "common.h"

typedef struct func_801EBFC0_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801EBFC0_Struct;

extern func_801EBFC0_Struct *func_801BF6B0(s32);
extern s32 func_801C1B1C(void);

s32 func_801EBFC0(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x22) || (func_801C1B1C() == 0)) {
        return 0x15;
    }
    return 0x16;
}
