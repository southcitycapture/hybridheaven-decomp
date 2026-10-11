#include "common.h"

extern void *func_801BF6B0(s32);
extern s32 func_801C1B1C(void);

typedef struct func_801EB0E8_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801EB0E8_Struct;

s32 func_801EB0E8(s32 arg0, s32 arg1) {
    if ((((func_801EB0E8_Struct *)func_801BF6B0(7))->unkC < 0x25) || (func_801C1B1C() == 0)) {
        return 0xD;
    }
    return 0xE;
}
