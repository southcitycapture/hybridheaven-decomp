#include "context.h"

typedef struct func_80025768_Struct {
    u8 pad0[0x28];
    s32 unk28;
    u8 pad2C[0x7C - 0x2C];
    u8 unk7C;
    u8 unk7D;
    u8 pad7E[0x80 - 0x7E];
    s32 unk80;
    s32 unk84;
    u8 unk88;
    u8 unk89;
    s16 unk8A;
    u8 unk8C;
} func_80025768_Struct;

extern void func_80025460(void);

void func_80025768(void) {
    if (((func_80025768_Struct *) D_800CBDA4)->unk8C == 0) {
        ((func_80025768_Struct *) D_800CBDA4)->unk7C = ((func_80025768_Struct *) D_800CBDA4)->unk88;
        ((func_80025768_Struct *) D_800CBDA4)->unk7D = ((func_80025768_Struct *) D_800CBDA4)->unk89;
        ((func_80025768_Struct *) D_800CBDA4)->unk80 = ((func_80025768_Struct *) D_800CBDA4)->unk28;
        ((func_80025768_Struct *) D_800CBDA4)->unk28 = ((func_80025768_Struct *) D_800CBDA4)->unk28 - ((func_80025768_Struct *) D_800CBDA4)->unk8A;
        func_80025460();
        return;
    }
    ((func_80025768_Struct *) D_800CBDA4)->unk80 = ((func_80025768_Struct *) D_800CBDA4)->unk28;
    ((func_80025768_Struct *) D_800CBDA4)->unk28 = ((func_80025768_Struct *) D_800CBDA4)->unk84;
    ((func_80025768_Struct *) D_800CBDA4)->unk7D = 1;
}
