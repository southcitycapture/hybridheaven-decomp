#include "context.h"

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_8001EF38(f32, f32);
typedef struct func_80135E60_Inner { u8 pad0[4]; f32 x; u8 pad8[4]; f32 z; u8 pad10[2]; s16 ang; } func_80135E60_Inner;
typedef struct func_80135E60_Mid { u8 pad0[0x30]; func_80135E60_Inner *p30; } func_80135E60_Mid;
typedef struct func_80135E60_Obj { u8 pad0[0x24]; func_80135E60_Mid *p24; u8 pad28[4]; func_80135E60_Inner *p2C; } func_80135E60_Obj;
extern func_80135E60_Obj *D_801BBCD0;
#define O ((func_80135E60_Obj *)a0)

s32 func_80135E60(void *a0, f32 arg1, s32 arg2, s32 arg3) {
    u8 pad[8];
    f32 sp1C;
    s16 d;
    s32 v;
    f32 n;
    f32 c;

    if (func_8012A630(a0, arg1) == 0) {
        return 0;
    }
    sp1C = func_8001EAD0(O->p24->p30->ang);
    c = func_8001EB64(O->p24->p30->ang);
    n = -*(f32 *)&arg3;
    d = func_8001EF38(D_801BBCD0->p2C->x - (sp1C * n + O->p24->p30->x),
                      D_801BBCD0->p2C->z - (c * n + O->p24->p30->z)) - O->p24->p30->ang;
    if (d & 0x1000) {
        d = (d & 0x1FFF) - 0x2000;
    } else {
        d = d & 0x1FFF;
    }
    v = d < 0 ? -d : d;
    if (v >= 0x201) return 0;
    if ((u8)arg2 == 0) {
        d = D_801BBCD0->p2C->ang - O->p24->p30->ang + 0x1000;
        if (d & 0x1000) {
            d = (d & 0x1FFF) - 0x2000;
        } else {
            d = d & 0x1FFF;
        }
        v = d < 0 ? -d : d;
        if (v >= 0x401) return 0;
    }
    return 1;
}
