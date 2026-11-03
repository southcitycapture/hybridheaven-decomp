#include "common.h"
extern u8 *D_801DAB14;
extern void func_8038D33C(f32, f32, s32, s32, f32, f32);


typedef struct func_801E5644_S3 { u8 pad[0x4]; f32 f4; u8 pad2[4]; f32 fC; } func_801E5644_S3;
typedef struct func_801E5644_S2 { u8 pad[0x2C]; func_801E5644_S3 *p2C; } func_801E5644_S2;
typedef struct func_801E5644_S1 { u8 pad[0x24]; func_801E5644_S2 *p24; } func_801E5644_S1;
typedef struct func_801E5644_S0 { u8 pad[8]; struct func_801E5644_S0b *p8; } func_801E5644_S0;
typedef struct func_801E5644_S0b { u8 pad[8]; func_801E5644_S1 *p8; } func_801E5644_S0b;
extern u32 func_801C1134(s32, s32);
extern s32 func_801C1088(s32, s32, s32);
extern void func_801C10D8(s32, s32);
extern s32 func_801CEE30(s32, s32);
extern f32 D_801E7914;
extern f32 D_801E7918;
extern f32 D_801E791C;
extern f32 D_801E7920;

#define ROOT ((func_801E5644_S0 *)D_801DAB14)

s32 func_801E5644(s32 arg0, s32 arg1) {
    f32 t;
    func_801E5644_S3 *q;

    t = (f32)func_801C1134(4, 1) / 55.0f;
    ROOT->p8->p8->p24->p2C->f4 = D_801E7914 * t + D_801E7918;
    ROOT->p8->p8->p24->p2C->fC = -97.0f * t + D_801E791C;
    if (func_801C1088(4, 1, 0x37) != 0) {
        func_801C10D8(4, 1);
        return 0x1E;
    }
    if (func_801CEE30(0x4100000, 9) != 0 || func_801CEE30(0x4100000, 0x12) != 0) {
        q = ROOT->p8->p8->p24->p2C;
        func_8038D33C(q->f4, *(f32 *)((u8 *)q + 8), *(s32 *)((u8 *)q + 0xC), 0x677, D_801E7920, 1.0f);
    }
    return 0x1D;
}
