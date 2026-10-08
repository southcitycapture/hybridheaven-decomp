#include "context.h"

typedef struct func_801F55EC_Struct {
    u8 pad[0xAD];
    u8 unkAD;
} func_801F55EC_Struct;

s32 func_801F55EC(func_801F55EC_Struct *arg0) {
    s32 var_v0;

    if (func_801F5490(arg0) == 0) {
        return 1;
    }
    var_v0 = 0;
    if (arg0->unkAD == 0) {
        return 1;
    }
    return var_v0;
}
