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
s32 func_801E2168(s32 arg0, s32 arg1) {
    f32 k = 24.2999992f;
    if (D_8038C17C(0.0f, 2.0f, 42.8f, 24.4f, 23.8999996f, 42.7000008f, 13.3999996f, 23.7999992f, 38.0999985f, 25.5f, (-103.699997f), 38.0f, 14.6000004f, (-103.800003f), k, k) != 0) {
        ((f32 *)&D_801E5200)[1] = 50.0f;
        ((f32 *)&D_801E5200)[2] = 50.0f;
        ((f32 *)&D_801E5200)[0] = 40.0f;
        ((f32 *)&D_801E5200)[3] = 0.5f;
        ((f32 *)&D_801E5200)[5] = 0.0399999991f;
        ((f32 *)&D_801E5200)[6] = 0.200000003f;
        func_801C7A74(&D_801E5200);
        D_8038C158();
        return 7;
    }
    return 6;
}
