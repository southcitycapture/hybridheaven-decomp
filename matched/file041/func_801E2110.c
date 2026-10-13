#include "context.h"

typedef struct func_801E2110_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E2110_Struct;

s32 func_801E2110(s32 arg0, s32 arg1) {
    func_801E2110_Struct *obj;

    obj = (func_801E2110_Struct *) func_801BF6B0(7);
    if (obj->unkC < 0x1F || func_801C1B1C() == 0) {
        return 0xE;
    }
    return 0xF;
}
