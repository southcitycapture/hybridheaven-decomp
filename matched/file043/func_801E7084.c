#include "context.h"

typedef struct func_801E7084_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E7084_Struct;

s32 func_801E7084(s32 arg0, s32 arg1) {
    func_801E7084_Struct *s;

    s = func_801BF6B0(7);
    if ((s->unkC < 0x5D) || (func_801C1B1C() == 0)) {
        return 0x44;
    }
    return 0x45;
}
