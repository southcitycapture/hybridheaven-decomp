#include "common.h"
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
f32 func_8001EAD0(s16);
f32 func_8001EB64(s16);
typedef struct func_8036B7EC_Struct {
    u32 unk0;
    u8 pad[0xC - 4];
    s16 unkC;
} func_8036B7EC_Struct;
func_8036B7EC_Struct *func_803698D0(u8 *arg0);
s32 func_80369CF4(struct func_80369C7C_Obj1 *arg0, s16 arg1);


extern f64 D_8038B0C8;
extern f64 D_8038B0D0;
extern f64 D_8038B0D8;

typedef struct func_80369F54_StructVec {
    f32 x, y, z;
} func_80369F54_StructVec;

typedef struct func_80369F54_StructInfo {
    u8 pad[0x54];
    f32 unk54;
    u8 pad58[8];
    f32 unk60;
} func_80369F54_StructInfo;

typedef struct func_80369F54_StructObj {
    u8 pad[0x5C];
    func_80369F54_StructInfo *unk5C;
} func_80369F54_StructObj;

typedef struct func_80369F54_StructState {
    u8 pad[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
} func_80369F54_StructState;

typedef struct func_80369F54_StructOffsets {
    u8 pad[0x10];
    f32 unk10;
    f32 unk14;
} func_80369F54_StructOffsets;

void func_80369F54(arg0, arg1, arg2)
s32 *arg0;
s32 arg1;
s32 arg2;
{
    struct func_80369C7C_Obj1 *other;
    func_80369F54_StructInfo *info;
    func_80369F54_StructState *state;
    func_80369F54_StructOffsets *offsets;
    f32 xoff;
    f32 zoff;
    f32 z;
    s16 angle;
    f32 sine;
    f32 cosine;
    func_80369F54_StructVec vec;
    f32 delta;
    f32 adjust;
    u8 unused;

    if ((struct func_80369C7C_Obj1 *)arg1 != D_801BBBF0.unkDC) {
        other = D_801BBBF0.unkDC;
    } else {
        other = D_801BBBF0.unkEC;
    }
    info = ((func_80369F54_StructObj *)other)->unk5C;
    if ((struct func_80369C7C_Obj1 *)arg1 == D_801BBBF0.unkDC) {
        state = (func_80369F54_StructState *)D_801BC03C;
    } else {
        state = (func_80369F54_StructState *)D_801BC3D8;
    }
    z = info->unk60;
    angle = other->unk24->unk2C->unk12;
    sine = func_8001EAD0(angle);
    cosine = func_8001EB64(angle);
    offsets = (func_80369F54_StructOffsets *)func_803698D0((u8 *)state);
    xoff = offsets->unk10;
    zoff = offsets->unk14;
    if (func_80369CF4((struct func_80369C7C_Obj1 *)arg1, angle) != 0) {
        xoff *= -1.0f;
    }
    if (state->unk2D8 == 4 || state->unk2D8 == 6) {
        delta = (f32)((f64)info->unk54 - D_8038B0C8);
        if (state->unk2D9 != 0x41) {
            if (state->unk2D8 == 6) {
                adjust = delta;
            } else {
                adjust = -delta;
            }
            zoff += adjust;
        }
    } else {
        if (state->unk2D8 == 5) {
            adjust = (f32)((f64)z - D_8038B0D0);
        } else {
            adjust = -(f32)((f64)z - D_8038B0D8);
        }
        zoff += adjust;
    }
    vec.x = sine * zoff + cosine * xoff;
    vec.z = cosine * zoff - sine * xoff;
    vec.y = 0.0f;
    *(func_80369F54_StructVec *)arg0 = arg0 ? vec : vec;
}
