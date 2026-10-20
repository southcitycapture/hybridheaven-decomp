#include "context.h"

typedef struct func_8010F5CC_Struct {
    u8 pad[0x2C];
    struct func_8010F5CC_Struct2 *p;
} func_8010F5CC_Struct;
typedef struct func_8010F5CC_Struct2 {
    u8 pad[0x30];
    f32 f30, f34, f38, f3C, f40, f44;
} func_8010F5CC_Struct2;

s32 func_8001EF38(f32, f32);
f32 func_8002FC20(f32);
extern s16 D_801637C0;
extern s16 D_801637C4;
extern f32 D_801637CC;
extern f32 D_801637D0;
extern func_8010F5CC_Struct *D_801BBCD8;

void func_8010F5CC(void) {
    f32 dx, dy, dz, d;

    dx = D_801BBCD8->p->f3C - D_801BBCD8->p->f30;
    dy = D_801BBCD8->p->f40 - D_801BBCD8->p->f34;
    dz = D_801BBCD8->p->f44 - D_801BBCD8->p->f38;
    d = func_8002FC20(dx * dx + dz * dz);
    D_801637C0 = func_8001EF38(dz, dx) & 0x1FFF;
    if (func_8001EF38(dy, d) & 0x1000) {
        D_801637C4 = (func_8001EF38(dy, d) & 0x1FFF) - 0x2000;
    } else {
        D_801637C4 = func_8001EF38(dy, d) & 0x1FFF;
    }
    D_801637CC = d;
    D_801637D0 = func_8002FC20(dx * dx + dy * dy + dz * dz);
}
