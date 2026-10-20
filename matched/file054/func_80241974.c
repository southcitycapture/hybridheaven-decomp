#include "context.h"

extern u8 D_80246DBC[];
extern u8 D_8024767C[];
extern f32 D_802481C8;
extern f32 D_802481CC;
extern f32 D_802481D0;
extern f32 D_802481D4;
struct func_80241974_Struct {
    u8 pad[0x90];
    u8 unk90;
};
void func_80241A88(void *arg0, s32 arg1);

void func_80241974(struct func_80241974_Struct *arg0, s32 arg1) {
    if (func_80151790(D_80248804) == 0) {
        arg0->unk90 = 1;
        func_8015115C(D_80248804, D_802468C4);
    }
    if ((func_800178E8() != 0) && (arg0->unk90 != 0)) {
        func_8011AAF4(D_8024767C, 0x38D, arg0, 0, 1, 0.0f, 10.0f, D_802481C8, D_802481CC, 0.0f, -1.0f, D_802481D0, D_802481D4, 0.0f, 35.0f, -1, -1);
        func_800179B0(D_80246DBC);
        func_800058DC(arg0, (void (*)(void))func_80241A88);
    }
}
