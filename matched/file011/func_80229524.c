#include "common.h"


typedef struct func_80229524_Struct {
    u8 pad0[0x36];
    u16 unk36;
} func_80229524_Struct;

void *func_80005670();

extern u8 func_80248E18[];
extern u8 func_8038D660[];
extern u8 func_8038D6FC[];
extern u8 func_8038D704[];
extern u8 func_8038D7B8[];
extern u8 func_8038D7D4[];
extern u8 func_8038D7F0[];
extern u8 func_8038D94C[];
extern u8 func_8038D9DC[];
extern u8 func_8038DA40[];
extern u8 func_8038DA84[];
extern u8 func_8038DAFC[];
extern u8 func_8038DBF4[];
extern u8 func_8038DC20[];
extern u8 func_8038DC98[];
extern u8 func_8038DD10[];
extern u8 D_8023E2E0[];
extern u8 D_8038D8F4[];
extern u8 D_8038D8E0[];
extern u8 D_8038D994[];
extern u8 D_8038D984[];
extern u8 D_8038D980[];
extern u8 D_8038D9C4[];
extern u8 D_8038D9B0[];
extern u8 D_8038DA30[];
extern u8 D_8038DA34[];
extern u8 D_8038DA70[];
extern u8 D_8038DA84[];
extern u8 D_8038DAA4[];
extern u8 D_8038DAC0[];
extern u8 D_8038DAD4[];
extern u8 D_8038DAE4[];
extern u8 D_8038DAD0[];
extern u8 D_8038DB20[];
extern u8 D_8038DC10[];
extern u8 D_8038DC70[];
extern u8 D_8038DC84[];
extern u8 D_8038DCD4[];
extern u8 D_8038E044[];
extern u8 D_8038D9D0[];
extern u8 D_8038DA20[];
extern u8 D_8038DA90[];
extern u8 D_8038DB40[];
extern u8 D_8038DBC0[];
extern u8 D_8038DBD4[];
extern u8 D_8038DBF0[];
extern u8 D_8038DC30[];
extern u8 D_8038DCB0[];
extern u8 D_8038DCC0[];
extern u8 D_8038DD30[];
extern u8 D_8038DE20[];
extern u8 D_8038E030[];
extern u8 D_8038DD90[];
extern u8 D_8038E070[];
extern u8 D_8038E090[];
extern u8 D_8038E120[];
extern u8 D_8038E134[];

#define PAIR(a, b) func_80005670(func_80005670(arg0, a), b)

void func_80229524(func_80229524_Struct *arg0) {
    switch (arg0->unk36) {
    case 0x50:
        func_80005670(func_80005670(arg0, func_8038DC20 + 0x24), D_8038DC30);
        func_80005670(arg0, D_8023E2E0);
        break;
    case 0x51:
        PAIR(func_8038D94C + 0x28, func_8038D94C + 0x14);
        break;
    case 0x52:
        PAIR(func_8038D7F0 + 0x24, func_8038D7D4 + 0x2C);
        break;
    case 0x53:
        PAIR(D_8038D9C4, D_8038D9B0);
        break;
    case 0x143:
        PAIR(D_8038DD90 + 0xA4, D_8038DE20);
        break;
    case 0x58:
        PAIR(func_8038DC98 + 0x2C, D_8038DCB0);
        break;
    case 0x11A:
        PAIR(func_8038DAFC + 0x58, D_8038DB40);
        break;
    case 0x144:
        PAIR(D_8038D994, D_8038D980);
        break;
    case 0x119:
        PAIR(func_8038DC20 + 0x4, D_8038DC10);
        break;
    case 0x55:
        PAIR(func_8038D9DC + 0x8, D_8038D9D0);
        break;
    case 0x59:
        PAIR(D_8038DCD4, D_8038DCC0);
        break;
    case 0x54:
        PAIR(D_8038DAE4, D_8038DAD0);
        break;
    case 0x145:
        PAIR(func_8038DD10 + 0x34, D_8038DD30);
        break;
    case 0x57:
        PAIR(func_8038DAFC + 0x38, D_8038DB20);
        break;
    case 0x146:
        PAIR(D_8038D984, func_8038D94C + 0x24);
        break;
    case 0x149:
        PAIR(D_8038E044, D_8038E030);
        break;
    case 0xF9:
        PAIR(D_8038DA84, D_8038DA70);
        break;
    case 0xF4:
        PAIR(D_8038DAA4, D_8038DA90);
        break;
    case 0xF5:
        PAIR(func_8038D7F0 + 0x24, func_8038D7D4 + 0x2C);
        break;
    case 0xF6:
        PAIR(func_8038D704 + 0x30, func_8038D6FC + 0x24);
        break;
    case 0x5A:
        PAIR(func_8038DA40 + 0x4, D_8038DA30);
        break;
    case 0x5B:
        PAIR(D_8038DC84, D_8038DC70);
        break;
    case 0x5D:
        PAIR(func_8038DA40 + 0x4, D_8038DA30);
        break;
    case 0xF3:
        PAIR(D_8038DA34, D_8038DA20);
        break;
    case 0xFA:
        PAIR(func_8038D7D4 + 0x10, func_8038D7B8 + 0x18);
        break;
    case 0xFB:
        PAIR(func_8038D7D4 + 0x30, func_8038D7D4 + 0x1C);
        break;
    case 0x147:
        PAIR(D_8038DAD4, D_8038DAC0);
        break;
    case 0xF0:
        PAIR(func_8038DC20 + 0x24, D_8038DC30);
        break;
    case 0xF1:
        PAIR(D_8038DBD4, D_8038DBC0);
        break;
    case 0x56:
        PAIR(func_8038DBF4 + 0x10, D_8038DBF0);
        break;
    case 0x5C:
        PAIR(D_8038DA34, D_8038DA20);
        break;
    case 0xF2:
        PAIR(func_8038D9DC + 0x28, func_8038D9DC + 0x14);
        break;
    case 0xFC:
        PAIR(D_8038D984, func_8038D94C + 0x24);
        break;
    case 0xFD:
        PAIR(D_8038D8F4, D_8038D8E0);
        break;
    case 0x2E:
        PAIR(D_8038E070 + 0x34, D_8038E090);
        break;
    case 0x29:
        PAIR(func_80248E18 + 0xDC, func_80248E18 + 0xC8);
        break;
    case 0x32:
        PAIR(D_8038DBD4, D_8038DBC0);
        break;
    case 0x31:
        PAIR(D_8038E134, D_8038E120);
        break;
    case 0x148:
        PAIR(func_8038D94C + 0x18, func_8038D94C + 0x4);
        break;
    case 0x11B:
        PAIR(func_8038DC20 + 0x14, func_8038DC20);
        break;
    case 0x11D:
        PAIR(func_8038D660 + 0x24, func_8038D660 + 0x10);
        break;
    case 0x11E:
        PAIR(D_8038DC84, D_8038DC70);
        break;
    case 0xF7:
    case 0xF8:
    case 0x11C:
    default:
        PAIR(func_8038DAFC + 0x58, D_8038DB40);
        break;
    }
}
