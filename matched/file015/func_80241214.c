#include "common.h"
#define SG_CAT2(a, b) a##b
#define SG_CAT(a, b) SG_CAT2(a, b)
#define func_80242F38_StructGlobal SG_CAT(SGL_, __LINE__)
#define SGL_348 int
#define SGL_407 func_80242F38_StructGlobal
#define SGL_411 func_80242F38_StructGlobal
#define SGL_412 func_80242F38_StructGlobal
#define SGL_413 func_80242F38_StructGlobal
#define SGL_584 func_80242F38_StructGlobal
extern void func_800058DC(void *, void *);
extern s32 func_800178E8();
extern s32 func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_80133980(s32);
extern s32 func_801C3044(void);
typedef struct func_80242F38_StructGlobal {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80242F38_StructGlobal;

#undef func_80242F38_StructGlobal
extern void func_802412F8();
extern u8 D_8025817C[];
extern f32 D_8025826C;
extern f32 D_80258270;
extern f32 D_80258274;
extern f32 D_80258278;
extern f32 D_8025827C;

void func_80241214(s32 arg0, s32 arg1) {
    if ((func_801C3044() == 0) && (func_800178E8() != 0)) {
        func_8011AAF4(D_8025817C, 0x15F, (void *)arg0, 2, 1, 0.0f, D_8025826C, D_80258270, D_80258274, 0.0f, D_80258278, D_8025827C, 450.0f, 0.0f, 35.0f, -1, -1);
        func_80133980(0x6F);
        func_800058DC((void *)arg0, (void *)func_802412F8);
    }
}
