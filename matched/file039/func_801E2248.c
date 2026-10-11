/* starting point: func_801E22B0 (file030), whose assembly is 95% the same as this function's */
#include "context.h"

typedef struct func_801E2248_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E2248_Struct;

void *func_801BF6B0(s32 arg0);
s32 func_801C1B1C(void);

s32 func_801E2248(s32 arg0, s32 arg1) {
    func_801E2248_Struct *obj;

    obj = func_801BF6B0(7);
    if (obj->unkC < 0x12 || func_801C1B1C() == 0) {
        return 0x11;
    }
    return 0x12;
}
