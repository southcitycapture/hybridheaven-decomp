#include "context.h"

extern u8 *D_800CBDA0;
extern struct func_800243F0_Struct *D_800CBDA4;
extern u8 D_800CBAB4;

struct func_80024CF8_Struct {
    u8 pad[0x58];
    s16 unk58;
    u8 unk5A;
    u8 unk5B;
};

extern void func_80022A84(u8);

void func_80024CF8(void) {
    u8 temp_v1;

    ((struct func_80024CF8_Struct *) D_800CBDA4)->unk5B = 0;
    temp_v1 = *D_800CBDA0;
    D_800CBDA0 += 1;
    ((struct func_80024CF8_Struct *) D_800CBDA4)->unk58 = (s16) (temp_v1 << 8);
    func_80022A84(D_800CBAB4);
}
