#include "common.h"

extern s32 D_801F3A80;
extern void func_8038BEC8(f32);
extern void func_8038BED4(void);
extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
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
    x = (-0.800000012f);
    y = 25.3999996f;
    z = (-39.9000015f);
    if (func_8038BEF8(0.0f, 6.0f, -0.6f, 10.6f, (-23.7999992f), (-1.10000002f), 0.400000006f, (-5.69999981f), x, y, z, x, y, z)) {
        func_8038BED4();
        D_801F3A80 = 1;
    }
    goto end;
c1:
    x = 18.5f;
    y = 15.6000004f;
    z = (-21.2000008f);
    if (func_8038BEF8(0.0f, 2.0f, 24.1f, 7.4f, (-2.29999995f), 6.5999999f, 10.3000002f, (-20.6000004f), x, y, z, x, y, z)) {
        func_8038BED4();
        D_801F3A80 = 2;
    }
    goto end;
c2:
    if (func_8038BEF8(0.0f, 6.0f, 4.7f, 42.6f, (-20.6000004f), (-2.4000001f), 21.6000004f, -18.5f, (-0.600000024f), 26.5f, (-41.2000008f), (-1.10000002f), 22.7000008f, -40.0f)) {
        func_8038BED4();
        D_801F3A80 = 3;
    }
    goto end;
c3:
    if (func_8038BEF8(0.0f, 4.0f, -4.4f, 2.4f, 8.69999981f, (-10.3999996f), 6.0999999f, 64.0f, (-1.10000002f), 15.6999998f, (-27.8999996f), (-2.20000005f), 26.1000004f, (-26.2999992f))) {
        func_8038BEC8(10.0f);
        return 0x25;
    }
end:
    return 0x24;
}
