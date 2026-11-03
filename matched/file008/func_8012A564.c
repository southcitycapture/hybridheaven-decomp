#include "common.h"
struct func_8012A72C_Vec {
    u8 pad0[4];
    f32 x;
    u8 pad1[4];
    f32 y;
};
struct func_8012A72C_Obj {
    u8 pad0[0x2C];
    struct func_8012A72C_Vec *vec;
};
extern struct func_8012A72C_Obj *D_801BBCD0;
typedef struct func_8012AE54_StructVec {
    u8 pad0[4];
    f32 x;
    u8 pad1[4];
    f32 y;
} func_8012AE54_StructVec;
typedef struct func_8012AE54_StructObj {
    u8 pad0[0x2C];
    func_8012AE54_StructVec *unk2C;
    func_8012AE54_StructVec *unk30;
} func_8012AE54_StructObj;
typedef struct func_8012AE54_StructArg {
    u8 pad0[0x24];
    func_8012AE54_StructObj *unk24;
} func_8012AE54_StructArg;


s32 func_8012A564(func_8012AE54_StructArg *arg0, f32 arg1) {
    func_8012AE54_StructObj *obj;
    func_8012AE54_StructVec *v;
    f32 d;

    obj = arg0->unk24;
    v = obj->unk2C;
    if (v != NULL) {
        d = (v->x - D_801BBCD0->vec->x) * (v->x - D_801BBCD0->vec->x) +
            (v->y - D_801BBCD0->vec->y) * (v->y - D_801BBCD0->vec->y);
        if (d) {
        }
        if (arg1 * arg1 > d) {
            return 1;
        }
        return 0;
    }
    v = obj->unk30;
    d = (v->x - D_801BBCD0->vec->x) * (v->x - D_801BBCD0->vec->x) +
        (v->y - D_801BBCD0->vec->y) * (v->y - D_801BBCD0->vec->y);
    if (d) {
    }
    if (arg1 * arg1 > d) {
        return 1;
    }
    return 0;
}
