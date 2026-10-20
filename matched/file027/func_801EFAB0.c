#include "context.h"
struct func_801EFAB0_S1 { u8 pad0[4]; f32 x; f32 y; f32 z; u8 pad1[2]; s16 h; u8 pad2[4]; f32 a; f32 b; f32 c; };
struct func_801EFAB0_S0 { u8 pad[0x30]; struct func_801EFAB0_S1 *p; };
#define Q(i) ((struct func_801EFAB0_S0 **)D_8038D8D0)[i]->p
extern f32 D_801F5A24;
extern f32 D_801F5A28;

s32 func_801EFAB0(s32 arg0, s32 arg1) {
    s32 i;
    for (i = 0; i != 8; i++) {
        func_80005E44(D_8038D8CC, D_8038D88C);
    }
    func_80006214(D_8038D8CC);
    func_8012C89C(D_8038D8CC, 0, 0x2D2, 0);
    func_8012C89C(D_8038D8CC, 1, 0x2D4, 0);
    func_8012C89C(D_8038D8CC, 2, 0x2D4, 1);
    func_8012C89C(D_8038D8CC, 3, 0x2D4, 2);
    func_8012C89C(D_8038D8CC, 4, 0x2D4, 3);
    func_8012C89C(D_8038D8CC, 5, 0x2D4, 5);
    func_8012C89C(D_8038D8CC, 6, 0x2D4, 6);
    func_8012C89C(D_8038D8CC, 7, 0x2D3, 1);
    Q(0)->x = 0.0f; Q(0)->y = 0.0f; Q(0)->z = -42.0f; Q(0)->h = 0;
    Q(1)->x = 0.0f; Q(1)->y = 0.0f; Q(1)->z = -42.0f; Q(1)->h = 0;
    Q(2)->x = 0.0f; Q(2)->y = 0.0f; Q(2)->z = -42.0f; Q(2)->h = 0;
    Q(3)->x = 5120.0f; Q(3)->y = 0.0f; Q(3)->z = 0.0f; Q(3)->h = 0;
    Q(4)->x = 5120.0f; Q(4)->y = 0.0f; Q(4)->z = 0.0f; Q(4)->h = 0;
    Q(5)->x = 5120.0f; Q(5)->y = 0.0f; Q(5)->z = 0.0f; Q(5)->h = 0;
    Q(6)->x = 5120.0f; Q(6)->y = 0.0f; Q(6)->z = 0.0f; Q(6)->h = 0;
    Q(7)->x = 0.0f; Q(7)->y = 0.0f; Q(7)->z = 44.0f; Q(7)->h = 0x1000;
    Q(7)->a = D_801F5A24;
    Q(7)->b = D_801F5A28;
    Q(7)->c = 1.0f;
    return 2;
}
