#include "context.h"

struct func_80024EE8_Struct {
    u8 pad[0x30];
    s16 unk30;
};

void func_80024EE8(void) {
    ((struct func_80024EE8_Struct *) D_800CBDA4)->unk30 = *((s8 *) D_800CBDA0) * 4;
    D_800CBDA0++;
}
