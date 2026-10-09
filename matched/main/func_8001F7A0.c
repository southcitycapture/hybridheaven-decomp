#include "context.h"

struct func_8001F7A0_Struct {
    u8 pad[0x28];
    u16 unk28;
};

void func_8001F7A0(struct func_8001F7A0_Struct *arg0) {
    arg0->unk28 &= 0xFFFD;
}
