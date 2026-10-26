#include "common.h"
extern s32 D_801FAFD8;
extern void D_8038C158(void);
extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);


extern f32 D_801FBDA0__load_func_801E2A08;
extern f32 D_801FBDA4__load_func_801E2A08;
extern f32 D_801FBDA8__load_func_801E2A08;
extern f32 D_801FBDAC__load_func_801E2A08;
extern f32 D_801FBDB0__load_func_801E2A08;
extern f32 D_801FBDB4__load_func_801E2A08;
extern f32 D_801FBDB8__load_func_801E2A08;
extern f32 D_801FBDBC__load_func_801E2A08;
extern f32 D_801FBDC0__load_func_801E2A08;
extern f32 D_801FBDC4__load_func_801E2A08;
extern f32 D_801FBDC8__load_func_801E2A08;
extern f32 D_801FBDCC__load_func_801E2A08;
extern f32 D_801FBDD0__load_func_801E2A08;
extern f32 D_801FBDD4__load_func_801E2A08;
extern f32 D_801FBDD8__load_func_801E2A08;
extern f32 D_801FBDDC__load_func_801E2A08;
extern f32 D_801FBDE0__load_func_801E2A08;
extern f32 D_801FBDE4__load_func_801E2A08;
extern f32 D_801FBDE8__load_func_801E2A08;
extern f32 D_801FBDEC__load_func_801E2A08;

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
    b = D_801FBDA0__load_func_801E2A08;
    c = D_801FBDA4__load_func_801E2A08;
    if (D_8038C17C(0.0f, D_801FBDA8__load_func_801E2A08, 77.8f, 26.5f, D_801FBDAC__load_func_801E2A08, D_801FBDB0__load_func_801E2A08, D_801FBDB4__load_func_801E2A08, D_801FBDB8__load_func_801E2A08, D_801FBDBC__load_func_801E2A08, c, D_801FBDC0__load_func_801E2A08, D_801FBDC4__load_func_801E2A08, D_801FBDC8__load_func_801E2A08, D_801FBDCC__load_func_801E2A08, b, b) != 0) {
        D_8038C158();
        D_801FAFD8 = 1;
    }
    goto end;
c1:
    a = D_801FBDD0__load_func_801E2A08;
    b = D_801FBDD4__load_func_801E2A08;
    c = D_801FBDD8__load_func_801E2A08;
    if (D_8038C17C(0.0f, D_801FBDDC__load_func_801E2A08, 73.6f, 16.3f, D_801FBDE0__load_func_801E2A08, 73.5f, D_801FBDE4__load_func_801E2A08, -0.5f, a, 16.5f, D_801FBDE8__load_func_801E2A08, a, b, D_801FBDEC__load_func_801E2A08, c, c) != 0) {
        D_8038C158();
        return 9;
    }
end:
    return 8;
}
