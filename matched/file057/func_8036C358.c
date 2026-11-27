#include "common.h"
#define ACAT2(a, b) a##b
#define ACAT(a, b) ACAT2(a, b)
#define func_80369C7C_Struct ACAT(SL_, __LINE__)
#define SL_44 func_80369C7C_Struct__func_80369F54
#define HHAnim_325 func_8036D30C_Anim
#define AnimL_1560 func_8036D30C_Anim
#define ACAT2(a, b) a##b
#define ACAT(a, b) ACAT2(a, b)
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
#define SL_44 func_80369C7C_Struct__func_80369F54
extern void func_802237B0(void *, s32);
s32 func_80369CF4(struct func_80369C7C_Obj1 *arg0, s16 arg1);
struct func_8036C2F8_Struct {
    u8 pad0[0x4];
    f32 unk4;
    u8 pad1[0xC - 0x8];
    f32 unkC;
};
f32 func_8036C2F8(struct func_8036C2F8_Struct *arg0, struct func_8036C2F8_Struct *arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5);
typedef struct func_8036D30C_Anim {
    s32 id;
    u16 frame;
    u8 pad6[2];
    f32 speed;
} func_8036D30C_Anim;

#undef func_80369C7C_Struct

extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 D_8038CC61;
f32 func_8001EAD0(s16);
f32 func_8001EB64(s16);

typedef struct func_8036C358_Vec { f32 x, y, z; } func_8036C358_Vec;
struct func_8036C358_S {
    u8 pad0[0x30];
    u32 : 11;
    u32 mode : 2;
    u32 : 19;
    u8 pad1[0x2D9 - 0x34];
    u8 f2D9;
};
struct func_8036C358_P { u8 pad[0x50]; f32 f50; u8 pad1[0x60-0x54]; f32 f60; };
struct func_8036C358_Q { u8 pad[0x68]; f32 f68; };
struct func_8036C358_O { u8 pad[0x5C]; void *p5C; };
struct func_8036C358_A { u8 pad[0x2C]; s32 f2C; };
struct func_8036C358_T { u8 pad[0x12]; s16 unk12; };
struct func_8036C358_H { u8 pad[0x2C]; void *unk2C; };
struct func_8036C358_U { u8 pad[0x24]; struct func_8036C358_H *unk24; };
struct func_8036C358_G { u8 pad0[0xDC]; struct func_8036C358_U *unkDC; u8 pad1[0xEC - 0xE0]; struct func_8036C358_U *unkEC; };
#define func_8036C358_G (*(struct func_8036C358_G *)&D_801BBBF0)

func_8036C358_Vec func_8036C358(s32 a1, s32 a2) {
    struct func_8036C358_U *other;
    struct func_8036C358_P *sp70;
    struct func_8036C358_Q *sp6C;
    s32 sp68;
    struct func_8036C2F8_Struct *sp64;
    struct func_8036C358_S *sp60;
    struct func_8036C358_S *sp5C;
    func_8036C358_Vec v;
    s32 flags;
    s32 hit;
    f32 xoff, zoff, reach;
    f32 newDist, dist;
    s16 angle;
    f32 sine, cosine;

    other = ((void *)a1 != (void *)func_8036C358_G.unkDC) ? func_8036C358_G.unkDC : func_8036C358_G.unkEC;
    sp70 = ((struct func_8036C358_O *)a1)->p5C;
    sp6C = ((struct func_8036C358_O *)other)->p5C;
    sp68 = (*(struct func_8036C358_A **)a2)->f2C;
    sp64 = (struct func_8036C2F8_Struct *)other->unk24->unk2C;
    sp60 = ((void *)a1 == (void *)func_8036C358_G.unkDC) ? (struct func_8036C358_S *)D_801BC03C : (struct func_8036C358_S *)D_801BC3D8;
    sp5C = ((void *)a1 != (void *)func_8036C358_G.unkDC) ? (struct func_8036C358_S *)D_801BC03C : (struct func_8036C358_S *)D_801BC3D8;
    angle = ((struct func_8036C358_T *)sp64)->unk12;
    sine = func_8001EAD0(angle);
    cosine = func_8001EB64(angle);
    func_802237B0((void *)a1, 1);
    if (sp5C->mode == 1) {
        zoff = 16.0f;
        xoff = 0.0f;
        dist = func_8036C2F8((void *)sp68, sp64, 0.0f, 16.0f, sine, cosine);
        newDist = func_8036C2F8((void *)sp68, sp64, 0.0f, -11.0f, sine, cosine);
        if (newDist < dist) {
            zoff = -11.0f;
        }
        flags = sp60->f2D9;
        if (flags & 0x8000) {
            sp60->f2D9 = flags & ~0x8000;
        }
    } else {
        zoff = -16.0f;
        xoff = 0.0f;
        dist = func_8036C2F8((void *)sp68, sp64, 0.0f, -16.0f, sine, cosine);
        flags = sp60->f2D9;
        if (flags & 0x8000) {
            sp60->f2D9 = flags & ~0x8000;
        }
        reach = (f32)(((f64)sp6C->f68 * 1.7) + ((f64)(sp70->f50 - sp70->f60) * 0.8));
        hit = func_80369CF4((void *)a1, angle);
        if (hit != 0) {
            reach *= -1.0f;
        }
        newDist = func_8036C2F8((void *)sp68, sp64, reach, 1.0f, sine, cosine);
        if (newDist < dist) {
            xoff = reach;
            zoff = 1.0f;
            if (sp60->f2D9 == 0x40) {
                D_8038CC61 = 1;
            }
        }
    }
    v.x = (sine * zoff) + (cosine * xoff);
    v.z = (cosine * zoff) - (sine * xoff);
    v.y = 0.0f;
    return v;
}
