#include "context.h"
typedef struct func_801E5C4C_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E5C4C_Struct;

s32 func_801E5C4C(s32 arg0, s32 arg1) {
    func_801E5C4C_Struct *p;

    p = func_801BF6B0(7);
    if ((p->unkC < 0x14) || (func_801C1B1C() == 0)) {
        return 0x16;
    }
    return 0x17;
}
