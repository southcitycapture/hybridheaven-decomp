#include "context.h"

typedef struct func_801C33C8_Struct {
    u8 pad[0x90];
    s8 unk90;
} func_801C33C8_Struct;

s32 func_801C1088(s32, s8);

void func_801C33C8(func_801C33C8_Struct *arg0, s32 *arg1) {
    if (func_801C1088(*arg1, arg0->unk90) != 0) {
        D_801CC8CC = 2;
        return;
    }
    D_801CC8CC = 1;
}
