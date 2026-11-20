#include "common.h"


typedef struct func_80114758_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_80114758_Struct;

extern func_80114758_Struct *D_801BBCCC;
extern u16 func_8022560C(s32);

void func_80114758(void)
{
    s32 value;

    value = func_8022560C(D_801BBCCC->unk5C);
    if (value >= 0x27) {
        if (value != 0xFF) {
            return;
        }
    } else {
        switch (value + 6) {
        case 6: case 7: case 8: case 9: case 10:
        case 11: case 12: case 13: case 14: case 15:
        case 16: case 17: case 18: case 19: case 20:
        case 21: case 22: case 23: case 24: case 25:
        case 26: case 27: case 28: case 29: case 30:
        case 31: case 32: case 33: case 34: case 35:
        case 36: case 37: case 38: case 39: case 40:
        case 41: case 42: case 43: case 44:
            break;
        }
    }
}
