#include "context.h"
extern s32 D_801BCCF0;

typedef struct func_80241100_Struct {
    u8 pad[0x92];
    u16 unk92;
} func_80241100_Struct;

void func_80241100(void) {
    ((func_80241100_Struct *)D_801BCCF0)->unk92 = 1;
}
