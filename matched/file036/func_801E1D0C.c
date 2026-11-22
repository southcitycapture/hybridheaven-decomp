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
extern void func_801C7A74(void *arg0);
extern void func_8038BE98(f32);
extern void func_8038BED4(void);
extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_801E1D0C(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 5.5f, 3.4f, 65.3f, 257.899994f, 3.5999999f, 56.0f, 258.0f, 8.60000038f, 62.5f, 82.6999969f, 8.80000019f, 53.2000008f, 82.9000015f) != 0) {
        D_801E5200.unk0 = 100.0f;
        D_801E5200.unk4 = 50.0f;
        D_801E5200.unk8 = 10.0f;
        D_801E5200.unkC = 1.0f;
        D_801E5200.unk14 = 0.100000001f;
        D_801E5200.unk18 = 0.200000003f;
        func_801C7A74(&D_801E5200);
        func_8038BE98(24.2999992f);
        func_8038BED4();
        return 2;
    }
    return 1;
}
