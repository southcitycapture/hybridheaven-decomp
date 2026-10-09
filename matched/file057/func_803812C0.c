#include "context.h"

struct func_803812C0_Struct2 {
    u8 pad0[0x48];
    u8 unk48;
};

struct func_803812C0_Struct1 {
    u8 pad0[0x30];
    struct func_803812C0_Struct2 *unk30;
};

struct func_803812C0_Struct0 {
    u8 pad0[0x44];
    f32 unk44;
    u8 pad1[0x94 - 0x48];
    f32 unk94;
};

void func_803812C0(struct func_803812C0_Struct0 *arg0, struct func_803812C0_Struct1 **arg1) {
    s32 var_v0;

    arg0->unk44 = (f32) (arg0->unk44 + arg0->unk94);
    var_v0 = (*arg1)->unk30->unk48 - 5;
    if (var_v0 < 0) {
        var_v0 = 0;
    }
    if (var_v0 >= 0x100) {
        var_v0 = 0xFF;
    }
    (*arg1)->unk30->unk48 = (u8) var_v0;
}
