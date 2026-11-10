#include "common.h"
extern u16 D_8017BC7C[];


typedef struct func_8013A334_StructVec { f32 x, y, z; } func_8013A334_StructVec;
typedef struct func_8013A334_StructObj {
    u8 pad[0x1C];
    f32 *matrix;
    u8 pad20[0xC];
    f32 *position;
} func_8013A334_StructObj;
typedef struct func_8013A334_StructInput {
    u8 pad[0xE];
    u16 id;
    s32 index;
} func_8013A334_StructInput;
typedef struct func_8013A334_StructData {
    u16 *id;
    func_8013A334_StructVec **vectors;
} func_8013A334_StructData;
extern func_8013A334_StructData *D_80171CEC[];
extern func_8013A334_StructVec D_8017BCC0;
extern func_8013A334_StructVec *func_8000522C(u16, func_8013A334_StructVec *, func_8013A334_StructVec *, u16);
extern void func_8000B67C(void *, f32 *);

func_8013A334_StructVec *func_8013A334(func_8013A334_StructVec *arg0, func_8013A334_StructObj **arg1, func_8013A334_StructInput *arg2, u16 arg3) {
    func_8013A334_StructData *data;
    func_8013A334_StructVec **vecs;
    func_8013A334_StructVec *base;
    f32 matrix[4][4];
    func_8013A334_StructVec vec;
    func_8013A334_StructVec result = D_8017BCC0;
    f32 *ptr;
    u16 id;

    id = arg2->id & 0xFFF;
    if (arg1[0]->matrix == NULL) { *arg0 = result; return arg0; }
    if (arg3 >= 25) {
        data = D_80171CEC[id];
        vecs = data->vectors;
        base = vecs[arg2->index];
        vec = *func_8000522C(*data->id, &base[(s32)arg3 - 1], base, arg3);
        if (arg1[D_8017BC7C[arg3]]->matrix == NULL) { *arg0 = result; return arg0; }
        func_8000B67C(arg1[D_8017BC7C[arg3]]->matrix, &matrix[0][0]);
        result.x = matrix[0][0] * vec.x + matrix[1][0] * vec.y + matrix[2][0] * vec.z + matrix[3][0];
        result.y = matrix[0][1] * vec.x + matrix[1][1] * vec.y + matrix[2][1] * vec.z + matrix[3][1];
        result.z = matrix[0][2] * vec.x + matrix[1][2] * vec.y + matrix[2][2] * vec.z + matrix[3][2];
    } else if (arg3) {
        if (arg1[arg3]->matrix == NULL) { *arg0 = result; return arg0; }
        func_8000B67C(arg1[arg3]->matrix, &matrix[0][0]);
        result.x = matrix[3][0];
        result.y = matrix[3][1];
        result.z = matrix[3][2];
    } else {
        ptr = arg1[arg3]->position;
        result.x = ptr[1];
        result.y = ptr[2];
        result.z = ptr[3];
    }
    *arg0 = result;
    return arg0;
}
