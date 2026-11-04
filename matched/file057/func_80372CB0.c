#include "common.h"
extern void func_800058DC(void *a0, void *a1);


typedef struct func_80372CB0_Struct {
    u8 pad0[0x34];
    u8 unk34;
    u8 unk35;
    u8 unk36;
    u8 unk37;
    u8 unk38;
    u8 unk39;
    u8 unk3A;
    u8 unk3B;
    u16 unk3C;
    u8 pad3E[2];
    u8 unk40;
    u8 pad41[0xB];
    u16 unk4C;
    u16 unk4E;
    u8 pad50[0x2C];
    u8 unk7C;
    u8 unk7D;
} func_80372CB0_Struct;

extern u8 func_80372F8C[];

void func_80372CB0(func_80372CB0_Struct *arg0, s32 arg1) {
    switch (arg0->unk40) {
    case 1:
        arg0->unk34 = 0xFF;
        arg0->unk35 = 0xFF;
        arg0->unk37 = 0xFF;
        arg0->unk36 = 0x40;
        arg0->unk39 = 0x20;
        arg0->unk38 = 0xFF;
        arg0->unk3A = 0;
        arg0->unk3B = 0;
        break;
    case 2:
        arg0->unk34 = 0xFF;
        arg0->unk35 = 0xFF;
        arg0->unk36 = 0xFF;
        arg0->unk37 = 0xFF;
        arg0->unk39 = (arg0->unk38 = 0x80, 0xA0);
        arg0->unk3A = 0xC0;
        arg0->unk3B = 0;
        break;
    default:
    case 0:
        arg0->unk35 = 0xA0;
        arg0->unk34 = 0xFF;
        arg0->unk36 = 0xFF;
        arg0->unk37 = 0xFF;
        arg0->unk38 = 0xBE;
        arg0->unk39 = 0;
        arg0->unk3A = 0xFF;
        arg0->unk3B = 0;
        break;
    }
    arg0->unk4E = 0;
    arg0->unk4C = 0;
    arg0->unk7D = 0;
    arg0->unk3C = 0;
    arg0->unk7C = 0;
    func_800058DC(arg0, func_80372F8C);
}
