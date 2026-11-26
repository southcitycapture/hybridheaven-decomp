#include "common.h"
typedef struct func_8012B1E4_StructEntry {
    u16 flag, index;
} func_8012B1E4_StructEntry;
extern func_8012B1E4_StructEntry D_80176020[];
extern u8 D_801BBBF0[];
typedef struct func_8012B1E4_StructVec {
    u8 pad[4];
    f32 x, y, z;
    s16 unk10, angle;
} func_8012B1E4_StructVec;
typedef struct func_8012B1E4_StructObj {
    u8 pad[0x2C];
    func_8012B1E4_StructVec *a, *b;
} func_8012B1E4_StructObj;
typedef struct func_8012B1E4_StructArg {
    u8 pad[0x24];
    func_8012B1E4_StructObj *obj;
    u8 pad28[4];
    u32 flags;
    u8 pad30[0x1C];
    u8 width, height, depth;
    s8 y, z;
    u8 pad51[3];
    u32 mask;
} func_8012B1E4_StructArg;


extern s32 D_8012B81C(f32, f32, f32, f32, f32, f32);
typedef struct func_8012B85C_StructData {
    u8 pad0[0x11E];
    s16 sx[9], sy[9], sz[9];
    u8 pad154[0x206];
    u8 b35A, pad35B;
    f32 f35C, f360, f364, f368, f36C, f370;
    u8 pad374[0x834];
    f32 qx[16], qy[16], qz[16], x[16], y[16], z[16];
    u32 mask;
    s32 result;
    u32 o30, o34, o38;
    s32 o3C;
} func_8012B85C_StructData;
#define B (*(func_8012B85C_StructData *)D_801BBBF0)
s32 func_8012B85C(func_8012B1E4_StructArg *arg0)
{
    f32 *coords[7];
#define px coords[2]
#define py coords[1]
#define pz coords[0]
    u16 *entry;
    f32 dx, dy, dz;
    s32 vec;
    f32 a, b;
    f32 divisor = 2.0f;

    B.result = 0;
    entry = (u16 *)D_80176020;
    dx = dz = dy = 0.0f;
    if (arg0->obj != NULL) {
        vec = (s32)arg0->obj->a;
        if (vec != 0) {
            px = (f32 *)(vec + 4);
            py = (f32 *)(vec + 8);
            pz = (f32 *)(vec + 0xC);
        } else {
            vec = (s32)arg0->obj->b;
            px = (f32 *)(vec + 4);
            py = (f32 *)(vec + 8);
            pz = (f32 *)(vec + 0xC);
        }
        for (; entry[0] != 0; entry += 2) {
            if (B.mask & entry[0]) {
            if (arg0->flags & 0x2000) {
                B.sx[entry[1]] = B.x[entry[1]];
                B.sy[entry[1]] = B.y[entry[1]];
                B.sz[entry[1]] = B.z[entry[1]];
            }
            switch (entry[0]) {
            case 1: case 2: case 4: case 8: case 0x10:
                D_8012B81C(*px, (*py + (f32)arg0->height / (f32)2) + ((s8)*(u8 *)&arg0->y), *pz,
                           B.x[entry[1]], B.y[entry[1]] - 1.0, B.z[entry[1]]);
                a = (B.f368 < 0.0f) ? -B.f368 : B.f368;
                b = (dx < 0.0f) ? -dx : dx;
                if (b < a) dx = B.f368;
                if (dy < B.f36C) dy = B.f36C;
                a = (B.f370 < 0.0f) ? -B.f370 : B.f370;
                b = (dz < 0.0f) ? -dz : dz;
                if (b < a) dz = B.f370;
                if (B.f36C != 0.0f) B.result |= entry[0];
                break;
            case 0x20: case 0x40: case 0x80: case 0x100:
                D_8012B81C(*px, (*py + (f32)arg0->height / (f32)2) + ((s8)*(u8 *)&arg0->y), *pz,
                           B.x[entry[1]], B.y[entry[1]] - 1.0, B.z[entry[1]]);
                a = (B.f368 < 0.0f) ? -B.f368 : B.f368;
                b = (dx < 0.0f) ? -dx : dx;
                if (b < a) dx = B.f368;
                a = (B.f370 < 0.0f) ? -B.f370 : B.f370;
                b = (dz < 0.0f) ? -dz : dz;
                if (b < a) dz = B.f370;
                if (B.f368 != 0.0f || B.f370 != 0.0f) B.result |= entry[0];
                if (entry[0] == 0x20) {
                    B.o30 = B.f35C;
                    B.o34 = B.f360;
                    B.o38 = B.f364;
                    B.o3C = B.b35A;
                }
                break;
            case 0x200:
                D_8012B81C(B.qx[entry[1]], B.qy[entry[1]], B.qz[entry[1]],
                           B.x[entry[1]], B.y[entry[1]] + 1.0, B.z[entry[1]]);
                if (B.f36C != 0.0f) {
                    if (B.f36C < dy) dy = B.f36C;
                    B.result |= entry[0];
                }
                break;
            }
            }
        }
    }
    if (arg0->flags & 0x200) {
        *px += dx;
        *py += dy;
        *pz += dz;
        return *(u16 *)((u8 *)&B.result + 2);
    }
    return 0;
}
