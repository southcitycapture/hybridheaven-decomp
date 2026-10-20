#include "context.h"

struct func_802414E8_Struct { u8 pad[0x90]; u8 unk90; };
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern s32 func_80151790(s32);
extern void func_8015115C(s32, void *);
extern u8 D_8024681C[];
extern u8 D_802468B8[];
extern u8 D_802468C4[];
extern u8 D_80246B98[];
extern u8 D_8024758C[];
extern f32 D_80248170;
extern f32 D_80248174;
extern f32 D_80248178;
extern f32 D_8024817C;
extern f32 D_80248180;
extern u8 func_80241638[];

void func_802414E8(struct func_802414E8_Struct *arg0, s32 arg1) {
    if (func_80151790(D_80248804) == 0) {
        arg0->unk90 = 1;
        func_8015115C(D_80248804, D_802468C4);
    }
    if ((func_800178E8() != 0) && (arg0->unk90 != 0)) {
        func_8011AAF4(D_8024758C, 0x33F, arg0, 0, 1, 0.0f, D_80248170, D_80248174, 28.0f, 0.0f, D_80248178, D_8024817C, D_80248180, 0.0f, 35.0f, -1, -1);
        func_800179B0(D_80246B98);
        func_8015122C(D_80248804, D_802468B8, 5);
        func_8015122C(D_80248800, D_8024681C, 0x14);
        arg0->unk90 = 0;
        func_800058DC(arg0, (void (*)(void))func_80241638);
    }
}
