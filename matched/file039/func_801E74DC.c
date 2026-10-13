#include "context.h"

typedef struct func_801E74DC_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E74DC_Struct;

void *func_801BF6B0(s32 arg0);
s32 func_801C1B1C(void);

s32 func_801E74DC(s32 arg0, s32 arg1) {
    func_801E74DC_Struct *obj;

    obj = func_801BF6B0(7);
    if (obj->unkC < 0x28 || func_801C1B1C() == 0) {
        return 0x15;
    }
    return 0x16;
}
