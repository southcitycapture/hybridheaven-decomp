#include "common.h"
extern u8 D_801BBBF0[];
u16 func_80125808(u16 arg0);
void func_801276CC(s32 arg0);


extern u16 D_801BBC1C;
extern u8 D_8017DD7C[];

void func_80124ED0(s32 arg0)
{
    switch (D_801BBC1C) {
    case 9:
        func_80125808(0x18);
        func_80125808(0x73);
        break;
    case 1:
    case 2:
    case 3:
    case 7:
    case 8:
    case 100:
    case 101:
    case 102:
    case 103:
    case 104:
    case 105:
    case 106:
    case 107:
    case 108:
    case 109:
    case 110:
    case 111:
    case 112:
    case 113:
    case 114:
    case 115:
    case 116:
    case 117:
    case 118:
    case 119:
    case 120:
    case 121:
    case 122:
    case 123:
    case 124:
    case 125:
    case 126:
    case 127:
        func_80125808(0x8F);
        func_80125808(0x7E);
        func_80125808(0x76);
        func_80125808(0x73);
        break;
    case 16:
        func_80125808(0x8F);
        func_80125808(0xF8);
        func_80125808(0x104);
        func_80125808(0xF4);
        func_80125808(0x7E);
        break;
    case 200:
        func_80125808(0x73);
        break;
    case 17:
        func_80125808(0x131);
        func_80125808(0x10E);
        break;
    default:
        func_80125808(0xBF);
        func_80125808(0x76);
        func_80125808(0x1EE);
        func_80125808(0x1EF);
        func_80125808(0x131);
        func_80125808(0xC3);
        func_80125808(0xC4);
        func_80125808(0x10E);
        func_80125808(0x73);
        func_80125808(0xE0);
        func_80125808(0xC0);
        func_80125808(0x7C);
        func_80125808(0x74);
        func_80125808(0xCC);
        func_80125808(0x126);
        func_80125808(0x1AE);
        if (*(u16 *)(D_801BBBF0 + 0x2C) == 10) {
            if (*(u16 *)(D_8017DD7C + 0x10) == 0) {
                *(u16 *)(D_8017DD7C + 0x10) = 0x29;
            }
            func_801276CC(*(u16 *)(D_8017DD7C + 0x10));
            if (*(u16 *)(D_8017DD7C + 0x12) == 0) {
                *(u16 *)(D_8017DD7C + 0x12) = 0x11C;
            }
            func_801276CC(*(u16 *)(D_8017DD7C + 0x12));
        } else {
            switch (D_801BBBF0[0xF7]) {
            case 0:
                if (D_801BBBF0[0xF4] != 0) {
                    func_801276CC(0x11C);
                } else {
                    func_801276CC(0x29);
                }
                break;
            case 1:
                if (D_801BBBF0[0xF4] != 0) {
                    func_801276CC(0x11B);
                } else {
                    func_801276CC(0x2C);
                }
                break;
            case 2:
                if (D_801BBBF0[0xF4] != 0) {
                    func_801276CC(0x2D);
                } else {
                    func_801276CC(0x2D);
                }
                break;
            case 3:
                if (D_801BBBF0[0xF4] != 0) {
                    func_801276CC(0x50);
                } else {
                    func_801276CC(0x50);
                }
                break;
            }
        }
        break;
    }
}
