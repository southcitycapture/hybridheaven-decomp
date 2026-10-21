#include "context.h"

extern u8 func_80369DEC(struct func_80369C7C_Obj1 *, s16, void *);
extern s32 func_8036A950(struct func_80369C7C_Obj1 *);

s32 func_8036AA8C(void *arg0) {
    struct func_80369C7C_Obj1 *var_a0;
    u8 *var_v1;

    if (arg0 != D_801BBBF0.unkDC) {
        var_a0 = D_801BBBF0.unkDC;
    } else {
        var_a0 = D_801BBBF0.unkEC;
    }
    if (arg0 == D_801BBBF0.unkDC) {
        var_v1 = D_801BC03C;
    } else {
        var_v1 = D_801BC3D8;
    }
    if (func_8036A950(var_a0) != 0) {
        if (var_v1[0x2D9] != func_80369DEC(var_a0, ((struct func_80369C7C_Obj1 *)arg0)->unk24->unk2C->unk12, arg0)) {
            return 0;
        }
    }
    return 1;
}
