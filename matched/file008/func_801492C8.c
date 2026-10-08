#include "context.h"

typedef struct func_801492C8_Struct {
    u8 pad[0x5C];
} func_801492C8_Struct;

extern func_801492C8_Struct D_80181DC4;

s32 func_801492C8(s32 arg0) {
    func_801492C8_Struct sp4;
    s32 *p;

    p = &arg0;
    arg0 = arg0 & 0xFF;
    sp4 = D_80181DC4;
    return ((u16 *) &sp4)[arg0];
}
