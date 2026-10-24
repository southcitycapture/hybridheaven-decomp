#include "context.h"

typedef struct func_801F6534_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[0x5C - 0x3E];
    struct func_801F5230_StructB *unk5C;
    u8 pad60[0x90 - 0x60];
    s16 unk90;
    u8 pad92[2];
    s16 unk94;
    s16 unk96;
    u8 pad98[2];
    u16 unk9A;
    u8 unk9C;
    u8 pad9D[0xAE - 0x9D];
    u8 unkAE;
    u8 unkAF;
} func_801F6534_Struct;

typedef struct func_801F6534_Pos {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
} func_801F6534_Pos;

void func_801F671C(struct func_801F6008_Struct *arg0, s32 arg1);
extern s32 func_801F442C(void *, f32);

void func_801F6534(func_801F6534_Struct *arg0, s32 arg1) {
    struct func_801F5230_StructB *sp2C;
    func_801F6534_Pos *n;

    sp2C = arg0->unk5C;
    if (func_801C3B3C() == 0) {
        if (func_801F3FFC((struct func_801F3FFC_Arg *)arg0, (f32) arg0->unkAE) != 0) {
            arg0->unkAF = func_801F53E8((s32)arg0);
            func_801F5230((struct func_801F5230_StructArg *)arg0);
            func_800058DC(arg0, (s32) func_801F70E0);
            return;
        }
    }
    if (func_801F55EC((func_801F55EC_Struct *)arg0) != 0) {
        if (D_8012CE9C(arg1, (s32) sp2C, D_8021AFE8, 0xA) == 0) {
            if (func_801F442C(arg0, (f32) arg0->unk9C) != 0) {
                n = (func_801F6534_Pos *) D_801BBCD0->unk2C;
                D_801F474C(arg0, arg0->unk90, n->unk4, n->unkC);
                if (((arg0->unk3C++) % 60) == 0 && func_8012C6B4(3) < 2) {
                    sp2C->unk78 = 1;
                    func_801F3B6C((struct func_801F3B6C_A *)arg0);
                    func_800058DC(arg0, (s32) func_801F671C);
                }
            } else {
                arg0->unk3C = 0;
                func_801F42E4((func_801F42E4_Struct *)arg0, arg0->unk9A);
                D_801F474C(arg0, arg0->unk90, (f32) arg0->unk94, (f32) arg0->unk96);
            }
            func_80010550(arg1, sp2C);
        }
    }
}
