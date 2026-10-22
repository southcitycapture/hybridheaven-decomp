#include "context.h"

extern f32 D_80218CC4;
extern f32 D_8021B028;
extern s32 D_8013A334(f32 *, s32, void *, s32);
extern s32 D_801F3C90(void *, f32, f32, s32, f32, f32, f32, f32, f32, f32, f32, f32);

void func_801F73F0(func_801F74FC_Obj *arg0, s32 arg1) {
    s32 sp4C;
    f32 sp40[3];

    sp4C = arg0->unk5C;
    if (((u8 *)arg0)[0xAF] != 2) {
        func_8012A94C(arg0, 0x100);
        D_8012CE9C(arg1, sp4C, *(func_801F63E0_Struct3 *)&D_80216EE8, 0x14);
    }
    D_8013A334(sp40, arg1, (void *)sp4C, 6);
    if (D_801F3C90(arg0, 0.01f, D_80218CC4, *(s32 *)&D_8021B028, (&D_8021B028)[1], (&D_8021B028)[2], D_80218CC4, sp40[0], sp40[1], sp40[2], D_80218CC4, 50.0f) != 0) {
        func_800058DC(arg0, (s32)func_801F5F5C);
    }
}
