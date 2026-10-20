#include "context.h"

struct func_8001C7A4_Struct {
    u8 data[0x53];
};

extern struct func_8001C7A4_Struct D_800446F8;

u8 func_8001C7A4(u8 arg0) {
    struct func_8001C7A4_Struct table = D_800446F8;
    u8 result;

    if (arg0 < 0x53) {
        result = table.data[arg0];
    } else {
        result = 0;
    }
    return result;
}
