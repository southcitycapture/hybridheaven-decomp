#include "context.h"

extern void func_8038BEC8(f32);
extern s32 D_801F3A80;
extern f32 D_801F575C;
extern f32 D_801F5760;
extern f32 D_801F5764;
extern f32 D_801F5768;
extern f32 D_801F576C;
extern f32 D_801F5770;
extern f32 D_801F5774;
extern f32 D_801F5778;
extern f32 D_801F577C;
extern f32 D_801F5780;
extern f32 D_801F5784;
extern f32 D_801F5788;
extern f32 D_801F578C;
extern f32 D_801F5790;
extern f32 D_801F5794;
extern f32 D_801F5798;
extern f32 D_801F579C;
extern f32 D_801F57A0;
extern f32 D_801F57A4;
extern f32 D_801F57A8;
extern f32 D_801F57AC;
extern f32 D_801F57B0;
extern f32 D_801F57B4;
extern f32 D_801F57B8;
extern f32 D_801F57BC;
extern f32 D_801F57C0;
extern f32 D_801F57C4;
extern f32 D_801F57C8;
extern f32 D_801F57CC;

s32 func_801E296C(s32 arg0, s32 arg1) {
    f32 x;
    f32 y;
    f32 z;
    func_8038BEC8(5.0f);
    if (D_801F3A80 == 0) goto c0;
    if (D_801F3A80 == 1) goto c1;
    if (D_801F3A80 == 2) goto c2;
    if (D_801F3A80 == 3) goto c3;
    return 0x24;
c0:
    x = D_801F575C;
    y = D_801F5760;
    z = D_801F5764;
    if (func_8038BEF8(0.0f, 6.0f, -0.6f, 10.6f, D_801F5768, D_801F576C, D_801F5770, D_801F5774, x, y, z, x, y, z)) {
        func_8038BED4();
        D_801F3A80 = 1;
    }
    goto end;
c1:
    x = 18.5f;
    y = D_801F5778;
    z = D_801F577C;
    if (func_8038BEF8(0.0f, 2.0f, 24.1f, 7.4f, D_801F5780, D_801F5784, D_801F5788, D_801F578C, x, y, z, x, y, z)) {
        func_8038BED4();
        D_801F3A80 = 2;
    }
    goto end;
c2:
    if (func_8038BEF8(0.0f, 6.0f, 4.7f, 42.6f, D_801F5790, D_801F5794, D_801F5798, -18.5f, D_801F579C, 26.5f, D_801F57A0, D_801F57A4, D_801F57A8, -40.0f)) {
        func_8038BED4();
        D_801F3A80 = 3;
    }
    goto end;
c3:
    if (func_8038BEF8(0.0f, 4.0f, -4.4f, 2.4f, D_801F57AC, D_801F57B0, D_801F57B4, 64.0f, D_801F57B8, D_801F57BC, D_801F57C0, D_801F57C4, D_801F57C8, D_801F57CC)) {
        func_8038BEC8(10.0f);
        return 0x25;
    }
end:
    return 0x24;
}
