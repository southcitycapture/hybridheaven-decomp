#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file056/803757E0/D_803890E0.s")
#define D_803885D8 D_803885D8__func_803757E0
#define D_80388698 D_80388698__func_803757E0
#define D_80388728 D_80388728__func_803757E0
#define func_80010550 func_80010550__func_803757E0
#define func_8012CE9C func_8012CE9C__func_803757E0
#define func_80375A04_Arg func_80375A04_Arg__func_803757E0
#define func_80375A04_Mid func_80375A04_Mid__func_803757E0
#define func_80375A04_Obj func_80375A04_Obj__func_803757E0
#define func_80375A04_Pos func_80375A04_Pos__func_803757E0
typedef struct func_80375A04_Pos {
    u8 pad0[0x4];
    f32 unk4;
    u8 pad8[0x4];
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
} func_80375A04_Pos;
typedef struct func_80375A04_Mid {
    u8 pad0[0x2C];
    func_80375A04_Pos *unk2C;
} func_80375A04_Mid;
typedef struct func_80375A04_Obj {
    u8 pad0[0xE];
    u16 unkE;
} func_80375A04_Obj;
typedef struct func_80375A04_Arg {
    u8 pad0[0x24];
    func_80375A04_Mid *unk24;
    u8 pad28[0x34];
    func_80375A04_Obj *unk5C;
} func_80375A04_Arg;


typedef struct func_803757E0_StructArg {
    s32 w0;
    s32 w1;
    s32 w2;
} func_803757E0_Arg;

extern func_803757E0_Arg *D_80388728[][6];
extern func_803757E0_Arg *D_80388698[][3];
extern func_803757E0_Arg *D_803885D8[][8];
extern s32 func_8012CE9C(s32, func_80375A04_Obj *, func_803757E0_Arg, s32);
extern s32 func_80010550();

s32 func_803757E0(func_80375A04_Arg *arg0, s32 arg1, u8 arg2, u8 arg3) {
    func_80375A04_Obj *obj;
    s32 var_v1;
    s32 var_t0;
    s32 adjusted;

    obj = arg0->unk5C;
    arg2 = arg2 & 0xFF;
    switch (arg2) {
    case 1:
        adjusted = arg3 & 0xF;
        var_v1 = 1;
        var_t0 = 0xA;
        arg3 = adjusted;
        break;
    case 3:
        adjusted = arg3 & 0xF;
        var_v1 = 2;
        var_t0 = 0xA;
        arg3 = adjusted;
        break;
    case 2:
        arg3 = arg3 & 0xF0;
        adjusted = arg3 >> 4;
        var_v1 = 2;
        var_t0 = 0xA;
        arg3 = adjusted;
        break;
    case 4:
        arg3 = arg3 & 0xF0;
        adjusted = arg3 >> 4;
        var_v1 = 0;
        var_t0 = 1;
        arg3 = adjusted;
        break;
    case 0:
    default:
        arg3 = arg3 & 0xF0;
        adjusted = arg3 >> 4;
        var_v1 = 0;
        var_t0 = 0xA;
        arg3 = adjusted;
        break;
    }
    switch (obj->unkE) {
    case 45:
        if (func_8012CE9C(arg1, obj, *D_80388728[var_v1][arg3], var_t0) != 0) {
            return 1;
        }
        break;
    case 47:
        if (func_8012CE9C(arg1, obj, *D_80388698[var_v1][arg3], var_t0) != 0) {
            return 1;
        }
        break;
    case 88:
    case 89:
    default:
        if (func_8012CE9C(arg1, obj, *D_803885D8[var_v1][arg3], var_t0) != 0) {
            return 1;
        }
        break;
    }
    func_80010550(arg1, obj);
    return 0;
}
#undef D_803885D8
#undef D_80388698
#undef D_80388728
#undef func_80010550
#undef func_8012CE9C
#undef func_80375A04_Arg
#undef func_80375A04_Mid
#undef func_80375A04_Obj
#undef func_80375A04_Pos

#define D_8012A630 D_8012A630__func_80375A04
#define func_8001EF38 func_8001EF38__func_80375A04
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
typedef struct func_80377140_Struct {
    u8 pad[6];
    u16 unk6;
    u16 unk8;
} func_80377140_Struct;


typedef struct func_80375A04_Pos {
    u8 pad0[0x4];
    f32 unk4;
    u8 pad8[0x4];
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
} func_80375A04_Pos;

typedef struct func_80375A04_Mid {
    u8 pad0[0x2C];
    func_80375A04_Pos *unk2C;
} func_80375A04_Mid;

typedef struct func_80375A04_Glob {
    u8 pad0[0xE0];
    func_80375A04_Mid *unkE0;
    u8 padE4[0xE10];
    u8 unkEF4;
} func_80375A04_Glob;

typedef struct func_80375A04_Obj {
    u8 pad0[0xE];
    u16 unkE;
} func_80375A04_Obj;

typedef struct func_80375A04_Arg {
    u8 pad0[0x24];
    func_80375A04_Mid *unk24;
    u8 pad28[0x34];
    func_80375A04_Obj *unk5C;
} func_80375A04_Arg;

extern func_80375A04_Glob D_801BBBF0__func_80375A04;
extern struct func_80377140_Struct CAT(D_801BBBF, 0);
#define func_80375A04_GG D_801BBBF0__func_80375A04
#define func_80375A04_GC ((func_80375A04_Glob *)&CAT(D_801BBBF, 0))
extern s32 func_8001EF38(f32, f32, void *);
extern s32 D_8012A630(void *, f32, void *, s16);

s32 func_80375A04(void *arg0) {
    func_80375A04_Obj *obj;
    s32 pad;
    s16 angle;

    obj = ((func_80375A04_Arg *)arg0)->unk5C;
    angle = (s16)(func_80375A04_GG.unkE0->unk2C->unk12 - func_8001EF38(func_80375A04_GC->unkE0->unk2C->unk4 - ((func_80375A04_Arg *)arg0)->unk24->unk2C->unk4, func_80375A04_GC->unkE0->unk2C->unkC - ((func_80375A04_Arg *)arg0)->unk24->unk2C->unkC, func_80375A04_GC)) & 0x1FFF;
    if (obj->unkE == 0x2D) {
        if (D_8012A630(arg0, 12.0f, &func_80375A04_GG, angle) != 0) {
            func_80375A04_GG.unkEF4 |= 0x10;
            if (func_80375A04_GG.unkEF4 & 1) {
                if (angle > 0x800 && angle < 0x1800) {
                    func_80375A04_GG.unkEF4 &= ~1;
                    return 1;
                }
                func_80375A04_GG.unkEF4 &= ~1;
            }
        }
    } else {
        if (D_8012A630(arg0, 12.0f, &func_80375A04_GG, angle) != 0) {
            func_80375A04_GG.unkEF4 |= 0x10;
            if (func_80375A04_GG.unkEF4 & 1) {
                if (angle > 0x800 && angle < 0x1800) {
                    func_80375A04_GG.unkEF4 &= ~1;
                    return 1;
                }
                func_80375A04_GG.unkEF4 &= ~1;
            }
        } else {
            func_80375A04_GG.unkEF4 &= ~0x10;
        }
    }
    return 0;
}
#undef CAT2
#undef CAT
#undef func_80375A04_GG
#undef func_80375A04_GC
#undef D_8012A630
#undef func_8001EF38

#define D_801BBBF0 D_801BBBF0__func_80375B6C
#define D_80388F60 D_80388F60__func_80375B6C
#define D_80388FA0 D_80388FA0__func_80375B6C
#define func_8001EAD0 func_8001EAD0__func_80375B6C
#define func_8001EB64 func_8001EB64__func_80375B6C
#define func_8002FC20 func_8002FC20__func_80375B6C
#define func_8010843C func_8010843C__func_80375B6C
#define func_8011AAF4 func_8011AAF4__func_80375B6C
#define func_8012C6B4 func_8012C6B4__func_80375B6C
extern u8 D_801BBBF0[];


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
    s32 pad3;
    f32 spB8;
    f32 spB4;
    s32 pad0;
    s32 pad1;
    s32 pad2;
    f32 spA4;
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
    distancePtr = &spA4;
    var_fv1 = distance;
    if ((f64)distance < 20.0) {
        var_fv1 = 20.0f;
    }
    *distancePtr = var_fv1;
    *distancePtr += (f32)func_8012C6B4(0xA);
    destZ = &spB4;
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
        spB8 = var_fs3;
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
        spB8 = (f32)((f64)((f32)func_8012C6B4(0xA) + var_fs1) - 5.0);
        *destZ = (*distancePtr * func_8001EB64(angle)) + var_fs2;
        break;
    }
    if (func_8010843C(var_fs0, var_fs1, var_fs2, var_fs4, spB8, *destZ) == 0) {
        f32 radius = 10.0f;
        func_8011AAF4(D_80388FA0, 0x181, actor, NULL, 1, radius, var_fs4, spB8, *destZ, radius, var_fs0, var_fs1, var_fs2, 0.0f, 35.0f, -1, -1);
        return 1;
    }
    if ((angle += 0x200, ++count) < 0xA) {
        goto loop_3;
    }
    return 0;
}
#undef D_801BBBF0
#undef D_80388F60
#undef D_80388FA0
#undef func_8001EAD0
#undef func_8001EB64
#undef func_8002FC20
#undef func_8010843C
#undef func_8011AAF4
#undef func_8012C6B4

#define D_801BBBF0 D_801BBBF0__func_80375F98
#define D_801BBCD0 D_801BBCD0__func_80375F98
#define D_80388FE0 D_80388FE0__func_80375F98
#define func_8002FC20 func_8002FC20__func_80375F98
#define func_8011AAF4 func_8011AAF4__func_80375F98
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
#undef ZP
#undef ZP2
#undef zB_77
#undef zB_79
#undef zB_87
#undef GL
#undef DX
#undef DY
#undef DZ
#undef D_801BBBF0
#undef D_801BBCD0
#undef D_80388FE0
#undef func_8002FC20
#undef func_8011AAF4


struct func_803760D8_Sub {
    u8 pad[0x18];
    s32 unk18;
};

struct func_803760D8_Struct {
    u8 pad[0x38];
    struct func_803760D8_Sub *unk38;
};

extern s32 func_80005700(s32);
extern void func_800058DC(void *, void *);
extern void func_8001F74C(void *);
extern s32 func_80126CC0(void *, void *);
extern s32 func_80133A24(s32);
extern void func_80127014();
extern void func_80376160();

void func_803760D8(struct func_803760D8_Struct *arg0, s32 arg1)
{
  s32 temp_v0;
  temp_v0 = arg0->unk38->unk18 & 0xFFFF;
  if ((temp_v0 != 0) && (func_80133A24(temp_v0 ^ 0) != (0 & 0xFFFFFFFFu)))
  {
    func_80005700(arg0);
    return;
  }
  func_8001F74C(arg0);
  if (func_80126CC0(arg0, func_80127014) != 0)
  {
    func_800058DC(arg0, func_80376160);
  }
}

