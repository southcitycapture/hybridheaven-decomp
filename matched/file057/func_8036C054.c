#include "context.h"

struct func_8036C054_Struct {
    u8 pad0[0x30];
    s32 unk30;
    u8 pad1[0x2D9 - 0x34];
    u8 unk2D9;
};

void *func_8035FEC8(u8, void *);
void func_80360394(s32, s32, s32, u8);
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 D_80387A40[];
extern u8 D_8038CC61;

void func_8036C054(s32 arg0, s32 arg1, s32 arg2) {
    struct func_8036C054_Struct *var_v1;
    u8 var_a0;
    u8 var_a3;

    if (arg1 == D_801BBCCC) {
        var_v1 = (struct func_8036C054_Struct *) D_801BC03C;
    } else {
        var_v1 = (struct func_8036C054_Struct *) D_801BC3D8;
    }
    var_a0 = var_v1->unk2D9;
    if ((var_a0 == 0x40) && (D_8038CC61 != 0)) {
        var_a0 = (var_a0 | 0x80) & 0xFF;
    }
    var_a3 = ((u8 *) func_8035FEC8(var_a0, D_80387A40))[1];
    if ((((u32) (var_v1->unk30 << 9) >> 0x1E) == 3) && ((s32) var_a3 < 4)) {
        var_a3 = (var_a3 ^ 1) & 0xFF;
    }
    func_80360394(arg0, arg1, arg2, var_a3);
}
