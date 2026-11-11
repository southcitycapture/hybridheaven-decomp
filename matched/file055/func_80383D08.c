#include "common.h"
extern u8 D_8038DBB0;
extern s32 D_8038DBC4;
extern s32 D_8038DBCC;
extern s32 D_8038DBD0;
extern u8 D_8038DBD4;
extern s32 D_8038DBD8;
extern void func_80020744(s32);


void func_80383D08(void) {
    switch (D_8038DBCC) {
    case 0:
        D_8038DBD0 = 0;
        return;
    case 1:
        D_8038DBD0 = 1;
        D_8038DBD4 += 3;
        if (D_8038DBD4 >= 0xF1) {
            D_8038DBD4 = 0xFF;
            D_8038DBCC += 1;
        }
        D_8038DBC4 = 0;
        return;
    case 2:
        D_8038DBD0 = 1;
        D_8038DBD4 = 0xFF;
        D_8038DBC4 += 1;
        D_8038DBD8 = 0;
        if (D_8038DBC4 >= 0x61) {
            D_8038DBCC += 1;
            return;
        }
    default:
        return;
    case 3:
        D_8038DBD0 = 1;
        D_8038DBD4 -= 0xC;
        if (D_8038DBD4 < 0xA) {
            D_8038DBD4 = 0;
            D_8038DBCC += 1;
        }
        D_8038DBC4 = 0;
        return;
    case 4:
        D_8038DBB0 = 1;
        func_80020744(1);
        break;
    }
}
