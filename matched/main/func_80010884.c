#include "context.h"

typedef struct func_80010884_Vec {
    f32 x;
    f32 y;
    f32 z;
} func_80010884_Vec;

typedef struct func_80010884_Key {
    s32 unk0;
    u16 unk4;
    u16 unk6;
    s32 unk8;
} func_80010884_Key;

typedef struct func_80010884_Sub {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x50 - 0x10];
    f32 unk50;
    u8 pad54[0x5C - 0x54];
    func_80010884_Key unk5C;
} func_80010884_Sub;

typedef struct func_80010884_Obj {
    u8 pad0[0x2C];
    func_80010884_Sub *unk2C;
} func_80010884_Obj;

typedef struct func_80010884_Arg1 {
    u8 pad0[0x1C];
    func_80010884_Key unk1C;
    u8 pad28[0x34 - 0x28];
    f32 unk34;
    u8 pad38[0x44 - 0x38];
    f32 unk44;
    f32 unk48;
    f32 unk4C;
} func_80010884_Arg1;

extern void func_8000DDB0(u32, void *, s32);
extern void func_8000E748(func_80010884_Key *, f32 *, s32 *, u16 *, u16 *);
extern func_80010884_Vec D_800631B0[4];
extern func_80010884_Vec D_800631BC;
extern func_80010884_Vec D_800631C8;
extern func_80010884_Vec D_800631D4;
extern u32 D_800631E4;

void func_80010884(func_80010884_Obj **arg0, func_80010884_Arg1 *arg1, func_80010884_Key arg2, u16 arg5) {
    func_80010884_Sub *obj;
    func_80010884_Sub *sub;
    f32 t;
    f32 y;
    u64 off;
    u8 pad[28];
    f32 time[2];
    s32 unk64[2];
    u8 pad2[4];
    u16 flags[2];
    u16 b[2];
    u16 a[2];
    u32 addr;
    func_80010884_Key *key;
    func_80010884_Key tmp;

    obj = arg0[0]->unk2C;
    sub = arg0[1]->unk2C;
    flags[1] = arg1->unk1C.unk6;
    flags[0] = arg2.unk6;
    if (arg5 <= 0) {
        t = 0.0f;
    } else {
        t = (f32)(obj->unk50 + 1.0) / ((u32)arg5 + 1.0);
        if (t >= 1.0) {
            t = 1.0f;
        }
    }
    off = func_8000E58C(arg2.unk0);
    func_8000E748(&arg2, &time[0], &unk64[0], &a[0], &b[0]);
    addr = off + ((s64)(((u16)time[0] * 0x18) + D_800631E4) & 0xFFFFFF);
    func_8000DDB0(addr, D_800631B0, 0x18);
    key = &arg1->unk1C;
    D_800631B0[2] = D_800631B0[0];
    D_800631B0[3] = D_800631B0[1];
    if (flags[0] & 0x10) {
        D_800631B0[2].x *= -1.0f;
        D_800631B0[3].x *= -1.0f;
    }
    off = func_8000E58C(key->unk0);
    func_8000E748(key, &time[1], &unk64[1], &a[1], &b[1]);
    addr = off + ((s64)(((u16)time[1] * 0x18) + D_800631E4) & 0xFFFFFF);
    func_8000DDB0(addr, D_800631B0, 0x18);
    if (flags[1] & 0x10) {
        D_800631B0[0].x *= -1.0f;
        D_800631B0[1].x *= -1.0f;
    }
    sub->unk4 = D_800631B0[1].x - D_800631B0[0].x;
    sub->unkC = D_800631B0[1].z - D_800631B0[0].z;
    y = D_800631B0[1].y;
    if (t != 0.0f) {
        sub->unk4 += ((D_800631B0[3].x - D_800631B0[2].x) - sub->unk4) * t;
        sub->unkC += ((D_800631B0[3].z - D_800631B0[2].z) - sub->unkC) * t;
        y += (D_800631B0[3].y - y) * t;
    }
    sub->unk8 = (arg1->unk34 * y) / 1000.0;
    arg1->unk48 = 0.0f;
    arg1->unk44 = 0.0f;
    arg1->unk4C = 0.0f;
    tmp = sub->unk5C;
    obj->unk5C = tmp;
    *key = tmp;
    obj->unk50 = sub->unk50;
}
