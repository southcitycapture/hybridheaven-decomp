#define LP(p,l) LQ(p,l)
#define LQ(p,l) p##_##l
#define func_80241974 LP(fA, __LINE__)
#include "context.h"
#undef func_80241974

extern u8 D_80246B28[];
extern u8 D_80247514[];
extern u8 D_80247550[];
extern f32 D_80248148;
extern f32 D_8024814C;
extern f32 D_80248150;
extern f32 D_80248154;
extern f32 D_80248158;
extern f32 D_8024815C;
extern f32 D_80248160;
extern f32 D_80248164;
extern f32 D_80248168;
extern f32 D_8024816C;
extern void func_802414E8();
extern s32 D_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

void func_80241304(u8 *arg0, s32 arg1) {
    if (func_80151790(D_80248804) == 0) {
        arg0[0x90] = 1;
        func_8015115C(D_80248804, D_802468C4);
    }
    if (D_8011AAF4(D_80247514, 0x322, arg0, 0, 2, D_80248148, D_8024814C, D_80248150, 58.0f, 4294967296.0f, -1.0f, D_80248154, D_80248158, 0.0f, 35.0f, -1, -1) == 0
        && func_800178E8() != 0 && arg0[0x90] != 0) {
        func_8011AAF4(D_80247550, 0x328, arg0, 0, 1, 0.0f, D_8024815C, D_80248160, D_80248164, 0.0f, D_80248168, D_8024816C, 16.5f, 0.0f, 35.0f, -1, -1);
        func_800179B0(D_80246B28);
        func_8015122C(D_80248804, D_802468E8, 5);
        arg0[0x90] = 0;
        func_800058DC(arg0, (void (*)(void))func_802414E8);
    }
}
