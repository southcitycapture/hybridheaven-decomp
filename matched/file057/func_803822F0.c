#include "common.h"
extern u8 D_80389BB4[];
extern void func_80146088(void *, void *, s8 *);


struct func_803822F0_StructInner {
    u8 pad[0x38];
    s32 unk38;
};

struct func_803822F0_StructGlobal {
    u16 *unk0;
    struct func_803822F0_StructInner *unk4;
};

struct func_803822F0_StructLocal {
    s16 x24, y26, w28, h2A;
    u8 c2C, c2D, c2E, c2F, c30, c31, c32, c33;
    s16 s34, s36;
    u8 pad38[4];
    u16 s3C;
    u8 pad3E[2];
    s32 w40;
    u8 pad44[8];
    s16 s4C, s4E, s50, s52, s54, s56;
};

struct func_803822F0_StructFrame {
    u8 pad[0x48];
    s32 arg3Home;
};

extern struct func_803822F0_StructGlobal *D_8017257C;

void func_803822F0(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)
    void *arg0;
    s16 arg1;
    s16 arg2;
    s32 arg3;
    u8 arg4;
    u8 arg5;
    u8 arg6;
    s8 *arg7;
{
    s32 pad[2];
    struct func_803822F0_StructLocal l;
    s32 pad2[2];

    l.x24 = arg1;
    l.y26 = arg2;
    ((struct func_803822F0_StructFrame *)&l)->arg3Home = arg3;
    l.s54 = l.w28 = 0x10;
    l.s56 = l.h2A = 0x10;
    l.c2C = arg3;
    l.c2D = arg4;
    l.c2E = arg5;
    l.c2F = 0xFF;
    l.c32 = 0;
    l.c31 = 0;
    l.c30 = 0;
    l.c33 = 0xFF;
    l.s34 = 0x66;
    l.s36 = 0;
    l.s3C = *D_8017257C->unk0;
    l.w40 = D_8017257C->unk4->unk38;
    l.s4C = 0x80;
    l.s4E = 0x10;
    l.s52 = arg6 * 0x10;
    l.s50 = 0;
    *(void **)(D_80389BB4 + 0xC) = &l;
    func_80146088(arg0, D_80389BB4, arg7);
}
