#include "common.h"
extern s32 D_8038DBB4;
extern s32 D_8038DBB8;
extern s32 D_8038DBBC;
extern u8 D_8038DBC0;
extern s32 D_8038DBCC;
extern s32 D_8038DBD8;


void func_80383BCC(void) {
    s32 t;

    switch (D_8038DBB8) {
    case 0:
        D_8038DBBC = 1;
        D_8038DBC0 += 0xC;
        if (D_8038DBC0 >= 0xF1) {
            D_8038DBC0 = 0xFF;
            D_8038DBB8++;
        }
        D_8038DBB4 = 0;
        break;
    case 1:
        D_8038DBBC = 1;
        D_8038DBB4 += 1;
        D_8038DBC0 = 0xFF;
        D_8038DBD8 = 1;
        if (D_8038DBB4 >= 0xA9) {
            D_8038DBB8++;
            D_8038DBB4 = 0;
        }
        break;
    case 2:
        D_8038DBBC = 1;
        D_8038DBB4 += 1;
        D_8038DBC0 -= 9;
        if (D_8038DBC0 < 0xA) {
            D_8038DBC0 = 0;
            D_8038DBB8++;
            D_8038DBCC = 1;
        }
        break;
    case 3:
        D_8038DBBC = 0;
        break;
    default:
        D_8038DBBC = 0;
        break;
    }
}
