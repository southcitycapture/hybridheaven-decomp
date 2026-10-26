#include "common.h"
#define LP(p,l) LQ(p,l)
#define LQ(p,l) p##_##l
extern u8 D_802468C4[];
extern u8 D_802468E8[];
extern s32 D_80248804;
extern void func_800058DC(void *, void (*)(void));
extern s32 func_800178E8(void);
extern void func_800179B0(void *);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_8015115C(s32, void *);
extern void func_8015122C(s32, void *, s32);
extern s32 func_80151790(s32);


extern u8 D_80246B28[];
extern u8 D_80247514[];
extern u8 D_80247550[];
extern f32 D_80248148__load;
extern f32 D_8024814C__load;
extern f32 D_80248150__load;
extern f32 D_80248154__load;
extern f32 D_80248158__load;
extern f32 D_8024815C__load;
extern f32 D_80248160__load;
extern f32 D_80248164__load;
extern f32 D_80248168__load;
extern f32 D_8024816C__load;
extern void func_802414E8();
extern s32 D_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

void func_80241304(u8 *arg0, s32 arg1) {
    if (func_80151790(D_80248804) == 0) {
        arg0[0x90] = 1;
        func_8015115C(D_80248804, D_802468C4);
    }
    if (D_8011AAF4(D_80247514, 0x322, arg0, 0, 2, D_80248148__load, D_8024814C__load, D_80248150__load, 58.0f, 4294967296.0f, -1.0f, D_80248154__load, D_80248158__load, 0.0f, 35.0f, -1, -1) == 0
        && func_800178E8() != 0 && arg0[0x90] != 0) {
        func_8011AAF4(D_80247550, 0x328, arg0, 0, 1, 0.0f, D_8024815C__load, D_80248160__load, D_80248164__load, 0.0f, D_80248168__load, D_8024816C__load, 16.5f, 0.0f, 35.0f, -1, -1);
        func_800179B0(D_80246B28);
        func_8015122C(D_80248804, D_802468E8, 5);
        arg0[0x90] = 0;
        func_800058DC(arg0, (void (*)(void))func_802414E8);
    }
}
