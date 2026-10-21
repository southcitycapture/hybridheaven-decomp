#include "context.h"

extern f32 D_801FBDA0, D_801FBDA4, D_801FBDA8, D_801FBDAC, D_801FBDB0, D_801FBDB4, D_801FBDB8, D_801FBDBC, D_801FBDC0, D_801FBDC4, D_801FBDC8, D_801FBDCC;
extern f32 D_801FBDD0, D_801FBDD4, D_801FBDD8, D_801FBDDC, D_801FBDE0, D_801FBDE4, D_801FBDE8, D_801FBDEC;

s32 func_801E2A08(s32 arg0, s32 arg1) {
    f32 a, b, c;
    if (D_801FAFD8 == 0) {
        goto c0;
    }
    if (D_801FAFD8 == 1) {
        goto c1;
    }
    return 8;
c0:
    b = D_801FBDA0;
    c = D_801FBDA4;
    if (D_8038C17C(0.0f, D_801FBDA8, 77.8f, 26.5f, D_801FBDAC, D_801FBDB0, D_801FBDB4, D_801FBDB8, D_801FBDBC, c, D_801FBDC0, D_801FBDC4, D_801FBDC8, D_801FBDCC, b, b) != 0) {
        D_8038C158();
        D_801FAFD8 = 1;
    }
    goto end;
c1:
    a = D_801FBDD0;
    b = D_801FBDD4;
    c = D_801FBDD8;
    if (D_8038C17C(0.0f, D_801FBDDC, 73.6f, 16.3f, D_801FBDE0, 73.5f, D_801FBDE4, -0.5f, a, 16.5f, D_801FBDE8, a, b, D_801FBDEC, c, c) != 0) {
        D_8038C158();
        return 9;
    }
end:
    return 8;
}
