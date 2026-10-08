#include "context.h"

struct func_80241A88_Struct {
    u8 pad[0x90];
    u8 unk90;
};
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_801512CC(s32, f32, f32, f32);
extern void func_80241B98(void);
extern u8 D_802476B8[];
extern u8 D_80246E10[];
extern u8 D_802468F4[];
extern f32 D_802481D8;
extern f32 D_802481DC;
extern f32 D_802481E0;
extern f32 D_802481E4;

void func_80241A88(void *arg0, s32 arg1) {
    if (func_800178E8() != 0) {
        func_8011AAF4(D_802476B8, 0x39D, arg0, 0, 1, 0.0f, D_802481D8, 7.5f, D_802481DC, 0.0f, 0.5f, D_802481E0, D_802481E4, 0.0f, 35.0f, -1, -1);
        func_800179B0(D_80246E10);
        func_8015122C(D_80248804, D_802468F4, 5);
        func_801512CC(D_80248804, 1.0f, 0.0f, 17.0f);
        ((struct func_80241A88_Struct *) arg0)->unk90 = 0;
        func_800058DC(arg0, func_80241B98);
    }
}
