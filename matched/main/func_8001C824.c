#include "context.h"

struct func_8001C824_Struct {
    u8 data[0x54];
};

extern struct func_8001C824_Struct D_8004474C;

u8 func_8001C824(u8 arg0) {
    u8 var_v1;
    struct func_8001C824_Struct local;

    local = D_8004474C;
    if (arg0 < 0x54) {
        var_v1 = local.data[arg0];
    } else {
        var_v1 = 0;
    }
    return var_v1;
}
