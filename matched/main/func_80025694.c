#include "context.h"

struct func_80025694_Struct {
    u8 pad0[0x6];
    u8 unk6;
    u8 pad1[0x28 - 0x7];
    s32 unk28;
    u8 pad2[0x7C - 0x2C];
    u8 unk7C;
    u8 pad3[0x84 - 0x7D];
    s32 unk84;
    u8 pad4[0x8C - 0x88];
    u8 unk8C;
};

void func_80025694(void) {
    extern void func_80025834();

    if (((struct func_80025694_Struct *) D_800CBDA4)->unk8C == 0) {
        if (((struct func_80025694_Struct *) D_800CBDA4)->unk7C == 0) {
            ((struct func_80025694_Struct *) D_800CBDA4)->unk6 = (u8) (((struct func_80025694_Struct *) D_800CBDA4)->unk6 | 2);
            ((struct func_80025694_Struct *) D_800CBDA4)->unk28 = (s32) (((struct func_80025694_Struct *) D_800CBDA4)->unk28 + ((struct func_80025694_Struct *) D_800CBDA4)->unk84);
        }
    } else {
        func_80025834();
    }
}
