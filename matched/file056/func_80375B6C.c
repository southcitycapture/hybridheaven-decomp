#include "common.h"
#define ZP(a, b) ZP2(a, b)
#define ZP2(a, b) a##_##b
#define zB_77 D_801BBBF0_ctx77
#define zB_92 D_801BBBF0
extern u8 D_801BBBF0[];
#define ZP2(a, b) a##_##b
#define ZP(a, b) ZP2(a, b)
#define zB_77 D_801BBBF0_ctx77



typedef struct func_80375B6C_StructPos {
    u8 pad0[4];
    f32 x;
    f32 y;
    f32 z;
    u8 pad10[2];
    s16 angle;
} func_80375B6C_StructPos;

typedef struct func_80375B6C_StructMid {
    u8 pad0[0x2C];
    func_80375B6C_StructPos *pos;
} func_80375B6C_StructMid;

typedef struct func_80375B6C_StructArg {
    u8 pad0[0x24];
    func_80375B6C_StructMid *mid;
} func_80375B6C_StructArg;

typedef struct func_80375B6C_StructGlobal {
    u8 pad0[0xE0];
    func_80375B6C_StructMid *mid;
} func_80375B6C_StructGlobal;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern f32 func_8002FC20(f32);
extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);
extern void func_8011AAF4(u8 *, s32, void *, void *, u8, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern s32 func_8012C6B4(s32);
extern u8 D_80388F60[];
extern u8 D_80388FA0[];

s32 func_80375B6C(func_80375B6C_StructArg *arg0, u8 arg1) {
    f32 v[7];
    f32 dx;
    f32 dy;
    f32 dz;
    f32 distance;
    f32 var_fs0;
    f32 var_fs1;
    f32 var_fs2;
    f32 var_fs3;
    f32 var_fs4;
    f32 var_fv1;
    f32 *distancePtr;
    f32 *destZ;
    s16 angle;
    u8 count;
    s32 mode = arg1;
    func_80375B6C_StructPos *player;
    func_80375B6C_StructPos *other;
    func_80375B6C_StructArg *actor = arg0;

    count = 0;
    angle = func_8012C6B4(0x20) << 8;
    dx = (player = actor->mid->pos,
          other = ((func_80375B6C_StructGlobal *)&D_801BBBF0)->mid->pos,
          player->x - other->x);
    dy = player->y - other->y;
    dz = player->z - other->z;
    distance = func_8002FC20((dx * dx) + (dy * dy) + (dz * dz));
    distancePtr = &v[0];
    var_fv1 = distance;
    if ((f64)distance < 20.0) {
        var_fv1 = 20.0f;
    }
    *distancePtr = var_fv1;
    *distancePtr += (f32)func_8012C6B4(0xA);
    destZ = &v[4];
loop_3:
    switch (mode) {
    case 0:
        goto generic;
    case 1:
        player = actor->mid->pos;
        var_fs0 = player->x;
        var_fs1 = (f32)((f64)player->y + 15.0);
        var_fs2 = player->z;
        var_fs3 = (f32)((f64)var_fs1 - 5.0);
        var_fs4 = (f32)(((f64)func_8001EAD0((s16)(player->angle - 0x400)) * 20.0) + (f64)var_fs0);
        v[5] = var_fs3;
        *destZ = (f32)(((f64)func_8001EB64((s16)(actor->mid->pos->angle - 0x400)) * 20.0) + (f64)var_fs2);
        func_8011AAF4(D_80388F60, 0x170, actor, NULL, 1, 10.0f, var_fs4, var_fs3, *destZ, 10.0f, var_fs0, var_fs1, var_fs2, 0.0f, 35.0f, -1, -1);
        break;
    default:
generic:
        other = ((func_80375B6C_StructGlobal *)&D_801BBBF0)->mid->pos;
        player = actor->mid->pos;
        var_fs0 = (f32)((f64)(other->x + player->x) * 0.5);
        var_fs1 = (f32)(((f64)(other->y + player->y) * 0.5) + 15.0);
        var_fs2 = (f32)((f64)(other->z + player->z) * 0.5);
        var_fs4 = (*distancePtr * func_8001EAD0(angle)) + var_fs0;
        v[5] = (f32)((f64)((f32)func_8012C6B4(0xA) + var_fs1) - 5.0);
        *destZ = (*distancePtr * func_8001EB64(angle)) + var_fs2;
        break;
    }
    if (func_8010843C(var_fs0, var_fs1, var_fs2, var_fs4, v[5], *destZ) == 0) {
        f32 radius = 10.0f;
        func_8011AAF4(D_80388FA0, 0x181, actor, NULL, 1, radius, var_fs4, v[5], *destZ, radius, var_fs0, var_fs1, var_fs2, 0.0f, 35.0f, -1, -1);
        return 1;
    }
    if ((angle += 0x200, ++count) < 0xA) {
        goto loop_3;
    }
    return 0;
}
