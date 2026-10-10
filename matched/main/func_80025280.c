#include "context.h"

struct func_80025280_Struct {
    u8 pad0[0x9A];
    u16 unk9A;
    u8 pad9C[0x2];
    u8 unk9E;
    u8 pad9F;
    s16 unkA0;
};

void func_80025280(void) {
    u8 temp_v0;
    struct func_80025280_Struct *s;

    temp_v0 = *D_800CBDA0;
    ((struct func_80025280_Struct *) D_800CBDA4)->unk9E = temp_v0;
    D_800CBDA0 += 1;
    if (temp_v0 != 0) {
        s = (struct func_80025280_Struct *) D_800CBDA4;
        s->unkA0 = (s16) ((s32) s->unk9A / (s32) s->unk9E);
    }
}
