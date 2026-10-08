#include "context.h"

typedef struct func_801F10C8_Struct_Inner2 {
    u8 pad0[0x4];
    u16 unk4;
} func_801F10C8_Struct_Inner2;

typedef struct func_801F10C8_Struct_Inner {
    u8 pad0[0x68];
    func_801F10C8_Struct_Inner2 *unk68;
} func_801F10C8_Struct_Inner;

typedef struct func_801F10C8_Struct {
    u8 pad0[0xDC];
    func_801F10C8_Struct_Inner *unkDC;
    u8 pad1[0xEF0 - 0xE0];
    u16 unkEF0;
} func_801F10C8_Struct;

extern func_801F10C8_Struct D_801BBBF0;

s32 func_801F10C8(void) {
    s32 var_a0;
    func_801F10C8_Struct_Inner2 *p;
    s32 flags;

    p = D_801BBBF0.unkDC->unk68;
    flags = D_801BBBF0.unkEF0;
    if (flags & 0x20) {
        return 1;
    }
    var_a0 = (p->unk4 & 0x4000) != 0;
    if (var_a0 != 0) {
        var_a0 = (flags & 0x880) != 0;
    }
    return var_a0 & 0xFF;
}
