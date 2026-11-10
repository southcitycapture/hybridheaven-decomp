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


extern u8 D_80172578[];

struct func_803821B0_StructLocal {
    s16 x, y, w, h;
    u8 r, g, b, a, r2, g2, b2, a2;
    s16 mode, param;
    u8 pad14[4];
    u16 texture;
    u8 pad1A[2];
    s32 image;
    u8 pad20[8];
    s16 w2, h2, x2, y2, w3, h3;
};


void func_803821B0(void *arg0, s16 arg1, s16 arg2, u8 arg3, u8 arg4, u8 arg5, u8 arg6, s8 *arg7)
{
    s32 pad[2];
    struct func_803821B0_StructLocal l;

    l.x = arg1;
    l.y = arg2;
    if (arg6 > 3) {
        l.w3 = l.w = l.w2 = 0x20;
        l.h3 = l.h = l.h2 = 8;
    } else {
        l.w3 = l.w = l.w2 = 0x40;
        l.h3 = l.h = l.h2 = 0x10;
    }
    l.r = arg3;
    l.g = arg4;
    l.b = arg5;
    l.a = 0xFF;
    l.b2 = 0;
    l.g2 = 0;
    l.r2 = 0;
    l.a2 = 0xFF;
    l.mode = 0x66;
    l.param = 0;
    l.texture = *D_8017257C->unk0;
    l.image = ((s32 *)(*(struct func_803822F0_StructGlobal **)(D_80172578 + 4))->unk4)[arg6];
    l.y2 = 0;
    l.x2 = 0;
    *(void **)(D_80389BB4 + 0xC) = &l;
    func_80146088(arg0, D_80389BB4, arg7);
}
