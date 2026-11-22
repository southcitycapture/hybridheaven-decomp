#include "common.h"

extern u8 D_8025817C[];
extern void func_800058DC(void *, void *);
extern s32 func_800178E8();
extern s32 func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_80133980(s32);
extern s32 func_801C3044(void);
extern void func_802412F8();
void func_80241214(s32 arg0, s32 arg1) {
    if ((func_801C3044() == 0) && (func_800178E8() != 0)) {
        func_8011AAF4(D_8025817C, 0x15F, (void *)arg0, 2, 1, 0.0f, 45.2999992f, 17.6000004f, 465.600006f, 0.0f, 50.2999992f, 16.2000008f, 450.0f, 0.0f, 35.0f, -1, -1);
        func_80133980(0x6F);
        func_800058DC((void *)arg0, (void *)func_802412F8);
    }
}
