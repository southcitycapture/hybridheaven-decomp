#include "common.h"

struct func_801C4848_Vec {
    u8 pad0[4];
    f32 x;
    u8 pad1[4];
    f32 y;
};

struct func_801C4848_Obj {
    u8 pad0[0x2C];
    struct func_801C4848_Vec *vec;
};

struct func_801C4848_Arg {
    u8 pad0[0x24];
    struct func_801C4848_Obj *obj;
};

extern struct func_801C4848_Obj *D_801BBCD0;
void func_8001EF38(f32, f32);

void func_801C4848(struct func_801C4848_Arg *arg0) {
    struct func_801C4848_Vec *a;
    struct func_801C4848_Vec *b;

    a = D_801BBCD0->vec;
    b = arg0->obj->vec;
    func_8001EF38(a->x - b->x, a->y - b->y);
}
