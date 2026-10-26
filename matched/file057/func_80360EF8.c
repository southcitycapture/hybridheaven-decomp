#include "common.h"
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern void func_800058DC(s32 arg0, void (*arg1)(void));
typedef struct func_80360EF8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80360EF8_Struct;
extern void func_8013A28C(s32, func_80360EF8_Struct);
extern s32 func_80224F5C(s32, s32);
typedef struct func_80360F9C_StructArg {
    u8 pad[0x5C];
    s32 unk5C;
} func_80360F9C_StructArg;
void func_80360F9C(func_80360F9C_StructArg *arg0, s32 arg1);


extern void func_802256E4(func_80360EF8_Struct *, s32, s32);

void func_80360EF8(s32 arg0, s32 arg1) {
    u8 *sp24;
    func_80360EF8_Struct sp18;

    if (arg0 == D_801BBCCC) {
        sp24 = D_801BC03C;
    } else {
        sp24 = D_801BC3D8;
    }
    if (func_80224F5C(arg0, arg1) == 0) {
        func_802256E4(&sp18, arg0, 0x1D);
        func_8013A28C(arg1, sp18);
        func_800058DC(arg0, (void (*)(void))func_80360F9C);
    }
    sp24[0x392] = 0;
}
