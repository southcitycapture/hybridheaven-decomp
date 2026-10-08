#include "common.h"

typedef struct func_801E23C4_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E23C4_Struct;

void *func_801BF6B0(s32 arg0);
s32 func_801C1B1C(void);

s32 func_801E23C4(s32 arg0, s32 arg1) {
    func_801E23C4_Struct *temp;

    temp = func_801BF6B0(7);
    if (temp->unkC < 9 || func_801C1B1C() == 0) {
        return 0xC;
    }
    return 0xD;
}
