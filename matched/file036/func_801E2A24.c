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
s32 func_801E2A24(s32 arg0, s32 arg1) {
    f32 k = 24.2999992f;
    if (D_8038C17C(0.0f, 5.0f, 62.0f, -0.3f, (-147.300003f), 62.5999985f, 9.89999962f, (-148.300003f), 53.7999992f, 12.3000002f, (-95.0999985f), 53.7000008f, 13.3999996f, (-94.8000031f), k, k) != 0) {
        D_801E5200.unk0 = 30.0f;
        D_801E5200.unk4 = 50.0f;
        D_801E5200.unk8 = -130.0f;
        D_801E5200.unkC = 1.20000005f;
        D_801E5200.unk14 = 0.100000001f;
        D_801E5200.unk18 = 0.200000003f;
        func_801C7A74(&D_801E5200);
        D_8038C158();
        return 0x10;
    }
    return 0xF;
}
