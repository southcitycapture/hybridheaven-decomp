#include "context.h"

typedef struct func_801ED1F4_StructPos {
    u8 pad[4];
    f32 x, y, z;
} func_801ED1F4_StructPos;
typedef struct func_801ED1F4_StructObj {
    u8 pad[0x2C];
    func_801ED1F4_StructPos *pos;
} func_801ED1F4_StructObj;
typedef struct func_801ED1F4_StructGlobal {
    u8 pad[0xE0];
    func_801ED1F4_StructObj *obj;
    u8 pad2[0x230 - 0xE4];
    u8 flag;
} func_801ED1F4_StructGlobal;
extern s32 func_80010550(s32, void *);
extern void func_801E6BCC(s32, s32, void *, u16);

extern u8 D_801CBBF0[];

#define FUNC_801ED1F4_G ((func_801ED1F4_StructGlobal *)(D_801CBBF0 - 0x10000))

void func_801ED1F4(s32 arg0, s32 arg1, u8 *arg2) {
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    func_801E74DC_Sub sp20;
    u16 sp1E;
    func_801ED1F4_StructPos *temp_v0;
    u8 *p;

    temp_v0 = FUNC_801ED1F4_G->obj->pos;
    sp2C = temp_v0->x;
    sp30 = temp_v0->y;
    sp34 = temp_v0->z;
    sp1E = func_80010550(arg1, arg2);
    FUNC_801ED1F4_G->obj->pos->x = sp2C;
    FUNC_801ED1F4_G->obj->pos->y = sp30;
    FUNC_801ED1F4_G->obj->pos->z = sp34;
    FUNC_801ED1F4_G->flag = 1;
    p = *(u8 **)&arg2;
    *(s16 *)(p + 0x22) = 0;
    p += 0x1C;
    func_8013A28C(arg1, *(func_801E74DC_Sub *)p);
    func_801E6BCC(arg0, arg1, arg2, sp1E);
}

#undef FUNC_801ED1F4_G
