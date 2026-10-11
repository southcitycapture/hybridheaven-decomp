#include "context.h"

struct func_8002442C_Struct {
    u8 pad0[0x18];
    u16 unk18;
    u8 pad1[0x2];
    u8 unk1C;
    u8 unk1D;
    s16 unk1E;
};

void func_8002442C(void) {
    struct func_8002442C_Struct *s;
    s32 q;

    ((struct func_8002442C_Struct *) D_800CBDA4)->unk1D = *D_800CBDA0;
    D_800CBDA0 += 1;
    ((struct func_8002442C_Struct *) D_800CBDA4)->unk1C = *D_800CBDA0;
    D_800CBDA0 += 1;
    s = (struct func_8002442C_Struct *) D_800CBDA4;
    q = (s32) ((s->unk1C << 8) & 0xFFFF) - (s32) s->unk18;
    s->unk1E = (s16) (q / (s32) s->unk1D);
}
