#include "context.h"

extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
void func_8038BE98(f32);

extern f32 D_801FBCD4, D_801FBCD8, D_801FBCDC, D_801FBCE0, D_801FBCE4, D_801FBCE8, D_801FBCEC, D_801FBCF0, D_801FBCF4, D_801FBCF8, D_801FBCFC, D_801FBD00, D_801FBD04, D_801FBD08, D_801FBD0C, D_801FBD10, D_801FBD14, D_801FBD18, D_801FBD1C, D_801FBD20;

s32 func_801E2378(s32 arg0, s32 arg1) {
    f32 a;
    f32 b;

    if (D_801FAFD8 == 0) goto c0;
    if (D_801FAFD8 == 1) goto c1;
    return 1;
c0:
    a = D_801FBCD4;
    b = D_801FBCD8;
    if (D_8038C17C(0.0f, D_801FBCDC, -15.0f, a, D_801FBCE0, D_801FBCE4, a, D_801FBCE8, D_801FBCEC, 12.5f, D_801FBCF0, -19.5f, D_801FBCF4, D_801FBCF8, b, b) != 0) {
        D_8038C158();
        D_801FAFD8 = 1;
    }
    goto end;
c1:
    do { a = D_801FBCFC; } while (0);
    if (D_8038C17C(0.0f, 7.25f, -18.3f, 20.4f, D_801FBD00, D_801FBD04, D_801FBD08, D_801FBD0C, a, 17.0f, 14.0f, a, 17.0f, 14.0f, 30.0f, 30.0f) != 0) {
        func_8038BE98(D_801FBD10);
        func_8038D28C(0x695);
        func_8038BD50(D_801FBD14, D_801FBD18, 96.618f);
        D_8038BD88(D_801FBD1C, D_801FBD20, 77.525f);
        return 2;
    }
end:
    return 1;
}
