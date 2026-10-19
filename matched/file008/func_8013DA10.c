#include "context.h"

struct func_8013DA10_StructB {
    s16 x0;
    s16 x2;
    s16 x4;
    s16 x6;
    u8 pad8[0x20];
    f32 f28;
    f32 f2C;
    u8 pad30[4];
    f32 f34;
    f32 f38;
    f32 f3C;
    f32 f40;
    f32 f44;
    f32 f48;
    f32 f4C;
    f32 f50;
    f32 f54;
};
struct func_8013DA10_StructC {
    u8 pad[0x2C];
    struct func_8013DA10_StructB *p2C;
};
struct func_8013DA10_StructD {
    u8 pad[0x26C];
    struct func_8013DA10_StructC *p26C;
};

extern void func_800058DC(s32 arg0, void (*arg1)(void));
void func_8013DC38(s32 arg0, s32 arg1);
extern s32 func_80001060();
extern f32 func_8001EAD0(s32);
extern f32 func_8001EB64(s32);
extern void func_80116E80(s32);
extern s32 func_801302CC();
extern struct func_8013DA10_StructD D_801BBBF0;
extern f32 D_801BEB40;
extern f32 D_801BEB44;
extern f32 D_801BEB48;
extern s16 D_801BEB4C;
extern s16 D_801BEB4E;

void func_8013DA10(s32 arg0, s32 arg1) {
    D_801BEB40 = 0.0f;
    D_801BEB44 = 0.0f;
    D_801BEB48 = 0.0f;
    D_801BEB4C = 0;
    D_801BEB4E = 0;
    func_80116E80(0x20);
    if (func_80001060() == 0) {
        D_801BBBF0.p26C->p2C->x0 = 0xC5;
        D_801BBBF0.p26C->p2C->x2 = 0x8F;
        D_801BBBF0.p26C->p2C->x4 = 0x115;
        D_801BBBF0.p26C->p2C->x6 = 0xDF;
    } else if (func_801302CC() == 0) {
        D_801BBBF0.p26C->p2C->x0 = 0x18A;
        D_801BBBF0.p26C->p2C->x2 = 0x11E;
        D_801BBBF0.p26C->p2C->x4 = 0x22A;
        D_801BBBF0.p26C->p2C->x6 = 0x1BE;
    } else {
        D_801BBBF0.p26C->p2C->x0 = 0x1E2;
        D_801BBBF0.p26C->p2C->x2 = 0x110;
        D_801BBBF0.p26C->p2C->x4 = 0x25A;
        D_801BBBF0.p26C->p2C->x6 = 0x188;
    }
    D_801BBBF0.p26C->p2C->f28 = 10.0f;
    D_801BBBF0.p26C->p2C->f2C = 20.0f;
    D_801BBBF0.p26C->p2C->f50 = 0.0f;
    D_801BBBF0.p26C->p2C->f34 = -1.0f;
    D_801BBBF0.p26C->p2C->f38 = -100.0f;
    D_801BBBF0.p26C->p2C->f3C = 0.0f;
    D_801BBBF0.p26C->p2C->f40 = 0.0f;
    D_801BBBF0.p26C->p2C->f44 = 0.0f;
    D_801BBBF0.p26C->p2C->f48 = 0.0f;
    D_801BBBF0.p26C->p2C->f4C = func_8001EAD0(-0x800);
    D_801BBBF0.p26C->p2C->f54 = func_8001EB64(-0x800);
    func_800058DC(arg0, (void (*)(void))func_8013DC38);
}
