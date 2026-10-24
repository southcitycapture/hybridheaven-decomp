#include "context.h"

typedef struct func_8024C028_StructPos {
    u8 pad[4];
    f32 x, y, z;
} func_8024C028_StructPos;
typedef struct func_8024C028_StructObj {
    u8 pad[0x2C];
    func_8024C028_StructPos *pos;
} func_8024C028_StructObj;
typedef struct func_8024C028_StructGlobal {
    u8 pad[0xE0];
    func_8024C028_StructObj *obj;
    u8 padE4[0x1E8 - 0xE4];
    f32 x, y, z, tx, ty, tz;
    u8 pad200[0xBA2 - 0x200];
    u8 flag;
} func_8024C028_StructGlobal;
typedef struct func_8024C028_StructArg {
    u8 pad[0x22];
    u8 flag;
} func_8024C028_StructArg;
extern void func_801FBB20(void);
extern u8 D_80259484[];
extern u8 D_802594C4[];
extern f64 D_80259718;
extern f64 D_80259720;
#define G ((func_8024C028_StructGlobal *)&D_801BBBF0)

void func_8024C028(void *arg0, func_8024C028_StructArg **arg1) {
    f32 padding;
    f32 sp68;
    f32 y;
    f32 z;
    f32 x;
    f32 diff;
    f64 factor1;
    f64 factor;

    factor1 = D_80259718;
    factor = D_80259720;
    y = G->y;
    z = G->z;
    G->x = (f64)G->x + (f64)(G->obj->pos->x - G->x) * factor1;
    G->y = (f64)y + (f64)((G->obj->pos->y + 20.0f) - y) * factor1;
    G->z = (f64)z + (f64)((G->obj->pos->z - 40.0f) - z) * factor1;
    G->tx = (f64)G->tx + (f64)(G->obj->pos->x - G->tx) * factor;
    G->ty = (f64)G->ty + (f64)((G->obj->pos->y + 17.0f) - G->ty) * factor;
    sp68 = G->tz;
    G->tz = (f64)sp68 + (f64)(G->obj->pos->z - sp68) * factor;
    func_8011AAF4(D_80259484, 0x188, arg0, 0, 1, 0.0f, G->x, G->y, G->z, 0.0f, G->tx, G->ty, G->tz, 0.0f, 35.0f, -1, -1);
    x = G->obj->pos->x;
    if (x < G->x) {
        diff = -(x - G->x);
    } else {
        diff = x - G->x;
    }
    if ((s32)diff == 0) {
        func_8011AAF4(D_802594C4, 0x18E, arg0, 2, 1, 0.0f, G->x, G->y, G->z, 0.0f, G->tx, G->ty, G->tz, 0.0f, 35.0f, -1, -1);
        func_801C2F0C(1, NULL);
        func_801FBB20();
        (*arg1)->flag = 0;
        G->flag = 0;
        func_800058DC(arg0, func_8024C2F4);
    }
}
