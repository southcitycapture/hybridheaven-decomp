#include "common.h"

typedef struct func_8024781C_Inner {
    u8 pad[0x40];
    f32 a;
    u8 pad2[0x4];
    f32 b;
} func_8024781C_Inner;
typedef struct func_8024781C_Struct {
    u8 pad[0xDC];
    func_8024781C_Inner *inner;
} func_8024781C_Struct;
extern func_8024781C_Struct D_801BBBF0;
extern u8 D_80258BD0[];
void func_800058DC(s32, void *);
extern void func_80020718(s32);
extern void func_8011AAF4(u8 *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern s32 func_801C2FF8();
typedef struct func_802478B4_Struct {
    f32 x, y, z;
    s16 a;
    s32 b;
    f32 w;
    s16 c;
    s16 d;
} func_802478B4_Struct;
typedef struct func_802478B4_StructState {
    u8 pad[0x1E8];
    f32 a, b, c, d, e, f;
} func_802478B4_StructState;
void func_80247A2C(s32 arg0, s32 arg1);
void func_802478B4(s32 arg0, s32 arg1) {
    func_802478B4_StructState *p;
    func_802478B4_Struct s;

    if (func_800178E8() != 0 && func_801C2FF8() != 0) {
        s.x = (-415.0f);
        s.y = 200.0f;
        s.z = 0.150000006f;
        s.w = 1.0f;
        s.a = 0x1100;
        s.b = 0x0168003E;
        s.c = 0;
        s.d = 0x78;
        D_801C2F0C(2, &s);
        p = (func_802478B4_StructState *)&D_801BBBF0;
        p->a = (-357.799988f);
        p->b = (-163.100006f);
        p->c = 217.600006f;
        p->d = (-413.5f);
        p->e = (-154.199997f);
        p->f = 186.100006f;
        func_8011AAF4(D_80258BD0, 0xBF, arg0, 0, 1, 0.0f, p->a, p->b, p->c, 0.0f, p->d, p->e, p->f, 0.0f, 35.0f, -1, -1);
        func_80020718(7);
        func_800058DC(arg0, (void *)func_80247A2C);
    }
}
