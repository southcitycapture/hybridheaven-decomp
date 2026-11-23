#include "common.h"
struct func_801F7928_B { u8 pad0[0x30]; f32 f30; f32 f34; f32 f38; f32 f3c; f32 f40; f32 f44; };
struct func_801F7928_A { u8 pad0[0x2C]; struct func_801F7928_B *unk2C; };
extern struct func_801F7928_A *D_801BBCD8;
extern void (*D_80216D10[])(void *, s32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);


typedef struct func_801F3C90_Struct {
    u8 pad0[0x1C];
    f32 unk1C;
    u8 pad20[0x10];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_801F3C90_Struct;

#define FABS(x) ((x) < 0.0f ? -(x) : (x))

s32 func_801F3C90(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, f32 arg10, f32 arg11) {
    f32 d0;
    f32 d1;
    f32 d2;
    f32 d3;
    f32 d4;
    f32 d5;
    f32 d6;
#define p ((func_801F3C90_Struct *)D_801BBCD8->unk2C)
    d0 = (arg3 - p->unk30) * arg2;
    d1 = (arg4 - p->unk34) * arg2;
    d2 = (arg5 - p->unk38) * arg2;
    d3 = (arg7 - p->unk3C) * arg6;
    d4 = (arg8 - p->unk40) * arg6;
    d5 = (arg9 - p->unk44) * arg6;
    d6 = (arg11 - p->unk1C) * arg10;
    func_8011AAF4("/hdisk1/u/nu64/rz011_usa/main/game/source/enemy/wanderer.c", 0x1D5, (void *)arg0, 0, 1,
                  1.0f, p->unk30 + d0, p->unk34 + d1, p->unk38 + d2,
                  1.0f, p->unk3C + d3, p->unk40 + d4, p->unk44 + d5,
                  1.0f, p->unk1C + d6, -1, -1);
    if (FABS(d0) < arg1 && FABS(d1) < arg1 && FABS(d2) < arg1 && FABS(d3) < arg1 &&
        FABS(d4) < arg1 && FABS(d5) < arg1 && FABS(d6) < arg1) {
        return 1;
    }
    return 0;
}
#undef p
