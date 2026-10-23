#include "context.h"

typedef struct func_8012A630_StructVec {
    u8 pad[4];
    f32 x, y, z;
} func_8012A630_StructVec;

typedef struct func_8012A630_StructObj {
    u8 pad[0x2C];
    func_8012A630_StructVec *a, *b;
} func_8012A630_StructObj;

typedef struct func_8012A630_StructArg {
    u8 pad[0x24];
    func_8012A630_StructObj *obj;
} func_8012A630_StructArg;

extern struct func_8012A72C_Obj *D_801BBCD0;

s32 func_8012A630(arg0, arg1)
    func_8012A630_StructArg *arg0;
    s32 arg1;
{
    f32 d;
    func_8012A630_StructObj *obj;
    func_8012A630_StructVec *a, *b;

    obj = arg0->obj;
    a = obj->a;
    if (a != NULL) {
        b = ((func_8012A630_StructObj *)D_801BBCD0)->a;
        d = (a->x - b->x) * (a->x - b->x) + (a->y - b->y) * (a->y - b->y) + (a->z - b->z) * (a->z - b->z);
        if (d < *(f32 *)&arg1 * *(f32 *)&arg1) {
            return 1;
        }
        return 0;
    }
    a = obj->b;
    b = ((func_8012A630_StructObj *)D_801BBCD0)->a;
    d = (a->x - b->x) * (a->x - b->x) + (a->y - b->y) * (a->y - b->y) + (a->z - b->z) * (a->z - b->z);
    if (d < *(f32 *)&arg1 * *(f32 *)&arg1) {
        return 1;
    }
    return 0;
}
