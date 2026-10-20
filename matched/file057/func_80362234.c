#include "context.h"
typedef struct func_8036265C_Inner {
    u8 pad[0x7C];
    u8 *unk7C;
} func_8036265C_Inner;
typedef struct func_8036265C_Arg {
    u8 pad[0x5C];
    func_8036265C_Inner *unk5C;
} func_8036265C_Arg;
void func_8036265C(func_8036265C_Arg *arg0, s32 arg1);

typedef struct func_80362234_StructArg {
    u8 pad[0x5C];
    s32 unk5C;
} func_80362234_StructArg;

extern void func_80225664(func_8035F544_Copy *, void *, s32);

void func_80362234(func_80362234_StructArg *arg0, s32 arg1) {
    s32 sp34;
    u8 *sp30;
    func_8035F544_Copy sp24;

    sp34 = arg0->unk5C;
    if (arg0 == (func_80362234_StructArg *)D_801BBCCC) {
        sp30 = D_801BC03C;
    } else {
        sp30 = D_801BC3D8;
    }
    func_80225664(&sp24, arg0, 0x01900157);
    if (func_80011140(arg1, sp34, sp24, 10) != 0) {
        func_800058DC(arg0, func_8036265C);
    }
    sp30[0x392] = 0;
}
