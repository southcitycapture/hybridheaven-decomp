#include "context.h"

typedef struct func_801E2000_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E2000_Struct;

s32 func_801E2000(s32 arg0, s32 arg1) {
    func_801E2000_Struct *obj;

    obj = func_801BF6B0(7);
    if (obj->unkC < 0x17 || func_801C1B1C() == 0) {
        return 0xB;
    }
    return 0xC;
}
