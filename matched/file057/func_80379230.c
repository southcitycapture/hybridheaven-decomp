#include "common.h"


struct func_80379230_Struct {
    s16 unk0;
    u8 pad2[6];
    s16 unk8;
};

s32 func_80379230(struct func_80379230_Struct *arg0, u8 arg1) {
    s16 v;

    switch (arg1) {
    case 1:
        if (arg0->unk0 >= 0x191) {
            return 1;
        }
        break;
    case 2:
        v = arg0->unk0;
        if ((v < 0x12C) || (v >= 0x4B1)) {
            return 1;
        }
        break;
    case 3:
        if (arg0->unk0 < 0x2BC) {
            return 1;
        }
        break;
    case 4:
        if (arg0->unk0 < 0x4B0) {
            return 1;
        }
        break;
    case 5:
        if (arg0->unk8 >= 0x12D) {
            return 1;
        }
        break;
    case 6:
        if (arg0->unk8 >= 0x1F5) {
            return 1;
        }
        break;
    case 7:
        if (arg0->unk8 < 0x12C) {
            return 1;
        }
        break;
    case 8:
        if (arg0->unk8 < 0x1F4) {
            return 1;
        }
        break;
    case 9:
        v = arg0->unk0;
        if ((v < 0xC8) || (v >= 0x259)) {
            return 1;
        }
        break;
    case 10:
        v = arg0->unk0;
        if ((v < 0x190) || (v >= 0x4B1)) {
            return 1;
        }
        break;
    case 11:
        if (arg0->unk0 < 0x320) {
            return 1;
        }
        break;
    case 12:
        if (arg0->unk0 < 0x5DC) {
            return 1;
        }
        break;
    case 15:
        if (arg0->unk0 < 0x12C) {
            return 1;
        }
        break;
    case 16:
    case 17:
    case 18:
        return 1;
    case 20:
        if (arg0->unk0 >= 0x1F5) {
            return 1;
        }
        break;
    case 22:
        if (arg0->unk0 >= 0x2BD) {
            return 1;
        }
        break;
    case 24:
        if (arg0->unk0 >= 0x385) {
            return 1;
        }
        break;
    case 21:
    case 23:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
        return 1;
    case 30:
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
    default:
        break;
    }
    return 0;
}
