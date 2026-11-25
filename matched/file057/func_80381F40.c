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


struct func_80381F40_Struct {
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

void func_80381F40(void *arg0, s16 arg1, s16 arg2, u8 arg3, u8 arg4, u8 arg5, u8 arg6, s8 *arg7)
{
    struct func_80381F40_Struct l;
    struct func_803822F0_StructGlobal **data;
    u16 id;

    data = &D_8017257C;
    l.x24 = arg1;
    l.y26 = arg2;
    if (arg6 == 0xC) {
        l.s4C = 0x20; l.w28 = 0x20; l.s54 = 0x20;
        l.s4E = 0x10; l.h2A = 0x10; l.s56 = 0x10;
    } else if (arg6 == 0xD) {
        l.s4C = 0x50; l.w28 = 0x50; l.s54 = 0x50;
        l.s4E = 0x10; l.h2A = 0x10; l.s56 = 0x10;
    } else if (arg6 == 0x19) {
        l.s4C = 0x80; l.w28 = 0x80; l.s54 = 0x80;
        l.s4E = 0x10; l.h2A = 0x10; l.s56 = 0x10;
    } else if (arg6 == 0x17) {
        l.w28 = 0x100;
        l.s4C = 0x80; l.s54 = 0x80;
        l.h2A = 0x10; l.s4E = 0x10; l.s56 = 0x10;
    } else {
        l.s4C = 0x40; l.w28 = 0x40; l.s54 = 0x40;
        l.s4E = 0x10; l.h2A = 0x10; l.s56 = 0x10;
    }
    l.c2D = arg4;
    l.c2E = arg5;
    l.c2C = arg3;
    l.c2F = 0xFF;
    l.c32 = 0;
    l.c31 = 0;
    l.c30 = 0;
    l.c33 = 0xFF;
    if (arg6 != 0x17) {
        l.s34 = 0x66;
    } else {
        l.s34 = 0xE6;
    }
    id = arg6;
    l.s36 = 0;
    l.s3C = *(*data)->unk0;
    l.w40 = ((s32 *)(*data)->unk4)[id];
    l.s52 = 0;
    l.s50 = 0;
    *(void **)(D_80389BB4 + 0xC) = &l;
    func_80146088(arg0, D_80389BB4, arg7);
}
