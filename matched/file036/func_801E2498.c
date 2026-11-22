#include "common.h"

typedef struct func_801E2E4C_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[4];
    f32 unk14;
    f32 unk18;
} func_801E2E4C_Struct;
extern func_801E2E4C_Struct D_801E5200;
extern void D_8038C158(void);
extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern void func_801C7A74(void *arg0);
s32 func_801E2498(s32 arg0, s32 arg1) {
    f32 a = 46.0999985f;
    f32 b = 18.2999992f;
    f32 c = 15.6999998f;
    if (D_8038C17C(0.0f, 3.0f, 60.0f, -1.9f, 25.7999992f, 45.7999992f, 0.800000012f, 20.0f, a, b, 48.0f, a, b, 48.2999992f, c, c) != 0) {
        f32 *p = (f32 *)&D_801E5200;
        p[1] = 50.0f;
        p[2] = 50.0f;
        p[0] = 40.0f;
        p[3] = 0.5f;
        p[5] = 0.0399999991f;
        p[6] = 0.200000003f;
        func_801C7A74(p);
        D_8038C158();
        return 0xA;
    }
    return 9;
}
