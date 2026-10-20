#include "context.h"

extern void func_80025460(void);
extern u8 D_800CBAB4;
extern u8 *D_800CBDA0;
extern struct func_800243F0_Struct *D_800CBDA4;

struct func_80025500_Struct {
    u8 pad0[8];
    u8 *unk8;
    u8 padC[0x25 - 0xC];
    u8 unk25;
    u8 pad26[2];
    s32 unk28;
    u8 pad2C[0x7C - 0x2C];
    u8 unk7C;
    u8 unk7D;
    u8 pad7E[2];
    s32 unk80;
    u8 pad84[6];
    s16 unk8A;
    u8 unk8C;
};

#define OBJ ((struct func_80025500_Struct *)D_800CBDA4)

void func_80025500(void) {
    s32 valid;
    s32 value;

    valid = *D_800CBDA0++ == 0xE4;
    if (valid) {
        if (D_800CBAB4 < 0x10 && OBJ->unk8A == 0) {
            OBJ->unk8C = 0;
            OBJ->unk7C = *D_800CBDA0;
            D_800CBDA0++;
            OBJ->unk7D = *D_800CBDA0;
            D_800CBDA0++;
            value = *D_800CBDA0++;
            value = (value - OBJ->unk25) << 8;
            OBJ->unk80 = OBJ->unk28 + value;
            func_80025460();
        } else {
            D_800CBDA0 += 3;
        }
        OBJ->unk8 = D_800CBDA0;
    }
}
