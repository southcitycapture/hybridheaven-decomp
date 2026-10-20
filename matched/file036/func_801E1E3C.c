#include "context.h"

extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern void func_8038BED4(void);
extern f32 D_801E4F80;
extern f32 D_801E4F84;
extern f32 D_801E4F88;
extern f32 D_801E4F8C;
extern f32 D_801E4F90;
extern f32 D_801E4F94;
extern f32 D_801E4F98;
extern f32 D_801E4F9C;
extern f32 D_801E4FA0;

s32 func_801E1E3C(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 4.0f, 205.7f, 9.8f, D_801E4F80, D_801E4F84, 9.5f, D_801E4F88, D_801E4F8C, 43.0f, 83.5f, D_801E4F90, D_801E4F94, D_801E4F98) != 0) {
        func_8038BE98(13.5f);
        func_8038BED4();
        D_801E5200.unk4 = 50.0f;
        D_801E5200.unk8 = 50.0f;
        D_801E5200.unk0 = 40.0f;
        D_801E5200.unkC = 0.5f;
        D_801E5200.unk14 = D_801E4F9C;
        D_801E5200.unk18 = D_801E4FA0;
        func_801C7A74(&D_801E5200);
        return 4;
    }
    return 2;
}
