#include "common.h"
typedef struct func_8035F544_Copy { int a; int b; int c; } func_8035F544_Copy;
typedef struct func_8035CDA8_Obj { char pad[0x5C]; } func_8035CDA8_Obj;
typedef struct func_8036265C_Inner { char pad[0x7C]; char *unk7C; } func_8036265C_Inner;
typedef struct func_8036265C_Arg { char pad[0x5C]; func_8036265C_Inner *unk5C; } func_8036265C_Arg;
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
void func_800058DC(void *arg0, void *arg1);
extern s32 func_80011140(s32, s32, func_8035F544_Copy, s32);
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
    if ((s32)arg0 == D_801BBCCC) {
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
