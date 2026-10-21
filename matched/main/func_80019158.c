#include "context.h"

typedef struct func_80019158_Struct {
    u8 b[30];
} func_80019158_Struct;

extern func_80019158_Struct D_800441D8;

s32 func_80019158(u16 arg0, u16 arg1) {
    u16 code;
    u8 result;
    func_80019158_Struct table = D_800441D8;

    code = (arg1 == 0) ? 0 : arg0;
    result = 0;
    if (code >= 0xA3E1 && code < 0xA3FB) {
        result = table.b[code - 0xA3E1];
    }
    if (code >= 0xA3C1 && code < 0xA3DB) {
        result = table.b[code - 0xA3C1];
    }
    return result;
}
