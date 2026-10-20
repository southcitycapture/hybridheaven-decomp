#include "context.h"

extern s32 func_80002364(s32, s32, s32, s32);
extern s32 func_80146208(void *, s8 *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern u8 D_8018FAD8[];
extern u8 D_8018FAE8[];
extern u8 D_8018FB00[];
extern u8 func_80149CC0[];

void func_801498CC(func_80148270_Struct *arg0, func_80148074_Struct **arg1) {
    u8 buf[4];
    u8 s0;

    buf[0] = 0;
    func_80002364(0x0F000F0F, 0xA, 2, 0);
    arg0->unk91 = 0;
    buf[2] = func_80006214(arg0);
    s0 = func_80146208(arg0, (s8 *)buf, 0x66, 0x1A, 0x70, 0x80, 0x10, 0, 0, 0xFF, 0x20E, 4);
    s0 += func_80146208(arg0, (s8 *)buf, 0x66, 0x60, 0x5C, 0x80, 0x10, 0, 0, 0xFF, 0x20E, 4);
    s0 += func_80146208(arg0, (s8 *)buf, 0x66, 0xA6, 0x70, 0x80, 0x10, 0, 0, 0xFF, 0x20E, 4);
    s0 += func_80146208(arg0, (s8 *)buf, 0x66, 0x60, 0x84, 0x80, 0x10, 0, 0, 0xFF, 0x20E, 4);
    D_801BED18 = arg1[buf[2]];
    buf[2] = func_80006214(arg0);
    s0 += func_80146208(arg0, (s8 *)buf, 0x26, 0x26, 0x70, 0x68, 0x10, 0, 0, 0xFF, 0x20E, 2);
    s0 += func_80146208(arg0, (s8 *)buf, 0x26, 0x6C, 0x5C, 0x68, 0x10, 0, 0, 0xFF, 0x20E, 0);
    s0 += func_80146208(arg0, (s8 *)buf, 0x26, 0xB2, 0x70, 0x68, 0x10, 0, 0, 0xFF, 0x20E, 1);
    if (s0 += func_80146208(arg0, (s8 *)buf, 0x26, 0x6C, 0x84, 0x68, 0x10, 0, 0, 0xFF, 0x20E, 3)) {
    }
    D_801BED1C = arg1[buf[2]];
    func_80146208(arg0, (s8 *)buf, 4, 0x95, 0xA1, 0x10, 0x10, 0, 0, 0xFF, 0x20E, 5);
    func_8001B204(2, 0x7D0, 0xA0, D_8018FAD8);
    func_8001B204(0, 0x7D0, 0xD0, D_8018FAE8);
    {
        extern s32 func_8001B204();
        func_8001B204(1, 0x7D0, 0xD0, D_8018FB00, 1);
    }
    *((u8 *)arg0 + 0x94) = 1;
    func_80148074((u8 *)arg0);
    func_800058DC(arg0, func_80149CC0);
}
