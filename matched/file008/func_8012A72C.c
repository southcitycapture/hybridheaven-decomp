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

struct func_8012A72C_Arg {
    u8 pad0[0x24];
    struct func_8012A72C_Obj *obj;
};

extern struct func_8012A72C_Obj *D_801BBCD0;
void func_8001EF38(f32, f32);

void func_8012A72C(struct func_8012A72C_Arg *arg0) {
    struct func_8012A72C_Vec *a;
    struct func_8012A72C_Vec *b;

    a = D_801BBCD0->vec;
    b = arg0->obj->vec;
    func_8001EF38(a->x - b->x, a->y - b->y);
}
