#include "context.h"

struct func_8001C6E8_Struct {
    u8 data[8];
};

extern struct func_8001C6E8_Struct D_800446A4;

u8 func_8001C6E8(u8 arg0) {
    u8 pad[4];
    struct func_8001C6E8_Struct sp4;
    u8 var_v1;

    sp4 = D_800446A4;
    if (arg0 < 8) {
        var_v1 = sp4.data[arg0];
    } else {
        var_v1 = 0;
    }
    return var_v1;
}
