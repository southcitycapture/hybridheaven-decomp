#include "context.h"
#define G_(i) (*(f32 *)((u8 *)&D_801BBBF0 + 0x1E8 + 4 * (i)))
extern u8 D_80259BBC[];
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
struct func_8024ECAC_Struct;
void func_8024ECAC(struct func_8024ECAC_Struct *arg0, void *arg1);
extern f32 D_8025A074, D_8025A078, D_8025A07C, D_8025A080, D_8025A084, D_8025A088, D_8025A08C;

void func_8024EB90(struct func_8024EACC_Obj *arg0, s32 arg1) {
    if (arg0->unk3C++ >= 0x1E) {
        G_(0) = D_8025A074;
        G_(1) = D_8025A078;
        G_(2) = D_8025A07C;
        G_(3) = D_8025A080;
        G_(4) = D_8025A084;
        G_(5) = D_8025A088;
        func_8011AAF4(D_80259BBC, 0x309, arg0, 0, 1, 0.0f, G_(0), G_(1), G_(2), 0.0f, G_(3), G_(4), G_(5), 0.0f, D_8025A08C, -1, -1);
        func_80133980(0x73);
        func_800058DC(arg0, func_8024ECAC);
    }
}
