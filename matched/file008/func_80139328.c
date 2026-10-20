#include "context.h"

typedef struct func_80139328_StructGlobal {
    u8 pad[4];
    u16 unk4;
} func_80139328_StructGlobal;

typedef struct func_80139328_StructArg {
    u8 pad[0x3C];
    u16 unk3C;
} func_80139328_StructArg;

extern s32 func_8012FE50(s32, s32, s32, s32, s32);
extern func_80139328_StructGlobal D_80089474;
extern func_80139328_StructGlobal D_801BBBF0;

void func_80139328(func_80139328_StructArg *arg0, s32 arg1) {
    s32 var_v0;

    D_801BBBF0.unk4 = 0x73;
    if (D_80089474.unk4 & 0xF000) {
        func_8012FE50(5, D_801BBBF0.unk4, 1, 1, 0);
    }
    var_v0 = arg0->unk3C;
    if ((s32) var_v0 >= 0x7D1) {
        D_801BBBF0.unk4 = 0x72;
        func_8012FE50(6, D_801BBBF0.unk4, 1, 1, 0);
        var_v0 = arg0->unk3C;
    }
    arg0->unk3C = var_v0 + 1;
}
