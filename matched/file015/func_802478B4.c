#include "context.h"

extern s32 func_801C2FF8();
extern void func_80020718(s32);
extern void func_8011AAF4(u8 *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
void func_80247A2C(s32 arg0, s32 arg1);
extern u8 D_80258BD0[];
extern f32 D_80258CFC, D_80258D00, D_80258D04, D_80258D08, D_80258D0C, D_80258D10, D_80258D14, D_80258D18;

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

void func_802478B4(s32 arg0, s32 arg1) {
    func_802478B4_StructState *p;
    func_802478B4_Struct s;

    if (func_800178E8() != 0 && func_801C2FF8() != 0) {
        s.x = D_80258CFC;
        s.y = 200.0f;
        s.z = D_80258D00;
        s.w = 1.0f;
        s.a = 0x1100;
        s.b = 0x0168003E;
        s.c = 0;
        s.d = 0x78;
        D_801C2F0C(2, &s);
        p = (func_802478B4_StructState *)&D_801BBBF0;
        p->a = D_80258D04;
        p->b = D_80258D08;
        p->c = D_80258D0C;
        p->d = D_80258D10;
        p->e = D_80258D14;
        p->f = D_80258D18;
        func_8011AAF4(D_80258BD0, 0xBF, arg0, 0, 1, 0.0f, p->a, p->b, p->c, 0.0f, p->d, p->e, p->f, 0.0f, 35.0f, -1, -1);
        func_80020718(7);
        func_800058DC(arg0, (void *)func_80247A2C);
    }
}
