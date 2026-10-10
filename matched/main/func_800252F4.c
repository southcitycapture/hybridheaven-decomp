#include "context.h"

struct func_800252F4_Struct {
    u8 pad0[0x8D];
    u8 unk8D;
    u16 unk8E;
    s16 unk90;
    u8 unk92;
};

void func_800252F4(void) {
    ((struct func_800252F4_Struct *) D_800CBDA4)->unk92 = *D_800CBDA0;
    D_800CBDA0++;
    ((struct func_800252F4_Struct *) D_800CBDA4)->unk8E = (u16) (*D_800CBDA0 << 8);
    D_800CBDA0++;
    ((struct func_800252F4_Struct *) D_800CBDA4)->unk8E += *D_800CBDA0;
    D_800CBDA0++;
    ((struct func_800252F4_Struct *) D_800CBDA4)->unk8D = 0;
    ((struct func_800252F4_Struct *) D_800CBDA4)->unk90 = (s16) ((struct func_800252F4_Struct *) D_800CBDA4)->unk8D;
    if (((struct func_800252F4_Struct *) D_800CBDA4)->unk92 == 0) {
        *(s16 *) ((u8 *) D_800CBDA4 + 0x38) = 0;
    }
}
