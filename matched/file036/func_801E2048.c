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
s32 func_801E2048(s32 arg0, s32 arg1) {
    f32 a = 9.60000038f, b = 13.8000002f, c = 16.1000004f;
    if (D_8038C17C(0.0f, 4.5f, 58.6f, b, 9.80000019f, 57.7000008f, b, a, 46.7000008f, c, 46.4000015f, 45.7999992f, c, 46.2000008f, a, a) != 0) {
        D_801E5200.unk0 = 40.0f;
        D_801E5200.unk4 = 50.0f;
        D_801E5200.unk8 = -100.0f;
        D_801E5200.unkC = 1.0f;
        D_801E5200.unk14 = 0.100000001f;
        D_801E5200.unk18 = 0.200000003f;
        func_801C7A74(&D_801E5200);
        D_8038C158();
        return 6;
    }
    return 5;
}
