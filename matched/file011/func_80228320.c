#include "common.h"
extern u8 D_801BBBF0[];
struct func_8022811C_Glob {
    u8 pad[0xE];
    u8 unkE;
    u8 unkF;
};
extern struct func_8022811C_Glob D_801BEC68;
u8 func_802269CC(void);


void func_80228320(u8 *arg0, u8 *arg1) {
    u16 a2;
    u16 t0;
    u8 a1;
    u8 i;
    u8 *d;
    u32 j;

    d = arg1 - 0x44C;
    if (d == D_801BBBF0) {
        a2 = ((u8 *)&D_801BEC68)[0x1A];
    } else {
        a2 = ((u8 *)&D_801BEC68)[0x1B];
    }
    if (d == D_801BBBF0) {
        t0 = ((u8 *)&D_801BEC68)[0x1C];
    } else {
        t0 = ((u8 *)&D_801BEC68)[0x1D];
    }
    if (d == D_801BBBF0) {
        a1 = 1;
    } else {
        a1 = func_802269CC();
    }
    for (i = 0; i < 4; i++) {
        if ((s32)(i * 100 + 100) < *(s16 *)(arg1 + 6)) {
            ((u8 **)arg0 + a2)[(s32)i][0x22] = a1;
        } else {
            ((u8 **)arg0 + a2)[(s32)i][0x22] = 0;
        }
    }
    for (i = 0; i < 4; i++) {
        if ((s32)(i * 100 + 100) < *(s16 *)(arg1 + 4)) {
            ((u8 **)arg0 + t0)[(s32)i][0x22] = a1;
        } else {
            ((u8 **)arg0 + t0)[(s32)i][0x22] = 0;
        }
    }
}
