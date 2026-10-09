#include "context.h"

extern void *D_801E15B8[];

struct func_801DBE94_Inner {
    u8 pad[0x75];
    u8 unk75;
};

struct func_801DBE94_Struct {
    u8 pad[0x5C];
    struct func_801DBE94_Inner *unk5C;
};

s32 func_801DBE94(struct func_801DBE94_Struct *arg0, u8 arg1) {
    struct func_801DBE94_Inner *temp_v0;
    u8 var_v1;

    arg1 &= 0xFF;
    temp_v0 = arg0->unk5C;
    if (arg1 >= 3) {
        arg1 = 0;
    }
    var_v1 = temp_v0->unk75;
    if (var_v1 >= 0xA) {
        temp_v0->unk75 = 0;
        var_v1 = temp_v0->unk75;
    }
    return ((s32 *) D_801E15B8[var_v1])[arg1];
}
