#include "context.h"

typedef struct func_80363904_Struct {
    u8 pad0[0x5C];
    u8 *unk5C;
} func_80363904_Struct;

extern void func_803639F0();
extern void func_80363D5C();

void func_80363904(func_80363904_Struct *arg0) {
    u8 *var_a1;
    u8 *var_v1;
    u8 *temp_a2;

    temp_a2 = arg0->unk5C;
    if ((s32) arg0 == D_801BBCCC) {
        var_a1 = D_801BC03C;
    } else {
        var_a1 = D_801BC3D8;
    }
    if ((s32) arg0 != D_801BBCCC) {
        var_v1 = D_801BC03C;
    } else {
        var_v1 = D_801BC3D8;
    }
    if ((temp_a2[0x84] == 2) && (var_a1[0x375] == 0) && ((var_v1[0x2D8] == 0xF) || (var_v1[0x2D8] == 0) || (var_v1[0x2D8] == 1))) {
        func_800058DC(arg0, func_803639F0);
        return;
    }
    if ((var_a1[0x2D9] != 6) && (var_a1[0x2D9] != 7) && (var_a1[0x2D9] != 0x20) && (var_a1[0x2D9] != 0x21)) {
        func_800058DC(arg0, func_80363D5C);
        return;
    }
    func_800058DC(arg0, func_803639F0);
}
