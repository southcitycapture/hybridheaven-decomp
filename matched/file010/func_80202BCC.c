#include "context.h"

extern f32 D_80219610;

struct func_80202BCC_Struct {
    u8 pad0[0xA2];
    u16 unkA2;
    u8 pad1[0xAC - 0xA4];
    f32 unkAC;
};

void func_80202BCC(struct func_80202BCC_Struct *arg0) {
    arg0->unkAC = D_80219610;
    arg0->unkA2 = 0;
}
