#include "context.h"

typedef struct func_802408F0_Struct {
    u8 pad[0x92];
    u16 unk92;
} func_802408F0_Struct;

void func_802408F0(void) {
    ((func_802408F0_Struct *)D_801BCCF0)->unk92 = 1;
}
