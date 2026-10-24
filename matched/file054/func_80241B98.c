#define LP(p,l) LQ(p,l)
#define LQ(p,l) p##_##l
#define func_80241974 LP(fA, __LINE__)
#include "context.h"
#undef func_80241974
extern u8 D_80246900[];
extern u8 D_8024690C[];
extern u8 D_80246E60[];
extern u8 D_802476F4[];
extern f32 D_802481E8;
extern f32 D_802481EC;
extern f32 D_802481F0;
extern f32 D_802481F4;
extern f32 D_802481F8;
extern f32 D_802481FC;
extern void func_80241D14();
extern s32 D_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

void func_80241B98(u8 *arg0, void *arg1) {
    if (func_80151790(D_80248804) == 0) {
        arg0[0x90] = 1;
        func_8015115C(D_80248804, D_80246900);
    }
    if ((D_8011AAF4(D_802476F4, 0x3B4, arg0, 0, 2, D_802481E8, D_802481EC, D_802481F0, D_802481F4, 4294967296.0f, 0.5f, D_802481F8, D_802481FC, 0.0f, 35.0f, -1, -1) == 0) && (func_800178E8() != 0) && (arg0[0x90] != 0)) {
        func_80006214((void *)D_80248804);
        func_8013AE20(D_80248804, arg1, 2);
        func_80006214(arg0);
        func_800179B0(D_80246E60);
        func_8015122C(D_80248804, D_8024690C, 5);
        arg0[0x90] = 0;
        func_800058DC(arg0, (void (*)(void))func_80241D14);
    }
}
