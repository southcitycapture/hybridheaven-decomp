#include "common.h"
extern u8 D_801EB3D0[];
extern u8 D_801EB3D4[];
extern u8 D_801EB3D8[];
extern void func_801C7DE8(void *, s32, s32, s32, f32, f32, f32, f32, f32, s32, s32);


extern f32 D_801EB384;
extern f32 D_801EB388;
extern u8 D_801EB3DC[];
extern u8 D_801EB3E0[];
extern u8 D_801EB3E4[];
extern u8 D_801EB3E8[];
extern u8 D_801EB3EC[];
extern u8 D_801EB3F0[];
extern u8 D_801EB3F4[];
extern u8 D_801EB3F8[];
extern u8 D_801EB3FC[];
extern u8 D_801EB400[];
extern u8 D_801EB404[];
extern u8 D_801EB408[];
extern u8 D_801EB40C[];

#define func_801E58B4_CALL(a, b, c, d, e, f, g, h, i, j, k) \
    do { \
        func_801C7DE8(a, b, c, d, e, f, g, h, i, j, k); \
    } while (0)

/* Each call is its own do/while(0) block: this sets which float constants IDO keeps in saved registers.
   The first one is written out because the prologue order needs "do {" on the brace line. */
s32 func_801E58B4(s32 arg0, s32 arg1)
{ do {
        func_801C7DE8(D_801EB3D0, 0xC2780000, 0x42900000, 0xC3EA0000, 90.0f, 26.0f, 90.0f, 4.0f, 2.0f, 0, 0);
    } while (0);
    func_801E58B4_CALL(D_801EB3D4, 0xC2140000, 0x42480000, 0xC3F28000, 0.0f, 0.0f, 63.0f, 2.0f, 2.0f, 0, 0);
    func_801E58B4_CALL(D_801EB3D8, 0x425C0000, 0x42480000, 0xC3F28000, 0.0f, 0.0f, 90.0f, 4.0f, 2.0f, 0, 0);
    func_801E58B4_CALL(D_801EB3DC, 0x42800000, 0x42E00000, 0xC3DD8000, D_801EB384, 37.0f, 270.0f, 4.0f, 2.0f, 0, 0);
    func_801E58B4_CALL(D_801EB3E0, 0x42800000, 0x41C80000, 0xC3E10000, 270.0f, 39.0f, 270.0f, 4.0f, 2.0f, 0, 0);
    func_801E58B4_CALL(D_801EB3E4, 0x42780000, 0x42E00000, 0xC3BE0000, D_801EB388, 37.0f, 270.0f, 4.0f, 2.0f, 0, 0);
    func_801E58B4_CALL(D_801EB3E8, 0xC2780000, 0x42900000, 0xC3EA0000, 90.0f, 26.0f, 90.0f, 4.0f, 2.0f, 0, 0);
    func_801E58B4_CALL(D_801EB3EC, 0x41800000, 0x43070000, 0xC3B28000, 0.0f, 0.0f, 26.0f, 4.0f, 2.0f, 0, 0);
    func_801E58B4_CALL(D_801EB3F0, 0xC2860000, 0x42900000, 0xC3BD0000, 90.0f, 27.0f, 90.0f, 4.0f, 2.0f, 0, 0);
    func_801E58B4_CALL(D_801EB3F4, 0xC2860000, 0x41880000, 0xC3CF8000, 90.0f, 27.0f, 90.0f, 4.0f, 2.0f, 0, 0);
    func_801E58B4_CALL(D_801EB3F8, 0xC2040000, 0x42C60000, 0xC3F28000, 0.0f, 34.0f, 0.0f, 2.0f, 2.0f, 0, 1);
    func_801E58B4_CALL(D_801EB3FC, 0x41B80000, 0x42D60000, 0xC3F28000, 0.0f, 0.0f, 0.0f, 2.0f, 4.0f, 0, 1);
    func_801E58B4_CALL(D_801EB400, 0x41B80000, 0x428C0000, 0xC3F28000, 0.0f, 0.0f, 34.0f, 2.0f, 2.0f, 0, 1);
    func_801E58B4_CALL(D_801EB404, 0x428A0000, 0x41E00000, 0xC3CF0000, 0.0f, 270.0f, 0.0f, 2.0f, 4.0f, 0, 1);
    func_801E58B4_CALL(D_801EB408, 0x42780000, 0x434D0000, 0xC3BD8000, 90.0f, 90.0f, 270.0f, 4.0f, 4.0f, 0, 1);
    func_801E58B4_CALL(D_801EB40C, 0x41E80000, 0x42340000, 0xC3B20000, 0.0f, 0.0f, 153.0f, 2.0f, 4.0f, 0, 1);
    return 8;
}
