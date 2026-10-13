#include "context.h"
s32 func_801C1B1C(void);

typedef struct func_801E599C_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E599C_Struct;

s32 func_801E599C(s32 arg0, s32 arg1) {
    if ((((func_801E599C_Struct *) func_801BF6B0(7))->unkC < 0xC) || (func_801C1B1C() == 0)) {
        return 0x11;
    }
    return 0x12;
}
