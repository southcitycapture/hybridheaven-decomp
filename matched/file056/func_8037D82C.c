#include "common.h"
extern void func_80145348(s32, s32, s32);
extern void func_80146208(s32, void *, s32, s16, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_8037D5C4(s32, s32, u16, s32, s32, s32, s32, s32);


typedef struct func_8037D82C_Struct {
    u16 *ptr[4];
} func_8037D82C_Struct;

extern func_8037D82C_Struct D_80388C78;

void func_8037D82C(s32 arg0, s32 arg1) {
    u8 row;
    u8 bytes[4];
    func_8037D82C_Struct sp40;

    sp40 = D_80388C78;
    func_8037D5C4(arg0, arg1, *sp40.ptr[0], 0x82, 0x45, 0x17, 0, 1);
    func_8037D5C4(arg0, arg1, *sp40.ptr[2], 0x82, 0x55, 0x19, 0, 1);
    func_80146208(arg0, &bytes[3], 0x26, 0x62, 0x55, 8, 0xC, 0x50, 0, 0xFF, 0x21D, 9);
    func_80145348(arg0, 0x19, 0);
    row = 1;
    if (row == 1) {
    func_8037D5C4(arg0, arg1, *sp40.ptr[1], 0x5A, 0x55, 0x19, 0, row++);
    }
    func_8037D5C4(arg0, arg1, *sp40.ptr[3], 0x82, (row * 0x10) + 0x45, 0x14, 0, 1);
}
