#include "common.h"

extern u8 D_801BCC21[];

typedef struct func_8022B394_Struct {
    u8 pad[0x9C];
    s32 unk9C;
} func_8022B394_Struct;

void func_8022B394(func_8022B394_Struct *arg0, s32 arg1) {
    if (D_801BCC21[0] == 5) {
        arg0->unk9C = arg0->unk9C + 1;
    }
}
