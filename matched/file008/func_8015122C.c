#include "context.h"

typedef struct func_8015122C_V { s32 x, y, z; } func_8015122C_V;

typedef struct func_8015122C_Struct {
    u8 pad0[0x91];
    u8 unk91;
    u8 pad1[2];
    u16 unk94;
    u8 pad2[2];
    func_8015122C_V v;
} func_8015122C_Struct;

s32 func_8015122C(func_8015122C_Struct *arg0, func_8015122C_V *volatile arg1, u16 arg2) {
    if (func_801517CC(arg0) != 0) {
        arg0->unk91 = 3;
        arg0->v = *arg1;
        arg0->unk94 = arg2;
        return 1;
    }
    return 0;
}
