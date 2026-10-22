#include "context.h"

typedef struct func_8022AAA8_StructStats {
    u8 pad[0x86];
    u16 unk86;
    u16 unk88;
} func_8022AAA8_StructStats;

typedef struct func_8022AAA8_StructArg0 {
    u8 pad[0xA5];
    u8 unkA5;
} func_8022AAA8_StructArg0;

typedef struct func_8022AAA8_StructArg1 {
    u8 pad[0x2D9];
    u8 unk2D9;
} func_8022AAA8_StructArg1;

void func_8022AAA8(func_8022AAA8_StructArg0 *arg0, func_8022AAA8_StructArg1 *arg1) {
    func_8022AAA8_StructStats *var_v0;

    if ((s32)arg1 == (s32)&D_801BBBF0 + 0x44C) {
        var_v0 = (func_8022AAA8_StructStats *)&D_801BC3D8;
    } else {
        var_v0 = (func_8022AAA8_StructStats *)&D_801BC03C;
    }
    arg0->unkA5 = 2;
    if (var_v0->unk88 < var_v0->unk86) {
        arg1->unk2D9 = D_8022B640(3) + 1;
        return;
    }
    if (var_v0->unk86 < var_v0->unk88) {
        arg1->unk2D9 = D_8022B640(3) + 5;
        return;
    }
    arg1->unk2D9 = D_8022B640(8);
}
