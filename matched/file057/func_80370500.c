#include "common.h"
extern void func_80011258();
#define func_80011140(a, b, c, d) func_80011140()
typedef struct func_8036EA80_Vec { s32 x; s32 y; s32 z; } func_8036EA80_Vec;
extern s32 func_80011140(s32, void *, func_8036EA80_Vec, s32);



typedef struct func_80370500_StructA { u8 pad0[0x24]; struct func_80370500_StructB *unk24; } func_80370500_StructA;
typedef struct func_80370500_StructB { u8 pad0[0x2C]; struct func_80370500_StructPos *unk2C; } func_80370500_StructB;
typedef struct func_80370500_StructPos { u8 pad0[4]; f32 coords[3]; } func_80370500_StructPos;
typedef struct func_80370500_StructC { u8 pad0[0x30]; f32 coords[3]; f32 unk3C; u8 pad2[4]; f32 unk44; } func_80370500_StructC;
typedef struct func_80370500_StructD { u8 pad0[0x2C]; func_80370500_StructC *unk2C; } func_80370500_StructD;
extern f32 func_8001EAD0(s32);
extern s16 func_8001EF38(f32, f32);
extern void func_8002096C(s32, s32, s16);
extern f32 func_8002FC20(f32);
extern func_80370500_StructD *D_801BBCD8;

void func_80370500(void *arg0) {
    func_80370500_StructPos *a;
    func_80370500_StructC *b;
    s16 angle;
    f32 d;
    s16 angle2;
    u8 t;
    s32 tmp;

    a = ((func_80370500_StructA *)arg0)->unk24->unk2C;
    b = D_801BBCD8->unk2C;
    {
        f32 dx = a->coords[0] - b->coords[0];
        f32 dy = a->coords[1] - b->coords[1];
        f32 dz = a->coords[2] - b->coords[2];
        d = func_8002FC20(dx * dx + dy * dy + dz * dz);
    }
    if (d < 21.0) {
        t = 0xC8;
    } else {
        tmp = (s32)(39800.0 / (d + 178.0));
        t = (u8)tmp;
        if ((tmp & 0xFF) >= 0xC9) {
            t = 0xC8;
        }
    }
    func_8002096C(0x5C3, 1, t);
    b = D_801BBCD8->unk2C;
    angle = func_8001EF38(a->coords[2] - b->coords[2], a->coords[0] - b->coords[0]);
    b = D_801BBCD8->unk2C;
    angle2 = func_8001EF38(b->unk44 - b->coords[2], b->unk3C - b->coords[0]);
    /* wrap the 16-bit difference into the signed 13-bit range */
    if ((s16)(angle - angle2) & 0x1000) {
        angle = ((s16)(angle - angle2) & 0x1FFF) - 0x2000;
    } else {
        angle = (s16)(angle - angle2) & 0x1FFF;
    }
    func_8002096C(0x5C3, 2, (s16)((u32)((f64)func_8001EAD0(angle) * 63.0 + 64.0) & 0xFF));
}
