#include "context.h"

typedef struct func_801F8E4C_Struct {
    u8 pad0[0x90];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 pad93[0x98 - 0x93];
    s16 unk98;
    u8 pad9A[0xAE - 0x9A];
    u8 unkAE;
} func_801F8E4C_Struct;

extern void func_801F8F3C();
extern s32 D_801F48C8(struct func_801F3FFC_Arg *, u8);

void func_801F8E4C(func_801F8E4C_Struct *arg0, s32 arg1) {
    u8 v;
    u8 x;

    if (func_801C3B3C() != 0) {
        return;
    }
    if (func_801F3FFC((struct func_801F3FFC_Arg *)arg0, (f32)arg0->unkAE) != 0) {
        func_801F5230((struct func_801F5230_StructArg *)arg0);
        arg0->unk90 = func_801F49E0((s32)arg0);
        v = D_801F48C8((struct func_801F3FFC_Arg *)arg0, 10);
        arg0->unk91 = v;
        if (v != 0) {
            arg0->unk92 = 0;
        } else {
            arg0->unk92 = 0x10;
            arg0->unk98 = 0x1000 / arg0->unk92;
        }
        func_800058DC(arg0, (s32)func_801F8F3C);
    }
}
