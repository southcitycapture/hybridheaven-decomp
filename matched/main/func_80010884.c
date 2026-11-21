#include "common.h"
#define HHC2(x, y) x##y
#define HHC(x, y) HHC2(x, y)
#define func_8000F458_StructArg HHC(HHX_, __LINE__)
#define HHX_233 func_8000F458_StructArg
#define HHX_242 func_8000F458_StructArg
#define HHX_243 func_8000F458_StructArg
#define HHX_301 * hha301 ) ( void
#define HHX_307 * hha307 ) ( void
#define arg1 HHC(HHR_, __LINE__)
#define HHR_301
#define HHR_307
#define HHR_14 arg1
#define HHR_77 arg1
#define HHR_103 arg1
#define HHR_127 arg1
#define HHR_131 arg1
#define HHR_137 arg1
#define HHR_153 arg1
#define HHR_154 arg1
#define HHR_166 arg1
#define HHR_178 arg1
#define HHR_243 arg1
#define HHR_244 arg1
#define HHR_259 arg1
#define HHR_266 arg1
#define HHR_275 arg1
#define HHR_278 arg1
#define HHR_290 arg1
#define HHR_291 arg1
#define HHR_296 arg1
#define HHR_300 arg1
#define HHR_304 arg1
#define HHR_340 arg1
#define HHR_355 arg1
#define HHR_368 arg1
#define HHR_378 arg1
#define HHR_379 arg1
#define HHR_386 arg1
#define HHR_427 arg1
#define HHR_459 arg1
#define HHR_467 arg1
#define HHR_483 arg1
#define HHR_486 arg1
#define HHR_490 arg1
#define HHR_494 arg1
#define HHR_498 arg1
#define HHR_502 arg1
#define HHR_506 arg1
#define HHR_510 arg1
#define HHR_514 arg1
#define HHR_542 arg1
typedef struct func_80010884_Vec {
    f32 x;
    f32 y;
    f32 z;
} func_80010884_Vec;
extern func_80010884_Vec D_800631B0[4];
void func_8000DDB0(u32 a0, void *a1, s32 a2);
s64 func_8000E58C(s32 arg0);
typedef struct func_8000E748_Struct {
    s32 unk0;
    u16 unk4;
    u16 unk6;
    f32 unk8;
} func_8000E748_Struct;
f32 func_8000E748(func_8000E748_Struct *arg0, f32 *arg1, f32 *arg2, s16 *arg3, u16 *arg4);
typedef struct func_80010884_Key {
    s32 unk0;
    u16 unk4;
    u16 unk6;
    s32 unk8;
} func_80010884_Key;
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

#undef arg1
#undef func_8000F458_StructArg

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

extern func_80010884_Vec D_800631BC;
extern func_80010884_Vec D_800631D4;
extern u32 D_800631E4;

void func_80010884(func_80010884_Obj **arg0, func_80010884_Arg1 *arg1, func_80010884_Key arg2, u16 arg5) {
    func_80010884_Sub *obj;
    func_80010884_Sub *sub;
    f32 t;
    f32 y;
    u64 off;
    f32 time[9];
    f32 unk60[3];
    u16 flags[2];
    u16 b[2];
    s16 a[2];
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
    func_8000E748((func_8000E748_Struct *)&arg2, &time[0], &unk60[1], &a[0], &b[0]);
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
    func_8000E748((func_8000E748_Struct *)key, &time[1], &unk60[2], &a[1], &b[1]);
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
