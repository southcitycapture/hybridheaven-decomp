#include "common.h"
typedef struct { int id; unsigned short frame; unsigned char pad6[2]; float speed; } AnimEarly0;
#define ACAT2(a, b) a##b
#define ACAT(a, b) ACAT2(a, b)
#define func_8036D30C_Anim ACAT(AnimL_, __LINE__)
#define AnimL_58 AnimEarly0
#define AnimL_63 AnimEarly0
#define AnimL_195 func_8036D30C_Anim
#define AnimL_200 func_8036D30C_Anim
#define AnimL_203 func_8036D30C_Anim
#define AnimL_226 func_8036D30C_Anim
#define AnimL_228 func_8036D30C_Anim
#define ACAT2(a, b) a##b
#define ACAT(a, b) ACAT2(a, b)
#define AnimL_195 AnimR
#define AnimL_200 AnimR
#define AnimL_203 AnimR
#define AnimL_226 AnimR
#define AnimL_228 AnimR
typedef struct { int id; unsigned short frame; unsigned char pad6[2]; float speed; } AnimEarly;
#define AnimL_58 AnimEarly
#define AnimL_63 AnimEarly
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
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 D_8038CC61;
f32 func_8001EAD0(s16);
f32 func_8001EB64(s16);
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


extern f64 D_8038B110;
extern f64 D_8038B118;

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

func_8036C358_Vec func_8036C358(s32 a1, s32 a2) {
    struct func_80369C7C_Obj1 *other;
    struct func_8036C358_P *sp70;
    struct func_8036C358_Q *sp6C;
    s32 sp68;
    struct func_8036C2F8_Struct *sp64;
    struct func_8036C358_S *sp60;
    struct func_8036C358_S *sp5C;
    func_8036C358_Vec v;
    u8 pad48[8];
    f32 sp44, sp40, sp3C, sp38, sp34;
    s16 sp32;
    f32 sp2C, sp28;

    other = ((struct func_80369C7C_Obj1 *)a1 != D_801BBBF0.unkDC) ? D_801BBBF0.unkDC : D_801BBBF0.unkEC;
    sp70 = ((struct func_8036C358_O *)a1)->p5C;
    sp6C = ((struct func_8036C358_O *)other)->p5C;
    sp68 = (*(struct func_8036C358_A **)a2)->f2C;
    sp64 = (struct func_8036C2F8_Struct *)other->unk24->unk2C;
    sp60 = ((struct func_80369C7C_Obj1 *)a1 == D_801BBBF0.unkDC) ? (struct func_8036C358_S *)D_801BC03C : (struct func_8036C358_S *)D_801BC3D8;
    sp5C = ((struct func_80369C7C_Obj1 *)a1 != D_801BBBF0.unkDC) ? (struct func_8036C358_S *)D_801BC03C : (struct func_8036C358_S *)D_801BC3D8;
    sp32 = ((struct func_80369C7C_Obj3 *)sp64)->unk12;
    sp2C = func_8001EAD0(sp32);
    sp28 = func_8001EB64(sp32);
    func_802237B0((void *)a1, 1);
    if (sp5C->mode == 1) {
        sp40 = 16.0f;
        sp44 = 0.0f;
        sp34 = func_8036C2F8((void *)sp68, sp64, 0.0f, 16.0f, sp2C, sp28);
        if (func_8036C2F8((void *)sp68, sp64, 0.0f, -11.0f, sp2C, sp28) < sp34) {
            sp40 = -11.0f;
        }
        if (sp60->f2D9 & 0x8000) {
            sp60->f2D9 &= ~0x8000;
        }
    } else {
        sp40 = -16.0f;
        sp44 = 0.0f;
        sp34 = func_8036C2F8((void *)sp68, sp64, 0.0f, -16.0f, sp2C, sp28);
        if (sp60->f2D9 & 0x8000) {
            sp60->f2D9 &= ~0x8000;
        }
        sp3C = (f32)(((f64)sp6C->f68 * D_8038B110) + ((f64)(sp70->f50 - sp70->f60) * D_8038B118));
        if (func_80369CF4((struct func_80369C7C_Obj1 *)a1, sp32) != 0) {
            sp3C *= -1.0f;
        }
        if (func_8036C2F8((void *)sp68, sp64, sp3C, 1.0f, sp2C, sp28) < sp34) {
            sp44 = sp3C;
            sp40 = 1.0f;
            if (sp60->f2D9 == 0x40) {
                D_8038CC61 = 1;
            }
        }
    }
    v.x = (sp2C * sp40) + (sp28 * sp44);
    v.z = (sp28 * sp40) - (sp2C * sp44);
    v.y = 0.0f;
    return v;
}
