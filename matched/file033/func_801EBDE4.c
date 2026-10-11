#include "common.h"

typedef struct func_801EBDE4_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801EBDE4_Struct;

void *func_801BF6B0(s32 arg0);
s32 func_801C1B1C(void);

s32 func_801EBDE4(s32 arg0, s32 arg1) {
    func_801EBDE4_Struct *obj;

    obj = func_801BF6B0(7);
    if (obj->unkC < 0x1D || func_801C1B1C() == 0) {
        return 0x12;
    }
    return 0x13;
}
