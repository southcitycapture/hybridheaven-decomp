#include "common.h"

extern u8 D_8025C705;

struct func_80248D10_Struct {
    u8 pad[0x98];
    s16 unk98;
};

void func_80248D10(struct func_80248D10_Struct *arg0) {
    arg0->unk98 = D_8025C705 & 3;
    D_8025C705 += 1;
}
