#include "common.h"
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern void func_800058DC();
extern s32 func_80010550(s32, s32, void *);
typedef struct func_8036EA80_Vec { s32 x; s32 y; s32 z; } func_8036EA80_Vec;
extern void func_80225664(func_8036EA80_Vec *, void *, s32);
void func_8036FF7C(void *arg0, s32 arg1);
typedef struct func_8036FF7C_Anim {
    s32 id;
    u16 frame;
    u16 flags;
    f32 speed;
} func_8036FF7C_Anim;
typedef struct func_8036FF7C_Obj {
    u8 pad0[0xC];
    u16 unkC;
    u8 padE[0x1C - 0xE];
    func_8036FF7C_Anim anim;
} func_8036FF7C_Obj;
typedef struct func_8036FF7C_Arg {
    u8 pad0[0x5C];
    func_8036FF7C_Obj *unk5C;
} func_8036FF7C_Arg;
typedef struct func_8036FF7C_State {
    u8 pad0[0x32D];
    u8 unk32D;
    u8 pad32E[0x374 - 0x32E];
    s8 unk374;
    u8 pad375[0x392 - 0x375];
    u8 unk392;
} func_8036FF7C_State;

extern void func_8013A28C(s32, func_8036FF7C_Anim);

void func_8036FEA4(func_8036FF7C_Arg *arg0, s32 arg1) {
    func_8036FF7C_State *state;
    func_8036FF7C_Arg **actor;
    s32 object;
    func_8036FF7C_Anim anim;
extern s32 func_80010550();

    if ((s32)arg0 == D_801BBCCC) {
        state = (func_8036FF7C_State *)D_801BC03C;
    } else {
        state = (func_8036FF7C_State *)D_801BC3D8;
    }
    object = (s32)arg0->unk5C;
    state->unk392 = 0;
    if (func_80010550(arg1, object) != 0) {
        func_80225664((func_8036EA80_Vec *)&anim, arg0, 0x03200064);
        anim.speed = 3.0f;
        if (state->unk374 != 0) {
            anim.flags |= 0x100;
        }
        func_8013A28C(arg1, anim);
        func_800058DC(arg0, func_8036FF7C);
    }
}
