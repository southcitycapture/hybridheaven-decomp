#include "context.h"

extern f32 func_8001EAD0(s32);
extern f32 func_8001EB64(s32);
extern void func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern u8 D_801E2BC4[];
extern s16 D_8001EF38(f32, f32);
struct func_801C4058_Struct {
    u8 pad0[0x2C];
    struct func_801C4058_Node *n;
};
struct func_801C4058_Node {
    u8 pad0[0x30];
    f32 u30, u34, u38, u3C, u40, u44;
};
extern struct func_801C4058_Struct *D_801BBCD8;

void func_801C4058(s32 arg0, f32 arg1, f32 arg2, s16 arg3) {
    s16 a;
    f32 dx, dz, d;
    s32 b;
    f32 c;
    struct func_801C4058_Node *n;
    s32 pad;
    f32 s;

    n = D_801BBCD8->n;
    dx = n->u30 - n->u3C;
    dz = n->u38 - n->u44;
    a = D_8001EF38(dx, dz) + arg3;
    a &= 0x1FFF;
    d = func_8002FC20(dx * dx + dz * dz) + arg2;
    b = a * 1;
    s = func_8001EAD0(b);
    c = func_8001EB64(b);
    func_8011AAF4(D_801E2BC4, 0x1B6, arg0, 0, 1, 0.0f, s * d + D_801BBCD8->n->u3C, D_801BBCD8->n->u34 + arg1, c * d + D_801BBCD8->n->u44, 0.0f, D_801BBCD8->n->u3C, D_801BBCD8->n->u40, D_801BBCD8->n->u44, 0.0f, 35.0f, -1, -1);
}
