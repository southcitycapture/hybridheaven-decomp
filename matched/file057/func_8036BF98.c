#include "context.h"

typedef struct func_8036BF98_Entry {
    u8 pad[0x1C];
} func_8036BF98_Entry;

extern func_8036BF98_Entry D_801842A0[];

typedef struct func_8036BF98_Struct {
    u8 pad[0x2D4];
    func_8036BF98_Entry *unk2D4;
    u8 pad2D8;
    u8 unk2D9;
    u8 pad2DA[2];
    u8 unk2DC;
} func_8036BF98_Struct;

s32 func_8036BF98(func_8036BF98_Struct *arg0) {
    u8 var_a0;
    s32 ret;

    var_a0 = arg0->unk2D9;
    if ((var_a0 == 0x40) && (D_8038CC61 != 0)) {
        var_a0 |= 0x80;
    }
    if ((ret = (s32)func_8035FEC8(var_a0, D_80387A40)) != 0) {
        return ret;
    }
    arg0->unk2D9 = 0x3E;
    arg0->unk2D4 = &D_801842A0[arg0->unk2D9];
    arg0->unk2DC = 0;
    return func_8036BF98(arg0);
}
