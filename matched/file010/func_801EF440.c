#include "common.h"
extern u8 D_801BBBF0[];
typedef struct func_801F152C_In { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; u8 pad1[2]; s16 unk12; } func_801F152C_In;
typedef struct func_801F152C_Obj { u8 pad[0x22]; u8 unk22; u8 pad1[9]; func_801F152C_In *unk2C; } func_801F152C_Obj;
typedef struct func_801F152C_Struct { u8 pad[0xE0]; func_801F152C_Obj *unkE0; u8 pad1[0xF4 - 0xE4]; u8 unkF4; u8 pad2[2]; u8 unkF7; } func_801F152C_Struct;
#define G ((func_801F152C_Struct *)&D_801BBBF0)


typedef struct func_801EF440_StructP {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801EF440_StructP;

typedef struct func_801EF440_StructI {
    u8 pad[0x2C];
    func_801EF440_StructP *unk2C;
} func_801EF440_StructI;

typedef struct func_801EF440_StructG {
    u8 pad0[0xE0];
    func_801EF440_StructI *unkE0;
    u8 pad1[0x35A - 0xE4];
    u8 unk35A;
    u8 pad2;
    f32 unk35C;
    f32 unk360;
    f32 unk364;
    u8 pad3[0x38C - 0x368];
    s32 unk38C;
} func_801EF440_StructG;

typedef struct func_801EF440_StructA {
    u8 pad[0x40];
    f32 unk40;
    f32 unk44;
    f32 unk48;
} func_801EF440_StructA;
extern f32 func_8002FC20(f32);
extern void func_801C3B7C(s32);
extern s32 func_801C5A1C(f32, f32, f32, f32, f32, f32);

#define G ((func_801EF440_StructG *)&D_801BBBF0)
#define MAG(x) func_8002FC20(x[0] * x[0] + x[1] * x[1] + x[2] * x[2])
#define DOT (v[0] * -u[0] + v[1] * -u[1] + v[2] * -u[2])

void func_801EF440(func_801EF440_StructA *arg0) {
    func_801EF440_StructP *q;
    f32 v[3];
    f32 u[3];
    f32 a[3];
    f32 b[3];
    f32 sp48;
    f32 sp44;
    f32 sp40;
    u8 i;
#define p (G->unkE0->unk2C)

    q = p;
    if (func_801C5A1C(q->unk4, q->unk8 + 1.0, q->unkC,
                      arg0->unk40 * 3.0 + q->unk4,
                      q->unk8 + 1.0,
                      arg0->unk48 * 3.0 + q->unkC) != 0) {
        if (G->unk35A != 0x1A) {
            v[0] = G->unk35C;
            v[1] = G->unk360;
            v[2] = G->unk364;
            u[0] = arg0->unk40;
            u[1] = arg0->unk44;
            u[2] = arg0->unk48;
            a[0] = a[1] = a[2] = 0.0f;
            b[0] = b[1] = b[2] = 0.0f;
            sp40 = DOT / (MAG(v) * MAG(u));
            sp48 = MAG(v);
            sp44 = MAG(u) * sp40 / sp48;
            if (sp44) {}
            for (i = 0; i < 3; i++) {
                a[i] = v[i] * sp44 * 0.6;
            }
            for (i = 0; i < 3; i++) {
                b[i] = u[i] + a[i] * 2.0;
            }
            arg0->unk40 = b[0];
            arg0->unk44 = b[1];
            arg0->unk48 = b[2];
        } else {
            func_801C3B7C(G->unk38C);
        }
    }
}
