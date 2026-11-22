#include "common.h"

extern u8 D_801DAB14[];
struct func_801E4D04_StructData {
    u8 pad[4];
    f32 x, y, z;
    u8 pad10[2];
    s16 angle;
};
struct func_801E4D04_StructObj {
    u8 pad[0x2C];
    struct func_801E4D04_StructData *data;
};
struct func_801E4D04_StructMid {
    u8 pad[0x24];
    struct func_801E4D04_StructObj *obj;
};
struct func_801E4D04_StructNode {
    u8 pad[8];
    struct func_801E4D04_StructMid *mid;
};
#define NODE (*(struct func_801E4D04_StructNode **)D_801DAB14)
extern f64 func_80034C24();
extern s32 func_801C0DE4(s32 arg0, s32 arg1, s32 arg2);
extern void func_801C0EB0(s32 arg0, s32 arg1);
extern u64 func_801C0F18(s32 arg0, s32 arg1);
void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 time);
extern s32 func_801CE2D0(s32 arg0, s32 arg1);
extern void func_8038D33C(f32, f32, f32, s32, f32, f32);
s32 func_801E4D04(s32 arg0, s32 arg1) {
    f32 t;
    struct func_801E4D04_StructData *data;

    if (func_801C0DE4(4, 0, 0x40133334)) {
        func_801C0EB0(4, 0);
        NODE->mid->obj->data->x = -46.0f;
        NODE->mid->obj->data->y = 8.0f;
        NODE->mid->obj->data->z = 58.0f;
        NODE->mid->obj->data->angle = 0x1BD2;
        func_801CC470(0, 0x0348005F, 0, 1, 1.0f);
        return 0x10;
    }
    t = (f32)(func_80034C24(func_801C0F18(4, 0)) / 1000000.0) / 2.30000019f;
    NODE->mid->obj->data->x = t * (-41.2999992f) + 9.0f;
    NODE->mid->obj->data->z = t * 35.2000008f + -2.0f;
    if (func_801CE2D0(0x01680040, 9) || func_801CE2D0(0x01680040, 0x12)) {
        data = NODE->mid->obj->data;
        func_8038D33C(data->x, data->y, data->z, 0x677, 1.20000005f, 1.0f);
    }
    return 0xF;
}
