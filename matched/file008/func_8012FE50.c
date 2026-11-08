#include "common.h"
#ifndef G
extern int func_80005204(unsigned short);
#endif
extern u8 D_801BBBF0[];
typedef struct func_801300E8_Struct {
    u8 pad0[0x30];
    u16 unk30;
    u8 pad32[0x324 - 0x32];
    f32 unk324;
    u8 pad328[0x112C - 0x328];
    s32 unk112C;
    f32 unk1130;
    u8 pad1134[4];
    s32 unk1138;
    u8 pad113C[8];
    f32 unk1144;
    f32 unk1148;
    f32 unk114C;
} func_801300E8_Struct;
#define G ((func_801300E8_Struct *)D_801BBBF0)


extern u8 D_8008D54C[];

s32 func_8012FE50(u8 arg0, u16 arg1, u8 arg2, u8 arg3, u8 arg4)
{
    if (D_801BBBF0[0x17D] || D_8008D54C[4]) {
        return 0;
    }
    *(u16 *)(D_801BBBF0 + 4) = arg1;
    D_801BBBF0[0x165] = arg2;
    D_801BBBF0[0x166] = arg3;
    D_801BBBF0[0x17C] = arg0;
    D_801BBBF0[0x17D] = 1;
    D_801BBBF0[0x180] = arg4;
    switch (arg0 & 0xFF) {
    case 7:
        D_801BBBF0[0x17F] = 2;
        return 1;
    case 9:
        D_801BBBF0[0x17F] = 1;
        return 1;
    case 10:
    case 30:
        D_801BBBF0[0x17F] = 4;
        return 1;
    case 17:
        D_801BBBF0[0x17F] = 3;
        return 1;
    case 22:
        D_801BBBF0[0x17F] = 5;
        return 1;
    case 1: case 2: case 3: case 4: case 5: case 6: case 8:
    case 11: case 12: case 14: case 15: case 16: case 18: case 19:
    case 20: case 21: case 23: case 24: case 25: case 26: case 27:
    case 28: case 29: case 31: case 32: case 33: case 34: case 35: case 36:
        D_801BBBF0[0x17F] = 0;
        return 1;
    }
    return 0;
}
