#include "context.h"

struct func_801F838C_S3 { u8 pad[4]; f32 u4; f32 u8_; f32 uC; u8 pad2[2]; s16 u12; };
struct func_801F838C_S2 { u8 pad[0x2C]; struct func_801F838C_S3 *u2C; };
struct func_801F838C_S1 { u8 pad[0x24]; struct func_801F838C_S2 *u24; };
struct func_801F838C_S0 { u8 pad[8]; struct func_801F838C_S1 *u8_; };
struct func_801F838C_V { f32 x; f32 y; f32 z; };
extern struct func_801F838C_V *D_801CFD90();
extern f32 D_801FD3C8;
#define P (*(struct func_801F838C_S0 **)&D_801DAB14)
#define Q P->u8_->u24->u2C

s32 func_801F838C(s32 arg0, s32 arg1) {
    struct func_801F838C_V *v;
    f32 a, b;

    if (func_801C0B8C(0x040F1FA0) != 0) {
        Q->u4 = D_801FD3C8;
        Q->u8_ = 0.0f;
        Q->uC = 8.0f;
        Q->u12 = 0x844;
        func_801CC470(0, 0x01B8000D, 0, 0, 1.0f);
        return 0x13;
    }
    v = D_801CFD90();
    a = v->x;
    if ((a < 0.0f ? -a : a) < 3.0) {
        Q->u4 += a;
    }
    Q->u8_ += v->y;
    b = v->z;
    if ((b < 0.0f ? -b : b) < 3.0) {
        Q->uC += b;
    }
    return 0x12;
}
