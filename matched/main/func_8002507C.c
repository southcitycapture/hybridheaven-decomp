#include "context.h"

struct func_8002507C_Struct {
    u8 pad0[0x93];
    u8 unk93;
    u8 unk94;
    u8 pad1[0x01];
    u16 unk96;
    u8 unk98;
    u8 pad3[0x01];
    u16 unk9A;
    u16 unk9C;
    u8 unk9E;
    u8 unk9F;
};

void func_8002507C(void) {
    ((struct func_8002507C_Struct *) D_800CBDA4)->unk94 = ((struct func_8002507C_Struct *) D_800CBDA4)->unk93;
    ((struct func_8002507C_Struct *) D_800CBDA4)->unk9F = ((struct func_8002507C_Struct *) D_800CBDA4)->unk9E;
    if (((struct func_8002507C_Struct *) D_800CBDA4)->unk9E == 0) {
        ((struct func_8002507C_Struct *) D_800CBDA4)->unk9C = ((struct func_8002507C_Struct *) D_800CBDA4)->unk9A;
    } else {
        ((struct func_8002507C_Struct *) D_800CBDA4)->unk9C = 0;
    }
    ((struct func_8002507C_Struct *) D_800CBDA4)->unk96 = 0;
    ((struct func_8002507C_Struct *) D_800CBDA4)->unk98 = (u8) ((struct func_8002507C_Struct *) D_800CBDA4)->unk96;
}
