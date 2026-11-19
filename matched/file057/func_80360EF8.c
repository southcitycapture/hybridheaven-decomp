#include "common.h"
typedef struct func_80360EF8_Struct { int unk0; int unk4; int unk8; } func_80360EF8_Struct;
extern void func_8013A28C(s32, func_80360EF8_Struct);
extern s32 func_80224F5C(s32, s32);
extern void func_802256E4(func_80360EF8_Struct *, s32, s32);
extern void func_80360F9C();


extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern void func_800058DC(s32 arg0, void (*arg1)(void));

typedef struct func_80360EF8_StructState {
    u8 pad[0x392];
    u8 unk392;
} func_80360EF8_StructState;

void func_80360EF8(s32 arg0, s32 arg1) {
    func_80360EF8_StructState *state;
    func_80360EF8_Struct value;

    if (arg0 == D_801BBCCC) {
        state = (func_80360EF8_StructState *)D_801BC03C;
    } else {
        state = (func_80360EF8_StructState *)D_801BC3D8;
    }
    if (func_80224F5C(arg0, arg1) == 0) {
        func_802256E4((void *)&value, arg0, 0x1D);
        func_8013A28C(arg1, value);
        func_800058DC(arg0, (void (*)(void))func_80360F9C);
    }
    state->unk392 = 0;
}
