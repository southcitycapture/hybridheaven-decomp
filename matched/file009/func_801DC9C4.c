#include "common.h"
extern f32 func_8001EAD0(s16);
typedef struct func_801DE6F4_StructVec {
    f32 x, y, z;
} func_801DE6F4_StructVec;

typedef struct func_801DC9C4_StructPos {
    u8 pad[0x30];
    f32 unk30, unk34, unk38, unk3C, unk40, unk44;
} func_801DC9C4_StructPos;
typedef struct func_801DC9C4_StructMid {
    u8 pad[0x2C];
    func_801DC9C4_StructPos *unk2C;
} func_801DC9C4_StructMid;
extern func_801DC9C4_StructMid *D_801BBCD8;
extern s32 func_8001EF38(f32, f32);
extern void func_800207D0(u16, s32, s32);
extern f32 func_8002FC20(f32);

void func_801DC9C4(func_801DE6F4_StructVec pos, u16 arg3, f32 arg4) {
    s16 t;
    s16 firstAngle;
    f32 d;
    f32 m;
    s16 u;
    f32 dx, dy, dz;
    u32 v;
    func_801DC9C4_StructPos *p;

    if (arg3 != 0) {
        p = D_801BBCD8->unk2C;
        dx = pos.x - p->unk30;
        dy = pos.y - p->unk34;
        dz = pos.z - p->unk38;
        d = dx * dx + dy * dy + dz * dz;
        d = func_8002FC20(d);
        if (d < 21.0) {
            v = 0xC8;
        } else {
            v = (s32)(39800.0 / (d + 178.0)) & 0xFF;
        }
        if ((f64)arg4 < 0.0) {
            arg4 = 0.0f;
        }
        m = (f32)v * arg4;
        if (255.0 < (f64)m) {
            m = 255.0f;
        }
        p = D_801BBCD8->unk2C;
        firstAngle = func_8001EF38(pos.z - p->unk38, pos.x - p->unk30);
        p = D_801BBCD8->unk2C;
        do {} while (0);
        u = firstAngle - func_8001EF38(p->unk44 - p->unk38, p->unk3C - p->unk30);
        if (u & 0x1000) {
            t = (u & 0x1FFF) - 0x2000;
        } else {
            t = u & 0x1FFF;
        }
        func_800207D0(arg3, (u32)((f64)func_8001EAD0(t) * 63.0 + 64.0) & 0xFF, (s32)m & 0xFF);
    }
}
