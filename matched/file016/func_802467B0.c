#include "context.h"

typedef struct func_802467B0_StructInner {
    u8 pad[0x30];
    f32 x;
    f32 y;
    f32 z;
} func_802467B0_StructInner;

typedef struct func_802467B0_StructOuter {
    u8 pad[0x2C];
    func_802467B0_StructInner *inner;
} func_802467B0_StructOuter;

extern func_802467B0_StructOuter *D_801BBCD8;
extern f32 D_8024F100;
extern f32 func_8012FFDC(f32, f32, f32, f32, f32, f32);
extern void func_800207A0(u16, s32);

void func_802467B0(f32 arg0, f32 arg1, s32 arg2, s32 arg3) {
    func_802467B0_StructInner *p;
    s32 value;

    p = D_801BBCD8->inner;
    value = (s32)(255.0f - func_8012FFDC(arg0, arg1, *(f32 *)&arg2, p->x, p->y, p->z) * D_8024F100);
    if (value > 0) {
        func_800207A0((u16)arg3, value & 0xFF);
    }
}
