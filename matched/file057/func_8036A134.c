#include "common.h"
typedef struct { int id; unsigned short frame; unsigned char pad6[2]; float speed; } HHAnimFwd;
#define HH_CAT2(a, b) a##b
#define HH_CAT(a, b) HH_CAT2(a, b)
#define func_8036D30C_Anim HH_CAT(HHAnim_, __LINE__)
#define HHAnim_58 HHAnimFwd
#define HHAnim_63 HHAnimFwd
#define HHAnim_195 func_8036D30C_Anim
#define HHAnim_200 func_8036D30C_Anim
#define HHAnim_203 func_8036D30C_Anim
#define HHAnim_226 func_8036D30C_Anim
#define HHAnim_228 func_8036D30C_Anim
#define HHAnim_259 func_8036D30C_Anim
#define HHAnim_306 func_8036D30C_Anim
struct func_80369C7C_Obj3 {
    u8 pad0[0x12];
    s16 unk12;
};
struct func_80369C7C_Obj2 {
    u8 pad0[0x2C];
    struct func_80369C7C_Obj3 *unk2C;
};
struct func_80369C7C_Obj1 {
    u8 pad0[0x24];
    struct func_80369C7C_Obj2 *unk24;
};
struct func_80369C7C_Struct {
    u8 pad0[0xDC];
    struct func_80369C7C_Obj1 *unkDC;
    u8 pad1[0xEC - 0xE0];
    struct func_80369C7C_Obj1 *unkEC;
    u8 pad2[0xB98 - 0xF0];
    s16 unkB98;
};
extern struct func_80369C7C_Struct D_801BBBF0;
extern f32 func_8002FC20(f32);
s32 func_8010843C(f32, f32, f32, f32, f32, f32);
extern void func_802237B0(void *, s32);
struct func_8036A5AC_Vec {
    f32 x;
    f32 y;
    f32 z;
};
typedef struct func_8036D30C_Anim {
    s32 id;
    u16 frame;
    u8 pad6[2];
    f32 speed;
} func_8036D30C_Anim;

#undef func_8036D30C_Anim

typedef struct func_8036A134_StructB { u8 pad[0x68]; f32 unk68; } func_8036A134_StructB;
typedef struct func_8036A134_StructA { u8 pad0[0x24]; struct func_8036A134_StructQ *unk24; u8 pad1[0x5C - 0x28]; func_8036A134_StructB *unk5C; } func_8036A134_StructA;
typedef struct func_8036A134_StructQ { u8 pad[0x2C]; struct func_8036A5AC_Vec4 *unk2C; } func_8036A134_StructQ;
struct func_8036A5AC_Vec4 { u8 pad[4]; f32 x, y, z; };

struct func_8036A5AC_Vec func_8036A134(s32 arg1, f32 arg2, f32 arg3) {
    struct func_80369C7C_Obj1 *sp84;
    struct func_8036A5AC_Vec4 *s0;
    func_8036A134_StructB *sp7C;
    struct func_8036A5AC_Vec sp70;
    f32 sp6C;
    f32 fs0;
    f32 sp64;
    f32 len;
    f32 sp48, sp44;
    f32 sp54;
    u8 sp53;

    if ((struct func_80369C7C_Obj1 *)arg1 != D_801BBBF0.unkDC) {
        sp84 = D_801BBBF0.unkDC;
    } else {
        sp84 = D_801BBBF0.unkEC;
    }
    s0 = ((func_8036A134_StructA *)sp84)->unk24->unk2C;
    sp7C = ((func_8036A134_StructA *)arg1)->unk5C;
    sp6C = s0->x;
    fs0 = s0->y;
    sp64 = s0->z;
    len = func_8002FC20(arg2 * arg2 + arg3 * arg3);
    sp53 = 1;
    if (!((f64)len > 0.0)) {
        struct func_8036A5AC_Vec4 *t = ((func_8036A134_StructA *)arg1)->unk24->unk2C;
        sp70.x = t->x;
        sp70.z = t->z;
        sp70.y = t->y;
        return sp70;
    } else {
#define pz (sp64 + arg3)
#define qz (sp44 * sp54)
#define qx (sp48 * sp54)
        sp54 = (f32)((f64)sp7C->unk68 * 4.0);
        sp48 = arg2 / len;
        func_802237B0((void *)arg1, 1);
        sp44 = arg3 / len;
#define px (sp6C + arg2)
        if (func_8010843C(sp6C, fs0, sp64, px + qx, fs0, pz + qz)) {
            s0->x = (f32)((f64)s0->x - (f64)sp48 * 0.5);
            s0->z = (f32)((f64)s0->z - (f64)sp44 * 0.5);
        } else if (func_8010843C(sp6C, fs0, sp64, px + qz, fs0, pz - qx)) {
            s0->x = (f32)((f64)s0->x - (f64)sp44 * 0.5);
            s0->z = (f32)((f64)s0->z + (f64)sp48 * 0.5);
        } else if (func_8010843C(sp6C, fs0, sp64, px - qz, fs0, pz + qx)) {
            s0->x = (f32)((f64)s0->x + (f64)sp44 * 0.5);
            s0->z = (f32)((f64)s0->z - (f64)sp48 * 0.5);
        } else {
            sp53 = 0;
        }
        func_802237B0(sp84, sp53);
        sp70.x = s0->x + arg2;
        sp70.z = s0->z + arg3;
        sp70.y = s0->y;
        return sp70;
    }
}
