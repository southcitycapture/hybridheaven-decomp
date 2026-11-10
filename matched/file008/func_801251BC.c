#include "common.h"
extern u8 D_801BBBF0[];
typedef struct T_D_801BBBF0 { /* size >= 0x1154; compacted: the 1 of 458 fields this function uses (full type: include/types/main.h) */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ u16 unk2C; /* 68 uses */
    /* 0x02E */ u8 pad2E[0x1126];
} T_D_801BBBF0;
s32 func_80126930(s32 arg0);

extern void func_800044BC(s32);
extern void func_801BF1A0(void);
extern void (*D_80089470)(void);
extern u16 D_80175940[];
extern u16 D_801BBBF4;

void func_801251BC(u16 arg0)
{

    D_80089470 = func_801BF1A0;
    ((T_D_801BBBF0 *)D_801BBBF0)->unk2C = D_80175940[arg0];
    switch (((T_D_801BBBF0 *)D_801BBBF0)->unk2C) {
    case 1: case 2: case 3: case 7: case 8:
        func_800044BC(9);
        func_800044BC(10);
        break;
    case 9: case 16: case 17:
        func_800044BC(24);
        break;
    case 5: case 6: case 10: case 11: case 15:
        func_800044BC(9);
        func_800044BC(10);
        func_800044BC(11);
        switch (D_801BBBF4 / 10) {
        case 14: case 15: case 16: case 17: case 18: case 21:
            func_800044BC(12);
            break;
        }
        break;
    case 100: func_800044BC(25); func_800044BC(26); break;
    case 101: func_800044BC(25); func_800044BC(27); break;
    case 102: func_800044BC(25); func_800044BC(28); break;
    case 103: func_800044BC(25); func_800044BC(29); break;
    case 104: func_800044BC(25); func_800044BC(30); break;
    case 105: func_800044BC(25); func_800044BC(31); break;
    case 106: func_800044BC(25); func_800044BC(32); break;
    case 107: func_800044BC(25); func_800044BC(33); break;
    case 108: func_800044BC(25); func_800044BC(34); break;
    case 109: func_800044BC(25); func_800044BC(35); break;
    case 110: func_800044BC(25); func_800044BC(36); break;
    case 111: func_800044BC(25); func_800044BC(37); break;
    case 112: func_800044BC(25); func_800044BC(38); break;
    case 113: func_800044BC(25); func_800044BC(39); break;
    case 114: func_800044BC(25); func_800044BC(40); break;
    case 115: func_800044BC(25); func_800044BC(41); break;
    case 116: func_800044BC(25); func_800044BC(42); break;
    case 117: func_800044BC(25); func_800044BC(43); break;
    case 118: func_800044BC(25); func_800044BC(44); break;
    case 119: func_800044BC(25); func_800044BC(45); break;
    case 120: func_800044BC(25); func_800044BC(46); break;
    case 121: func_800044BC(25); func_800044BC(47); break;
    case 122: func_800044BC(25); func_800044BC(48); break;
    case 123: func_800044BC(25); func_800044BC(49); break;
    case 124: func_800044BC(25); func_800044BC(50); break;
    case 125: func_800044BC(25); func_800044BC(51); break;
    case 126: func_800044BC(25); func_800044BC(52); break;
    case 127: func_800044BC(25); func_800044BC(53); break;
    case 200:
        func_800044BC(9);
        func_800044BC(10);
        func_800044BC(11);
        func_800044BC(54);
        break;
    default:
        func_80126930(0);
        func_800044BC(9);
        func_800044BC(10);
        func_800044BC(11);
        switch (D_801BBBF4 / 10U) {
        case 0: func_800044BC(13); break;
        case 1: func_800044BC(14); break;
        case 2: func_800044BC(15); break;
        case 3: func_800044BC(16); break;
        case 4: func_800044BC(17); break;
        case 5: func_800044BC(18); break;
        case 6: func_800044BC(19); break;
        case 7: func_800044BC(20); break;
        case 8: func_800044BC(21); break;
        case 9: func_800044BC(22); break;
        case 10: func_800044BC(23); break;
        }
        break;
    }
}
