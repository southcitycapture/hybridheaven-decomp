#include "common.h"
struct func_801C3D90_StructB {
    u8 pad[0x63];
    u8 unk63;
};
struct func_801C3D90_StructA {
    u8 pad[0xDC];
    struct func_801C3D90_StructB *unkDC;
    s32 unkE0;
};
extern struct func_801C3D90_StructA D_801BBBF0;
extern f32 func_8001EAD0(s32);
extern f32 func_8001EB64(s32);


typedef struct func_801C7B18_Vec { f32 x, y, z; } func_801C7B18_Vec;
typedef struct func_801C7B18_Node { u8 pad0[4]; f32 x, y, z; u8 pad10[2]; s16 angle; } func_801C7B18_Node;
typedef struct func_801C7B18_Mid { u8 pad0[0x2C]; func_801C7B18_Node *node; } func_801C7B18_Mid;
typedef struct func_801C7B18_Inner { u8 pad0[0x4C]; u8 unk4C; u8 unk4D; u8 pad4E; s8 unk4F; } func_801C7B18_Inner;
typedef struct func_801C7B18_G {
    u8 pad0[0xDC];
    func_801C7B18_Inner *inner;
    func_801C7B18_Mid *mid;
    u8 padE4[0x35C - 0xE4];
    func_801C7B18_Vec v35C;
    u8 pad368[0x380 - 0x368];
    func_801C7B18_Vec v380;
} func_801C7B18_G;

#define GG ((func_801C7B18_G *)&D_801BBBF0)
#define U(x) ((f32)(u32)(x))
#define NODE (GG->mid->node)

s32 func_801C5A1C(f32, f32, f32, f32, f32, f32);
extern f32 func_800075B4(func_801C7B18_Vec, func_801C7B18_Vec);

s32 func_801C7B18(void) {
    func_801C7B18_Vec a;
    func_801C7B18_Vec b;
    f32 dx;
    f32 dz;
    f32 y;
    u8 hit1;
    u8 hit2;
    f32 v[3];

    if (func_801C5A1C(NODE->x, NODE->y + 2.0, NODE->z, NODE->x, NODE->y - 5.0, NODE->z) != 0) {
        v[0] = GG->v35C.x;
        v[1] = GG->v35C.y;
        v[2] = GG->v35C.z;
        if (v[0] != 0.0 || v[2] != 0.0) {
            return 0;
        }
    } else {
        return 0;
    }
    y = (f32)GG->inner->unk4F + (NODE->y + U(GG->inner->unk4D) * 0.0625);
    dx = func_8001EAD0(NODE->angle);
    dx = U(GG->inner->unk4D) * dx;
    dz = func_8001EB64(NODE->angle);
    dz = U(GG->inner->unk4D) * dz;
    hit1 = func_801C5A1C(NODE->x, y, NODE->z, NODE->x + dx, y, NODE->z + dz);
    a.x = GG->v380.x;
    a.y = GG->v380.y;
    a.z = GG->v380.z;
    hit2 = func_801C5A1C(NODE->x, y, NODE->z, NODE->x - dx, y, NODE->z - dz);
    b.x = GG->v380.x;
    b.y = GG->v380.y;
    b.z = GG->v380.z;
    if (hit1 && hit2) {
        if (func_800075B4(a, b) <= U(GG->inner->unk4D)) {
            return 0;
        }
    }
    dx = func_8001EAD0((s16)(NODE->angle + 0x800));
    dx = U(GG->inner->unk4C) * dx * 1.5;
    dz = func_8001EB64((s16)(NODE->angle + 0x800));
    dz = U(GG->inner->unk4C) * dz * 1.5;
    hit1 = func_801C5A1C(NODE->x, y, NODE->z, NODE->x + dx, y, NODE->z + dz);
    a.x = GG->v380.x;
    a.y = GG->v380.y;
    a.z = GG->v380.z;
    hit2 = func_801C5A1C(NODE->x, y, NODE->z, NODE->x - dx, y, NODE->z - dz);
    b.x = GG->v380.x;
    b.y = GG->v380.y;
    b.z = GG->v380.z;
    if (hit1 && hit2) {
        if (func_800075B4(a, b) <= U(GG->inner->unk4D)) {
            return 0;
        }
    }
    return 1;
}
