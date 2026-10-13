#include "context.h"

typedef struct func_801E2500_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E2500_Struct;

s32 func_801E2500(s32 arg0, s32 arg1) {
    func_801E2500_Struct *obj;

    obj = (func_801E2500_Struct *) func_801BF6B0(7);
    if (obj->unkC < 0x23 || func_801C1B1C() == 0) {
        return 0x15;
    }
    return 0x16;
}
