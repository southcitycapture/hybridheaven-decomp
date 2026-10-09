#include "context.h"

struct func_8001F7D4_Struct {
    u8 pad[0x28];
    u16 unk28;
};

void func_8001F7D4(struct func_8001F7D4_Struct *arg0) {
    arg0->unk28 = arg0->unk28 | 4;
}
