#include "context.h"

struct func_80024D50_Struct {
    u8 pad0[6];
    u8 unk6;
    u8 pad7[0x58 - 7];
    u16 unk58;
    u8 unk5A;
    u8 unk5B;
    s16 unk5C;
};

void func_80024D50(void) {
    s32 diff;
    ((struct func_80024D50_Struct *) D_800CBDA4)->unk5B = *D_800CBDA0;
    D_800CBDA0++;
    ((struct func_80024D50_Struct *) D_800CBDA4)->unk5A = *D_800CBDA0;
    D_800CBDA0++;
    if ((((struct func_80024D50_Struct *) D_800CBDA4)->unk58 >= 0x8000) || !(((struct func_80024D50_Struct *) D_800CBDA4)->unk6 & 4)) {
        diff = ((((struct func_80024D50_Struct *) D_800CBDA4)->unk5A << 8) & 0xFFFF) - (((struct func_80024D50_Struct *) D_800CBDA4)->unk58 & 0x7FFF);
        ((struct func_80024D50_Struct *) D_800CBDA4)->unk5C = diff / ((struct func_80024D50_Struct *) D_800CBDA4)->unk5B;
    }
}
