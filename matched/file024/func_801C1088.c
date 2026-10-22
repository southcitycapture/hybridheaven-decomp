#include "context.h"

typedef struct func_801C1088_StructInner {
    u8 pad[0xB];
    u8 unkB;
} func_801C1088_StructInner;

typedef struct func_801C1088_StructOuter {
    u8 pad[0x30];
    func_801C1088_StructInner *unk30;
} func_801C1088_StructOuter;

s32 func_801C1088(s32 arg0, s8 arg1) {
    s16 var_v1;
    s32 ret;

    var_v1 = ((func_801C1088_StructOuter *)arg0)->unk30->unkB;
    var_v1 += arg1;
    if (var_v1 < 0) {
        var_v1 = 0;
        ret = 1;
    } else if (var_v1 >= 0x100) {
        var_v1 = 0xFF;
        ret = 1;
    } else {
        ret = 0;
    }
    ((func_801C1088_StructOuter *)arg0)->unk30->unkB = var_v1;
    return ret;
}
