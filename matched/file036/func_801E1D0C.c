#include "context.h"
extern void func_8038BE98(f32);
extern void func_801C7A74(void *arg0);
extern func_801E2E4C_Struct D_801E5200;

extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern void func_8038BED4(void);
extern f32 D_801E4F58;
extern f32 D_801E4F5C;
extern f32 D_801E4F60;
extern f32 D_801E4F64;
extern f32 D_801E4F68;
extern f32 D_801E4F6C;
extern f32 D_801E4F70;
extern f32 D_801E4F74;
extern f32 D_801E4F78;
extern f32 D_801E4F7C;

s32 func_801E1D0C(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 5.5f, 3.4f, 65.3f, D_801E4F58, D_801E4F5C, 56.0f, 258.0f, D_801E4F60, 62.5f, D_801E4F64, D_801E4F68, D_801E4F6C, D_801E4F70) != 0) {
        D_801E5200.unk0 = 100.0f;
        D_801E5200.unk4 = 50.0f;
        D_801E5200.unk8 = 10.0f;
        D_801E5200.unkC = 1.0f;
        D_801E5200.unk14 = D_801E4F74;
        D_801E5200.unk18 = D_801E4F78;
        func_801C7A74(&D_801E5200);
        func_8038BE98(D_801E4F7C);
        func_8038BED4();
        return 2;
    }
    return 1;
}
