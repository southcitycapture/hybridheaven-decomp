#include "context.h"

typedef struct func_80360F9C_StructArg {
    u8 pad[0x5C];
    s32 unk5C;
} func_80360F9C_StructArg;

void func_80360F9C(func_80360F9C_StructArg *arg0, s32 arg1) {
    s32 pad0;
    u8 *state;
    s32 temp_a2;
    func_80360EF8_Struct position;

    temp_a2 = arg0->unk5C;
    if ((s32)arg0 == D_801BBCCC) {
        state = D_801BC03C;
    } else {
        state = D_801BC3D8;
    }
    if (func_80010550(arg1, temp_a2) != 0) {
        func_802256E4(&position, (s32)arg0, 0);
        func_8013A28C(arg1, position);
        func_800058DC(arg0, func_8036104C);
    }
    state[0x392] = 0;
}
