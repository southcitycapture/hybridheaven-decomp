#define LP(p,l) LQ(p,l)
#define LQ(p,l) p##_##l
#define func_80241974 LP(fA, __LINE__)
#define func_80241638 func_80241638_ctxdata
#include "context.h"
#undef func_80241974
#undef func_80241638

extern u8 D_80246828[];
extern u8 D_80246C10[];
extern u8 D_802475C8[];
extern u8 D_80247604[];
extern f32 D_80248184;
extern f32 D_80248188;
extern f32 D_8024818C;
extern f32 D_80248190;
extern f32 D_80248194;
extern f32 D_80248198;
extern f32 D_8024819C;
extern f32 D_802481A0;
extern f32 D_802481A4;
extern f32 D_802481A8;
extern f32 D_802481AC;
extern f32 D_802481B0;
extern s32 D_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_80241844();

typedef struct func_80241638_Struct {
    u8 pad0[0x90];
    u8 unk90;
} func_80241638_Struct;

void func_80241638(func_80241638_Struct *arg0, s32 arg1) {
    if (func_80151790(D_80248804) == 0) {
        arg0->unk90 = 1;
        func_8015115C(D_80248804, D_802468C4);
    }
    if (func_80151790(D_80248800) == 0) {
        func_8015122C(D_80248800, D_80246828, 0xF);
    }
    if (D_8011AAF4(D_802475C8, 0x359, arg0, 0, 2, D_80248184, D_80248188, D_8024818C, D_80248190, 4294967296.0f, D_80248194, D_80248198, D_8024819C, 0.0f, 35.0f, -1, -1) == 0) {
        if (func_800178E8() != 0) {
            if (arg0->unk90 != 0) {
                func_8011AAF4(D_80247604, 0x35F, arg0, 0, 1, 0.0f, D_802481A0, D_802481A4, 10.0f, 0.0f, D_802481A8, D_802481AC, D_802481B0, 0.0f, 35.0f, -1, -1);
                func_800179B0(D_80246C10);
                func_8015122C(D_80248804, D_802468D0, 5);
                arg0->unk90 = 0;
                func_800058DC(arg0, (void (*)(void))func_80241844);
            }
        }
    }
}
