#include "context.h"

extern u8 func_80006214(void);
extern void func_80145348(s32, s32, s32);
extern void func_80146208(s32, void *, s32, s16, s32, s32, s32, s32, s32, s32, s32, s32);

typedef struct func_8037D5C4_StructB { u8 pad[0x22]; u8 f22; } func_8037D5C4_StructB;

void func_8037D5C4(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)
    s32 arg0;
    s32 arg1;
    u16 arg2;
    s16 arg3;
    s16 arg4;
    s32 arg5;
    s32 arg6;
    u8 arg7;
{
    u8 i;
    s8 sp76;
    u8 fp;
    u8 j;
    u8 pad73;
    u8 sp72;
    u8 buf[4];

    sp76 = 0;
    fp = 0;
    sp72 = func_80006214();
    for (i = 0; i < 4; i++) {
        buf[i] = arg2 % 10;
        if (arg7 == 0) {
            func_80146208(arg0, &sp76, 0x26, (s16)(arg3 - i * 6), arg4, 7, 8, buf[i] * 7, 0, 0xFF, 0x21D, 8);
        } else if (arg7 == 1) {
            func_80146208(arg0, &sp76, 0x66, (s16)(arg3 - i * 8), arg4, 8, 0xC, buf[i] * 8, 0, 0xFF, 0x21D, 9);
        }
        func_80145348(arg0, *((u8 *)&arg5 + 3), *((u8 *)&arg6 + 3));
        arg2 = arg2 / 10;
    }
    for (i = 0; i < 3; i++) {
        if (buf[3 - i] == 0 && fp == 0) {
            ((func_8037D5C4_StructB **)arg1 + sp72)[3 - i]->f22 = 0;
        } else {
            fp = 1;
        }
    }
}
