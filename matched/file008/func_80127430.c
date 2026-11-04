#include "common.h"
typedef struct func_801270C0_StructPos {
    u8 pad[0x30];
    f32 unk30, unk34, unk38, unk3C, unk40, unk44;
} func_801270C0_StructPos;
typedef struct func_801270C0_StructMid {
    u8 pad[0x2C];
    func_801270C0_StructPos *unk2C;
} func_801270C0_StructMid;
extern func_801270C0_StructMid *D_801BBCD8;

extern f32 func_8001EAD0(s32);
extern s32 func_8001EF38(f32, f32);
extern void func_800207D0(u16, s32, s32);
extern f32 func_8002FC20(f32);
extern f64 D_8018CB00;
extern f64 D_8018CB08;
extern f64 D_8018CB10;
extern f64 D_8018CB18;

s32 func_80127430(f32 arg0, f32 arg1, f32 arg2, u16 arg3, f32 arg4, f32 arg5) {
    s16 t;
    s16 firstAngle;
    f32 d;
    f32 m;
    s16 u;
    f32 dx, dy, dz;
    u32 v;
    func_801270C0_StructPos *p;

    if (arg3 != 0) {
        p = D_801BBCD8->unk2C;
        dx = p->unk30 - arg0;
        dy = p->unk34 - arg1;
        dz = p->unk38 - arg2;
        d = dx * dx + dy * dy + dz * dz;
        d = func_8002FC20(d) * arg5;
        if (d < 21.0) {
            v = 0xC8;
        } else {
            v = (s32)(D_8018CB00 / (d + D_8018CB08)) & 0xFF;
        }
        if ((f64)arg4 < 0.0) {
            arg4 = 0.0f;
        }
        m = (f32)v * arg4;
        if (D_8018CB10 < (f64)m) {
            m = 255.0f;
        }
        p = D_801BBCD8->unk2C;
        firstAngle = func_8001EF38(arg2 - p->unk38, arg0 - p->unk30);
        p = D_801BBCD8->unk2C;
        do {} while (0);
        u = firstAngle - func_8001EF38(p->unk44 - p->unk38, p->unk3C - p->unk30);
        if (u & 0x1000) {
            t = (u & 0x1FFF) - 0x2000;
        } else {
            t = u & 0x1FFF;
        }
        func_800207D0(arg3, (u32)((f64)func_8001EAD0(t) * D_8018CB18 + 64.0) & 0xFF, (s32)m & 0xFF);
    }
    return 1;
}
