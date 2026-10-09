#include "context.h"

struct func_8001F75C_Struct {
    u8 pad[0x28];
    u16 unk28;
};

void func_8001F75C(struct func_8001F75C_Struct *arg0) {
    arg0->unk28 &= 0xFFFE;
}
