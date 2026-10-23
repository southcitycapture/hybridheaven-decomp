#define func_80375634 func_80375634_ctx
#include "context.h"
#undef func_80375634

typedef struct func_80375634_StructInner {
    u8 pad[0xC];
    u16 count;
} func_80375634_StructInner;

typedef struct func_80375634_Struct {
    u8 pad[0x5C];
    func_80375634_StructInner *data;
} func_80375634_Struct;

extern u8 D_8038CCE0[];

s32 func_80375634(arg0, arg1)
    u8 *arg0;
    u8 arg1;
{
    s32 i;
    func_80375634_StructInner *inner;

    inner = ((func_80375634_Struct *)arg0)->data;
    for (i = 0, arg0 = D_8038CCE0; i < inner->count; i++) {
        if (arg1 == *arg0) {
            return i & 0xFF;
        }
        arg0++;
    }
    return 0xFF;
}
