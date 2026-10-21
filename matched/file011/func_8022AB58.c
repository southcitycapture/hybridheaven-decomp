#include "context.h"

typedef struct func_8022AB58_Struct0 {
    u8 pad[0xA3];
    u8 unkA3;
} func_8022AB58_Struct0;

typedef struct func_8022AB58_Struct1 {
    u8 pad[0x2BC];
    s16 unk2BC;
    s16 unk2BE;
    s16 unk2C0;
    s16 unk2C2;
} func_8022AB58_Struct1;

s32 func_8022AB58(func_8022AB58_Struct0 *arg0, func_8022AB58_Struct1 *arg1) {
    s32 var_v1;
    s32 result;

    var_v1 = 0;
    result = 0;
    if (arg1->unk2BC < 0) {
        var_v1 = 1;
    }
    if (arg1->unk2BE < 0) {
        var_v1 = (var_v1 | 2) & 0xFF;
    }
    if (arg1->unk2C0 < 0) {
        var_v1 = (var_v1 | 4) & 0xFF;
    }
    if (arg1->unk2C2 < 0) {
        var_v1 = (var_v1 | 8) & 0xFF;
    }
    if ((var_v1 == arg0->unkA3) || (var_v1 == 0)) {
        arg0->unkA3 = var_v1;
        return result;
    }
    arg0->unkA3 = var_v1;
    return 1;
}
