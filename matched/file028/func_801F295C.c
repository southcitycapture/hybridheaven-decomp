#include "context.h"

struct func_801F295C_StructB {
    u8 pad0[4];
    f32 f4;
    f32 f8;
    f32 fC;
    u8 pad10[2];
    s16 s12;
    u8 pad14[0x10];
    s32 s24;
    u8 pad28[8];
    s32 s30;
    u8 pad34[0x14];
    u8 b48;
    u8 b49;
    u8 b4A;
    u8 b4B;
};
struct func_801F295C_StructA {
    u8 pad0[0x30];
    struct func_801F295C_StructB *p30;
};
#define P(i) ((*(struct func_801F295C_StructA ***)&D_8038D8D0)[i]->p30)

s32 func_801F295C(s32 arg0, s32 arg1) {
    func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    func_80005E44(D_8038D8CC, D_8038D89C);
    func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    func_80005E44(D_8038D8CC, D_8038D89C);
    func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    func_80006214(D_8038D8CC);
    func_8012C89C(D_8038D8CC, 0, 0x2D9, 0);
    func_8012C89C(D_8038D8CC, 1, 0x2D9, 1);
    func_8012C89C(D_8038D8CC, 2, 0x2D7, 0);
    func_8012C89C(D_8038D8CC, 3, 0x2D9, 2);
    func_8012C89C(D_8038D8CC, 4, 0x2D9, 3);
    func_8012C89C(D_8038D8CC, 5, 0x2D7, 0);
    func_8012C89C(D_8038D8CC, 6, 0x2D9, 4);
    P(0)->f4 = 22.0f;
    P(0)->f8 = 0.0f;
    P(0)->fC = -28.0f;
    P(0)->s12 = 0;
    P(1)->f4 = 22.0f;
    P(1)->f8 = 0.0f;
    P(1)->fC = -28.0f;
    P(1)->s12 = 0x1000;
    P(2)->f4 = 22.0f;
    P(2)->f8 = 0.0f;
    P(2)->fC = -28.0f;
    P(2)->s12 = 0x1E00;
    P(2)->s30 = (s32)D_801D9110 | 0x40000000;
    P(2)->s24 = 0x100;
    P(2)->b48 = 0x66;
    P(2)->b49 = 0xE5;
    P(2)->b4A = 0xE5;
    P(2)->b4B = 0x7F;
    P(3)->f4 = -22.0f;
    P(3)->f8 = 0.0f;
    P(3)->fC = -28.0f;
    P(3)->s12 = 0;
    P(4)->f4 = -22.0f;
    P(4)->f8 = 0.0f;
    P(4)->fC = -28.0f;
    P(4)->s12 = 0;
    P(5)->f4 = -22.0f;
    P(5)->f8 = 0.0f;
    P(5)->fC = -28.0f;
    P(5)->s12 = 0x200;
    P(5)->s30 = (s32)D_801D9110 | 0x40000000;
    P(5)->s24 = 0x100;
    P(5)->b48 = 0x66;
    P(5)->b49 = 0xE5;
    P(5)->b4A = 0xE5;
    P(5)->b4B = 0x7F;
    P(6)->f4 = 0.0f;
    P(6)->f8 = 0.0f;
    P(6)->fC = 0.0f;
    P(6)->s12 = 0;
    return 2;
}
