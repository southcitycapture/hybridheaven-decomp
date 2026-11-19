#include "common.h"
extern u8 D_80181590[];


typedef struct func_80147AF0_Struct {
    u8 pad0[8];
    u8 a8;
    u8 a9;
    u8 aA;
    u8 pad1;
    u8 aC;
    u8 aD;
    u8 aE;
    u8 pad2[9];
} func_80147AF0_Struct;

void func_80147AF0(u8 arg0, u8 arg1, u8 arg2, u8 arg3) {
    func_80147AF0_Struct *entry;

    entry = (func_80147AF0_Struct *)(arg0 * 0x18 + D_80181590);
    entry->aC = arg1;
    entry->a8 = arg1;
    entry->aD = arg2;
    entry->a9 = arg2;
    entry->aE = arg3;
    entry->aA = arg3;
}
