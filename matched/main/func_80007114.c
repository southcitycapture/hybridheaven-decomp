#include "context.h"

typedef struct func_80007114_StructVec {
    f32 x, y, z;
} func_80007114_StructVec;

struct func_80007114_StructData {
    u8 pad0[0x70];
    f32 speed;
    u8 pad74[0x24];
    func_80007114_StructVec pos;
};
struct func_80007114_StructObject {
    u8 pad0[0x2C];
    struct func_80007114_StructData *data;
};
struct func_80007114_Struct {
    struct func_80007114_StructObject *object;
    func_80007114_StructVec points[10];
    f32 distance;
    s8 count;
};

extern f32 D_800075B4(func_80007114_StructVec, func_80007114_StructVec);
#define arg1 org.x
#define arg2 org.y
#define arg3 org.z
void func_80007114(arg0, org)
    struct func_80007114_Struct *arg0;
    func_80007114_StructVec org;
{
    func_80007114_StructVec pos;
    func_80007114_StructVec delta;
    func_80007114_StructVec zero;
    s8 i;

    zero.z = 0.0f;
    zero.y = 0.0f;
    zero.x = 0.0f;
    pos = arg0->object->data->pos;
    delta.x = pos.x - arg1;
    delta.y = pos.y - arg2;
    delta.z = pos.z - arg3;
    arg0->distance = D_800075B4(delta, zero);
    arg0->count = (s32)((f64)(arg0->distance / arg0->object->data->speed) + 0.5) - 1;
    if (arg0->count <= 0) {
        arg0->count = 1;
    } else if (arg0->count >= 11) {
        arg0->count = 10;
    }
    i = 0;
    delta.x /= arg0->count + 1;
    delta.y /= arg0->count + 1;
    delta.z /= arg0->count + 1;
    for (; i < arg0->count; i++) {
        arg0->points[i].x = (f32)(i + 1) * delta.x + arg1;
        arg0->points[i].y = (f32)(i + 1) * delta.y + arg2;
        arg0->points[i].z = (f32)(i + 1) * delta.z + arg3;
    }
}
#undef arg1
#undef arg2
#undef arg3
