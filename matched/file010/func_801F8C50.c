#include "context.h"

struct func_801F8C50_Arg { u8 pad0[0x3C]; u16 unk3C; u8 pad1[0x1E]; s32 unk5C; };
extern u8 D_80218A84[];
extern f64 D_80218D10;
extern void func_801477C4();
extern s32 func_801FA2E0();

void func_801F8C50(struct func_801F8C50_Arg *arg0, s32 arg1) {
    s32 sp7C;
    f32 sp70[3];
    u8 pad[0x10];

    sp7C = arg0->unk5C;
    D_8013A334(sp70, arg1, (void *)sp7C, 6);
    (&D_8021B028)[0] = D_801BBCD8->unk2C->f30 - sp70[0];
    (&D_8021B028)[1] = D_801BBCD8->unk2C->f34 - sp70[1];
    (&D_8021B028)[2] = D_801BBCD8->unk2C->f38 - sp70[2];
    func_801477C4(&D_8021B028, 0x3F8147AE);
    func_80130AA0(0, 0x50, 0, &D_8021B028, &D_8021B02C, &D_8021B030);
    (&D_8021B028)[0] = sp70[0] + (&D_8021B028)[0];
    (&D_8021B028)[1] = ((f64)sp70[1] + D_80218D10) + (f64)(&D_8021B028)[1];
    (&D_8021B028)[2] = sp70[2] + (&D_8021B028)[2];
    func_8011AAF4(D_80218A84, 0x820, arg0, 0, 1, 3.0f, (&D_8021B028)[0], (&D_8021B028)[1], (&D_8021B028)[2], 3.0f, sp70[0], sp70[1], sp70[2], 0.0f, 35.0f, -1, -1);
    if (D_8012CE9C(arg1, sp7C, *(func_801F63E0_Struct3 *)&D_80216EE8, 10) == 0) {
        func_80010550(arg1, sp7C);
        func_801FA2E0();
        if (arg0->unk3C-- == 0) {
            func_800058DC(arg0, (s32)func_801F5F5C);
        }
    }
}
