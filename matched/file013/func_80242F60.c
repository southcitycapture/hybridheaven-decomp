#include "context.h"

typedef struct func_80242F60_Struct {
    u8 pad0[6];
    u16 unk6;
} func_80242F60_Struct;

void func_80242F60(func_80242F60_Struct *arg0) {
    arg0->unk6 = (u16) (arg0->unk6 | 0x10);
}
