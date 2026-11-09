#include "common.h"
extern void D_8038C158(void);
extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);

extern s32 D_801FB7F8;
extern const f32 D_801FCEF8;
extern const f32 D_801FCEFC;
extern f32 D_801FCF00;
extern f32 D_801FCF04;
extern f32 D_801FCF08;
extern f32 D_801FCF0C;
extern f32 D_801FCF10;
extern f32 D_801FCF14;
extern f32 D_801FCF18;
extern f32 D_801FCF1C;
extern f32 D_801FCF20;
extern f32 D_801FCF24;
extern f32 D_801FCF28;
extern f32 D_801FCF2C;
extern f32 D_801FCF30;
extern f32 D_801FCF34;
extern f32 D_801FCF38;
extern f32 D_801FCF3C;
extern f32 D_801FCF40;
extern f32 D_801FCF44;
extern f32 D_801FCF48;
extern f32 D_801FCF4C;
extern f32 D_801FCF50;
extern f32 D_801FCF54;

s32 func_801F2458(s32 arg0, s32 arg1) {
    f32 a;
    f32 b;
    f32 c;
    f32 d;
    switch (D_801FB7F8) {
    case 0:
    d = 41.5f;
    c = 0.8f;
    if (D_8038C17C(0.0f, D_801FCEFC, -13.5f, c, D_801FCF00, D_801FCF04, D_801FCF08, D_801FCF0C, -4.0f, D_801FCF10, -7.0f, D_801FCF14, D_801FCF18, D_801FCF1C, d, d) != 0) {
        D_8038C158();
        D_801FB7F8 = 1;
    }
    break;
    case 1:
    d = 41.5f;
    a = 0.3f;
    b = 12.5f;
    c = 0.2f;
    if (D_8038C17C(0.0f, D_801FCF28, 15.4f, 0.7f, D_801FCF2C, D_801FCF30, D_801FCF34, D_801FCF38, a, b, c, a, b, c, d, d) != 0) {
        D_8038C158();
        D_801FB7F8 = 2;
    }
    break;
    case 2:
    d = 41.5f;
    a = -2.2f;
    b = 12.3f;
    c = 0.8f;
    if (D_8038C17C(0.0f, D_801FCF48, -60.3f, 56.2f, D_801FCF4C, D_801FCF50, D_801FCF54, 49.0f, a, b, c, a, b, c, d, d) != 0) {
        D_801FB7F8 = 0;
        D_8038C158();
        return 0xD;
    }
    break;
    }
    return 0xC;
}
