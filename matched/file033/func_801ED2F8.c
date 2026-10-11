#include "common.h"

typedef struct func_801ED2F8_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801ED2F8_Struct;

extern func_801ED2F8_Struct *func_801BF6B0(s32 arg0);
extern s32 func_801C1B1C(void);

s32 func_801ED2F8(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0xB1) || (func_801C1B1C() == 0)) {
        return 0x46;
    }
    return 0x47;
}
