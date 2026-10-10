#include "context.h"

struct func_8002538C_Struct {
    u8 pad0[0x6];
    u8 unk6;
    u8 pad7[0x30];
    u16 unk38;
    u8 pad3a[0x53];
    u8 unk8D;
    u16 unk8E;
    u16 unk90;
    u8 unk92;
};

extern u8 D_80048220[];

void func_8002538C(void) {
    s32 temp_v1;

    ((struct func_8002538C_Struct *) D_800CBDA4)->unk90 = ((struct func_8002538C_Struct *) D_800CBDA4)->unk90 + ((struct func_8002538C_Struct *) D_800CBDA4)->unk92;
    temp_v1 = ((struct func_8002538C_Struct *) D_800CBDA4)->unk90;
    if (temp_v1 >= 0x100) {
        ((struct func_8002538C_Struct *) D_800CBDA4)->unk90 = temp_v1 & 0xFF;
        ((struct func_8002538C_Struct *) D_800CBDA4)->unk6 |= 2;
        ((struct func_8002538C_Struct *) D_800CBDA4)->unk38 = D_80048220[((struct func_8002538C_Struct *) D_800CBDA4)->unk8D];
        ((struct func_8002538C_Struct *) D_800CBDA4)->unk8D++;
        ((struct func_8002538C_Struct *) D_800CBDA4)->unk8D &= 0x7F;
        ((struct func_8002538C_Struct *) D_800CBDA4)->unk38 += D_80048220[((struct func_8002538C_Struct *) D_800CBDA4)->unk8D] << 8;
        ((struct func_8002538C_Struct *) D_800CBDA4)->unk38 &= ((struct func_8002538C_Struct *) D_800CBDA4)->unk8E;
    }
}
