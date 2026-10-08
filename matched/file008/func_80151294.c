#include "context.h"

typedef struct func_80151294_Struct {
    u8 pad[0x91];
    u8 unk91;
} func_80151294_Struct;

s32 func_80151294(func_80151294_Struct *arg0) {
    if (func_801517CC() != 0) {
        arg0->unk91 = 0;
        return 1;
    }
    return 0;
}
