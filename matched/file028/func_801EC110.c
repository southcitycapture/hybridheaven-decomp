#include "context.h"
struct func_801EC110_StructC { u8 pad0[4]; f32 x; f32 y; f32 z; };
struct func_801EC110_StructB { u8 pad[0x2C]; struct func_801EC110_StructC *c; };
struct func_801EC110_StructA { u8 pad[0x24]; struct func_801EC110_StructB *b; };
struct func_801EC110_Struct { u8 pad[8]; struct func_801EC110_StructA *a; };
extern s32 func_801D2C5C(s32, s32);
extern void func_8038D33C(f32, f32, s32, s32, f32, f32);
extern f32 D_802089D4;
#define ROOT ((struct func_801EC110_Struct *)D_801DAB14)

s32 func_801EC110(s32 arg0, s32 arg1) {
    s32 v = D_80206298;
    if (v == 0) goto c0;
    if (v == 1) goto c1;
    if (v == 2) goto c2;
    return 7;
c0:
    func_801CC4D8(0, 0x0320001B, 0, 0, 6.0f);
    D_80206298 = 1;
    goto end;
c1:
    if (func_801D2C00() == 0) {
        func_801CC470(0, 0x0320001B, 0, 0x100, 3.0f);
        D_80206298 = 2;
    }
    goto end;
c2:
    if ((f64)ROOT->a->b->c->z < -30.0) {
        return 8;
    }
    if (func_801D2C5C(0x0320001B, 0) != 0 || func_801D2C5C(0x0320001B, 0x12) != 0) {
        func_8038D33C(ROOT->a->b->c->x, ROOT->a->b->c->y, *(s32 *)&ROOT->a->b->c->z, 0x4A1, D_802089D4, 1.0f);
    }
end:
    return 7;
}
