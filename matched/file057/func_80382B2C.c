#include "common.h"
struct func_803822F0_StructInner {
    u8 pad[0x38];
    s32 unk38;
};
struct func_803822F0_StructGlobal {
    u16 *unk0;
    struct func_803822F0_StructInner *unk4;
};
extern struct func_803822F0_StructGlobal *D_8017257C;
extern u8 D_80389BB4[];
extern void func_80146088(void *, void *, s8 *);


struct func_80382B2C_Struct {
    s16 x24, y26, w28, h2A;
    u8 c2C, c2D, c2E, c2F, c30, c31, c32, c33;
    s16 s34, s36;
    u8 pad38[4];
    u16 s3C;
    u8 pad3E[2];
    s32 w40;
    u8 pad44[8];
    s16 s4C, s4E, s50, s52, s54, s56;
    u8 pad58[8];
};

void func_80382B2C(void *arg0, s16 arg1, s16 arg2, u8 arg3, s8 *arg4)
{
    struct func_80382B2C_Struct l;
    struct func_803822F0_StructGlobal **global = &D_8017257C;

    switch (arg3) {
    case 0:
        l.x24 = arg1 + 8;
        l.y26 = arg2;
        break;
    case 1:
        l.x24 = arg1 + 8;
        l.y26 = arg2 + 0x10;
        break;
    case 2:
        l.x24 = arg1;
        l.y26 = arg2 + 0x10;
        break;
    case 3:
        l.x24 = arg1 + 0x10;
        l.y26 = arg2 + 0x10;
        break;
    case 4:
        l.x24 = arg1;
        l.y26 = arg2 + 0x30;
        break;
    case 5:
        l.x24 = arg1 + 0x10;
        l.y26 = arg2 + 0x30;
        break;
    default:
        l.x24 = arg1;
        l.y26 = arg2;
        break;
    }
    if (!arg3) {
        l.s54 = l.w28 = l.s4C = 0x10;
        l.s56 = l.h2A = l.s4E = 0x10;
    } else if (arg3 < 6) {
        l.s54 = l.w28 = l.s4C = 0x10;
        l.s56 = l.h2A = l.s4E = 0x20;
    } else if (arg3 == 6) {
        l.s54 = l.w28 = l.s4C = 0x20;
        l.s56 = l.h2A = l.s4E = 0x40;
    } else if (arg3 == 7) {
        l.s54 = l.w28 = l.s4C = 0x20;
        l.s56 = l.h2A = l.s4E = 0x10;
    }
    if (arg3 < 6) {
        l.c2C = l.c2D = l.c2E = 0xFF;
        l.c2F = 0xFF;
    } else {
        l.c2C = l.c2D = l.c2E = 0xA0;
        l.c2F = 0x80;
    }
    l.c32 = 0;
    l.c31 = 0;
    l.c30 = 0;
    l.c33 = 0xFF;
    l.s34 = 0x66;
    l.s36 = 0;
    l.s3C = *(*global)->unk0;
    l.w40 = ((s32 *)(*global)->unk4)[(u16)(arg3 + 0xF)];
    l.s52 = 0;
    l.s50 = 0;
    *(void **)(D_80389BB4 + 0xC) = &l;
    func_80146088(arg0, D_80389BB4, arg4);
}
