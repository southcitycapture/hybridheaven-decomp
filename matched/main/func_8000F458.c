#include "common.h"
extern f32 D_8000E748(void *, f32 *, s32 *, s32, u16 *);
typedef struct func_80010884_Vec {
    f32 x;
    f32 y;
    f32 z;
} func_80010884_Vec;
extern func_80010884_Vec D_800631B0[4];
extern func_80010884_Vec D_800631C8;
typedef struct func_8000E980_Struct6 {
    s16 v[3];
} func_8000E980_Struct6;
typedef struct func_8000E980_StructC {
    func_8000E980_Struct6 *unk0;
    u8 pad4[8];
    u8 unkC;
} func_8000E980_StructC;
extern struct func_8000E980_StructC D_800631E0;
void func_8000DDB0(u32 a0, void *a1, s32 a2);
s64 func_8000E58C(s32 arg0);
typedef struct func_8000E5D4_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} func_8000E5D4_Struct;
f32 func_8000F3D8(f32 arg0);
typedef struct func_80010884_Key {
    s32 unk0;
    u16 unk4;
    u16 unk6;
    s32 unk8;
} func_80010884_Key;

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);

typedef struct func_8000F458_StructSub {
    u8 pad0[4];
    f32 x, y, z;
    u8 pad10[2];
    s16 angle;
    u8 pad14[4];
    f32 sx, sy, sz;
    u8 pad24[0x38];
    func_80010884_Key key;
} func_8000F458_StructSub;
typedef struct func_8000F458_StructObj {
    u8 pad[0x2C];
    func_8000F458_StructSub *sub;
} func_8000F458_StructObj;
typedef struct func_8000F458_StructArg {
    u8 pad[0x1C];
    func_80010884_Key key;
    func_80010884_Vec pos;
    f32 scale;
    func_80010884_Vec delta;
    func_80010884_Vec rotated;
    u8 pad50[0x26];
    u8 reset;
} func_8000F458_StructArg;

#define a ((func_8000F458_StructArg *)arg1)
void func_8000F458(u32 **arg0, void *arg1) {
    func_8000F458_StructSub *s1;
    func_8000F458_StructSub *s2;
    u16 index;
    u16 end;
    s64 base;
    func_80010884_Vec pos;
    f32 z;
    f32 sine;
    f32 cosine;
    f32 frame;
    f32 blend;
    f32 duration;
    f32 height;
    u16 flags;
    u16 count;
    u16 mode;
    f64 t;
    func_80010884_Key *kp;
    func_80010884_Key key;

    s1 = ((func_8000F458_StructObj **)arg0)[0]->sub;
    s2 = ((func_8000F458_StructObj **)arg0)[1]->sub;
    flags = a->key.unk6;
    base = func_8000E58C(a->key.unk0);
    kp = &a->key;
    duration = D_8000E748(kp, &frame, (s32 *)&blend, (s32)&mode, &count);
    func_8000DDB0(((s64)((u16)frame * 24 + ((func_8000E5D4_Struct *)&D_800631E0)->unk4) & 0xFFFFFF) + base, D_800631B0, 0x30);
    s2->x = D_800631B0[1].x - D_800631B0[0].x;
    s2->z = D_800631B0[1].z - D_800631B0[0].z;
    height = D_800631B0[1].y;
    pos.x = D_800631B0[0].x;
    pos.y = D_800631B0[0].y;
    pos.z = D_800631B0[0].z;
    if (blend != 0.0f) {
        s2->x += ((D_800631B0[3].x - D_800631B0[2].x) - s2->x) * blend;
        s2->z += ((D_800631B0[3].z - D_800631B0[2].z) - s2->z) * blend;
        height += (D_800631B0[3].y - height) * blend;
        pos.x += (D_800631B0[2].x - pos.x) * blend;
        pos.y += (D_800631B0[2].y - pos.y) * blend;
        pos.z += (D_800631B0[2].z - pos.z) * blend;
    }
    if (mode & 0x8000) {
        if (flags & 2) {
            if (kp->unk4 + 1 == count) {
                index = (u32)frame & 0xFFFF;
                if (index == ((u32)(duration - 1.0f) & 0xFFFF)) {
                    a->pos = D_800631C8;
                } else {
                    end = (u32)duration & 0xFFFF;
                    if (index == end) {
                        a->pos = D_800631B0[0];
                    } else {
                        func_8000DDB0(((s64)(end * 24 + ((func_8000E5D4_Struct *)&D_800631E0)->unk4) & 0xFFFFFF) + base, D_800631B0, 12);
                        a->pos = D_800631B0[0];
                    }
                }
            }
        } else if (kp->unk4 == 1) {
            if (!((u32)frame & 0xFFFF)) {
                a->pos = D_800631B0[0];
            } else {
                func_8000DDB0(((s64)((func_8000E5D4_Struct *)&D_800631E0)->unk4 & 0xFFFFFF) + base, D_800631B0, 12);
                a->pos = D_800631B0[0];
            }
        }
    }
    if (a->reset || (flags & 1)) {
        goto zero;
    }
    if (flags & 2) {
        t = duration;
    } else {
        t = 0.0;
    }
    if (t == frame) {
zero:
        a->delta.z = 0.0f;
        a->delta.y = 0.0f;
        a->delta.x = 0.0f;
        a->reset = 0;
    } else {
        a->delta = pos;
        a->delta.x -= a->pos.x;
        a->delta.y -= a->pos.y;
        a->delta.z -= a->pos.z;
    }
    s2->y = (a->scale * height) / 1000.0;
    if (flags & 0x10) {
        s2->x *= -1.0f;
        a->delta.x *= -1.0f;
    }
    a->pos = pos;
    a->delta.x *= s1->sx;
    a->delta.y *= s1->sy;
    a->delta.z *= s1->sz;
    sine = func_8001EAD0(s1->angle);
    cosine = func_8001EB64(s1->angle);
    z = a->delta.z;
    a->rotated.y = a->delta.y;
    a->rotated.x = z * sine + a->delta.x * cosine;
    a->rotated.z = z * cosine - a->delta.x * sine;
    if (!(flags & 0x1001)) {
        s1->x += a->rotated.x;
        s1->z += a->rotated.z;
        if (!(flags & 0x2000)) {
            s1->y += a->delta.y;
        }
    }
    s1->x = func_8000F3D8(s1->x);
    s1->y = func_8000F3D8(s1->y);
    s1->z = func_8000F3D8(s1->z);
    key = s2->key;
    s1->key = key;
    *kp = key;
}
