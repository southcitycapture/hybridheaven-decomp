#include "common.h"
typedef struct func_801DB868_StructGlobal {
    u8 pad[0xDC];
    s32 unkDC;
    u8 pad2[0x1031 - 0xE0];
    u8 unk1031;
} func_801DB868_StructGlobal;
extern func_801DB868_StructGlobal D_801BBBF0;


typedef struct func_801DBEE4_StructVec { f32 x, y, z; } func_801DBEE4_StructVec;
typedef struct func_801DBEE4_StructObj {
    u8 pad[0xA4];
    func_801DBEE4_StructVec pos;
    f32 b0, b4, b8, bc, c0, c4;
} func_801DBEE4_StructObj;
typedef struct func_801DBEE4_StructArg {
    u8 pad[0x5C];
    func_801DBEE4_StructObj *obj;
} func_801DBEE4_StructArg;
typedef struct func_801DBEE4_StructModel {
    u8 pad[4];
    f32 x, y, z;
    u8 pad2[2];
    s16 angle;
} func_801DBEE4_StructModel;
typedef struct func_801DBEE4_StructElem {
    u8 pad[0x2C];
    func_801DBEE4_StructModel *model;
} func_801DBEE4_StructElem;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern f32 func_8002FC20(f32);
extern s32 func_80108480(f32, f32, f32, f32, f32, f32);
extern f32 D_801E3D10;
extern f64 D_801E3D18;

s32 func_801DBEE4(func_801DBEE4_StructArg *arg0, func_801DBEE4_StructElem **arg1) {
    s32 i;
    u8 hit;
    func_801DBEE4_StructVec pos;
    s32 test;
    func_801DBEE4_StructObj *obj;
    func_801DBEE4_StructModel *model;
    func_801DBEE4_StructVec best;
    func_801DBEE4_StructVec delta;
    f32 maxdist;
    f32 dist;
    f32 cosine;
    f32 sine;
    f32 x, y, z;
    f32 dx, dz;
    f32 a, b;
    f32 len = 2.0f, factor;
#define ex dx
#define ey b

    obj = arg0->obj;
    model = (*arg1)->model;
    pos = obj->pos;
    sine = func_8001EAD0(model->angle);
    cosine = func_8001EB64(model->angle);
    hit = 0;
    i = 0;
    if (D_801BBBF0.unk1031 < 5) return 0;
    maxdist = 0.0f;
    do {
        pos = obj->pos;
        x = model->x;
        y = model->y;
        z = model->z;
        switch (i) {
        case 0:
            b = (obj->c4 + obj->b8) / len;
            a = obj->b0;
            break;
        case 1:
            b = (obj->c4 + obj->b8) / len;
            a = obj->bc;
            break;
        case 2:
            a = (obj->bc + obj->b0) / len;
            b = obj->b8;
            break;
        case 3:
        default:
            a = (obj->bc + obj->b0) / len;
            b = obj->c4;
            break;
        }
        dx = a * cosine + b * sine;
        dz = -a * sine + b * cosine;
        pos.x += dx;
        x += dx;
        pos.z += dz;
        z += dz;
        pos.y += 5.0;
        y += 5.0;
        test = func_80108480(pos.x, pos.y, pos.z, x, y, z);
        i++;
        if (test) {
            ex = *(f32 *)((u8 *)&D_801BBBF0 + 0x380) - pos.x;
            ey = *(f32 *)((u8 *)&D_801BBBF0 + 0x384) - pos.y;
            hit = 1;
            delta.z = *(f32 *)((u8 *)&D_801BBBF0 + 0x388) - pos.z;
            delta.y = ey;
            delta.x = ex;
            dist = ex*ex + ey*ey + delta.z*delta.z;
            if (maxdist < dist) {
                maxdist = dist;
                best = delta;
            }
        }
    } while (i != 4);
    if (hit == 0) return 0;
    len = func_8002FC20(dist);
    if ((f64)len <= 1.0) len = D_801E3D10;
    factor = 1.0 - D_801E3D18 / (f64)len;
    model->x = obj->pos.x + delta.x * factor;
    model->y = obj->pos.y + delta.y * factor;
    model->z = obj->pos.z + delta.z * factor;
    return 1;
}
