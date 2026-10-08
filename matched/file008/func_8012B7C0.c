#include "context.h"

typedef struct func_8012B7C0_Vec {
    u8 pad0[4];
    f32 x;
    f32 y;
    f32 z;
} func_8012B7C0_Vec;

typedef struct func_8012B7C0_Obj {
    u8 pad0[0x2C];
    func_8012B7C0_Vec *vecA;
    func_8012B7C0_Vec *vecB;
} func_8012B7C0_Obj;

typedef struct func_8012B7C0_Arg {
    u8 pad0[0x24];
    func_8012B7C0_Obj *obj;
    u8 pad1[0x4];
    u32 flags;
    u8 pad2[0x48];
    f32 outX;
    f32 outY;
    f32 outZ;
} func_8012B7C0_Arg;

void func_8012B7C0(func_8012B7C0_Arg *arg0) {
    func_8012B7C0_Obj *temp_v0;
    func_8012B7C0_Vec *var_v1;
    f32 var_fv0;
    f32 var_fv1;
    f32 var_fa0;

    if (arg0->flags & 0x400) {
        temp_v0 = arg0->obj;
        if (temp_v0 != NULL) {
            var_v1 = temp_v0->vecA;
            if (var_v1 != NULL) {
                var_fv0 = var_v1->x;
                var_fv1 = var_v1->y;
                var_fa0 = var_v1->z;
            } else {
                var_v1 = temp_v0->vecB;
                var_fv0 = var_v1->x;
                var_fv1 = var_v1->y;
                var_fa0 = var_v1->z;
            }
            arg0->outX = var_fv0;
            arg0->outY = var_fv1;
            arg0->outZ = var_fa0;
        }
    }
}
