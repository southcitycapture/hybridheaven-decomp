/* starting point: func_801E23A8 (file039), whose assembly is 95% the same as this function's */
#include "context.h"

typedef struct func_801E6888_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E6888_Struct;

void *func_801BF6B0(s32 arg0);
s32 func_801C1B1C(void);

s32 func_801E6888(s32 arg0, s32 arg1) {
    func_801E6888_Struct *obj;

    obj = func_801BF6B0(7);
    if (obj->unkC < 0x21 || func_801C1B1C() == 0) {
        return 0x15;
    }
    return 0x16;
}
