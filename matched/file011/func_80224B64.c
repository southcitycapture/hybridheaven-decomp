#include "context.h"
extern struct func_802253B8_Struct D_801BBBF0;

struct func_80224B64_Inner {
    u8 pad0[0x9C];
    u8 unk9C;
};

struct func_80224B64_Outer {
    u8 pad0[0x5C];
    struct func_80224B64_Inner *unk5C;
};

struct func_80224B64_Globals {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xEC - 0xE0];
    s32 unkEC;
    u8 pad2[0xB98 - 0xF0];
    s16 unkB98;
};

s32 func_802243B4(s32 arg0, s16 arg1);

s32 func_80224B64(s32 arg0) {
    struct func_80224B64_Inner *var_v1;
    s16 var_v0;
    s16 arg1;

    if (arg0 != ((struct func_80224B64_Globals *) &D_801BBBF0)->unkDC) {
        var_v1 = ((struct func_80224B64_Outer *) ((struct func_80224B64_Globals *) &D_801BBBF0)->unkDC)->unk5C;
    } else {
        var_v1 = ((struct func_80224B64_Outer *) ((struct func_80224B64_Globals *) &D_801BBBF0)->unkEC)->unk5C;
    }
    if (arg0 == ((struct func_80224B64_Globals *) &D_801BBBF0)->unkDC) {
        var_v0 = 0;
    } else {
        var_v0 = 0x1000;
    }
    arg1 = (s16) (((s16) (var_v0 + ((struct func_80224B64_Globals *) &D_801BBBF0)->unkB98)) & 0x1FFF);
    if (var_v1->unk9C == 2) {
        return 0;
    }
    return func_802243B4(arg0, arg1);
}
