#include "common.h"
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];


typedef struct { u8 pad[0x2C]; f32 *unk2C; } func_80372D9C_StructA;
typedef struct { u8 pad[0xC8]; f32 unkC8; f32 unkCC; f32 unkD0; f32 unkD4; f32 unkD8; f32 unkDC; } func_80372D9C_StructC;
typedef struct { u8 pad[0x24]; func_80372D9C_StructA *unk24; u8 pad28[0x34]; func_80372D9C_StructC *unk5C; } func_80372D9C_StructB;
typedef struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x30];
    u8 unk40;
    u8 pad41[0x3B];
    u8 unk7C;
    u8 pad7D[0x13];
    func_80372D9C_StructB *unk90;
} func_80372D9C_Struct;
extern void func_8035AFEC(s32 a0, u8 a1, func_80372D9C_Struct *a2, u8 *a3);
extern void func_8035C638(func_80372D9C_Struct *a0);

void func_80372D9C(func_80372D9C_Struct *arg0, f32 arg1, f32 arg2, f32 arg3) {
    func_80372D9C_StructC *v;
    f32 *p;
    f32 m;
    u8 *g;
    f32 dx;
    f32 dz;
    s32 cur;

    v = arg0->unk90->unk5C;
    p = arg0->unk90->unk24->unk2C;
    if ((cur = arg0->unkC) * 1 == D_801BBCCC) {
        g = D_801BC03C;
    } else {
        g = D_801BC3D8;
    }
    if (arg0->unk7C == 0) {
        m = (v->unkC8 < 0.0f) ? -v->unkC8 : v->unkC8;
        if (m < ((v->unkD4 < 0.0f) ? -v->unkD4 : v->unkD4)) {
            m = (v->unkD4 < 0.0f) ? -v->unkD4 : v->unkD4;
        }
        if (m < ((v->unkD0 < 0.0f) ? -v->unkD0 : v->unkD0)) {
            m = (v->unkD0 < 0.0f) ? -v->unkD0 : v->unkD0;
        }
        if (m < ((v->unkDC < 0.0f) ? -v->unkDC : v->unkDC)) {
            m = (v->unkDC < 0.0f) ? -v->unkDC : v->unkDC;
        }
        dx = p[1] - arg1;
        dz = p[3] - arg2;
        if (dx * dx + dz * dz < arg3 * arg3 + m) {
            func_8035AFEC(cur, arg0->unk40, arg0, g);
            g[0x2FA] = 1;
            g[0x2DA] = 1;
            arg0->unk7C = 1;
            func_8035C638(arg0);
        }
    }
}
