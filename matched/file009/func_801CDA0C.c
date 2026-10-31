#include "common.h"
extern u8 D_8008DA88[];
typedef struct func_801CDCE4_StructResource {
    u8 pad[4];
    s32 *data;
} func_801CDCE4_StructResource;
extern func_801CDCE4_StructResource *D_80171CEC[];
extern s32 func_80006088(s32);
extern s32 func_80006214(void *);
typedef struct func_801CDCE4_StructPair {
    u16 id;
    u16 index;
} func_801CDCE4_StructPair;
typedef struct func_801CE1C8_StructB {
    u8 pad0[0x2C];
    s32 unk2C;
    s32 unk30;
    u8 pad34[0x18];
    u16 unk4C;
    u16 unk4E;
    u8 pad50[0x10];
    f32 unk60;
    f32 unk64;
    f32 unk68;
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    u8 unk78[16];
    f32 unk88;
    s32 unk8C;
    u16 unk90;
    u16 unk92;
    u8 unk94;
    u8 unk95;
    u8 unk96;
    u8 unk97;
} func_801CE1C8_StructB;
typedef struct func_801D35BC_StructPos {
    u8 pad[4];
    f32 x, y, z;
} func_801D35BC_StructPos;
typedef struct func_801D35BC_StructObj {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_801D35BC_StructPos *unk30;
} func_801D35BC_StructObj;


typedef struct func_801CDA0C_StructWork {
    f32 x, y, z;
    s16 rx, ry, rz;
    u8 pad12[2];
    s32 flags;
    u16 id;
    u8 pad1A[2];
    s32 value;
    u16 index;
    u8 pad22[14];
    f32 sx, sy, sz;
    u8 pad3C[4];
} func_801CDA0C_StructWork;
typedef struct func_801CDA0C_StructDesc {
    s32 a, b;
    s16 flags;
    u8 padA[2];
    func_801CDA0C_StructWork *work;
} func_801CDA0C_StructDesc;
typedef struct func_801CDA0C_StructOut {
    u8 pad0[0x30];
    s32 texture;
    u8 pad34[0x14];
    u8 color[8];
} func_801CDA0C_StructOut;
extern u8 func_80146088(void *, void *, s32);
extern u8 D_801E0DA0[];
extern u8 D_801E0E00[];
extern func_801CDA0C_StructDesc D_801E13AC;
extern func_801CDA0C_StructWork D_801E4090[];
extern func_801CDA0C_StructDesc D_801E4890[];

s32 func_801CDA0C(void *arg0, u16 arg1, s32 arg2, s32 arg3) {
    s32 flags;
    func_801CDCE4_StructPair *data;
    s32 result;
    register u16 id, index;
    func_801CDA0C_StructDesc *desc;
    func_801CDA0C_StructWork *work;
    s32 texture;
    s32 bits;
    u8 count;
    s32 i;
    s32 j;
    struct func_801D35BC_StructObj **entry;
    func_801CDA0C_StructOut *out;

#define in ((func_801CE1C8_StructB *)arg0)
    bits = in->unk96;
    data = *(func_801CDCE4_StructPair **)D_80171CEC[arg1];
    desc = D_801E4890;
    work = D_801E4090;
    result = 0;
    flags = 0x30F;
    id = data->id;
    index = data->index;
    do {} while (0);
    if (bits & 2) {
        flags = 0x8030F;
    } else if (bits & 1) {
        flags = 0x6030F;
    }
    if (bits & 4) {
        texture = (s32)D_801E0E00 | 0x40000000;
    } else {
        texture = (s32)D_801E0DA0 | 0x40000000;
    }
    if (in->unk94 > 32) {
        in->unk94 = 32;
    }
    for (i = 0; i < in->unk94; i++) {
        work->x = in->unk6C;
        work->y = in->unk70;
        work->z = in->unk74;
        work->rz = 0;
        work->rx = work->ry = work->rz;
        work->id = id;
        work->index = index;
        work->value = arg2;
        work->flags = flags;
        work->sx = in->unk60;
        work->sy = in->unk64;
        work->sz = in->unk68;
        *desc = D_801E13AC;
        if (in->unk96 & 8) {
            desc->flags = 0x40;
        } else {
            desc->flags = 0x1000;
        }
        desc->work = work;
        bits = func_80146088(in, desc, arg3);
        result = (u8)(result + bits);
        if (result != 0) {
            if (i > 0) {
                func_80006214(in);
                for (j = 0; j < i; j++) {
                    func_80006088(((s32 *)D_8008DA88)[j]);
                }
            }
            return result;
        }
        work++;
        desc++;
    }
    i = 0;
    func_80006214(in);
    for (entry = (struct func_801D35BC_StructObj **)D_8008DA88; i < in->unk94; i++, entry++) {
        out = (func_801CDA0C_StructOut *)(*entry)->unk30;
        out->texture = texture;
        out->color[0] = in->unk78[0];
        out->color[1] = in->unk78[1];
        out->color[2] = in->unk78[2];
        out->color[3] = in->unk78[3];
        out->color[4] = in->unk78[8];
        out->color[5] = in->unk78[9];
        out->color[6] = in->unk78[10];
        out->color[7] = in->unk78[11];
    }
    return result;
}
