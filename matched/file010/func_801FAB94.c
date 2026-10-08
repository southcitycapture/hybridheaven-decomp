#include "context.h"

struct func_801FAB94_Inner {
    u8 pad[0x4B];
    u8 unk4B;
};

struct func_801FAB94_Struct {
    u8 pad[0x30];
    struct func_801FAB94_Inner *unk30;
};

void func_801FAB94(s32 arg0, struct func_801FAB94_Struct **arg1) {
    s16 var_v0;

    var_v0 = (*arg1)->unk30->unk4B - 0xA;
    if (var_v0 < 0x64) {
        var_v0 = 0x64;
    }
    (*arg1)->unk30->unk4B = (u8) var_v0;
}
