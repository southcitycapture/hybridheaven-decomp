#include "context.h"

extern f32 D_80258D70;
extern f32 D_80258D74;
extern f32 D_80258D78;
extern s32 D_801C2F0C(s32, void *);
void func_80248108(s32 arg0, s32 arg1);

struct func_8024806C_Struct {
    s16 a;
    s32 b;
    f32 c;
    s16 d;
    u8 pad[0x10];
};

struct func_8024806C_StructGlobal {
    u8 pad[0x1E8];
    f32 x, y, z;
};

struct func_8024806C_StructArg {
    u8 pad[0x3C];
    s16 state;
};

#define G ((struct func_8024806C_StructGlobal *)&D_801BBBF0)

void func_8024806C(struct func_8024806C_StructArg *arg0, s32 arg1) {
    struct func_8024806C_Struct data;

    if (func_801C3044() == 0) {
        data.a = 0x1100;
        data.b = 0x0348007A;
        data.d = 0x14;
        data.c = 5.0f;
        D_801C2F0C(5, &data.a);
        arg0->state = 0;
        G->x = D_80258D70;
        G->y = D_80258D74;
        G->z = D_80258D78;
        func_800058DC((s32)arg0, func_80248108);
    }
}
