#include "common.h"

extern void func_801C7F10();
extern s32 func_801C7DB4();
extern void func_8038D28C(s32);

s32 func_801E5858(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xEF901F) != 0) {
        func_801C7F10();
        func_801C7DB4();
        func_8038D28C(0x25A);
        return 7;
    }
    return 6;
}
