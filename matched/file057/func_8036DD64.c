#include "common.h"
#define ACAT2(a, b) a##b
#define ACAT(a, b) ACAT2(a, b)
#define func_80369C7C_Struct ACAT(SL_, __LINE__)
#define SL_44 func_80369C7C_Struct__func_80369F54
#define AnimL_1385 func_8036D30C_Anim
typedef struct { int id; unsigned short frame; unsigned char pad6[2]; float speed; } func_8036D30C_Anim;
#define ACAT2(a, b) a##b
#define ACAT(a, b) ACAT2(a, b)
#define HQ2(a, b) a##b
#define HQ(a, b) HQ2(a, b)
#define D_801BBBF0 HQ(HQD_, __LINE__)
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
f32 func_8001EAD0(s16);
f32 func_8001EB64(s16);
extern void func_802237B0(void *, s32);
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

#undef D_801BBBF0

typedef struct func_8036DD64_Info {
    u8 pad0[0x50];
    f32 unk50;
    u8 pad54[0x60 - 0x54];
    f32 unk60;
    u8 pad64[0x68 - 0x64];
    f32 unk68;
} func_8036DD64_Info;

typedef struct func_8036DD64_Obj {
    u8 pad0[0x24];
    struct func_80369C7C_Obj2 *unk24;
    u8 pad28[0x5C - 0x28];
    func_8036DD64_Info *unk5C;
} func_8036DD64_Obj;

typedef struct func_8036DD64_State {
    u8 pad0[0x30];
    u32 a : 1;
    u32 b : 2;
    u32 p : 8;
    u32 c : 2;
    u32 rest : 19;
} func_8036DD64_State;

struct func_8036DD64_Vec {
    f32 x;
    f32 y;
    f32 z;
};

struct func_8036DD64_Vec func_8036DD64(s32 arg1) {
    func_8036DD64_Obj *other;
    func_8036DD64_Info *info;
    func_8036DD64_Info *otherInfo;
    func_8036DD64_State *state;
    struct func_8036DD64_Vec vec;
    f32 f;
    f32 zero;
    f32 dist;
    f32 x;
    f32 z;
    f32 sine;
    f32 cosine;
    s16 dir;
    s16 angle;

    if ((void *)arg1 != D_801BBBF0.unkDC) {
        other = (func_8036DD64_Obj *)D_801BBBF0.unkDC;
    } else {
        other = (func_8036DD64_Obj *)D_801BBBF0.unkEC;
    }
    info = ((func_8036DD64_Obj *)arg1)->unk5C;
    otherInfo = other->unk5C;
    state = (void *)arg1 != D_801BBBF0.unkDC ? (func_8036DD64_State *)D_801BC03C : (func_8036DD64_State *)D_801BC3D8;
    angle = other->unk24->unk2C->unk12;
    sine = func_8001EAD0(angle);
    cosine = func_8001EB64(angle);
    dir = (s16)((((void *)arg1 != D_801BBBF0.unkDC ? 0 : 0x1000) + D_801BBBF0.unkB98)) & 0x1FFF;
    func_802237B0((void *)arg1, 1);
    f = (f64)otherInfo->unk68 * 1.7 + (f64)(info->unk50 - info->unk60) * 0.8;
    zero = 0.0f;
    if (state->c == 1) {
        if (((s16)(dir - angle) & 0x1FFF) > 0x1000) {
            f *= -1.0f;
        }
    } else {
        if (((s16)(dir - angle) & 0x1FFF) > 0x1000) {
            f *= -1.0f;
        }
    }
    vec.y = zero;
    dist = cosine * f;
    x = zero + dist;
    z = zero - sine * f;
    vec.x = x;
    vec.z = z;
    return vec;
}
