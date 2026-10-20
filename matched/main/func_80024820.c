#include "context.h"

struct func_80024820_Struct {
    u32 unk0;
    u8 pad4[0x3A - 4];
    s16 unk3A;
    u8 pad3C[0x47 - 0x3C];
    u8 unk47;
};

void func_80024820(void) {
    struct func_80024820_Struct *ptr;
    u32 temp_a1;
    u8 temp_v0;

    temp_v0 = *D_800CBDA0;
    D_800CBDA0 += 1;
    ptr = (struct func_80024820_Struct *) D_800CBDA4;
    temp_a1 = ptr->unk0;
    if ((temp_a1 / 0x1000000) != 0) {
        ptr->unk3A = (s16) (temp_v0 * (temp_a1 >> 24));
    } else {
        ptr->unk3A = (s16) (temp_v0 << 8);
    }
    ((struct func_80024820_Struct *) D_800CBDA4)->unk47 = 0;
}
