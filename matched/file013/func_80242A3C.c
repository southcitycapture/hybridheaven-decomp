#include "context.h"


extern s32 func_8012CE9C(s32, void *, func_80242A3C_StructVec, s32);
extern s32 func_80010550(s32, void *);
extern void func_80242B00();
extern func_80242A3C_StructVec D_80245DE0;

void func_80242A3C(func_80242958_Struct0 *arg0, s32 arg1) {
    func_80242958_Struct5C *sp24;
    func_80242958_Struct04 *temp_v0;
    f32 temp_fv0;

    sp24 = arg0->unk5C;
    temp_v0 = arg0->unk24->unk2C;
    temp_fv0 = temp_v0->unk4;
    if (temp_fv0 < 0.0f) {
        temp_v0->unk4 = temp_fv0 + 800.0f;
    }
    if (func_8012CE9C(arg1, sp24, D_80245DE0, 10) == 0 &&
        func_80010550(arg1, sp24) != 0) {
        sp24->unk78 = 1;
        func_800058DC((s32)arg0, func_80242B00);
    }
}
