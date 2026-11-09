#include "common.h"


typedef struct func_8022AF94_StructArg {
    u8 pad0[0x36];
    u16 unk36;
} func_8022AF94_StructArg;

typedef struct func_8022AF94_StructG {
    u8 pad0[0x1C0];
    s32 unk1C0;
    s32 unk1C4;
} func_8022AF94_StructG;

extern func_8022AF94_StructG D_80037C5C;
extern s32 D_801BBC10;
extern void func_8000469C(s32 arg0, s32 arg1);

void func_8022AF94(func_8022AF94_StructArg *arg0) {
    s32 temp_a1;
    s32 temp_v0;

    temp_a1 = D_80037C5C.unk1C4 - D_80037C5C.unk1C0 + D_801BBC10;
    temp_v0 = arg0->unk36;
    switch (temp_v0) {
    case 0x50:
        func_8000469C(0x3A, temp_a1);
        break;
    case 0x51:
        func_8000469C(0x3B, temp_a1);
        break;
    case 0x52:
        func_8000469C(0x3C, temp_a1);
        break;
    case 0x53:
        func_8000469C(0x3D, temp_a1);
        break;
    case 0x143:
        func_8000469C(0x57, temp_a1);
        break;
    case 0x58:
        func_8000469C(0x43, temp_a1);
        break;
    case 0x11A:
        func_8000469C(0x55, temp_a1);
        break;
    case 0x144:
        func_8000469C(0x58, temp_a1);
        break;
    case 0x119:
        func_8000469C(0x54, temp_a1);
        break;
    case 0x55:
        func_8000469C(0x3F, temp_a1);
        break;
    case 0x59:
        func_8000469C(0x44, temp_a1);
        break;
    case 0x54:
        func_8000469C(0x3E, temp_a1);
        break;
    case 0x145:
        func_8000469C(0x59, temp_a1);
        break;
    case 0x57:
        func_8000469C(0x42, temp_a1);
        break;
    case 0x146:
        func_8000469C(0x5A, temp_a1);
        break;
    case 0x149:
        func_8000469C(0x5D, temp_a1);
        break;
    case 0xF9:
        func_8000469C(0x4F, temp_a1);
        break;
    case 0xF4:
        func_8000469C(0x4D, temp_a1);
        break;
    case 0xF5:
        func_8000469C(0x4E, temp_a1);
        break;
    case 0xF6:
        func_8000469C(0x41, temp_a1);
        break;
    case 0x5A:
        func_8000469C(0x45, temp_a1);
        break;
    case 0x5B:
        func_8000469C(0x46, temp_a1);
        break;
    case 0x5D:
        func_8000469C(0x48, temp_a1);
        break;
    case 0xF3:
        func_8000469C(0x4C, temp_a1);
        break;
    case 0xFA:
        func_8000469C(0x50, temp_a1);
        break;
    case 0xFB:
        func_8000469C(0x51, temp_a1);
        break;
    case 0x147:
        func_8000469C(0x5B, temp_a1);
        break;
    case 0xF0:
        func_8000469C(0x49, temp_a1);
        break;
    case 0xF1:
        func_8000469C(0x4A, temp_a1);
        break;
    case 0x56:
        func_8000469C(0x40, temp_a1);
        break;
    case 0x5C:
        func_8000469C(0x47, temp_a1);
        break;
    case 0xF2:
        func_8000469C(0x4B, temp_a1);
        break;
    case 0xFC:
        func_8000469C(0x52, temp_a1);
        break;
    case 0xFD:
        func_8000469C(0x53, temp_a1);
        break;
    case 0x2E:
        func_8000469C(0x5E, temp_a1);
        break;
    case 0x32:
        func_8000469C(0x60, temp_a1);
        break;
    case 0x31:
        func_8000469C(0x5F, temp_a1);
        break;
    case 0x148:
        func_8000469C(0x5C, temp_a1);
        break;
    case 0x11B:
        func_8000469C(0x56, temp_a1);
        break;
    case 0x11D:
        func_8000469C(0x61, temp_a1);
        break;
    case 0x11E:
        func_8000469C(0x62, temp_a1);
        break;
    default:
        func_8000469C(0x3A, temp_a1);
        break;
    }
}
