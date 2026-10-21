#include "context.h"

struct func_80237004_Struct;

typedef struct func_80234CE8_StructInner {
    u8 pad[0x33];
    s8 unk33 : 1;
    u8 pad2[4];
    u32 unk38;
} func_80234CE8_StructInner;

s32 func_80234CE8(struct func_80237004_Struct *arg0) {
    u8 var_v1;
    func_80234CE8_StructInner *temp_v0;

    temp_v0 = *(func_80234CE8_StructInner **)((u8 *)arg0 + 0x98);
    var_v1 = 0;
    if ((temp_v0->unk38 >> 31) == 0) {
        var_v1 = 2;
    }
    if ((((u8 *)arg0)[0xA8] != 0) && !temp_v0->unk33) {
        var_v1 = (var_v1 | 1) & 0xFF;
    }
    return var_v1;
}
