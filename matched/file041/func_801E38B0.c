#include "context.h"

struct func_801E38B0_Struct_Inner {
    u8 pad[0x22];
    u8 flag;
};

struct func_801E38B0_Struct_Outer {
    u8 pad[8];
    struct func_801E38B0_Struct_Inner *inner;
};

s32 func_801E38B0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xD0896A) != 0) {
        ((struct func_801E38B0_Struct_Outer *)D_8038D8D0)->inner->flag = 1;
        return 6;
    }
    return 5;
}
