#include "common.h"
extern void func_8038D28C(s32 arg0);


extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801E3B38;
extern f32 D_801E3B3C;
extern f32 D_801E3B40;
extern f32 D_801E3B44;
extern f32 D_801E3B48;
extern f32 D_801E3B4C;
extern f32 D_801E3B50;

s32 func_801E1CF4(s32 arg0, s32 arg1) {
    f32 a;
    f32 b;
    f32 c;
    f32 d;
    d = 33.0f;
    c = 70.5f;
    a = D_801E3B38;

    b = D_801E3B3C;

    if (D_8038C17C(0.0f, 3.0f, a, c, b, a, c, b, D_801E3B40, D_801E3B44, D_801E3B48, 145.0f, D_801E3B4C, D_801E3B50, d, d) != 0) {
        func_8038D28C(0x635);
        return 3;
    }
    return 2;
}
