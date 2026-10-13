#include "context.h"

typedef struct func_801E1FA0_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E1FA0_Struct;

s32 func_801E1FA0(s32 arg0, s32 arg1) {
    func_801E1FA0_Struct *temp;

    temp = func_801BF6B0(7);
    if (temp->unkC < 0x23 || func_801C1B1C() == 0) {
        return 0xC;
    }
    return 0xD;
}
