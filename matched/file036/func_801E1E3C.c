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
s32 func_801E1E3C(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 4.0f, 205.7f, 9.8f, (-82.5999985f), 213.199997f, 9.5f, (-74.1999969f), 23.7999992f, 43.0f, 83.5f, 18.6000004f, 42.7999992f, 76.8000031f) != 0) {
        func_8038BE98(13.5f);
        func_8038BED4();
        D_801E5200.unk4 = 50.0f;
        D_801E5200.unk8 = 50.0f;
        D_801E5200.unk0 = 40.0f;
        D_801E5200.unkC = 0.5f;
        D_801E5200.unk14 = 0.0399999991f;
        D_801E5200.unk18 = 0.200000003f;
        func_801C7A74(&D_801E5200);
        return 4;
    }
    return 2;
}
