#include "common.h"
#define ZP(a, b) ZP2(a, b)
#define ZP2(a, b) a##_##b
#define zB_77 D_801BBBF0_ctx77
#define zB_79 D_801BBBF0_ctx77
#define zB_87 D_801BBBF0
extern u8 D_801BBBF0[];
extern f32 func_8002FC20(f32);
extern void func_8011AAF4(u8 *, s32, void *, void *, u8, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);


typedef struct func_80375F98_Pos {
    u8 pad0[0x4];
    f32 x;
    f32 y;
    f32 z;
    u8 pad10[0x20];
    f32 unk30;
    u8 pad34[4];
    f32 unk38;
    f32 unk3C;
    u8 pad40[4];
    f32 unk44;
} func_80375F98_Pos;

typedef struct func_80375F98_Mid {
    u8 pad0[0x2C];
    func_80375F98_Pos *pos;
} func_80375F98_Mid;

typedef struct func_80375F98_Arg {
    u8 pad0[0x24];
    func_80375F98_Mid *mid;
} func_80375F98_Arg;

typedef struct func_80375F98_Glob {
    u8 pad0[0xE0];
    func_80375F98_Mid *unkE0;
    u8 padE4[4];
    func_80375F98_Mid *unkE8;
} func_80375F98_Glob;

extern func_80375F98_Mid *D_801BBCD0;
extern u8 D_80388FE0[];
#define GL ((func_80375F98_Glob *)D_801BBBF0)

void func_80375F98(func_80375F98_Arg *arg0, s32 arg1) {
    f32 x1, y1, z1;
    f32 x2, y2, z2;

#define DX (arg0->mid->pos->x - D_801BBCD0->pos->x)
#define DY (arg0->mid->pos->y - D_801BBCD0->pos->y)
#define DZ (arg0->mid->pos->z - D_801BBCD0->pos->z)
    func_8002FC20(DX * DX + DY * DY + DZ * DZ);
    x1 = GL->unkE8->pos->unk30;
    y1 = GL->unkE0->pos->y + 25.0;
    z1 = GL->unkE8->pos->unk38;
    x2 = GL->unkE8->pos->unk3C;
    y2 = GL->unkE0->pos->y + 15.0;
    z2 = GL->unkE8->pos->unk44;
    func_8011AAF4(D_80388FE0, 0x1A2, arg0, (void *)2, 1, 1.0f, x1, y1, z1, 1.0f, x2, y2, z2, 0.0f, 35.0f, -1, -1);
}
