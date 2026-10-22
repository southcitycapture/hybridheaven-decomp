#include "context.h"

struct func_80384F24_Struct { u16 *unk0; s32 *unk4; };
struct func_80384F24_Local {
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
extern struct func_80384F24_Struct *D_80172594;
extern u8 D_80389BB4[];

void func_80384F24(arg0, arg1, arg2, arg3, arg4)
    void *arg0; s16 arg1; s16 arg2; u8 arg3; s8 *arg4;
{
    s32 pad[2];
    struct func_80384F24_Local l;
    s32 pad2[2];

    l.x24 = arg1;
    l.y26 = arg2;
    l.w28 = 0x10;
    l.h2A = 0x30;
    l.s54 = l.s4C = 0x10;
    l.s56 = l.s4E = 0x30;
    l.c2C = l.c2D = l.c2E = 0xA0;
    l.c2F = 0xFF;
    l.c32 = 0;
    l.c31 = 0;
    l.c30 = 0;
    l.c33 = 0xFF;
    l.s34 = 0x66;
    l.s36 = 0;
    l.s3C = *D_80172594->unk0;
    l.w40 = D_80172594->unk4[arg3 & 0xFFFF];
    l.s52 = 0;
    l.s50 = 0;
    *(void **)(D_80389BB4 + 0xC) = &l;
    func_80146088(arg0, D_80389BB4, arg4);
}
