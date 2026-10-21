#include "context.h"
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
void func_8024A3B4(s32 arg0, s32 arg1);
extern void func_80133980(s32);
extern u8 D_802590AC[];
extern f32 D_802591E0, D_802591E4, D_802591E8;
extern s32 D_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

void func_8024A224(func_8024A120_Obj *arg0, s32 arg1) {
    s32 pad;
    s32 sp58;
    s32 t = arg0->unk5C;
    if (arg0->unk9C++ >= 0xA) {
        sp58 = func_80010550(arg1, t);
        if (D_8011AAF4(D_802590AC, 0x3E0, arg0, 0, 2, D_802591E0, GG->unk1E8, GG->unk1EC, GG->unk1F0, D_802591E4, GG->unk1F4, GG->unk1F8, GG->unk1FC, 0.0f, 35.0f, -1, -1) == 0 && sp58 != 0) {
            func_80020718(0x1BB);
            func_80129FB8(120.0f, -190.0f, -440.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0xFF, 0xFF, 0, 0x80, 0x80, 0x80, -4, D_802591E8, 0, 0);
            func_80133980(0x73);
            func_800058DC(arg0, func_8024A3B4);
        }
    }
}
