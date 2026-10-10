#include "context.h"

typedef struct func_80240918_Struct {
    u8 pad[0x92];
    u16 unk92;
} func_80240918_Struct;

extern func_80240918_Struct *D_801BCCF4;

void func_80240918(void) {
    D_801BCCF4->unk92 = 0;
}
