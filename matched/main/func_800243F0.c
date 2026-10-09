#include "context.h"

struct func_800243F0_Struct {
    u8 pad[0x18];
    s16 unk18;
    u8 pad2[0x1D - 0x1A];
    u8 unk1D;
};

extern u8 *D_800CBDA0;
extern struct func_800243F0_Struct *D_800CBDA4;

void func_800243F0(void) {
    D_800CBDA4->unk18 = (s16) (*D_800CBDA0 << 8);
    D_800CBDA0 += 1;
    D_800CBDA4->unk1D = 0;
}
