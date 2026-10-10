#include "context.h"

struct func_800256FC_Struct {
    u8 pad0[0x88];
    u8 unk88;
    u8 unk89;
    s16 unk8A;
    u8 unk8C;
};

void func_800256FC(void) {
    ((struct func_800256FC_Struct *) D_800CBDA4)->unk8C = 0;
    ((struct func_800256FC_Struct *) D_800CBDA4)->unk88 = *D_800CBDA0;
    D_800CBDA0++;
    ((struct func_800256FC_Struct *) D_800CBDA4)->unk89 = *D_800CBDA0;
    D_800CBDA0++;
    ((struct func_800256FC_Struct *) D_800CBDA4)->unk8A = (s16) ((s8) *D_800CBDA0 << 8);
    D_800CBDA0++;
}
