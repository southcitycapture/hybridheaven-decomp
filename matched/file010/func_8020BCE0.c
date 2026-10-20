#include "context.h"

struct func_8020BCE0_Struct {
    u8 pad0[0x40];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0x91 - 0x4C];
    u8 unk91;
    u8 pad92[2];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u16 unkA0;
    u16 unkA2;
    u16 unkA4;
};

extern s32 func_80108590(f32, f32, f32, f32, f32, f32);
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern u16 func_8012FF58();
extern s32 func_80150584();
extern s32 func_801FD168(f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32);
extern void func_801FD260(s32, void *);
extern s32 func_801FD5BC(f32, f32, f32);
extern s32 func_801FD644(f32, f32, f32, f32, s32, f32, f32, u32);
extern f32 func_801FD780(u8);
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);
extern f32 D_8021A9F0;
extern f32 D_8021A9F4;

s32 func_8020BCE0(struct func_8020BCE0_Struct *arg0, s32 arg1) {
    u8 pad[8];
    u16 sp66;
    s32 r;
    f32 z;

    z = 0.0f;
    if (func_801FD5BC(arg0->unk94, arg0->unk98, arg0->unk9C) != 0) {
        return 0;
    }
    if (func_80150584() == 0) {
        r = func_801FD168(arg0->unk94, arg0->unk98, arg0->unk9C, z, z, z, arg0->unkA0, arg0->unkA2, arg0->unkA4, 3, 0, 0);
        if (r != 0) {
            func_801FD260(r, arg0);
        }
    }
    sp66 = func_8012FF58();
    if (func_801FD644(arg0->unk94, arg0->unk98, arg0->unk9C, 1.5f, arg0->unkA2, D_8021A9F0, 0.5f, (u32)(func_801FD780(arg0->unk91) * (f32)((sp66 / 10) * 10 + 5))) != 0) {
        func_80380F94(arg0->unk94, arg0->unk98, arg0->unk9C, z, z, z, 1);
        func_80129FB8(arg0->unk94, arg0->unk98, arg0->unk9C, z, z, z, z, 0xD4, 0xD4, 0xD4, 0x80, 0x80, 0x80, 0xA0, -2, D_8021A9F4, 4, 0);
        func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, 0x3CE);
        return 0;
    }
    if (func_80108590(arg0->unk94, arg0->unk98, arg0->unk9C, arg0->unk40 + arg0->unk94, arg0->unk44 + arg0->unk98, arg0->unk48 + arg0->unk9C) != 0) {
        func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, 0x3CE);
        r = func_801FD168(*(f32 *)(D_801BBBF0 + 0x380), *(f32 *)(D_801BBBF0 + 0x384), *(f32 *)(D_801BBBF0 + 0x388), z, z, z, 0x1800, 0, 0, 5, 0, 0);
        if (r != 0) {
            func_801FD260(r, arg0);
        }
        return 0;
    }
    return 1;
}
