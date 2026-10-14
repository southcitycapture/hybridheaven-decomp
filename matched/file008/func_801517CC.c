#include "context.h"

typedef struct func_801517CC_Struct {
    u8 pad[0x90];
    u8 unk90;
} func_801517CC_Struct;

s32 func_801517CC(func_801517CC_Struct *arg0) {
    return arg0 != NULL && func_8001F7B0() != 0 && (arg0->unk90 & 1) == 0;
}
