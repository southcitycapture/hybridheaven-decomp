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
s32 func_801E2294(s32 arg0, s32 arg1) {
    f32 a = 13.6000004f;
    f32 b = 46.2999992f;
    f32 c = 15.8999996f;
    f32 d = 10.1000004f;
    if (D_8038C17C(0.0f, 4.5f, 58.2f, a, 9.69999981f, 57.7000008f, a, 9.60000038f, b, c, b, 45.7999992f, c, 46.2000008f, d, d) != 0) {
        D_801E5200.unk0 = 40.0f;
        D_801E5200.unk4 = 50.0f;
        D_801E5200.unk8 = 70.0f;
        D_801E5200.unkC = 1.5f;
        D_801E5200.unk14 = 0.100000001f;
        D_801E5200.unk18 = 0.200000003f;
        func_801C7A74(&D_801E5200);
        D_8038C158();
        return 8;
    }
    return 7;
}
